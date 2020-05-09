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

        int nbBeginingZeroSamples = 0, nbEndingZeroSamples = 0;
        int samplesTreated = 0;
        // first read once the file to know nb of samples to trim, from the begining
        do
        {
            channelInfo.numSamples = (samplesTreated + bufferSize) > (int)newSource->getTotalLength() ?
                (int)newSource->getTotalLength() - samplesTreated :
                bufferSize;
            newSource->getNextAudioBlock(channelInfo);

            for (int j = 0; j < channelInfo.numSamples; ++j) 
            {
                float max = 0;
                for (int i = 0; i < channelInfo.buffer->getNumChannels(); ++i)
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
            samplesTreated += channelInfo.numSamples;
        } while (samplesTreated < (int)newSource->getTotalLength());
    endLoop1:
        // read once the file backwards to samples to trim from the end
        samplesTreated = 0;
        do
        {
            channelInfo.numSamples = (samplesTreated + bufferSize) > (int)newSource->getTotalLength() ?
                (int)newSource->getTotalLength() - samplesTreated :
                bufferSize;
            newSource->setNextReadPosition(newSource->getTotalLength() - (samplesTreated + channelInfo.numSamples));
            newSource->getNextAudioBlock(channelInfo);
            for (int j = channelInfo.buffer->getNumSamples() - 1; j >= 0; --j) // backwards
            {
                float max = 0;
                for (int i = 0; i < channelInfo.buffer->getNumChannels(); ++i)
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
            samplesTreated += channelInfo.numSamples;
        } while (samplesTreated < newSource->getTotalLength());
    endLoop2:

        // let at least one sample to 0
        nbBeginingZeroSamples = nbBeginingZeroSamples > 1 ? nbBeginingZeroSamples - 1 : 0;
        nbEndingZeroSamples = nbEndingZeroSamples > 1 ? nbEndingZeroSamples - 1 : 0;

        // reset play head
        newSource->setNextReadPosition(nbBeginingZeroSamples);
        samplesTreated = 0;
        int finalFileSize = (int)newSource->getTotalLength() - (nbBeginingZeroSamples + nbEndingZeroSamples);
        /// now reread the file and write it to the temp file, but start and stop before/after the silencess
        do
        {
            channelInfo.numSamples = (samplesTreated + bufferSize) > finalFileSize ?
                finalFileSize - samplesTreated :
                bufferSize;
            newSource->getNextAudioBlock(channelInfo);
            if (writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples)) {
                samplesTreated += channelInfo.numSamples;
                writer->flush();
            }
            else { // should never happen
                break;
            }
        } while (samplesTreated < finalFileSize);
        
    }
private:
    float silenceThreshold;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioFileTrimer)
};