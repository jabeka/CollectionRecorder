#pragma once

#include <JuceHeader.h>
#include "AudioFileProcessor.h"

class AudioFileNormalizer : public AudioFileProcessor
{
public:
    AudioFileNormalizer(File file) :
        AudioFileProcessor(file, " - normalising") { }
protected :
    void processInternal() override
    {
        newSource->prepareToPlay(bufferSize, reader->sampleRate);
        newSource->setLooping(false);
        // first read once the file to get max amplitude sample
        double max = 0;
        double min = 0;
        do
        {
            newSource->getNextAudioBlock(channelInfo);
            for (size_t i = 0; i < channelInfo.buffer->getNumChannels(); i++)
            {
                for (size_t j = 0; j < channelInfo.buffer->getNumSamples(); j++)
                {
                    double sample = channelInfo.buffer->getSample(i, j);
                    max = jmax(sample, max);
                    min = jmin(sample, min);
                }
            }
        } while (newSource->getNextReadPosition() <= newSource->getTotalLength());
        // determine normalization factor
        double factor = 0.99 / jmax(max, std::abs(min));
        
        // reset play head
        newSource->setNextReadPosition(0); 

        /// now reread the file, apply gain on the temp buffer and write it to the temp file
        do
        {
            newSource->getNextAudioBlock(channelInfo);
            channelInfo.buffer->applyGain(factor);
            writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples);
            writer->flush();
        } while (newSource->getNextReadPosition() <= newSource->getTotalLength());        
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioFileNormalizer)
};