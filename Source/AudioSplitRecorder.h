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

 name:             CollectionRecorder
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
 mainClass:        CollectionRecorder

 useLocalCopy:     1

 END_JUCE_PIP_METADATA

*******************************************************************************/
#pragma once

#include <JuceHeader.h>
#include "AudioLiveScrollingDisplay.h"
#include "DemoUtilities.h"
#include "RecordingThumbnail.h"
#include "AudioRecorder.h"

class AudioSplitRecorder  : public Component,
                            private Timer,
                            public Button::Listener
{
public:
    AudioSplitRecorder()
        : muteButton("mute"),
          clipLabel("CLIP"),
          choseDestFolderButton("destination"),
          formatComboBox("formatComboBox")
    {
        if (!initProperties())
        {
            setDefaultProperties();
        }

        setOpaque (true);
        addAndMakeVisible (muteButton);
        addAndMakeVisible(clipLabel);
        addAndMakeVisible (recordingThumbnail);
        addAndMakeVisible(choseDestFolderButton); 
        addAndMakeVisible(formatComboBox);        

        clipLabel.setColour(TextButton::ColourIds::textColourOffId, Colours::white);
        clipLabel.setColour(TextButton::ColourIds::buttonColourId, Colours::red);
        clipLabel.setVisible(false);
        clipLabel.setEnabled(false);

        muteButton.addListener(this);
        choseDestFolderButton.addListener(this);

        formatComboBox.addItem("Wav", 1);
        formatComboBox.addItem("Flac", 2);
        formatComboBox.setSelectedId(applicationProperties.getUserSettings()->getIntValue("format", 1) + 1);
        formatComboBox.onChange = [this] { recorder.setCurrentFormat((AudioRecorder::SupportedAudioFormat)(formatComboBox.getSelectedId() - 1)); };

       recorder.initialize(
           applicationProperties.getUserSettings()->getValue("folder"),
           (AudioRecorder::SupportedAudioFormat)applicationProperties.getUserSettings()->getIntValue("format", 1),
           (float)applicationProperties.getUserSettings()->getDoubleValue("RMSThreshold", 0.01),
           (float)applicationProperties.getUserSettings()->getDoubleValue("silenceLength", 2)
       );

       nbOutChannels =
           applicationProperties.getUserSettings()->getBoolValue("disableOutput") ?
           0 :
           2;
        
       #ifndef JUCE_DEMO_RUNNER
        RuntimePermissions::request (RuntimePermissions::recordAudio,
                                     [this] (bool granted)
                                     {
                                        if (!granted)
                                        {
                                            displayErrorPopup("Could not get acces to the input device, application will now quit");
                                            JUCEApplicationBase::quit();
                                            return;
                                        }
                                         deviceOpenError = audioDeviceManager.initialise (2, nbOutChannels, nullptr, true, {}, nullptr);
                                     });
       #endif

        setSize(600, 120);
      
        if (deviceOpenError.isNotEmpty())
        {
            // retry without output
            deviceOpenError = audioDeviceManager.initialise(2, 0, nullptr, true, {}, nullptr);

            if (deviceOpenError.isNotEmpty())
            {
                // still an error
                displayErrorPopup(deviceOpenError + "\nThe software will now exit");
                JUCEApplicationBase::quit();
                return;
            }
            else
            {
                // still an error
                displayErrorPopup("Error with the output, output disabled.");
            }
        }

        audioDeviceManager.addAudioCallback (&recorder);
        startRecording();
    }

    ~AudioSplitRecorder() override
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
        if (props->getFile().exists()) {
            // file exists, need to validate all settings
            return true;
        }

        return false; // settings do not exists, got to create it
    }

    void setDefaultProperties()
    {
        PropertiesFile* props = applicationProperties.getUserSettings();
        props->setValue("format", AudioRecorder::SupportedAudioFormat::flac);

#if (JUCE_ANDROID || JUCE_IOS)
        auto documenfolderPathtsDir = File::getSpecialLocation(File::tempDirectory).getFullPathName() + File::getSeparatorChar() + "\ollectionRecorder";
#else
        auto folderPath = File::getSpecialLocation(File::userDocumentsDirectory).getFullPathName() + File::getSeparatorChar() + "CollectionRecorder";
#endif

        props->setValue("folder", folderPath);
        props->setValue("RMSThreshold", 0.01);
        props->setValue("silenceLength", 2);
        props->setValue("disableOutput", false);

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
        muteButton.setBounds(area.removeFromLeft(96).reduced(8, 4));
        choseDestFolderButton.setBounds(area.removeFromLeft(80).reduced(0, 4));
        formatComboBox.setBounds(area.removeFromLeft(96).reduced(8, 4));
        clipLabel.setBounds(area.removeFromLeft(80).reduced(0, 4));
    }

private:
    // if this PIP is running inside the demo runner, we'll use the shared device manager instead
   #ifndef JUCE_DEMO_RUNNER
    AudioDeviceManager audioDeviceManager;
   #else
    AudioDeviceManager& audioDeviceManager { getSharedAudioDeviceManager (1, 0) };
   #endif

    // components
    RecordingThumbnail recordingThumbnail;
    AudioRecorder         recorder{ recordingThumbnail.getAudioThumbnail() };
    TextButton            muteButton;
    TextButton            clipLabel;
    TextButton            choseDestFolderButton;
    ComboBox              formatComboBox;

    ApplicationProperties applicationProperties;
    String                deviceOpenError;
    int                   nbOutChannels;

    void startRecording()
    {
        if (! RuntimePermissions::isGranted (RuntimePermissions::writeExternalStorage))
        {
            SafePointer<AudioSplitRecorder> safeThis (this);

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

        startTimer(1);
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
            FileChooser chooser("Chose the destination folder", recorder.getCurrentFolder());
            if (chooser.browseForDirectory()) {
                File currentFolder = chooser.getResult();
                recorder.setCurrentFolder(currentFolder);
                applicationProperties.getUserSettings()->setValue("folder", currentFolder.getFullPathName());
            }
        }
    }

    void displayErrorPopup (String message)
    {
        TextButton popupLabel;

        popupLabel.setColour(TextButton::ColourIds::textColourOffId, Colours::white);
        popupLabel.setColour(TextButton::ColourIds::buttonColourId, Colours::black);
        popupLabel.setButtonText(message);
        popupLabel.setEnabled(false);
        popupLabel.setSize(300, 100);

        DialogWindow::showModalDialog("Error", &popupLabel, this, Colours::white, true, false, false);
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioSplitRecorder)
};
