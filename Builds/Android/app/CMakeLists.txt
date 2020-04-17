# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=16" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCE_PUSH_NOTIFICATIONS_ACTIVITY=\"com/roli/juce/JuceActivity\"" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=0.0.1" "-DJUCE_APP_VERSION_HEX=0x1")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "C:/Program Files/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/Main.cpp"
    "../../../Source/AudioSplitRecorder.h"
    "../../../Source/DemoUtilities.h"
    "../../../Source/AudioLiveScrollingDisplay.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "C:/Program Files/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "C:/Program Files/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "C:/Program Files/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "C:/Program Files/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "C:/Program Files/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "C:/Program Files/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "C:/Program Files/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "C:/Program Files/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "C:/Program Files/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "C:/Program Files/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_Array.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "C:/Program Files/JUCE/modules/juce_core/containers/juce_Variant.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_File.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_File.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "C:/Program Files/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "C:/Program Files/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "C:/Program Files/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "C:/Program Files/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "C:/Program Files/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "C:/Program Files/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "C:/Program Files/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "C:/Program Files/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "C:/Program Files/JUCE/modules/juce_core/logging/juce_Logger.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_Expression.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_Random.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_Range.h"
    "C:/Program Files/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_Memory.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "C:/Program Files/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_Result.h"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "C:/Program Files/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "C:/Program Files/JUCE/modules/juce_core/native/java/README.txt"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_Socket.h"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_URL.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_URL.h"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "C:/Program Files/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "C:/Program Files/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "C:/Program Files/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "C:/Program Files/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "C:/Program Files/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "C:/Program Files/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "C:/Program Files/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_Base64.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_Identifier.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_NewLine.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_String.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_String.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringArray.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringPool.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_StringRef.h"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "C:/Program Files/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_Process.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_Thread.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp"
    "C:/Program Files/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "C:/Program Files/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "C:/Program Files/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "C:/Program Files/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "C:/Program Files/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "C:/Program Files/JUCE/modules/juce_core/time/juce_Time.cpp"
    "C:/Program Files/JUCE/modules/juce_core/time/juce_Time.h"
    "C:/Program Files/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "C:/Program Files/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "C:/Program Files/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/compress.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/infback.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/trees.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/trees.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "C:/Program Files/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "C:/Program Files/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "C:/Program Files/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "C:/Program Files/JUCE/modules/juce_core/juce_core.cpp"
    "C:/Program Files/JUCE/modules/juce_core/juce_core.mm"
    "C:/Program Files/JUCE/modules/juce_core/juce_core.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "C:/Program Files/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "C:/Program Files/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "C:/Program Files/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "C:/Program Files/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_Message.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "C:/Program Files/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "C:/Program Files/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "C:/Program Files/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "C:/Program Files/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "C:/Program Files/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "C:/Program Files/JUCE/modules/juce_events/timers/juce_Timer.h"
    "C:/Program Files/JUCE/modules/juce_events/juce_events.cpp"
    "C:/Program Files/JUCE/modules/juce_events/juce_events.mm"
    "C:/Program Files/JUCE/modules/juce_events/juce_events.h"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "C:/Program Files/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "C:/Program Files/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "C:/Program Files/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "C:/Program Files/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_Image.h"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "C:/Program Files/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "C:/Program Files/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "C:/Program Files/JUCE/modules/juce_graphics/juce_graphics.mm"
    "C:/Program Files/JUCE/modules/juce_graphics/juce_graphics.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "C:/Program Files/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "C:/Program Files/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "C:/Program Files/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "C:/Program Files/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/AudioSplitRecorder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/DemoUtilities.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/AudioLiveScrollingDisplay.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("C:/Program Files/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
)
