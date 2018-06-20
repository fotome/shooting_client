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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// blt
struct blt_t3558632014;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// System.String
struct String_t;
// bullet
struct bullet_t1042139039;
// distory
struct distory_t2089667295;
// enemy01
struct enemy01_t1811499032;
// Fighter
struct Fighter_t1911001889;
// generator
struct generator_t2248347620;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t blt_Update_m2850627006_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern String_t* _stringLiteral1150785098;
extern const uint32_t blt_OnTriggerEnter2D_m1268379245_MetadataUsageId;
extern const uint32_t bullet_Update_m2036823458_MetadataUsageId;
extern const uint32_t bullet_OnTriggerEnter2D_m4058301428_MetadataUsageId;
extern const uint32_t distory_Update_m940243883_MetadataUsageId;
extern String_t* _stringLiteral760903947;
extern const uint32_t enemy01_Start_m765698321_MetadataUsageId;
extern const uint32_t enemy01_Update_m4171172846_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t Fighter_Update_m2300369161_MetadataUsageId;
extern String_t* _stringLiteral2289949373;
extern const uint32_t generator_Start_m2563546928_MetadataUsageId;
extern const uint32_t generator_GenRock_m1207304955_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef FIGHTER_T1911001889_H
#define FIGHTER_T1911001889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fighter
struct  Fighter_t1911001889  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Fighter::bulletPrefab
	GameObject_t1113636619 * ___bulletPrefab_2;
	// System.Single Fighter::timeleft
	float ___timeleft_3;
	// System.Single Fighter::sp
	float ___sp_4;

