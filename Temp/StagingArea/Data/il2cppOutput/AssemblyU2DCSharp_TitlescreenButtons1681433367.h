#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// MusicManager
struct MusicManager_t104156498;
// SoundManager
struct SoundManager_t654432262;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitlescreenButtons
struct  TitlescreenButtons_t1681433367  : public MonoBehaviour_t1158329972
{
public:
	// MusicManager TitlescreenButtons::mm
	MusicManager_t104156498 * ___mm_2;
	// SoundManager TitlescreenButtons::sm
	SoundManager_t654432262 * ___sm_3;
	// System.Single TitlescreenButtons::cooldown
	float ___cooldown_4;
	// System.Boolean TitlescreenButtons::playSound
	bool ___playSound_5;

public:
	inline static int32_t get_offset_of_mm_2() { return static_cast<int32_t>(offsetof(TitlescreenButtons_t1681433367, ___mm_2)); }
	inline MusicManager_t104156498 * get_mm_2() const { return ___mm_2; }
	inline MusicManager_t104156498 ** get_address_of_mm_2() { return &___mm_2; }
	inline void set_mm_2(MusicManager_t104156498 * value)
	{
		___mm_2 = value;
		Il2CppCodeGenWriteBarrier(&___mm_2, value);
	}

	inline static int32_t get_offset_of_sm_3() { return static_cast<int32_t>(offsetof(TitlescreenButtons_t1681433367, ___sm_3)); }
	inline SoundManager_t654432262 * get_sm_3() const { return ___sm_3; }
	inline SoundManager_t654432262 ** get_address_of_sm_3() { return &___sm_3; }
	inline void set_sm_3(SoundManager_t654432262 * value)
	{
		___sm_3 = value;
		Il2CppCodeGenWriteBarrier(&___sm_3, value);
	}

	inline static int32_t get_offset_of_cooldown_4() { return static_cast<int32_t>(offsetof(TitlescreenButtons_t1681433367, ___cooldown_4)); }
	inline float get_cooldown_4() const { return ___cooldown_4; }
	inline float* get_address_of_cooldown_4() { return &___cooldown_4; }
	inline void set_cooldown_4(float value)
	{
		___cooldown_4 = value;
	}

	inline static int32_t get_offset_of_playSound_5() { return static_cast<int32_t>(offsetof(TitlescreenButtons_t1681433367, ___playSound_5)); }
	inline bool get_playSound_5() const { return ___playSound_5; }
	inline bool* get_address_of_playSound_5() { return &___playSound_5; }
	inline void set_playSound_5(bool value)
	{
		___playSound_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
