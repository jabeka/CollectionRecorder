/*
  ==============================================================================

   This file is part of the JUCE examples.
   Copyright (c) 2017 - ROLI Ltd.

   The code included in this file is provided under the terms of the ISC license
   http://www.isc.org/downloads/software-support-policy/isc-license. Permission
   To use, copy, modify, and/or distribute this software for any purpose with or
   without fee is hereby granted provided that the above copyright notice and
   this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES,
   WHETHER EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR
   PURPOSE, ARE DISCLAIMED.

  ==============================================================================
*/

/*******************************************************************************
 The block below describes the properties of this PIP. A PIP is a short snippet
 of code that can be read by the Projucer and used to generate a JUCE project.

 BEGIN_JUCE_PIP_METADATA

 name:             AudioRecordingDemo
 version:          1.0.0
 vendor:           JUCE
 website:          http://juce.com
 description:      Records audio to a file.

 dependencies:     juce_audio_basics, juce_audio_devices, juce_audio_formats,
                   juce_audio_processors, juce_audio_utils, juce_core,
                   juce_data_structures, juce_events, juce_graphics,
                   juce_gui_basics, juce_gui_extra
 exporters:        xcode_mac, vs2019, linux_make, androidstudio, xcode_iphone

 moduleFlags:      JUCE_STRICT_REFCOUNTEDPOINTER=1

 type:             Component
 mainClass:        AudioRecordingDemo

 useLocalCopy:     1

 END_JUCE_PIP_METADATA

*******************************************************************************/

#define JUCE_USE_MP3AUDIOFORMAT 

#pragma once

#include "DemoUtilities.h"
#include "AudioLiveScrollingDisplay.h"

