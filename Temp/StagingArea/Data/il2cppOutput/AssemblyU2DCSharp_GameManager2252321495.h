#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PowerBar
struct PowerBar_t2056144246;
// ObjectSpawner
struct ObjectSpawner_t2879007867;
// MusicManager
struct MusicManager_t104156498;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameManager::pExplosion
	GameObject_t1756533147 * ___pExplosion_10;
	// UnityEngine.GameObject GameManager::aExplosion
	GameObject_t1756533147 * ___aExplosion_11;
	// PowerBar GameManager::powerBar
	PowerBar_t2056144246 * ___powerBar_12;
	// ObjectSpawner GameManager::os
	ObjectSpawner_t2879007867 * ___os_13;
	// MusicManager GameManager::mm
	MusicManager_t104156498 * ___mm_14;
	// System.Single GameManager::maxSpeed
	float ___maxSpeed_15;
	// System.Single GameManager::coolDown
	float ___coolDown_16;
	// System.Single GameManager::coolDownReset
	float ___coolDownReset_17;
	// System.Single GameManager::warpCoolDown
	float ___warpCoolDown_18;
	// System.Single GameManager::warpCoolDownReset
	float ___warpCoolDownReset_19;
	// System.Int32 GameManager::objectSpawnCounter
	int32_t ___objectSpawnCounter_20;
	// System.Int32 GameManager::powerDecayCounter
	int32_t ___powerDecayCounter_21;
	// System.Int32 GameManager::powerSpeedCounter
	int32_t ___powerSpeedCounter_22;
	// System.Boolean GameManager::mute
	bool ___mute_23;

