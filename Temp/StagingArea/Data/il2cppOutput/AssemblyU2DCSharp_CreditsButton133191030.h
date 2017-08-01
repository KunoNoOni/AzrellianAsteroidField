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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreditsButton
struct  CreditsButton_t133191030  : public MonoBehaviour_t1158329972
{
public:
	// MusicManager CreditsButton::mm
	MusicManager_t104156498 * ___mm_2;

public:
	inline static int32_t get_offset_of_mm_2() { return static_cast<int32_t>(offsetof(CreditsButton_t133191030, ___mm_2)); }
	inline MusicManager_t104156498 * get_mm_2() const { return ___mm_2; }
	inline MusicManager_t104156498 ** get_address_of_mm_2() { return &___mm_2; }
	inline void set_mm_2(MusicManager_t104156498 * value)
	{
		___mm_2 = value;
		Il2CppCodeGenWriteBarrier(&___mm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
