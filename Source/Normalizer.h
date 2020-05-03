#pragma once

#include <JuceHeader.h>

class Normalizer
{
public:
	Normalizer()
        : file("D:\\Documents\\CollectionRecorder\\gloubi.flac"),
          buffer(2, 4096),
          channelInfo(buffer)
	{
        formatManager.registerBasicFormats();
        channelInfo.numSamples = 4096;
	}

	~Normalizer() {}

    void normalize() {
        auto reader = formatManager.createReaderFor(file);
        if (reader != nullptr)
        {
            std::unique_ptr<AudioFormatReaderSource> newSource(new AudioFormatReaderSource(reader, true)); // [11]
            newSource.get()->prepareToPlay(4096, reader->sampleRate);
            newSource.get()->setLooping(false);

            double max = 0;
            double min = 0;
            do
            {
                newSource.get()->getNextAudioBlock(channelInfo);
                for (size_t i = 0; i < channelInfo.buffer->getNumChannels(); i++)
                {
                    for (size_t j = 0; j < channelInfo.buffer->getNumSamples(); j++)
                    {
                        double sample = channelInfo.buffer->getSample(i, j);
                        max = jmax(sample, max);
                        min = jmin(sample, min);
                    }
                }
            } while (newSource.get()->getNextReadPosition() <= newSource.get()->getTotalLength());
            /////
            double factor = 0.99 / jmax(max, std::abs(min));

            File copy = File(file.getFullPathName() + " - normalising");
            copy.create();

            AudioFormat* audioFormat = formatManager.findFormatForFileExtension(file.getFileExtension());            
            auto writer = audioFormat->createWriterFor(new FileOutputStream(copy, 4096), reader->sampleRate, reader->numChannels, reader->bitsPerSample, reader->metadataValues, 3);
            newSource.get()->setNextReadPosition(0);

            /// now write
            newSource.get()->prepareToPlay(4096, reader->sampleRate);
            newSource.get()->setLooping(false);
            do
            {
                newSource.get()->getNextAudioBlock(channelInfo);
                channelInfo.buffer->applyGain(factor);
                writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples);
                writer->flush();
            } while (newSource.get()->getNextReadPosition() <= newSource.get()->getTotalLength());

            delete writer;

            // delete original and rename copy
            newSource->releaseResources();
            if (file.deleteFile()) 
            {
                copy.moveFileTo(copy.getFullPathName().replace(" - normalising", "", false));
            }
        }
    }
private:
    File file;
    AudioFormatManager formatManager;// <[9]
    AudioSampleBuffer buffer;
    AudioSourceChannelInfo channelInfo;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Normalizer)
};