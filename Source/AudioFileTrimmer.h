#pragma once

#include <JuceHeader.h>

class AudioFileTrimer
{
public:
    AudioFileTrimer(File file, float silenceThreshold)
        : file(file),
        buffer(2, bufferSize),
        channelInfo(buffer),
        silenceThreshold(silenceThreshold),
        tempExtension(" - trimming")
    {
        formatManager.registerBasicFormats();
        channelInfo.numSamples = bufferSize;
    }

    ~AudioFileTrimer() {}

    void trim() {
        auto reader = formatManager.createReaderFor(file);
        if (reader != nullptr)
        {
            // create reader
            std::unique_ptr<AudioFormatReaderSource> newSource(new AudioFormatReaderSource(reader, true));
            newSource.get()->prepareToPlay(bufferSize, reader->sampleRate);
            newSource.get()->setLooping(false);

            double nbBeginingZeroSamples = 0, nbEndingZeroSamples = 0;
            bool isbeginningSilence = true, isEndingSilence = true;
            // first read once the file to know nb of samples to trim, from the begining
            do
            {
                newSource.get()->getNextAudioBlock(channelInfo);
                for (int j = channelInfo.buffer->getNumSamples() - 1; j >= 0; --j) // backwards
                {
                    float max = 0;
                    for (size_t i = 0; i < channelInfo.buffer->getNumChannels(); ++i)
                    {
                        // max of the channels
                        max = jmax(max, std::abs(channelInfo.buffer->getSample(i, j)));
                    }
                    // count the nb of silence sample at the beginning of the file
                    if (std::abs(max) < silenceThreshold)
                    {
                        ++nbBeginingZeroSamples;
                    }
                    else
                    {
                        goto endLoop1;
                    }
                }
            } while (newSource.get()->getNextReadPosition() <= newSource.get()->getTotalLength()); // should never reach
        endLoop1:

            // reset play head pos
            newSource.get()->setNextReadPosition(newSource.get()->getTotalLength() - bufferSize);

            // read once the file backwards to samples to trim from the end
            do
            {
                newSource.get()->getNextAudioBlock(channelInfo);
                for (int j = channelInfo.buffer->getNumSamples() - 1; j >= 0; --j) // backwards
                {
                    float max = 0;
                    for (size_t i = 0; i < channelInfo.buffer->getNumChannels(); ++i)
                    {
                        // max of the channels
                        max = jmax(max, std::abs(channelInfo.buffer->getSample(i, j)));
                    }
                    // count the nb of silence sample at the beginning of the file
                    if (max < silenceThreshold)
                    {
                        ++nbEndingZeroSamples;
                    }
                    else
                    {
                        goto endLoop2;
                    }
                }
                // reset play head pos
                newSource.get()->setNextReadPosition(newSource.get()->getNextReadPosition() - (2 * bufferSize));
            } while (newSource.get()->getNextReadPosition() >= 0); // backwards
        endLoop2:

            // create a temp copy
            File copy = File(file.getFullPathName() + tempExtension);
            copy.create();

            // create writer
            AudioFormat* audioFormat = formatManager.findFormatForFileExtension(file.getFileExtension());
            auto writer = audioFormat->createWriterFor(new FileOutputStream(copy, bufferSize), reader->sampleRate, reader->numChannels, reader->bitsPerSample, reader->metadataValues, 3);

            // let at least one sample to 0
            nbBeginingZeroSamples = nbBeginingZeroSamples > 1 ? nbBeginingZeroSamples - 1 : 0;
            nbEndingZeroSamples = nbEndingZeroSamples > 1 ? nbEndingZeroSamples - 1 : 0;

            // reset play head
            newSource.get()->setNextReadPosition(nbBeginingZeroSamples );

            /// now reread the file and write it to the temp file, but start and stop before/after the silencess
            do
            {
                newSource.get()->getNextAudioBlock(channelInfo);
                writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples);
                writer->flush();
            } while (newSource.get()->getNextReadPosition() <= newSource.get()->getTotalLength() - nbEndingZeroSamples);

            // done, free files
            delete writer;
            newSource->releaseResources();

            // delete original and rename copy
            if (file.deleteFile())
            {
                copy.moveFileTo(copy.getFullPathName().replace(tempExtension, "", false));
            }
        }
    }
private:
    const int bufferSize = 4096;
    const juce::String tempExtension;
    float silenceThreshold;
    File file;
    AudioFormatManager formatManager;// <[9]
    AudioSampleBuffer buffer;
    AudioSourceChannelInfo channelInfo;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioFileTrimer)
};