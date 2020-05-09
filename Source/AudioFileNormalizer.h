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
        float max = 0;
        int samplesTreated = 0;
        do
        {
            channelInfo.numSamples = ((int64)samplesTreated + bufferSize) > newSource->getTotalLength() ?
                newSource->getTotalLength() - samplesTreated :
                bufferSize;

            newSource->getNextAudioBlock(channelInfo);
            // get the magnitude of the buffer and compare to the max we have
            max = jmax(channelInfo.buffer->getMagnitude(0, channelInfo.numSamples), max);
            samplesTreated += channelInfo.numSamples;
        } while (samplesTreated < newSource->getTotalLength());

        // determine normalization factor
        double factor = 0.99f / max;
        
        // reset play head
        newSource->setNextReadPosition(0);
        samplesTreated = 0;

        /// now reread the file, apply gain on the temp buffer and write it to the temp file
        do
        {
            channelInfo.numSamples = ((int64)samplesTreated + bufferSize) > newSource->getTotalLength() ?
                newSource->getTotalLength() - samplesTreated :
                bufferSize;
            newSource->getNextAudioBlock(channelInfo);
            channelInfo.buffer->applyGain(0, channelInfo.numSamples, factor);
            if (writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples)) {
                samplesTreated += channelInfo.numSamples;
                writer->flush();
            }
            else { // should never happen
                break;
            }
        } while (samplesTreated < newSource->getTotalLength());
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioFileNormalizer)
};