public:
	inline static int32_t get_offset_of_bulletPrefab_2() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___bulletPrefab_2)); }
	inline GameObject_t1113636619 * get_bulletPrefab_2() const { return ___bulletPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_bulletPrefab_2() { return &___bulletPrefab_2; }
	inline void set_bulletPrefab_2(GameObject_t1113636619 * value)
	{
		___bulletPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___bulletPrefab_2), value);
	}

	inline static int32_t get_offset_of_timeleft_3() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___timeleft_3)); }
	inline float get_timeleft_3() const { return ___timeleft_3; }
	inline float* get_address_of_timeleft_3() { return &___timeleft_3; }
	inline void set_timeleft_3(float value)
	{
		___timeleft_3 = value;
	}

	inline static int32_t get_offset_of_sp_4() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___sp_4)); }
	inline float get_sp_4() const { return ___sp_4; }
	inline float* get_address_of_sp_4() { return &___sp_4; }
	inline void set_sp_4(float value)
	{
		___sp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIGHTER_T1911001889_H
#ifndef DISTORY_T2089667295_H
#define DISTORY_T2089667295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// distory
struct  distory_t2089667295  : public MonoBehaviour_t3962482529
{
public:
	// System.Single distory::timeleft
	float ___timeleft_2;

public:
	inline static int32_t get_offset_of_timeleft_2() { return static_cast<int32_t>(offsetof(distory_t2089667295, ___timeleft_2)); }
	inline float get_timeleft_2() const { return ___timeleft_2; }
	inline float* get_address_of_timeleft_2() { return &___timeleft_2; }
	inline void set_timeleft_2(float value)
	{
		___timeleft_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISTORY_T2089667295_H
#ifndef BULLET_T1042139039_H
#define BULLET_T1042139039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bullet
struct  bullet_t1042139039  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject bullet::explosionPrefab
	GameObject_t1113636619 * ___explosionPrefab_2;

public:
	inline static int32_t get_offset_of_explosionPrefab_2() { return static_cast<int32_t>(offsetof(bullet_t1042139039, ___explosionPrefab_2)); }
	inline GameObject_t1113636619 * get_explosionPrefab_2() const { return ___explosionPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_explosionPrefab_2() { return &___explosionPrefab_2; }
	inline void set_explosionPrefab_2(GameObject_t1113636619 * value)
	{
		___explosionPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosionPrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLET_T1042139039_H
#ifndef GENERATOR_T2248347620_H
#define GENERATOR_T2248347620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// generator
struct  generator_t2248347620  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject generator::rockPrefab
	GameObject_t1113636619 * ___rockPrefab_2;

public:
	inline static int32_t get_offset_of_rockPrefab_2() { return static_cast<int32_t>(offsetof(generator_t2248347620, ___rockPrefab_2)); }
	inline GameObject_t1113636619 * get_rockPrefab_2() const { return ___rockPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_rockPrefab_2() { return &___rockPrefab_2; }
	inline void set_rockPrefab_2(GameObject_t1113636619 * value)
	{
		___rockPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___rockPrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATOR_T2248347620_H
#ifndef BLT_T3558632014_H
#define BLT_T3558632014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// blt
struct  blt_t3558632014  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject blt::explosionPrefab
	GameObject_t1113636619 * ___explosionPrefab_2;
	// UnityEngine.GameObject blt::gameover
	GameObject_t1113636619 * ___gameover_3;

public:
	inline static int32_t get_offset_of_explosionPrefab_2() { return static_cast<int32_t>(offsetof(blt_t3558632014, ___explosionPrefab_2)); }
	inline GameObject_t1113636619 * get_explosionPrefab_2() const { return ___explosionPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_explosionPrefab_2() { return &___explosionPrefab_2; }
	inline void set_explosionPrefab_2(GameObject_t1113636619 * value)
	{
		___explosionPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosionPrefab_2), value);
	}

	inline static int32_t get_offset_of_gameover_3() { return static_cast<int32_t>(offsetof(blt_t3558632014, ___gameover_3)); }
	inline GameObject_t1113636619 * get_gameover_3() const { return ___gameover_3; }
	inline GameObject_t1113636619 ** get_address_of_gameover_3() { return &___gameover_3; }
	inline void set_gameover_3(GameObject_t1113636619 * value)
	{
		___gameover_3 = value;
		Il2CppCodeGenWriteBarrier((&___gameover_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLT_T3558632014_H
#ifndef ENEMY01_T1811499032_H
#define ENEMY01_T1811499032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// enemy01
struct  enemy01_t1811499032  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject enemy01::bulletPrefab
	GameObject_t1113636619 * ___bulletPrefab_2;
	// System.Single enemy01::timeleft
	float ___timeleft_3;
	// System.Single enemy01::timeleft2
	float ___timeleft2_4;
	// System.Single enemy01::fallSpeed
	float ___fallSpeed_5;
	// System.Single enemy01::rotSpeed
	float ___rotSpeed_6;
	// System.String enemy01::name
	String_t* ___name_7;

public:
	inline static int32_t get_offset_of_bulletPrefab_2() { return static_cast<int32_t>(offsetof(enemy01_t1811499032, ___bulletPrefab_2)); }
	inline GameObject_t1113636619 * get_bulletPrefab_2() const { return ___bulletPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_bulletPrefab_2() { return &___bulletPrefab_2; }
	inline void set_bulletPrefab_2(GameObject_t1113636619 * value)
	{
		___bulletPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___bulletPrefab_2), value);
	}

	inline static int32_t get_offset_of_timeleft_3() { return static_cast<int32_t>(offsetof(enemy01_t1811499032, ___timeleft_3)); }
	inline float get_timeleft_3() const { return ___timeleft_3; }
	inline float* get_address_of_timeleft_3() { return &___timeleft_3; }
	inline void set_timeleft_3(float value)
	{
		___timeleft_3 = value;
	}

	inline static int32_t get_offset_of_timeleft2_4() { return static_cast<int32_t>(offsetof(enemy01_t1811499032, ___timeleft2_4)); }
	inline float get_timeleft2_4() const { return ___timeleft2_4; }
	inline float* get_address_of_timeleft2_4() { return &___timeleft2_4; }
	inline void set_timeleft2_4(float value)
	{
		___timeleft2_4 = value;
	}

	inline static int32_t get_offset_of_fallSpeed_5() { return static_cast<int32_t>(offsetof(enemy01_t1811499032, ___fallSpeed_5)); }
	inline float get_fallSpeed_5() const { return ___fallSpeed_5; }
	inline float* get_address_of_fallSpeed_5() { return &___fallSpeed_5; }
	inline void set_fallSpeed_5(float value)
	{
		___fallSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rotSpeed_6() { return static_cast<int32_t>(offsetof(enemy01_t1811499032, ___rotSpeed_6)); }
	inline float get_rotSpeed_6() const { return ___rotSpeed_6; }
	inline float* get_address_of_rotSpeed_6() { return &___rotSpeed_6; }
	inline void set_rotSpeed_6(float value)
	{
		___rotSpeed_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(enemy01_t1811499032, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY01_T1811499032_H


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3762500149 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  Input_GetTouch_m2192712756 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C"  Vector2_t2156229523  Touch_get_deltaPosition_m2389653382 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Sign(System.Single)
extern "C"  int32_t Math_Sign_m1545180090 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3172098886 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C"  void Transform_Translate_m2198936091 (Transform_t3600365921 * __this, float p0, float p1, float p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void blt::.ctor()
extern "C"  void blt__ctor_m457064111 (blt_t3558632014 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void blt::Start()
extern "C"  void blt_Start_m3287469489 (blt_t3558632014 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void blt::Update()
extern "C"  void blt_Update_m2850627006 (blt_t3558632014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blt_Update_m2850627006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3762500149(L_0, (0.0f), (-0.05f), (0.0f), /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		if ((!(((float)L_3) < ((float)(-5.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void blt::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void blt_OnTriggerEnter2D_m1268379245 (blt_t3558632014 * __this, Collider2D_t2806799626 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blt_OnTriggerEnter2D_m1268379245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___coll0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_3 = ___coll0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_m4211327027(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral1150785098, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		GameObject_t1113636619 * L_7 = __this->get_explosionPrefab_2();
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_10 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_7, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_12 = ___coll0;
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = __this->get_gameover_3();
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m3353183577((&L_15), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bullet::.ctor()
extern "C"  void bullet__ctor_m2784197546 (bullet_t1042139039 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void bullet::Update()
extern "C"  void bullet_Update_m2036823458 (bullet_t1042139039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (bullet_Update_m2036823458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3762500149(L_0, (0.0f), (0.2f), (0.0f), /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		if ((!(((float)L_3) > ((float)(5.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void bullet_OnTriggerEnter2D_m4058301428 (bullet_t1042139039 * __this, Collider2D_t2806799626 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (bullet_OnTriggerEnter2D_m4058301428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___coll0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral1150785098, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		GameObject_t1113636619 * L_4 = __this->get_explosionPrefab_2();
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_7 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_4, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_9 = ___coll0;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void distory::.ctor()
extern "C"  void distory__ctor_m3130392234 (distory_t2089667295 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void distory::Start()
extern "C"  void distory_Start_m2182829830 (distory_t2089667295 * __this, const RuntimeMethod* method)
{
	{
		__this->set_timeleft_2((0.5f));
		return;
	}
}
// System.Void distory::Update()
extern "C"  void distory_Update_m940243883 (distory_t2089667295 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (distory_Update_m940243883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timeleft_2();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeleft_2(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_2 = __this->get_timeleft_2();
		if ((!(((double)(((double)((double)L_2)))) <= ((double)(0.0)))))
		{
			goto IL_003d;
		}
	}
	{
		__this->set_timeleft_2((0.5f));
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void enemy01::.ctor()
extern "C"  void enemy01__ctor_m2726544871 (enemy01_t1811499032 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void enemy01::Start()
extern "C"  void enemy01_Start_m765698321 (enemy01_t1811499032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (enemy01_Start_m765698321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_fallSpeed_5((1.0f));
		__this->set_timeleft2_4((4.0f));
		__this->set_name_7(_stringLiteral760903947);
		return;
	}
}
// System.Void enemy01::Update()
extern "C"  void enemy01_Update_m4171172846 (enemy01_t1811499032 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (enemy01_Update_m4171172846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = __this->get_timeleft2_4();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeleft2_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_2();
		if ((((float)L_4) > ((float)(3.0f))))
		{
			goto IL_0044;
		}
	}
	{
		float L_5 = __this->get_timeleft2_4();
		if ((!(((double)(((double)((double)L_5)))) <= ((double)(0.0)))))
		{
			goto IL_005e;
		}
	}

IL_0044:
	{
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_Translate_m3762500149(L_6, (0.0f), (-0.1f), (0.0f), /*hidden argument*/NULL);
	}

IL_005e:
	{
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_y_2();
		if ((!(((float)L_9) < ((float)(-5.5f)))))
		{
			goto IL_0086;
		}
	}
	{
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0086:
	{
		float L_11 = __this->get_timeleft_3();
		float L_12 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeleft_3(((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)));
		float L_13 = __this->get_timeleft_3();
		if ((!(((double)(((double)((double)L_13)))) <= ((double)(0.0)))))
		{
			goto IL_00d4;
		}
	}
	{
		__this->set_timeleft_3((1.0f));
		GameObject_t1113636619 * L_14 = __this->get_bulletPrefab_2();
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_14, L_16, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_00d4:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fighter::.ctor()
extern "C"  void Fighter__ctor_m4177725304 (Fighter_t1911001889 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Fighter::Start()
extern "C"  void Fighter_Start_m295528688 (Fighter_t1911001889 * __this, const RuntimeMethod* method)
{
	{
		__this->set_sp_4((0.0f));
		return;
	}
}
// System.Void Fighter::Update()
extern "C"  void Fighter_Update_m2300369161 (Fighter_t1911001889 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Fighter_Update_m2300369161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t1921856868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_1 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2_t2156229523  L_2 = Touch_get_deltaPosition_m2389653382((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = (&V_2)->get_x_0();
		V_1 = L_3;
		Vector2_t2156229523  L_4 = Touch_get_deltaPosition_m2389653382((Touch_t1921856868 *)(&V_0), /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5 = (&V_4)->get_y_1();
		V_3 = L_5;
		V_5 = (0.2f);
		float L_6 = V_1;
		int32_t L_7 = Math_Sign_m1545180090(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		float L_8 = V_5;
		V_6 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_7))), (float)L_8));
		float L_9 = V_3;
		int32_t L_10 = Math_Sign_m1545180090(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		float L_11 = V_5;
		V_7 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_10))), (float)L_11));
		float L_12 = V_1;
		int32_t L_13 = Math_Sign_m1545180090(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		float L_14 = __this->get_sp_4();
		if ((!(((float)L_14) < ((float)(45.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Rotate_m3172098886(L_15, (0.0f), (9.0f), (0.0f), /*hidden argument*/NULL);
		float L_16 = __this->get_sp_4();
		__this->set_sp_4(((float)il2cpp_codegen_add((float)L_16, (float)(9.0f))));
		goto IL_00e7;
	}

IL_009f:
	{
		float L_17 = V_1;
		int32_t L_18 = Math_Sign_m1545180090(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00e7;
		}
	}
	{
		float L_19 = __this->get_sp_4();
		if ((!(((float)L_19) > ((float)(-45.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_Rotate_m3172098886(L_20, (0.0f), (-9.0f), (0.0f), /*hidden argument*/NULL);
		float L_21 = __this->get_sp_4();
		__this->set_sp_4(((float)il2cpp_codegen_subtract((float)L_21, (float)(9.0f))));
	}

IL_00e7:
	{
		float L_22 = __this->get_sp_4();
		float L_23 = L_22;
		RuntimeObject * L_24 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Transform_t3600365921 * L_25 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_26 = V_6;
		float L_27 = V_7;
		NullCheck(L_25);
		Transform_Translate_m2198936091(L_25, L_26, L_27, (0.0f), 0, /*hidden argument*/NULL);
	}

IL_010c:
	{
		float L_28 = __this->get_timeleft_3();
		float L_29 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeleft_3(((float)il2cpp_codegen_subtract((float)L_28, (float)L_29)));
		float L_30 = __this->get_timeleft_3();
		if ((!(((double)(((double)((double)L_30)))) <= ((double)(0.0)))))
		{
			goto IL_015a;
		}
	}
	{
		__this->set_timeleft_3((0.2f));
		GameObject_t1113636619 * L_31 = __this->get_bulletPrefab_2();
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t3722313464  L_33 = Transform_get_position_m36019626(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_34 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_31, L_33, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
	}

IL_015a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void generator::.ctor()
extern "C"  void generator__ctor_m4286427422 (generator_t2248347620 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void generator::Start()
extern "C"  void generator_Start_m2563546928 (generator_t2248347620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (generator_Start_m2563546928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral2289949373, (1.0f), (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void generator::GenRock()
extern "C"  void generator_GenRock_m1207304955 (generator_t2248347620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (generator_GenRock_m1207304955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_rockPrefab_2();
		float L_1 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), ((float)il2cpp_codegen_add((float)(-2.5f), (float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_1)))), (6.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
