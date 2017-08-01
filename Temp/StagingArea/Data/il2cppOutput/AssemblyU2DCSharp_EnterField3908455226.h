#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SoundManager
struct SoundManager_t654432262;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnterField
struct  EnterField_t3908455226  : public MonoBehaviour_t1158329972
{
public:
	// SoundManager EnterField::sm
	SoundManager_t654432262 * ___sm_2;

public:
	inline static int32_t get_offset_of_sm_2() { return static_cast<int32_t>(offsetof(EnterField_t3908455226, ___sm_2)); }
	inline SoundManager_t654432262 * get_sm_2() const { return ___sm_2; }
	inline SoundManager_t654432262 ** get_address_of_sm_2() { return &___sm_2; }
	inline void set_sm_2(SoundManager_t654432262 * value)
	{
		___sm_2 = value;
		Il2CppCodeGenWriteBarrier(&___sm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
