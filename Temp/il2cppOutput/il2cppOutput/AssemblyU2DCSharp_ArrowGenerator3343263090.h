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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArrowGenerator
struct  ArrowGenerator_t3343263090  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ArrowGenerator::arrowPrefab
	GameObject_t1756533147 * ___arrowPrefab_2;
	// System.Single ArrowGenerator::span
	float ___span_3;
	// System.Single ArrowGenerator::delta
	float ___delta_4;

public:
	inline static int32_t get_offset_of_arrowPrefab_2() { return static_cast<int32_t>(offsetof(ArrowGenerator_t3343263090, ___arrowPrefab_2)); }
	inline GameObject_t1756533147 * get_arrowPrefab_2() const { return ___arrowPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_arrowPrefab_2() { return &___arrowPrefab_2; }
	inline void set_arrowPrefab_2(GameObject_t1756533147 * value)
	{
		___arrowPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___arrowPrefab_2, value);
	}

	inline static int32_t get_offset_of_span_3() { return static_cast<int32_t>(offsetof(ArrowGenerator_t3343263090, ___span_3)); }
	inline float get_span_3() const { return ___span_3; }
	inline float* get_address_of_span_3() { return &___span_3; }
	inline void set_span_3(float value)
	{
		___span_3 = value;
	}

	inline static int32_t get_offset_of_delta_4() { return static_cast<int32_t>(offsetof(ArrowGenerator_t3343263090, ___delta_4)); }
	inline float get_delta_4() const { return ___delta_4; }
	inline float* get_address_of_delta_4() { return &___delta_4; }
	inline void set_delta_4(float value)
	{
		___delta_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
