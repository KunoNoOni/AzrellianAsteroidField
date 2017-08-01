#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager
struct  MusicManager_t104156498  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] MusicManager::music
	AudioClipU5BU5D_t2203355011* ___music_2;
	// UnityEngine.AudioSource MusicManager::channel
	AudioSource_t1135106623 * ___channel_3;

public:
	inline static int32_t get_offset_of_music_2() { return static_cast<int32_t>(offsetof(MusicManager_t104156498, ___music_2)); }
	inline AudioClipU5BU5D_t2203355011* get_music_2() const { return ___music_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_music_2() { return &___music_2; }
	inline void set_music_2(AudioClipU5BU5D_t2203355011* value)
	{
		___music_2 = value;
		Il2CppCodeGenWriteBarrier(&___music_2, value);
	}

	inline static int32_t get_offset_of_channel_3() { return static_cast<int32_t>(offsetof(MusicManager_t104156498, ___channel_3)); }
	inline AudioSource_t1135106623 * get_channel_3() const { return ___channel_3; }
	inline AudioSource_t1135106623 ** get_address_of_channel_3() { return &___channel_3; }
	inline void set_channel_3(AudioSource_t1135106623 * value)
	{
		___channel_3 = value;
		Il2CppCodeGenWriteBarrier(&___channel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
