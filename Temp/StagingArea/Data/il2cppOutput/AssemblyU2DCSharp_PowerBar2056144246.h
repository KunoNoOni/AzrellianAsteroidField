#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerBar
struct  PowerBar_t2056144246  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider PowerBar::powerBar
	Slider_t297367283 * ___powerBar_2;
	// UnityEngine.UI.Text PowerBar::powerNumberText
	Text_t356221433 * ___powerNumberText_3;
	// System.Int32 PowerBar::powerBarValue
	int32_t ___powerBarValue_4;
	// System.Single PowerBar::coolDown
	float ___coolDown_5;
	// System.Single PowerBar::coolDownReset
	float ___coolDownReset_6;

public:
	inline static int32_t get_offset_of_powerBar_2() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___powerBar_2)); }
	inline Slider_t297367283 * get_powerBar_2() const { return ___powerBar_2; }
	inline Slider_t297367283 ** get_address_of_powerBar_2() { return &___powerBar_2; }
	inline void set_powerBar_2(Slider_t297367283 * value)
	{
		___powerBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerBar_2, value);
	}

	inline static int32_t get_offset_of_powerNumberText_3() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___powerNumberText_3)); }
	inline Text_t356221433 * get_powerNumberText_3() const { return ___powerNumberText_3; }
	inline Text_t356221433 ** get_address_of_powerNumberText_3() { return &___powerNumberText_3; }
	inline void set_powerNumberText_3(Text_t356221433 * value)
	{
		___powerNumberText_3 = value;
		Il2CppCodeGenWriteBarrier(&___powerNumberText_3, value);
	}

	inline static int32_t get_offset_of_powerBarValue_4() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___powerBarValue_4)); }
	inline int32_t get_powerBarValue_4() const { return ___powerBarValue_4; }
	inline int32_t* get_address_of_powerBarValue_4() { return &___powerBarValue_4; }
	inline void set_powerBarValue_4(int32_t value)
	{
		___powerBarValue_4 = value;
	}

	inline static int32_t get_offset_of_coolDown_5() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___coolDown_5)); }
	inline float get_coolDown_5() const { return ___coolDown_5; }
	inline float* get_address_of_coolDown_5() { return &___coolDown_5; }
	inline void set_coolDown_5(float value)
	{
		___coolDown_5 = value;
	}

	inline static int32_t get_offset_of_coolDownReset_6() { return static_cast<int32_t>(offsetof(PowerBar_t2056144246, ___coolDownReset_6)); }
	inline float get_coolDownReset_6() const { return ___coolDownReset_6; }
	inline float* get_address_of_coolDownReset_6() { return &___coolDownReset_6; }
	inline void set_coolDownReset_6(float value)
	{
		___coolDownReset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
