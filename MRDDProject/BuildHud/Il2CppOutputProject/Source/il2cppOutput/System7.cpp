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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.ComponentModel.TypeConverter
struct TypeConverter_t8306AE03734853B551DDF089C1F17836A7764DBB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_t5C00B9ABDAFDD2FFEAAA5C4A6FF01FF0BE58E57B;
// System.UriTypeConverter
struct UriTypeConverter_t96793526764A246FBAEE2F4F639AFAF270EE81D1;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.ComponentModel.TypeConverter
struct  TypeConverter_t8306AE03734853B551DDF089C1F17836A7764DBB  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t8306AE03734853B551DDF089C1F17836A7764DBB_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t8306AE03734853B551DDF089C1F17836A7764DBB_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.UriParser_UriQuirksVersion
struct  UriQuirksVersion_tB044080854D030F26EB17D99FFE997D0FFB8A374 
{
public:
	// System.Int32 System.UriParser_UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_tB044080854D030F26EB17D99FFE997D0FFB8A374, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriSyntaxFlags
struct  UriSyntaxFlags_t8773DD32DE8871701F05FBED115A2B51679D5D46 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t8773DD32DE8871701F05FBED115A2B51679D5D46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.UriParser
struct  UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC  : public RuntimeObject
{
public:
	// System.UriSyntaxFlags System.UriParser::m_Flags
	int32_t ___m_Flags_3;
	// System.UriSyntaxFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlags
	int32_t ___m_UpdatableFlags_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlagsUsed
	bool ___m_UpdatableFlagsUsed_5;
	// System.Int32 System.UriParser::m_Port
	int32_t ___m_Port_7;
	// System.String System.UriParser::m_Scheme
	String_t* ___m_Scheme_8;

public:
	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_4() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC, ___m_UpdatableFlags_4)); }
	inline int32_t get_m_UpdatableFlags_4() const { return ___m_UpdatableFlags_4; }
	inline int32_t* get_address_of_m_UpdatableFlags_4() { return &___m_UpdatableFlags_4; }
	inline void set_m_UpdatableFlags_4(int32_t value)
	{
		___m_UpdatableFlags_4 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_5() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC, ___m_UpdatableFlagsUsed_5)); }
	inline bool get_m_UpdatableFlagsUsed_5() const { return ___m_UpdatableFlagsUsed_5; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_5() { return &___m_UpdatableFlagsUsed_5; }
	inline void set_m_UpdatableFlagsUsed_5(bool value)
	{
		___m_UpdatableFlagsUsed_5 = value;
	}

	inline static int32_t get_offset_of_m_Port_7() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC, ___m_Port_7)); }
	inline int32_t get_m_Port_7() const { return ___m_Port_7; }
	inline int32_t* get_address_of_m_Port_7() { return &___m_Port_7; }
	inline void set_m_Port_7(int32_t value)
	{
		___m_Port_7 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_8() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC, ___m_Scheme_8)); }
	inline String_t* get_m_Scheme_8() const { return ___m_Scheme_8; }
	inline String_t** get_address_of_m_Scheme_8() { return &___m_Scheme_8; }
	inline void set_m_Scheme_8(String_t* value)
	{
		___m_Scheme_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheme_8), (void*)value);
	}
};

struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE * ___m_Table_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE * ___m_TempTable_2;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___HttpUri_11;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___HttpsUri_12;
	// System.UriParser System.UriParser::WsUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___WsUri_13;
	// System.UriParser System.UriParser::WssUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___WssUri_14;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___FtpUri_15;
	// System.UriParser System.UriParser::FileUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___FileUri_16;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___GopherUri_17;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___NntpUri_18;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___NewsUri_19;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___MailToUri_20;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___UuidUri_21;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___TelnetUri_22;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___LdapUri_23;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___NetTcpUri_24;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___NetPipeUri_25;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___VsMacrosUri_26;
	// System.UriParser_UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_27;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_30;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_32;

