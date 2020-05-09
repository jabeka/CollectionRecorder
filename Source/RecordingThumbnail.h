#pragma once

#include <JuceHeader.h>

class RecordingThumbnail : public Component,
    private ChangeListener
{
public:
    RecordingThumbnail()
    {
        formatManager.registerBasicFormats();
        thumbnail.addChangeListener(this);
    }

    ~RecordingThumbnail() override
    {
        thumbnail.removeChangeListener(this);
    }

    AudioThumbnail& getAudioThumbnail() { return thumbnail; }

    void paint(Graphics& g) override
    {
        g.fillAll(Colours::darkgrey);
        g.setColour(Colours::lightgrey);

        if (thumbnail.getTotalLength() > 0.0)
        {
            auto thumbArea = getLocalBounds();
            thumbnail.drawChannels(g, thumbArea.reduced(2), thumbnail.getTotalLength() - length, thumbnail.getTotalLength() , 1.0f);
        }
    }

    void setLength(int l)
    {
        length = l;
    }

private:
    AudioFormatManager formatManager;
    AudioThumbnailCache thumbnailCache{ 10 };
    AudioThumbnail thumbnail{ 512, formatManager, thumbnailCache };

    int length = 5;

    void changeListenerCallback(ChangeBroadcaster* source) override
    {
        if (source == &thumbnail)
            repaint();
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(RecordingThumbnail)
};
