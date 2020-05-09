#pragma once

#include <JuceHeader.h>
#include "AudioFileNormalizer.h"
#include "AudioFileTrimmer.h"

class PostRecordJob : ThreadPoolJob {
public:
	PostRecordJob(String name, File fileToTreat, bool normalize, bool trim, bool removechunks, AudioFormatManager* manager, float RMSThreshold, int sampleRate, int chunkMaxSize)
		: ThreadPoolJob(name),
		file(fileToTreat),
        normalize(normalize),
        trim(trim),
        removechunks(removechunks),
        manager(manager),
        RMSThreshold(RMSThreshold),
        sampleRate(sampleRate),
        chunkMaxSize(chunkMaxSize)
	{
        
	}

	~PostRecordJob() { }

	JobStatus runJob() override {
        if (normalize)
        {
            AudioFileNormalizer normalizer(file);
            normalizer.process();
        }
        if (trim) {
            AudioFileTrimer trimer(file, RMSThreshold);
            trimer.process();
        }
        if (removechunks) {

            AudioFormatReader* reader = manager->createReaderFor(file);
            if (reader->lengthInSamples < chunkMaxSize * sampleRate) {
                file.deleteFile();
                delete reader;
            }
            else
            {
                delete reader;
            }
        }
        return JobStatus::jobHasFinished;
	}
private:
    AudioFormatManager* manager;
	File file;
    bool normalize, trim, removechunks;
    float RMSThreshold;
    int sampleRate, chunkMaxSize;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PostRecordJob);
};