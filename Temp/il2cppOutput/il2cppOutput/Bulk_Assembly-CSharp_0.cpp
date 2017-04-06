#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_ArrowController586170427.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_GameDirector355460854.h"
#include "AssemblyU2DCSharp_ArrowGenerator3343263090.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "mscorlib_System_Boolean3825574718.h"

// ArrowController
struct ArrowController_t586170427;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Object
struct Object_t1021602117;
// GameDirector
struct GameDirector_t355460854;
// System.Object
struct Il2CppObject;
// ArrowGenerator
struct ArrowGenerator_t3343263090;
// UnityEngine.UI.Image
struct Image_t2042527209;
// PlayerController
struct PlayerController_t4148409433;
extern Il2CppCodeGenString* _stringLiteral1875821083;
extern const uint32_t ArrowController_Start_m3253170540_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameDirector_t355460854_m317740121_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1083539372;
extern const uint32_t ArrowController_Update_m2048764323_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3664764861_MethodInfo_var;
extern const uint32_t ArrowGenerator_Update_m1118669424_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral859342876;
extern const uint32_t GameDirector_Start_m3774185889_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisImage_t2042527209_m4162535761_MethodInfo_var;
extern const uint32_t GameDirector_DecreaseHp_m763868299_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_Update_m4228472513_MetadataUsageId;



// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m447919519_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3577349508 (Transform_t3275118058 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Subtraction_m1984215297 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m33802565 (Vector2_t2243707579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<GameDirector>()
#define GameObject_GetComponent_TisGameDirector_t355460854_m317740121(__this, method) ((  GameDirector_t355460854 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void GameDirector::DecreaseHp()
extern "C"  void GameDirector_DecreaseHp_m763868299 (GameDirector_t355460854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1756533147_m3664764861(__this /* static, unused */, p0, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m447919519_gshared)(__this /* static, unused */, p0, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t2042527209_m4162535761(__this, method) ((  Image_t2042527209 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C"  float Image_get_fillAmount_m3354146540 (Image_t2042527209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C"  void Image_set_fillAmount_m2220966753 (Image_t2042527209 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArrowController::.ctor()
extern "C"  void ArrowController__ctor_m4096915984 (ArrowController_t586170427 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ArrowController::Start()
extern "C"  void ArrowController_Start_m3253170540 (ArrowController_t586170427 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrowController_Start_m3253170540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1875821083, /*hidden argument*/NULL);
		__this->set_player_2(L_0);
		return;
	}
}
// System.Void ArrowController::Update()
extern "C"  void ArrowController_Update_m2048764323 (ArrowController_t586170427 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrowController_Update_m2048764323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2243707579  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	GameObject_t1756533147 * V_7 = NULL;
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3577349508(L_0, (0.0f), (-0.1f), (0.0f), /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		if ((!(((float)L_3) < ((float)(-5.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Vector2_t2243707579  L_7 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		GameObject_t1756533147 * L_8 = __this->get_player_2();
		NullCheck(L_8);
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		Vector2_t2243707579  L_11 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Vector2_t2243707579  L_12 = V_1;
		Vector2_t2243707579  L_13 = V_2;
		Vector2_t2243707579  L_14 = Vector2_op_Subtraction_m1984215297(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = Vector2_get_magnitude_m33802565((&V_3), /*hidden argument*/NULL);
		V_4 = L_15;
		V_5 = (0.5f);
		V_6 = (1.0f);
		float L_16 = V_4;
		float L_17 = V_5;
		float L_18 = V_6;
		if ((!(((float)L_16) < ((float)((float)((float)L_17+(float)L_18))))))
		{
			goto IL_00b7;
		}
	}
	{
		GameObject_t1756533147 * L_19 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_20 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1083539372, /*hidden argument*/NULL);
		V_7 = L_20;
		GameObject_t1756533147 * L_21 = V_7;
		NullCheck(L_21);
		GameDirector_t355460854 * L_22 = GameObject_GetComponent_TisGameDirector_t355460854_m317740121(L_21, /*hidden argument*/GameObject_GetComponent_TisGameDirector_t355460854_m317740121_MethodInfo_var);
		NullCheck(L_22);
		GameDirector_DecreaseHp_m763868299(L_22, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
// System.Void ArrowGenerator::.ctor()
extern "C"  void ArrowGenerator__ctor_m2895992481 (ArrowGenerator_t3343263090 * __this, const MethodInfo* method)
{
	{
		__this->set_span_3((0.2f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ArrowGenerator::Start()
extern "C"  void ArrowGenerator_Start_m2170258097 (ArrowGenerator_t3343263090 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ArrowGenerator::Update()
extern "C"  void ArrowGenerator_Update_m1118669424 (ArrowGenerator_t3343263090 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrowGenerator_Update_m1118669424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		float L_0 = __this->get_delta_4();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_delta_4(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_delta_4();
		float L_3 = __this->get_span_3();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0060;
		}
	}
	{
		__this->set_delta_4((0.0f));
		GameObject_t1756533147 * L_4 = __this->get_arrowPrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_5 = Object_Instantiate_TisGameObject_t1756533147_m3664764861(NULL /*static, unused*/, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3664764861_MethodInfo_var);
		V_0 = L_5;
		int32_t L_6 = Random_Range_m694320887(NULL /*static, unused*/, ((int32_t)-8), ((int32_t)9), /*hidden argument*/NULL);
		V_1 = L_6;
		GameObject_t1756533147 * L_7 = V_0;
		NullCheck(L_7);
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		Vector3_t2243707580  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m2638739322(&L_10, (((float)((float)L_9))), (7.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m2469242620(L_8, L_10, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void GameDirector::.ctor()
extern "C"  void GameDirector__ctor_m1049793193 (GameDirector_t355460854 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameDirector::Start()
extern "C"  void GameDirector_Start_m3774185889 (GameDirector_t355460854 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDirector_Start_m3774185889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral859342876, /*hidden argument*/NULL);
		__this->set_hpGame_2(L_0);
		return;
	}
}
// System.Void GameDirector::Update()
extern "C"  void GameDirector_Update_m3687074872 (GameDirector_t355460854 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameDirector::DecreaseHp()
extern "C"  void GameDirector_DecreaseHp_m763868299 (GameDirector_t355460854 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameDirector_DecreaseHp_m763868299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = __this->get_hpGame_2();
		NullCheck(L_0);
		Image_t2042527209 * L_1 = GameObject_GetComponent_TisImage_t2042527209_m4162535761(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t2042527209_m4162535761_MethodInfo_var);
		Image_t2042527209 * L_2 = L_1;
		NullCheck(L_2);
		float L_3 = Image_get_fillAmount_m3354146540(L_2, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_set_fillAmount_m2220966753(L_2, ((float)((float)L_3-(float)(0.1f))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::LButtonDown()
extern "C"  void PlayerController_LButtonDown_m1320567392 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3577349508(L_0, (-3.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::RButtonDown()
extern "C"  void PlayerController_RButtonDown_m2332885882 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3577349508(L_0, (3.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m4228472513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m3577349508(L_1, (-3.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Translate_m3577349508(L_3, (3.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