public:
	inline static int32_t get_offset_of_m_Table_1() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___m_Table_1)); }
	inline Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE * get_m_Table_1() const { return ___m_Table_1; }
	inline Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE ** get_address_of_m_Table_1() { return &___m_Table_1; }
	inline void set_m_Table_1(Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE * value)
	{
		___m_Table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Table_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempTable_2() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___m_TempTable_2)); }
	inline Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE * get_m_TempTable_2() const { return ___m_TempTable_2; }
	inline Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE ** get_address_of_m_TempTable_2() { return &___m_TempTable_2; }
	inline void set_m_TempTable_2(Dictionary_2_tB0B3F0D7A7E98EDBC0C35218EEA8560D1F0CCFCE * value)
	{
		___m_TempTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempTable_2), (void*)value);
	}

	inline static int32_t get_offset_of_HttpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___HttpUri_11)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_HttpUri_11() const { return ___HttpUri_11; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_HttpUri_11() { return &___HttpUri_11; }
	inline void set_HttpUri_11(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___HttpUri_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpUri_11), (void*)value);
	}

	inline static int32_t get_offset_of_HttpsUri_12() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___HttpsUri_12)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_HttpsUri_12() const { return ___HttpsUri_12; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_HttpsUri_12() { return &___HttpsUri_12; }
	inline void set_HttpsUri_12(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___HttpsUri_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpsUri_12), (void*)value);
	}

	inline static int32_t get_offset_of_WsUri_13() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___WsUri_13)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_WsUri_13() const { return ___WsUri_13; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_WsUri_13() { return &___WsUri_13; }
	inline void set_WsUri_13(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___WsUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WsUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_WssUri_14() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___WssUri_14)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_WssUri_14() const { return ___WssUri_14; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_WssUri_14() { return &___WssUri_14; }
	inline void set_WssUri_14(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___WssUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WssUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_FtpUri_15() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___FtpUri_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_FtpUri_15() const { return ___FtpUri_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_FtpUri_15() { return &___FtpUri_15; }
	inline void set_FtpUri_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___FtpUri_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FtpUri_15), (void*)value);
	}

	inline static int32_t get_offset_of_FileUri_16() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___FileUri_16)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_FileUri_16() const { return ___FileUri_16; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_FileUri_16() { return &___FileUri_16; }
	inline void set_FileUri_16(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___FileUri_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileUri_16), (void*)value);
	}

	inline static int32_t get_offset_of_GopherUri_17() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___GopherUri_17)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_GopherUri_17() const { return ___GopherUri_17; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_GopherUri_17() { return &___GopherUri_17; }
	inline void set_GopherUri_17(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___GopherUri_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GopherUri_17), (void*)value);
	}

	inline static int32_t get_offset_of_NntpUri_18() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___NntpUri_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_NntpUri_18() const { return ___NntpUri_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_NntpUri_18() { return &___NntpUri_18; }
	inline void set_NntpUri_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___NntpUri_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NntpUri_18), (void*)value);
	}

	inline static int32_t get_offset_of_NewsUri_19() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___NewsUri_19)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_NewsUri_19() const { return ___NewsUri_19; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_NewsUri_19() { return &___NewsUri_19; }
	inline void set_NewsUri_19(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___NewsUri_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewsUri_19), (void*)value);
	}

	inline static int32_t get_offset_of_MailToUri_20() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___MailToUri_20)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_MailToUri_20() const { return ___MailToUri_20; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_MailToUri_20() { return &___MailToUri_20; }
	inline void set_MailToUri_20(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___MailToUri_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MailToUri_20), (void*)value);
	}

	inline static int32_t get_offset_of_UuidUri_21() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___UuidUri_21)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_UuidUri_21() const { return ___UuidUri_21; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_UuidUri_21() { return &___UuidUri_21; }
	inline void set_UuidUri_21(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___UuidUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UuidUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_TelnetUri_22() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___TelnetUri_22)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_TelnetUri_22() const { return ___TelnetUri_22; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_TelnetUri_22() { return &___TelnetUri_22; }
	inline void set_TelnetUri_22(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___TelnetUri_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TelnetUri_22), (void*)value);
	}

	inline static int32_t get_offset_of_LdapUri_23() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___LdapUri_23)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_LdapUri_23() const { return ___LdapUri_23; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_LdapUri_23() { return &___LdapUri_23; }
	inline void set_LdapUri_23(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___LdapUri_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LdapUri_23), (void*)value);
	}

	inline static int32_t get_offset_of_NetTcpUri_24() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___NetTcpUri_24)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_NetTcpUri_24() const { return ___NetTcpUri_24; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_NetTcpUri_24() { return &___NetTcpUri_24; }
	inline void set_NetTcpUri_24(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___NetTcpUri_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetTcpUri_24), (void*)value);
	}

	inline static int32_t get_offset_of_NetPipeUri_25() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___NetPipeUri_25)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_NetPipeUri_25() const { return ___NetPipeUri_25; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_NetPipeUri_25() { return &___NetPipeUri_25; }
	inline void set_NetPipeUri_25(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___NetPipeUri_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetPipeUri_25), (void*)value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_26() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___VsMacrosUri_26)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_VsMacrosUri_26() const { return ___VsMacrosUri_26; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_VsMacrosUri_26() { return &___VsMacrosUri_26; }
	inline void set_VsMacrosUri_26(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___VsMacrosUri_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VsMacrosUri_26), (void*)value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_27() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___s_QuirksVersion_27)); }
	inline int32_t get_s_QuirksVersion_27() const { return ___s_QuirksVersion_27; }
	inline int32_t* get_address_of_s_QuirksVersion_27() { return &___s_QuirksVersion_27; }
	inline void set_s_QuirksVersion_27(int32_t value)
	{
		___s_QuirksVersion_27 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_30() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___HttpSyntaxFlags_30)); }
	inline int32_t get_HttpSyntaxFlags_30() const { return ___HttpSyntaxFlags_30; }
	inline int32_t* get_address_of_HttpSyntaxFlags_30() { return &___HttpSyntaxFlags_30; }
	inline void set_HttpSyntaxFlags_30(int32_t value)
	{
		___HttpSyntaxFlags_30 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_32() { return static_cast<int32_t>(offsetof(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_StaticFields, ___FileSyntaxFlags_32)); }
	inline int32_t get_FileSyntaxFlags_32() const { return ___FileSyntaxFlags_32; }
	inline int32_t* get_address_of_FileSyntaxFlags_32() { return &___FileSyntaxFlags_32; }
	inline void set_FileSyntaxFlags_32(int32_t value)
	{
		___FileSyntaxFlags_32 = value;
	}
};