public:
	inline static int32_t get_offset_of_pExplosion_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pExplosion_10)); }
	inline GameObject_t1756533147 * get_pExplosion_10() const { return ___pExplosion_10; }
	inline GameObject_t1756533147 ** get_address_of_pExplosion_10() { return &___pExplosion_10; }
	inline void set_pExplosion_10(GameObject_t1756533147 * value)
	{
		___pExplosion_10 = value;
		Il2CppCodeGenWriteBarrier(&___pExplosion_10, value);
	}

	inline static int32_t get_offset_of_aExplosion_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___aExplosion_11)); }
	inline GameObject_t1756533147 * get_aExplosion_11() const { return ___aExplosion_11; }
	inline GameObject_t1756533147 ** get_address_of_aExplosion_11() { return &___aExplosion_11; }
	inline void set_aExplosion_11(GameObject_t1756533147 * value)
	{
		___aExplosion_11 = value;
		Il2CppCodeGenWriteBarrier(&___aExplosion_11, value);
	}

	inline static int32_t get_offset_of_powerBar_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___powerBar_12)); }
	inline PowerBar_t2056144246 * get_powerBar_12() const { return ___powerBar_12; }
	inline PowerBar_t2056144246 ** get_address_of_powerBar_12() { return &___powerBar_12; }
	inline void set_powerBar_12(PowerBar_t2056144246 * value)
	{
		___powerBar_12 = value;
		Il2CppCodeGenWriteBarrier(&___powerBar_12, value);
	}

	inline static int32_t get_offset_of_os_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___os_13)); }
	inline ObjectSpawner_t2879007867 * get_os_13() const { return ___os_13; }
	inline ObjectSpawner_t2879007867 ** get_address_of_os_13() { return &___os_13; }
	inline void set_os_13(ObjectSpawner_t2879007867 * value)
	{
		___os_13 = value;
		Il2CppCodeGenWriteBarrier(&___os_13, value);
	}

	inline static int32_t get_offset_of_mm_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mm_14)); }
	inline MusicManager_t104156498 * get_mm_14() const { return ___mm_14; }
	inline MusicManager_t104156498 ** get_address_of_mm_14() { return &___mm_14; }
	inline void set_mm_14(MusicManager_t104156498 * value)
	{
		___mm_14 = value;
		Il2CppCodeGenWriteBarrier(&___mm_14, value);
	}

	inline static int32_t get_offset_of_maxSpeed_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___maxSpeed_15)); }
	inline float get_maxSpeed_15() const { return ___maxSpeed_15; }
	inline float* get_address_of_maxSpeed_15() { return &___maxSpeed_15; }
	inline void set_maxSpeed_15(float value)
	{
		___maxSpeed_15 = value;
	}

	inline static int32_t get_offset_of_coolDown_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___coolDown_16)); }
	inline float get_coolDown_16() const { return ___coolDown_16; }
	inline float* get_address_of_coolDown_16() { return &___coolDown_16; }
	inline void set_coolDown_16(float value)
	{
		___coolDown_16 = value;
	}

	inline static int32_t get_offset_of_coolDownReset_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___coolDownReset_17)); }
	inline float get_coolDownReset_17() const { return ___coolDownReset_17; }
	inline float* get_address_of_coolDownReset_17() { return &___coolDownReset_17; }
	inline void set_coolDownReset_17(float value)
	{
		___coolDownReset_17 = value;
	}

	inline static int32_t get_offset_of_warpCoolDown_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___warpCoolDown_18)); }
	inline float get_warpCoolDown_18() const { return ___warpCoolDown_18; }
	inline float* get_address_of_warpCoolDown_18() { return &___warpCoolDown_18; }
	inline void set_warpCoolDown_18(float value)
	{
		___warpCoolDown_18 = value;
	}

	inline static int32_t get_offset_of_warpCoolDownReset_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___warpCoolDownReset_19)); }
	inline float get_warpCoolDownReset_19() const { return ___warpCoolDownReset_19; }
	inline float* get_address_of_warpCoolDownReset_19() { return &___warpCoolDownReset_19; }
	inline void set_warpCoolDownReset_19(float value)
	{
		___warpCoolDownReset_19 = value;
	}

	inline static int32_t get_offset_of_objectSpawnCounter_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___objectSpawnCounter_20)); }
	inline int32_t get_objectSpawnCounter_20() const { return ___objectSpawnCounter_20; }
	inline int32_t* get_address_of_objectSpawnCounter_20() { return &___objectSpawnCounter_20; }
	inline void set_objectSpawnCounter_20(int32_t value)
	{
		___objectSpawnCounter_20 = value;
	}

	inline static int32_t get_offset_of_powerDecayCounter_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___powerDecayCounter_21)); }
	inline int32_t get_powerDecayCounter_21() const { return ___powerDecayCounter_21; }
	inline int32_t* get_address_of_powerDecayCounter_21() { return &___powerDecayCounter_21; }
	inline void set_powerDecayCounter_21(int32_t value)
	{
		___powerDecayCounter_21 = value;
	}

	inline static int32_t get_offset_of_powerSpeedCounter_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___powerSpeedCounter_22)); }
	inline int32_t get_powerSpeedCounter_22() const { return ___powerSpeedCounter_22; }
	inline int32_t* get_address_of_powerSpeedCounter_22() { return &___powerSpeedCounter_22; }
	inline void set_powerSpeedCounter_22(int32_t value)
	{
		___powerSpeedCounter_22 = value;
	}

	inline static int32_t get_offset_of_mute_23() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mute_23)); }
	inline bool get_mute_23() const { return ___mute_23; }
	inline bool* get_address_of_mute_23() { return &___mute_23; }
	inline void set_mute_23(bool value)
	{
		___mute_23 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// System.Boolean GameManager::gameOver
	bool ___gameOver_2;
	// System.Single GameManager::speed
	float ___speed_3;
	// System.Single GameManager::powerSpeed
	float ___powerSpeed_4;
	// System.Single GameManager::objectSpawn
	float ___objectSpawn_5;
	// System.Boolean GameManager::warp
	bool ___warp_6;
	// System.Int32 GameManager::distance
	int32_t ___distance_7;
	// System.Int32 GameManager::powerDecay
	int32_t ___powerDecay_8;
	// System.Boolean GameManager::enteredTimePocket
	bool ___enteredTimePocket_9;

public:
	inline static int32_t get_offset_of_gameOver_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gameOver_2)); }
	inline bool get_gameOver_2() const { return ___gameOver_2; }
	inline bool* get_address_of_gameOver_2() { return &___gameOver_2; }
	inline void set_gameOver_2(bool value)
	{
		___gameOver_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_powerSpeed_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___powerSpeed_4)); }
	inline float get_powerSpeed_4() const { return ___powerSpeed_4; }
	inline float* get_address_of_powerSpeed_4() { return &___powerSpeed_4; }
	inline void set_powerSpeed_4(float value)
	{
		___powerSpeed_4 = value;
	}

	inline static int32_t get_offset_of_objectSpawn_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___objectSpawn_5)); }
	inline float get_objectSpawn_5() const { return ___objectSpawn_5; }
	inline float* get_address_of_objectSpawn_5() { return &___objectSpawn_5; }
	inline void set_objectSpawn_5(float value)
	{
		___objectSpawn_5 = value;
	}

	inline static int32_t get_offset_of_warp_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___warp_6)); }
	inline bool get_warp_6() const { return ___warp_6; }
	inline bool* get_address_of_warp_6() { return &___warp_6; }
	inline void set_warp_6(bool value)
	{
		___warp_6 = value;
	}

	inline static int32_t get_offset_of_distance_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___distance_7)); }
	inline int32_t get_distance_7() const { return ___distance_7; }
	inline int32_t* get_address_of_distance_7() { return &___distance_7; }
	inline void set_distance_7(int32_t value)
	{
		___distance_7 = value;
	}

	inline static int32_t get_offset_of_powerDecay_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___powerDecay_8)); }
	inline int32_t get_powerDecay_8() const { return ___powerDecay_8; }
	inline int32_t* get_address_of_powerDecay_8() { return &___powerDecay_8; }
	inline void set_powerDecay_8(int32_t value)
	{
		___powerDecay_8 = value;
	}

	inline static int32_t get_offset_of_enteredTimePocket_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___enteredTimePocket_9)); }
	inline bool get_enteredTimePocket_9() const { return ___enteredTimePocket_9; }
	inline bool* get_address_of_enteredTimePocket_9() { return &___enteredTimePocket_9; }
	inline void set_enteredTimePocket_9(bool value)
	{
		___enteredTimePocket_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
