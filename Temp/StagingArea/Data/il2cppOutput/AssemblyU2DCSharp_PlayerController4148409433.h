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
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PlayerController::distanceText
	Text_t356221433 * ___distanceText_2;
	// System.Single PlayerController::horizontal
	float ___horizontal_3;
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Single PlayerController::coolDown
	float ___coolDown_5;
	// System.Single PlayerController::coolDownReset
	float ___coolDownReset_6;
	// UnityEngine.Animator PlayerController::anim
	Animator_t69676727 * ___anim_7;

public:
	inline static int32_t get_offset_of_distanceText_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___distanceText_2)); }
	inline Text_t356221433 * get_distanceText_2() const { return ___distanceText_2; }
	inline Text_t356221433 ** get_address_of_distanceText_2() { return &___distanceText_2; }
	inline void set_distanceText_2(Text_t356221433 * value)
	{
		___distanceText_2 = value;
		Il2CppCodeGenWriteBarrier(&___distanceText_2, value);
	}

	inline static int32_t get_offset_of_horizontal_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___horizontal_3)); }
	inline float get_horizontal_3() const { return ___horizontal_3; }
	inline float* get_address_of_horizontal_3() { return &___horizontal_3; }
	inline void set_horizontal_3(float value)
	{
		___horizontal_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_coolDown_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___coolDown_5)); }
	inline float get_coolDown_5() const { return ___coolDown_5; }
	inline float* get_address_of_coolDown_5() { return &___coolDown_5; }
	inline void set_coolDown_5(float value)
	{
		___coolDown_5 = value;
	}

	inline static int32_t get_offset_of_coolDownReset_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___coolDownReset_6)); }
	inline float get_coolDownReset_6() const { return ___coolDownReset_6; }
	inline float* get_address_of_coolDownReset_6() { return &___coolDownReset_6; }
	inline void set_coolDownReset_6(float value)
	{
		___coolDownReset_6 = value;
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___anim_7)); }
	inline Animator_t69676727 * get_anim_7() const { return ___anim_7; }
	inline Animator_t69676727 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t69676727 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
