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
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] SoundManager::sounds
	AudioClipU5BU5D_t2203355011* ___sounds_2;
	// UnityEngine.AudioSource[] SoundManager::channels
	AudioSourceU5BU5D_t1873220070* ___channels_3;

public:
	inline static int32_t get_offset_of_sounds_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sounds_2)); }
	inline AudioClipU5BU5D_t2203355011* get_sounds_2() const { return ___sounds_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_sounds_2() { return &___sounds_2; }
	inline void set_sounds_2(AudioClipU5BU5D_t2203355011* value)
	{
		___sounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_2, value);
	}

	inline static int32_t get_offset_of_channels_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___channels_3)); }
	inline AudioSourceU5BU5D_t1873220070* get_channels_3() const { return ___channels_3; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_channels_3() { return &___channels_3; }
	inline void set_channels_3(AudioSourceU5BU5D_t1873220070* value)
	{
		___channels_3 = value;
		Il2CppCodeGenWriteBarrier(&___channels_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
