#pragma once


#include <JuceHeader.h>

template<typename Type>
class CircularBuffer
{
public :

	CircularBuffer(int channels, int size)
		: size(size), 
		origin(0),
		audiobuffer(channels, size),
		isFull(false)
	{
		audiobuffer.clear();
	}

	void push(AudioBuffer<Type> bufferToAdd) noexcept
	{
		jassert(bufferToAdd.getNumChannels() == audiobuffer.getNumChannels());
		jassert(bufferToAdd.getNumSamples() <= audiobuffer.getNumSamples());

		if (origin + bufferToAdd.getNumSamples() > audiobuffer.getNumSamples())
		{
			//handle overflow
			for (int i = 0; i < audiobuffer.getNumChannels(); i++)
			{
				int nbSamplesToWrite = audiobuffer.getNumSamples() - origin;
				//first 
				audiobuffer.copyFrom(i, origin, bufferToAdd.getReadPointer(i), nbSamplesToWrite);
				// then
				audiobuffer.copyFrom(i, 0, bufferToAdd.getReadPointer(i, nbSamplesToWrite), bufferToAdd.getNumSamples() - nbSamplesToWrite);
			}
		}
		else
		{
			for (int i = 0; i < audiobuffer.getNumChannels(); i++)
			{
				audiobuffer.copyFrom(i, origin, bufferToAdd.getReadPointer(i), bufferToAdd.getNumSamples());
			}
		}
		// increase origin index
		increaseOrigin(bufferToAdd.getNumSamples());
	}

	void push(int channel, Type valueToAdd) noexcept
	{
		jassert(channel < audiobuffer.getNumChannels());

		audiobuffer.setSample(channel, origin, valueToAdd);
		increaseOrigin(1);
	}

	Type get(int channel, int index) const noexcept
	{
		jassert(channel < audiobuffer.getNumChannels());
		jassert(index >= 0 && index < size);

		return audiobuffer.getSample(channel, (origin + index) % size);
	}

	const AudioBuffer<Type> getRaw() const noexcept
	{
		return audiobuffer;
	}

	int getOrigin()
	{
		return origin;
	}

	void set(int channel, int index, Type newValue) noexcept
	{
		jassert(index >= 0 && index < size);

		audiobuffer.setSample(channel, (origin + index) % size, newValue);
	}

	Type getRMSLevel()
	{
		Type mean = 0;
		for (int i = 0; i < audiobuffer.getNumChannels(); i++) 
		{
			mean += audiobuffer.getRMSLevel(0, 0, size);
		}
		return mean / audiobuffer.getNumChannels();
	}

	bool isBufferFull() 
	{
		return isFull;
	}

	int getSize()
	{
		return size;
	}

private :
	AudioBuffer<Type> audiobuffer;
	int origin;
	int size;
	bool isFull;

	void increaseOrigin (int numSamples)
	{
		origin += numSamples;
		if (origin > size)
		{
			origin -= size;
			isFull = true;
		}
	}

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(CircularBuffer)
};