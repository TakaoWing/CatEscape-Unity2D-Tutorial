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

// GameDirector
struct  GameDirector_t355460854  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameDirector::hpGame
	GameObject_t1756533147 * ___hpGame_2;

public:
	inline static int32_t get_offset_of_hpGame_2() { return static_cast<int32_t>(offsetof(GameDirector_t355460854, ___hpGame_2)); }
	inline GameObject_t1756533147 * get_hpGame_2() const { return ___hpGame_2; }
	inline GameObject_t1756533147 ** get_address_of_hpGame_2() { return &___hpGame_2; }
	inline void set_hpGame_2(GameObject_t1756533147 * value)
	{
		___hpGame_2 = value;
		Il2CppCodeGenWriteBarrier(&___hpGame_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
