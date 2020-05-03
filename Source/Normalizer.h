#pragma once

#include <JuceHeader.h>

class Normalizer
{
public:
	Normalizer(File file)
        : file(file),
          buffer(2, bufferSize),
          channelInfo(buffer)
	{
        formatManager.registerBasicFormats();
        channelInfo.numSamples = bufferSize;
	}

	~Normalizer() {}

    void normalize() {
        auto reader = formatManager.createReaderFor(file);
        if (reader != nullptr)
        {
            // create reader
            std::unique_ptr<AudioFormatReaderSource> newSource(new AudioFormatReaderSource(reader, true));
            newSource.get()->prepareToPlay(bufferSize, reader->sampleRate);
            newSource.get()->setLooping(false);

            // first read once the file to get max amplitude sample
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
            // determine normalization factor
            double factor = 0.99 / jmax(max, std::abs(min));

            // create a temp copy
            File copy = File(file.getFullPathName() + " - normalising");
            copy.create();

            // create writer
            AudioFormat* audioFormat = formatManager.findFormatForFileExtension(file.getFileExtension());            
            auto writer = audioFormat->createWriterFor(new FileOutputStream(copy, bufferSize), reader->sampleRate, reader->numChannels, reader->bitsPerSample, reader->metadataValues, 3);
            

            // reset play head
            newSource.get()->setNextReadPosition(0); 

            /// now reread the file, apply gain on the temp buffer and write it to the temp file
            do
            {
                newSource.get()->getNextAudioBlock(channelInfo);
                channelInfo.buffer->applyGain(factor);
                writer->writeFromAudioSampleBuffer(*channelInfo.buffer, channelInfo.startSample, channelInfo.numSamples);
                writer->flush();
            } while (newSource.get()->getNextReadPosition() <= newSource.get()->getTotalLength());

            // done, free files
            delete writer;
            newSource->releaseResources();

            // delete original and rename copy
            if (file.deleteFile()) 
            {
                copy.moveFileTo(copy.getFullPathName().replace(" - normalising", "", false));
            }
        }
    }
private:
    const int bufferSize = 4906;
    File file;
    AudioFormatManager formatManager;// <[9]
    AudioSampleBuffer buffer;
    AudioSourceChannelInfo channelInfo;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Normalizer)
};