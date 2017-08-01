#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PowerBar
struct PowerBar_t2056144246;
// SoundManager
struct SoundManager_t654432262;
// GameManager
struct GameManager_t2252321495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveObstacles
struct  MoveObstacles_t2947620481  : public MonoBehaviour_t1158329972
{
public:
	// PowerBar MoveObstacles::powerBar
	PowerBar_t2056144246 * ___powerBar_2;
	// SoundManager MoveObstacles::sm
	SoundManager_t654432262 * ___sm_3;
	// GameManager MoveObstacles::gm
	GameManager_t2252321495 * ___gm_4;
	// System.Single MoveObstacles::move
	float ___move_5;

public:
	inline static int32_t get_offset_of_powerBar_2() { return static_cast<int32_t>(offsetof(MoveObstacles_t2947620481, ___powerBar_2)); }
	inline PowerBar_t2056144246 * get_powerBar_2() const { return ___powerBar_2; }
	inline PowerBar_t2056144246 ** get_address_of_powerBar_2() { return &___powerBar_2; }
	inline void set_powerBar_2(PowerBar_t2056144246 * value)
	{
		___powerBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerBar_2, value);
	}

	inline static int32_t get_offset_of_sm_3() { return static_cast<int32_t>(offsetof(MoveObstacles_t2947620481, ___sm_3)); }
	inline SoundManager_t654432262 * get_sm_3() const { return ___sm_3; }
	inline SoundManager_t654432262 ** get_address_of_sm_3() { return &___sm_3; }
	inline void set_sm_3(SoundManager_t654432262 * value)
	{
		___sm_3 = value;
		Il2CppCodeGenWriteBarrier(&___sm_3, value);
	}

	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(MoveObstacles_t2947620481, ___gm_4)); }
	inline GameManager_t2252321495 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t2252321495 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t2252321495 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier(&___gm_4, value);
	}

	inline static int32_t get_offset_of_move_5() { return static_cast<int32_t>(offsetof(MoveObstacles_t2947620481, ___move_5)); }
	inline float get_move_5() const { return ___move_5; }
	inline float* get_address_of_move_5() { return &___move_5; }
	inline void set_move_5(float value)
	{
		___move_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
