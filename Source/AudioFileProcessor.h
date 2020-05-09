#pragma once

#include <JuceHeader.h>

class AudioFileProcessor
{
public:
    AudioFileProcessor(File file, String tempExtension)
        : file(file),
        buffer(2, bufferSize),
        channelInfo(buffer),
        tempExtension(tempExtension)
    {
        formatManager.registerBasicFormats();
        channelInfo.numSamples = bufferSize;


        audioFormat = formatManager.findFormatForFileExtension(file.getFileExtension());
        // create a temp copy
        copy = File(file.getFullPathName() + tempExtension);
        copy.create();
        reader = formatManager.createReaderFor(file);
        newSource = new AudioFormatReaderSource(reader, false);
        if (reader != nullptr)
        {
            // create writer
            writer = audioFormat->createWriterFor(new FileOutputStream(copy, bufferSize), reader->sampleRate, reader->numChannels, reader->bitsPerSample, reader->metadataValues, 3);
        }
    }

    ~AudioFileProcessor() {}

    void process() {
        if (reader != nullptr)
        {
            processInternal();

            // done, free files
            delete writer;
            newSource->releaseResources();
            delete newSource;
            delete reader;

            // delete original and rename copy
            if (file.deleteFile())
            {
                copy.moveFileTo(copy.getFullPathName().replace(tempExtension, "", false));
            }
        }
    }
protected:
    const int bufferSize = 4096;
    const juce::String tempExtension;
    File file;
    AudioFormatManager formatManager;
    AudioSampleBuffer buffer;
    AudioSourceChannelInfo channelInfo;
    AudioFormat* audioFormat;
    AudioFormatReader* reader;
    AudioFormatReaderSource* newSource;
    AudioFormatWriter* writer;
    File copy;

    virtual void processInternal() = 0;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioFileProcessor)
};