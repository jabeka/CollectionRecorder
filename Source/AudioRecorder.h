#pragma once

#include <atomic>
#include <JuceHeader.h>
#include "AudioFileNormalizer.h"
#include "AudioFileTrimmer.h"
#include "CircularBuffer.h"
#include "PostRecordJob.h"

class AudioRecorder
    : public AudioIODeviceCallback,
      public Timer
{
public:
    enum SupportedAudioFormat
    {
        wav = 0,
        flac,
        mp3
    };

    AudioRecorder(AudioThumbnail &thumbnailToUpdate)
        : thumbnail(thumbnailToUpdate)
    {
        backgroundThread.startThread();
        formatManager.registerBasicFormats();
    }

    ~AudioRecorder() override
    {
        stop();
        applyPostRecordTreatment();

        delete memoryBuffer;
    }

    void initialize(String folder,
                    AudioRecorder::SupportedAudioFormat format,
                    float rmsThres,
                    float silenceLen,
                    bool normalize,
                    bool trim,
                    bool removeChunks,
                    int chunkMaxSize)
    {
        currentFolder = folder;
        selectedFormat = format;
        RMSThreshold = rmsThres;
        silenceLength = silenceLen;
        this->normalize = normalize;
        this->trim = trim;
        this->removeChunks = removeChunks;
        this->chunkMaxSize = chunkMaxSize;
    }

    AudioFormat *getAudioFormat()
    {
        switch (selectedFormat)
        {
        default:
        case AudioRecorder::flac:
            return new FlacAudioFormat();
            break;
        /*   case AudioRecorder::mp3:
                    return new LAMEEncoderAudioFormat(File("")); // currently not supported
                    break;
               */
        case AudioRecorder::wav:
            return new WavAudioFormat();
            break;
        }
        return nullptr;
    }

    void GetSupportedBitDepth(AudioFormat *audioFormat)
    {
        if (!audioFormat->getPossibleBitDepths().contains(bitDepth))
        {
            switch (bitDepth)
            {
            case 32:
            case 24:
                if (audioFormat->getPossibleBitDepths().contains(24))
                {
                    bitDepth = 24;
                    break;
                }
            case 16:
            default:
                bitDepth = 16;
                break;
            }
        }
    }

    //==============================================================================
    void startRecording()
    {
        stop();
        if (shouldRestart) // it means we've ended a file , should do post-record treatment
        {
            applyPostRecordTreatment();
        }
        currentFile = getNextFile();
        //currentFileNumber++;

        if (sampleRate > 0)
        {
            // Create an OutputStream to write to our destination file...
            if (auto fileStream = std::unique_ptr<FileOutputStream>(currentFile.createOutputStream()))
            {
                AudioFormat *audioFormat = getAudioFormat();

                GetSupportedBitDepth(audioFormat);

                if (auto writer = audioFormat->createWriterFor(fileStream.get(), sampleRate, 2, bitDepth, {}, 3))
                {
                    fileStream.release(); // (passes responsibility for deleting the stream to the writer object that is now using it)

                    // Now we'll create one of these helper objects which will act as a FIFO buffer, and will
                    // write the data to disk on our background thread.
                    threadedWriter.reset(new AudioFormatWriter::ThreadedWriter(writer, backgroundThread, silenceTimeThreshold + 1)); // silenceTimeThreshold to be able to write all the memory buffer once

                    // Reset our recording thumbnail
                    thumbnail.reset(writer->getNumChannels(), writer->getSampleRate());
                    nextSampleNum = 0;

                    // And now, swap over our active writer pointer so that the audio callback will start using it..
                    const ScopedLock sl(writerLock);
                    activeWriter = threadedWriter.get();
                }
                delete audioFormat;
            }
        }
    }

    void stop()
    {
        // First, clear this pointer to stop the audio callback from using our writer object..
        {
            const ScopedLock sl(writerLock);
            activeWriter = nullptr;
        }

        // Now we can delete the writer object. It's done in this order because the deletion could
        // take a little time while remaining data gets flushed to disk, so it's best to avoid blocking
        // the audio callback while this happens.
        threadedWriter.reset();
    }

    void mute(bool isMuted)
    {
        muted = isMuted;
    }

    //==============================================================================
    void audioDeviceAboutToStart(AudioIODevice *device) override
    {
        sampleRate = (int)device->getCurrentSampleRate();
        silenceTimeThreshold = (int)(sampleRate * silenceLength);
        bitDepth = device->getCurrentBitDepth();
        memoryBuffer = new CircularBuffer<float>(2, silenceTimeThreshold);
        tempBuffer = AudioBuffer<float>(memoryBuffer->getNumChannels(), memoryBuffer->getSize());
    }

    void audioDeviceStopped() override
    {
        sampleRate = 0;
        bitDepth = 0;
    }

    void audioDeviceIOCallback(const float **inputChannelData, int numInputChannels,
                               float **outputChannelData, int numOutputChannels,
                               int numSamples) override
    {
        const ScopedLock sl(writerLock);

        // Create an AudioBuffer to wrap our incoming data, note that this does no allocations or copies, it simply references our input data
        AudioBuffer<float> buffer(const_cast<float **>(inputChannelData), numInputChannels, numSamples);

        if (activeWriter.load() != nullptr)
        {
            handleLevel(buffer);
            if (shouldWriteMemory)
            {
                writeMemoryIntoFile();
            }

            if (!isSilence)
            {
                if (!shouldWriteMemory)
                {
                    activeWriter.load()->write(inputChannelData, numSamples);
                }
                else
                {
                    shouldWriteMemory = false; // already copied with the rest of the circular buffer
                }

                // clip detection
                if (buffer.getMagnitude(0, numSamples) > 0.99)
                {
                    clip = true;
                    startTimer(200);
                }
            }
        }

        // handle display
        if (numInputChannels >= thumbnail.getNumChannels())
        {
            thumbnail.addBlock(nextSampleNum, buffer, 0, numSamples);
            nextSampleNum += numSamples;
        }

        if (numInputChannels == numOutputChannels && !muted)
        {
            // not muted, send input to output
            for (int i = 0; i < numOutputChannels; ++i)
                FloatVectorOperations::copy(outputChannelData[i], inputChannelData[i], numSamples);
        }
        else
        {
            // We need to clear the output buffers, in case they're full of junk..
            for (int i = 0; i < numOutputChannels; ++i)
                if (outputChannelData[i] != nullptr)
                    FloatVectorOperations::clear(outputChannelData[i], numSamples);
        }
    }

    void timerCallback() override
    {
        clip = false;
        stopTimer();
    }

    File getCurrentFolder()
    {
        return currentFolder;
    }

    void setCurrentFolder(File folder)
    {
        currentFolder = folder.getFullPathName();
        reCreateFileIfSilence();
    }

    void setCurrentFormat(AudioRecorder::SupportedAudioFormat format)
    {
        selectedFormat = format;
        reCreateFileIfSilence();
    }

    void reCreateFileIfSilence()
    {
        if (isSilence)
        {
            stop();
            currentFile.deleteFile();
            //  currentFileNumber--;
            startRecording();
        }
    }

    std::atomic_bool shouldRestart{false};
    std::atomic_bool clip{false};

private:
    File getNextFile()
    {
        auto documentsDir = File(currentFolder);
        documentsDir.createDirectory(); // if not exists
        String extension = "";
        switch (selectedFormat)
        {
        case AudioRecorder::wav:
            extension = ".wav";
            break;
        case AudioRecorder::flac:
            extension = ".flac";
            break;
        case AudioRecorder::mp3:
            extension = ".mp3";
            break;
        default:
            break;
        }

        currentFileNumber = 0;
        //if (currentFileNumber == 0)
        {
            File file;
            do
            {
                currentFileNumber++; // begin at 1
                file = File(documentsDir.getFullPathName() + File::getSeparatorChar() + String("Tune ") + String(currentFileNumber) + String(extension));
            } while (file.exists());
        }

        return documentsDir.getNonexistentChildFile(String("Tune ") + String(currentFileNumber), extension, false);
    }
    void handleLevel(const AudioBuffer<float> &buffer)
    {
        memoryBuffer->push(buffer);
        if (memoryBuffer->isBufferFull())
        {
            float rmsLevel = memoryBuffer->getRMSLevel();
            if (!isSilence && rmsLevel < RMSThreshold)
            {
                // restart
                isSilence = true;
                shouldRestart = true;
            }
            else if (isSilence && rmsLevel > RMSThreshold)
            {
                isSilence = false;
                shouldWriteMemory = true;
            }
        }
    }

    void applyPostRecordTreatment()
    {
        postRecordFile = currentFile;
        if (postRecordFile.existsAsFile())
        {
            PostRecordJob *job =
                new PostRecordJob(
                    postRecordFile,
                    normalize,
                    trim,
                    removeChunks,
                    &formatManager,
                    RMSThreshold,
                    chunkMaxSize);
            pool.addJob((ThreadPoolJob *)job, true);
        }
    }

    void writeMemoryIntoFile()
    {
        // take back, write the buffer history
        //activeWriter.load()->write(memoryBuffer);
        for (int i = 0; i < memoryBuffer->getNumChannels(); i++)
        {
            // first from origin to the end
            tempBuffer.copyFrom(i, 0, memoryBuffer->getRaw(), i, memoryBuffer->getOrigin(), memoryBuffer->getSize() - memoryBuffer->getOrigin());
            // then from 0 to origin
            tempBuffer.copyFrom(i, memoryBuffer->getSize() - memoryBuffer->getOrigin(), memoryBuffer->getRaw(), i, 0, memoryBuffer->getOrigin());
        }

        activeWriter.load()->write(tempBuffer.getArrayOfReadPointers(), memoryBuffer->getSize());
    }

    String currentFolder;
    File currentFile;
    File postRecordFile;
    SupportedAudioFormat selectedFormat;
    AudioThumbnail &thumbnail;
    TimeSliceThread backgroundThread{"Audio Recorder Thread"};         // the thread that will write our audio data to disk
    std::unique_ptr<AudioFormatWriter::ThreadedWriter> threadedWriter; // the FIFO used to buffer the incoming data
    int sampleRate = 0;
    int bitDepth = 0;
    int64 nextSampleNum = 0;

    CriticalSection writerLock;
    std::atomic<AudioFormatWriter::ThreadedWriter *> activeWriter{nullptr};
    std::atomic<bool> muted{true};
    std::atomic<float> RMSThreshold;
    std::atomic<bool> shouldWriteMemory{false};
    CircularBuffer<float> *memoryBuffer;
    AudioBuffer<float> tempBuffer;

    float silenceLength;
    int silenceTimeThreshold = 10000;
    bool isSilence = true;
    int currentFileNumber = 0;

    bool normalize;
    bool trim;
    bool removeChunks;
    int chunkMaxSize;
    AudioFormatManager formatManager;
    ThreadPool pool;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioRecorder);
};