//==============================================================================
/** A simple class that acts as an AudioIODeviceCallback and writes the
    incoming audio data to a WAV file.
*/
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

    AudioRecorder (AudioThumbnail& thumbnailToUpdate)
        : thumbnail (thumbnailToUpdate)
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
    }

    void initialize(String folder, AudioRecorder::SupportedAudioFormat format, float rmsThreshold, float silenceLength)
    {
        currentFolder = folder;
        selectedFormat = format;
        this->RMSThreshold = rmsThreshold;
        this->silenceLength = silenceLength;
    }

    //==============================================================================
    void startRecording () 
    {
        stop();
        currentFile = getNextFile();

        if (sampleRate > 0)
        {
            // Create an OutputStream to write to our destination file...
            currentFile.deleteFile();

            if (auto fileStream = std::unique_ptr<FileOutputStream> (currentFile.createOutputStream()))
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
                if (auto writer = audioFormat->createWriterFor (fileStream.get(), sampleRate, 2, 16, {}, 0))
                {
                    fileStream.release(); // (passes responsibility for deleting the stream to the writer object that is now using it)

                    // Now we'll create one of these helper objects which will act as a FIFO buffer, and will
                    // write the data to disk on our background thread.
                    threadedWriter.reset (new AudioFormatWriter::ThreadedWriter (writer, backgroundThread, 32768));

                    // Reset our recording thumbnail
                    thumbnail.reset (writer->getNumChannels(), writer->getSampleRate());
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
            const ScopedLock sl (writerLock);
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
    void audioDeviceAboutToStart (AudioIODevice* device) override
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
        if (numInputChannels >= thumbnail.getNumChannels())
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

    void updateCurrenFolder (File folder)
    {
        currentFolder = folder.getFullPathName();
    }

    std::atomic<bool> shouldRestart = false;
    std::atomic<bool> clip = false;

private:

    File getNextFile()
    {
        // @todo settings
        auto documentsDir = File(currentFolder);
        documentsDir.createDirectory();
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
        return documentsDir.getNonexistentChildFile("Tune", extension);
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

    String currentFolder;
    File currentFile;
    SupportedAudioFormat selectedFormat;
    AudioThumbnail& thumbnail;
    TimeSliceThread backgroundThread { "Audio Recorder Thread" }; // the thread that will write our audio data to disk
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
};

//==============================================================================
class RecordingThumbnail  : public Component,
                            private ChangeListener
{
public:
    RecordingThumbnail()
    {
        formatManager.registerBasicFormats();
        thumbnail.addChangeListener (this);
    }

    ~RecordingThumbnail() override
    {
        thumbnail.removeChangeListener (this);
    }

    AudioThumbnail& getAudioThumbnail()     { return thumbnail; }

    void setDisplayFullThumbnail (bool displayFull)
    {
        displayFullThumb = displayFull;
        repaint();
    }

    void paint (Graphics& g) override
    {
        g.fillAll (Colours::darkgrey);
        g.setColour (Colours::lightgrey);

        if (thumbnail.getTotalLength() > 0.0)
        {
            auto endTime = displayFullThumb ? thumbnail.getTotalLength()
                                            : jmax (30.0, thumbnail.getTotalLength());

            auto thumbArea = getLocalBounds();
            thumbnail.drawChannels (g, thumbArea.reduced (2), 0.0, endTime, 1.0f);
        }
        else
        {
            g.setFont (14.0f);
            g.drawFittedText ("(No file recorded)", getLocalBounds(), Justification::centred, 2);
        }
    }

private:
    AudioFormatManager formatManager;
    AudioThumbnailCache thumbnailCache  { 10 };
    AudioThumbnail thumbnail            { 512, formatManager, thumbnailCache };

    bool displayFullThumb = false;

    void changeListenerCallback (ChangeBroadcaster* source) override
    {
        if (source == &thumbnail)
            repaint();
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RecordingThumbnail)
};

//==============================================================================
class AudioRecordingDemo  : public Component,
                            private Timer,
                            public Button::Listener
{
public:
    AudioRecordingDemo()
        : muteButton("mute"),
          clipLabel("CLIP"),
          choseDestFolderButton("destination")
    {
        setOpaque (true);
        addAndMakeVisible (muteButton);
        addAndMakeVisible(clipLabel);
        addAndMakeVisible (recordingThumbnail);
        addAndMakeVisible(choseDestFolderButton);

        clipLabel.setColour(TextButton::ColourIds::textColourOffId, Colours::white);
        clipLabel.setColour(TextButton::ColourIds::buttonColourId, Colours::red);
        clipLabel.setVisible(false);
        clipLabel.setEnabled(false);

        muteButton.addListener(this);
        choseDestFolderButton.addListener(this);

        if (!initProperties())
        {
            setDefaultProperties();
        }

       recorder.initialize(
           applicationProperties.getUserSettings()->getValue("folder"),
           (AudioRecorder::SupportedAudioFormat)applicationProperties.getUserSettings()->getIntValue("format"),
           applicationProperties.getUserSettings()->getDoubleValue("RMSThreshold"),
           applicationProperties.getUserSettings()->getDoubleValue("silenceLength")
       );
        
       #ifndef JUCE_DEMO_RUNNER
        RuntimePermissions::request (RuntimePermissions::recordAudio,
                                     [this] (bool granted)
                                     {
                                         int numInputChannels = granted ? 2 : 0;
                                         audioDeviceManager.initialise (numInputChannels, 2, nullptr, true, {}, nullptr);
                                     });
       #endif
      

        audioDeviceManager.addAudioCallback (&recorder);

        setSize(300, 120);

        startRecording();
    }

    ~AudioRecordingDemo() override
    {
        audioDeviceManager.removeAudioCallback (&recorder);
    }

    // init the property file and returns whether it exists or not
    bool initProperties ()
    {
        PropertiesFile::Options options;
        options.applicationName = ProjectInfo::projectName;
        options.folderName = ProjectInfo::projectName;
        options.filenameSuffix = "settings";
        options.osxLibrarySubFolder = "Application Support";
        applicationProperties.setStorageParameters(options);
        auto props = applicationProperties.getUserSettings();
        auto checkValueExists = props->getValue("format");
        return !checkValueExists.isEmpty();
    }

    void setDefaultProperties()
    {
        PropertiesFile* props = applicationProperties.getUserSettings();
        props->setValue("format", AudioRecorder::SupportedAudioFormat::flac);

#if (JUCE_ANDROID || JUCE_IOS)
        auto documenfolderPathtsDir = File::getSpecialLocation(File::tempDirectory).getFullPathName() + "\\CollectionRecorder";
#else
        auto folderPath = File::getSpecialLocation(File::userDocumentsDirectory).getFullPathName() + "\\CollectionRecorder";
#endif

        props->setValue("folder", folderPath);
        props->setValue("RMSThreshold", 0.01);
        props->setValue("silenceLength", 3);

        props->save();
        props->reload();
    }


    void paint (Graphics& g) override
    {
        g.fillAll (getUIColourIfAvailable (LookAndFeel_V4::ColourScheme::UIColour::windowBackground));
    }

    void resized() override
    {
        auto area = getLocalBounds();

        recordingThumbnail.setBounds (area.removeFromTop (80).reduced (8));
        muteButton.setBounds(area.removeFromLeft(60).reduced(8, 4));
        choseDestFolderButton.setBounds(area.removeFromLeft(80).reduced(0, 4));
        clipLabel.setBounds(area.removeFromLeft(60).reduced(8, 4));
    }

private:
    // if this PIP is running inside the demo runner, we'll use the shared device manager instead
   #ifndef JUCE_DEMO_RUNNER
    AudioDeviceManager audioDeviceManager;
   #else
    AudioDeviceManager& audioDeviceManager { getSharedAudioDeviceManager (1, 0) };
   #endif

    RecordingThumbnail recordingThumbnail;
    AudioRecorder recorder{ recordingThumbnail.getAudioThumbnail() };


    File lastRecording;

    void startRecording()
    {
        if (! RuntimePermissions::isGranted (RuntimePermissions::writeExternalStorage))
        {
            SafePointer<AudioRecordingDemo> safeThis (this);

            RuntimePermissions::request (RuntimePermissions::writeExternalStorage,
                                         [safeThis] (bool granted) mutable
                                         {
                                             if (granted)
                                                 safeThis->startRecording();
                                         });
            return;
        }

        recorder.startRecording ();

        recordingThumbnail.setDisplayFullThumbnail (false);

        startTimer(10);
    }

    void timerCallback() override
    {
        if (recorder.shouldRestart)
        {
            recorder.startRecording(); // sets up the new file in advance        
            recorder.shouldRestart = false;
        }
        clipLabel.setVisible(recorder.clip);        
    }

    void buttonClicked(Button* button) override
    {
        // no need to check wich button as there is only one
        if (button->getButtonText() == "mute")
        {
            button->setButtonText("unmute");
            recorder.mute(true);
        }
        else if (button->getButtonText() == "unmute")
        {
            button->setButtonText("mute");
            recorder.mute(false);
        }
        else  if (button->getButtonText() == "destination")
        {
            FileChooser chooser("Chose the destination folder");
            if (chooser.browseForDirectory()) {
                File currentFolder = chooser.getResult();
                recorder.updateCurrenFolder(currentFolder);
                applicationProperties.getUserSettings()->setValue("folder", currentFolder.getFullPathName());
            }
        }
    }

    ApplicationProperties applicationProperties;
    TextButton muteButton;
    TextButton clipLabel;
    TextButton choseDestFolderButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioRecordingDemo)
};
