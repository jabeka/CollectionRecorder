//==============================================================================
/** A simple class that acts as an AudioIODeviceCallback and writes the
    incoming audio data to a WAV file.
*/
#pragma once

#include <JuceHeader.h>
#include "AudioFileNormalizer.h"
#include "AudioFileTrimmer.h"

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

    AudioRecorder(AudioThumbnail& thumbnailToUpdate)
        : thumbnail(thumbnailToUpdate)
    {
        backgroundThread.startThread();
    }

    ~AudioRecorder() override
    {
        stop();
        if (isSilence)
        {
            currentFile.deleteFile();
        }
        else
        {
            applyPostRecordTreatment(currentFile);
        }
    }

    void initialize(String folder, AudioRecorder::SupportedAudioFormat format, float rmsThreshold, float silenceLength)
    {
        currentFolder = folder;
        selectedFormat = format;
        this->RMSThreshold = rmsThreshold;
        this->silenceLength = silenceLength;
    }

    //==============================================================================
    void startRecording()
    {
        stop();
        if (shouldRestart) // it means we've ended a file , should do postrecord treatment
        {
            applyPostRecordTreatment(currentFile);
        }
        currentFile = getNextFile();
        currentFileNumber++;

        if (sampleRate > 0)
        {
            // Create an OutputStream to write to our destination file...
            currentFile.deleteFile();

            if (auto fileStream = std::unique_ptr<FileOutputStream>(currentFile.createOutputStream()))
            {

                AudioFormat* audioFormat;
                switch (selectedFormat)
                {
                default:
                case AudioRecorder::flac:
                    audioFormat = new FlacAudioFormat();
                    break;
                case AudioRecorder::mp3:
                    audioFormat = new LAMEEncoderAudioFormat(File("")); // currently not supported
                    break;
                case AudioRecorder::wav:
                    audioFormat = new WavAudioFormat();
                    break;
                }

                auto options = audioFormat->getQualityOptions();

                if (auto writer = audioFormat->createWriterFor(fileStream.get(), sampleRate, 2, 16, {}, 3))
                {
                    fileStream.release(); // (passes responsibility for deleting the stream to the writer object that is now using it)

                    // Now we'll create one of these helper objects which will act as a FIFO buffer, and will
                    // write the data to disk on our background thread.
                    threadedWriter.reset(new AudioFormatWriter::ThreadedWriter(writer, backgroundThread, 32768));

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

    void mute(bool muted)
    {
        this->muted = muted;
    }

    //==============================================================================
    void audioDeviceAboutToStart(AudioIODevice* device) override
    {
        sampleRate = device->getCurrentSampleRate();
    }

    void audioDeviceStopped() override
    {
        sampleRate = 0;
    }

    void audioDeviceIOCallback(const float** inputChannelData, int numInputChannels,
        float** outputChannelData, int numOutputChannels,
        int numSamples) override
    {
        const ScopedLock sl(writerLock);
        silenceThreshold = (sampleRate / numSamples) * silenceLength;

        // Create an AudioBuffer to wrap our incoming data, note that this does no allocations or copies, it simply references our input data
        AudioBuffer<float> buffer(const_cast<float**> (inputChannelData), numInputChannels, numSamples);
        computeRMSLevel(buffer, numInputChannels, numSamples);

        if (activeWriter.load() != nullptr)
        {
            if (isSilence && RMSAaverageLevel > RMSThreshold)
            {
                isSilence = false;
            }

            if (!isSilence)
            {
                activeWriter.load()->write(inputChannelData, numSamples);
                detectSilence(buffer, numInputChannels, numSamples);
                // clip detection
                for (int i = 0; i < numInputChannels; ++i)
                {
                    for (int j = 0; j < numSamples; ++j)
                    {
                        if (inputChannelData[i][j] > 0.99)
                        {
                            clip = true;
                            startTimer(200);
                            goto endLoop;
                        }
                    }
                }
            }
        }

    endLoop:
        // handle display
        if (!isSilence && numInputChannels >= thumbnail.getNumChannels())
        {
            thumbnail.addBlock(nextSampleNum, buffer, 0, numSamples);
            nextSampleNum += numSamples;
        }

        if (numInputChannels == numOutputChannels && !muted)
        {
            for (int i = 0; i < numOutputChannels; ++i)
                for (size_t j = 0; j < numSamples; j++)
                    outputChannelData[i][j] = inputChannelData[i][j];
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
            currentFileNumber--;
            startRecording();
        }
    }


    std::atomic<bool> shouldRestart = false;
    std::atomic<bool> clip = false;

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

        if (currentFileNumber == 0)
        {
            File file;
            do {
                currentFileNumber++; // begin at 1
                file = File(documentsDir.getFullPathName() + File::getSeparatorChar() + String::String("Tune ") + String::String(currentFileNumber) + String::String(extension));
            } while (file.exists());
        }

        return documentsDir.getNonexistentChildFile(String::String("Tune ") + String::String(currentFileNumber), extension, false);
    }

    void computeRMSLevel(const AudioBuffer<float>& buffer, int numInputChannels, int numSamples)
    {
        RMSAaverageLevel = 0;
        for (size_t i = 0; i < numInputChannels; i++)
        {
            RMSAaverageLevel += buffer.getRMSLevel(i, 0, numSamples);
        }
        RMSAaverageLevel /= numInputChannels;
    }

    void detectSilence(const AudioBuffer<float>& buffer, int numInputChannels, int numSamples)
    {
        if (RMSAaverageLevel < RMSThreshold)
        {
            silenceCount++;
        }
        else
        {
            silenceCount = 0;
        }

        if (silenceCount > silenceThreshold) {
            silenceCount = 0;
            // restart
            isSilence = true;
            shouldRestart = true;
        }
    }

    void applyPostRecordTreatment(File fileToApply)
    {
        AudioFileNormalizer normalizer(fileToApply);
        AudioFileTrimer trimer(fileToApply, RMSThreshold);

        normalizer.normalize();
        trimer.trim();
    }

    String currentFolder;
    File currentFile;
    SupportedAudioFormat selectedFormat;
    AudioThumbnail& thumbnail;
    TimeSliceThread backgroundThread{ "Audio Recorder Thread" }; // the thread that will write our audio data to disk
    std::unique_ptr<AudioFormatWriter::ThreadedWriter> threadedWriter; // the FIFO used to buffer the incoming data
    double sampleRate = 0.0;
    int64 nextSampleNum = 0;

    CriticalSection writerLock;
    std::atomic<AudioFormatWriter::ThreadedWriter*> activeWriter{ nullptr };
    std::atomic<bool> muted = false;
    std::atomic<float> RMSThreshold;
    std::atomic<float> silenceLength;
    float RMSAaverageLevel = 0;
    int silenceCount = 0;
    int silenceThreshold = 10000;
    bool isSilence = true;
    int currentFileNumber = 0;
};
