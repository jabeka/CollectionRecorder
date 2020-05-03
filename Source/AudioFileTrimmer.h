#pragma once

#include <JuceHeader.h>

class AudioFileTrimer : public AudioFileProcessor
{
public:
    AudioFileTrimer(File file, float threshold) :
        AudioFileProcessor(file, " - trimming"),
        silenceThreshold(threshold)
    { }

    void processInternal () {
        newSource->prepareToPlay(bufferSize, reader->sampleRate);
        newSource->setLooping(false);

        double nbBeginingZeroSamples = 0, nbEndingZeroSamples = 0;
        bool isbeginningSilence = true, isEndingSilence = true;
        // first read once the file to know nb of samples to trim, from the begining
        do
        {
            newSource->getNextAudioBlock(channelInfo);
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
        } while (newSource->getNextReadPosition() <= newSource->getTotalLength()); // should never reach
    endLoop1:

            // reset play head pos
        newSource->setNextReadPosition(newSource->getTotalLength() - bufferSize);

        // read once the file backwards to samples to trim from the end
        do
        {
            newSource->getNextAudioBlock(channelInfo);
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
            newSource->setNextReadPosition(newSource->getNextReadPosition() - (2 * bufferSize));
        } while (newSource->getNextReadPosition() >= 0); // backwards
    endLoop2:

        // let at least one sample to 0
        nbBeginingZeroSamples = nbBeginingZeroSamples > 1 ? nbBeginingZeroSamples - 1 : 0;
        nbEndingZeroSamples = nbEndingZeroSamples > 1 ? nbEndingZeroSamples - 1 : 0;

        // reset play head
        newSource->setNextReadPosition(nbBeginingZeroSamples );

        /// now reread the file and write it to the temp file, but start and stop before/after the silencess
        do
        {
            newSource->getNextAudioBlock(channelInfo);
            writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples);
            writer->flush();
        } while (newSource->getNextReadPosition() <= newSource->getTotalLength() - nbEndingZeroSamples);
        
    }
private:
    float silenceThreshold;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioFileTrimer)
};