// System.UriTypeConverter
struct  UriTypeConverter_t96793526764A246FBAEE2F4F639AFAF270EE81D1  : public TypeConverter_t8306AE03734853B551DDF089C1F17836A7764DBB
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.UriParser_BuiltInUriParser
struct  BuiltInUriParser_t5C00B9ABDAFDD2FFEAAA5C4A6FF01FF0BE58E57B  : public UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC
{
public:

public:
};


// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5  : public NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010
{
public:

public:
};


// Unity.ThrowStub
struct  ThrowStub_t03526C535287FADF58CBFA05084AE89A0ACFFEFA  : public ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__ctor_mAF168F2B88BC5301B722C1BAAD45E381FBA22E3D (UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_m7F8A006E775CCB83A8ACB042B296E48B0AE501CD (TypeConverter_t8306AE03734853B551DDF089C1F17836A7764DBB * __this, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_m651139B17C9EE918551490BC675754EA8EA3E7C7 (PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UriParser_BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C (BuiltInUriParser_t5C00B9ABDAFDD2FFEAAA5C4A6FF01FF0BE58E57B * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___syntaxFlags2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC_il2cpp_TypeInfo_var);
		UriParser__ctor_mAF168F2B88BC5301B722C1BAAD45E381FBA22E3D(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)131072)))|(int32_t)((int32_t)262144))), /*hidden argument*/NULL);
		String_t* L_1 = ___lwrCaseScheme0;
		((UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC *)__this)->set_m_Scheme_8(L_1);
		int32_t L_2 = ___defaultPort1;
		((UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC *)__this)->set_m_Port_7(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void System.UriTypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriTypeConverter__ctor_m1CAEEF1C615B28212B83C76D892938E0A77D3A64 (UriTypeConverter_t96793526764A246FBAEE2F4F639AFAF270EE81D1 * __this, const RuntimeMethod* method)
{
	{
		TypeConverter__ctor_m7F8A006E775CCB83A8ACB042B296E48B0AE501CD(__this, /*hidden argument*/NULL);
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD ()
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5 * L_0 = (PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5 *)il2cpp_codegen_object_new(PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m651139B17C9EE918551490BC675754EA8EA3E7C7(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
