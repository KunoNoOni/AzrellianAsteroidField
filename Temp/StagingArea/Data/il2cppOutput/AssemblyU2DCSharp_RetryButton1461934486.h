#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// MusicManager
struct MusicManager_t104156498;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RetryButton
struct  RetryButton_t1461934486  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text RetryButton::distance
	Text_t356221433 * ___distance_2;
	// MusicManager RetryButton::mm
	MusicManager_t104156498 * ___mm_3;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RetryButton_t1461934486, ___distance_2)); }
	inline Text_t356221433 * get_distance_2() const { return ___distance_2; }
	inline Text_t356221433 ** get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(Text_t356221433 * value)
	{
		___distance_2 = value;
		Il2CppCodeGenWriteBarrier(&___distance_2, value);
	}

	inline static int32_t get_offset_of_mm_3() { return static_cast<int32_t>(offsetof(RetryButton_t1461934486, ___mm_3)); }
	inline MusicManager_t104156498 * get_mm_3() const { return ___mm_3; }
	inline MusicManager_t104156498 ** get_address_of_mm_3() { return &___mm_3; }
	inline void set_mm_3(MusicManager_t104156498 * value)
	{
		___mm_3 = value;
		Il2CppCodeGenWriteBarrier(&___mm_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
