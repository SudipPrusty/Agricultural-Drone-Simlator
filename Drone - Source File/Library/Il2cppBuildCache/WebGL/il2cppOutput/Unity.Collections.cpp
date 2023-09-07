#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t0E30752C5EA9622DD2335FB26295952F020EE7B6;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tC3711779D00EFADD8F826DD8391CFD36FC1B912F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Collections.AllocatorManager/TryFunction
struct TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD340F1F606D694947CB4E58B320255D774D9D1;
IL2CPP_EXTERN_C String_t* _stringLiteralC4AF14D05765293C16D660724C9F21E86D48DB68;
IL2CPP_EXTERN_C const RuntimeMethod* AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AllocatorManager_Allocate_mA6D3BF21211707CD0A5FA130CE11644ABB716DC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AllocatorManager_Free_m4E2F9DD1409BDF4C8F7E921ECA6B04C6211BDA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1__ctor_m92C77EB48A342557154A375324F893CFCFD51657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_m9BFBB377D907CD63E0E0CB9B0E9CCA50AFD39DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_GetOrCreate_TisStaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_m25C97CA22DFF1BB7C7F56FD619FDA724B73DF582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t33D934E932773D4D78D08B212289D6976595E707 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.CollectionHelper
struct CollectionHelper_tC31F1DBFA15312C1B0C4806A93AD460DBBC4FFB9  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.ListExtensions
struct ListExtensions_tFDAC7003F9DA584518E728C80C990E5F111BF79F  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility
struct NativeListUnsafeUtility_t92F5085BBA58C1257A91EC8D3A5AE825956F4C29  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/TableEntry65536>
struct SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1 
{
public:
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1, ____buffer_0)); }
	inline void* get__buffer_0() const { return ____buffer_0; }
	inline void** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(void* value)
	{
		____buffer_0 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t0E30752C5EA9622DD2335FB26295952F020EE7B6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tC3711779D00EFADD8F826DD8391CFD36FC1B912F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A 
{
public:
	// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// Unity.Collections.AllocatorManager/BlockHandle
struct BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD 
{
public:
	// System.UInt16 Unity.Collections.AllocatorManager/BlockHandle::Value
	uint16_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD, ___Value_0)); }
	inline uint16_t get_Value_0() const { return ___Value_0; }
	inline uint16_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint16_t value)
	{
		___Value_0 = value;
	}
};


// Unity.Collections.AllocatorManager/SmallAllocatorHandle
struct SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD 
{
public:
	// System.UInt16 Unity.Collections.AllocatorManager/SmallAllocatorHandle::Value
	uint16_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD, ___Value_0)); }
	inline uint16_t get_Value_0() const { return ___Value_0; }
	inline uint16_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint16_t value)
	{
		___Value_0 = value;
	}
};


// Unity.Mathematics.math/LongDoubleUnion
struct LongDoubleUnion_t9E9847FB618DDAD09222E99804271A9E19F52097 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Mathematics.math/LongDoubleUnion::longValue
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Mathematics.math/LongDoubleUnion::doubleValue
			double ___doubleValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_longValue_0() { return static_cast<int32_t>(offsetof(LongDoubleUnion_t9E9847FB618DDAD09222E99804271A9E19F52097, ___longValue_0)); }
	inline int64_t get_longValue_0() const { return ___longValue_0; }
	inline int64_t* get_address_of_longValue_0() { return &___longValue_0; }
	inline void set_longValue_0(int64_t value)
	{
		___longValue_0 = value;
	}

	inline static int32_t get_offset_of_doubleValue_1() { return static_cast<int32_t>(offsetof(LongDoubleUnion_t9E9847FB618DDAD09222E99804271A9E19F52097, ___doubleValue_1)); }
	inline double get_doubleValue_1() const { return ___doubleValue_1; }
	inline double* get_address_of_doubleValue_1() { return &___doubleValue_1; }
	inline void set_doubleValue_1(double value)
	{
		___doubleValue_1 = value;
	}
};


// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Burst.FunctionPointer`1<Unity.Collections.AllocatorManager/TryFunction>
struct FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.AllocatorManager
struct AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32  : public RuntimeObject
{
public:

public:
};

struct AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields
{
public:
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::Invalid
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___Invalid_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::None
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___None_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::Temp
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___Temp_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::TempJob
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___TempJob_3;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::Persistent
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___Persistent_4;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager::AudioKernel
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___AudioKernel_5;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields, ___Invalid_0)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_Invalid_0() const { return ___Invalid_0; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___Invalid_0 = value;
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields, ___None_1)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_None_1() const { return ___None_1; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___None_1 = value;
	}

	inline static int32_t get_offset_of_Temp_2() { return static_cast<int32_t>(offsetof(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields, ___Temp_2)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_Temp_2() const { return ___Temp_2; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_Temp_2() { return &___Temp_2; }
	inline void set_Temp_2(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___Temp_2 = value;
	}

	inline static int32_t get_offset_of_TempJob_3() { return static_cast<int32_t>(offsetof(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields, ___TempJob_3)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_TempJob_3() const { return ___TempJob_3; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_TempJob_3() { return &___TempJob_3; }
	inline void set_TempJob_3(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___TempJob_3 = value;
	}

	inline static int32_t get_offset_of_Persistent_4() { return static_cast<int32_t>(offsetof(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields, ___Persistent_4)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_Persistent_4() const { return ___Persistent_4; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_Persistent_4() { return &___Persistent_4; }
	inline void set_Persistent_4(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___Persistent_4 = value;
	}

	inline static int32_t get_offset_of_AudioKernel_5() { return static_cast<int32_t>(offsetof(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields, ___AudioKernel_5)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_AudioKernel_5() const { return ___AudioKernel_5; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_AudioKernel_5() { return &___AudioKernel_5; }
	inline void set_AudioKernel_5(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___AudioKernel_5 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeList
struct UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA 
{
public:
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList::Ptr
	void* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::Length
	int32_t ___Length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::Capacity
	int32_t ___Capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList::Allocator
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___Allocator_3;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA, ___Ptr_0)); }
	inline void* get_Ptr_0() const { return ___Ptr_0; }
	inline void** get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(void* value)
	{
		___Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_Capacity_2() { return static_cast<int32_t>(offsetof(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA, ___Capacity_2)); }
	inline int32_t get_Capacity_2() const { return ___Capacity_2; }
	inline int32_t* get_address_of_Capacity_2() { return &___Capacity_2; }
	inline void set_Capacity_2(int32_t value)
	{
		___Capacity_2 = value;
	}

	inline static int32_t get_offset_of_Allocator_3() { return static_cast<int32_t>(offsetof(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA, ___Allocator_3)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_Allocator_3() const { return ___Allocator_3; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_Allocator_3() { return &___Allocator_3; }
	inline void set_Allocator_3(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___Allocator_3 = value;
	}
};


// Unity.Collections.AllocatorManager/Range
struct Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 
{
public:
	// System.IntPtr Unity.Collections.AllocatorManager/Range::Pointer
	intptr_t ___Pointer_0;
	// System.Int32 Unity.Collections.AllocatorManager/Range::Items
	int32_t ___Items_1;
	// Unity.Collections.AllocatorManager/SmallAllocatorHandle Unity.Collections.AllocatorManager/Range::Allocator
	SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  ___Allocator_2;
	// Unity.Collections.AllocatorManager/BlockHandle Unity.Collections.AllocatorManager/Range::Block
	BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD  ___Block_3;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Pointer_0)); }
	inline intptr_t get_Pointer_0() const { return ___Pointer_0; }
	inline intptr_t* get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(intptr_t value)
	{
		___Pointer_0 = value;
	}

	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Items_1)); }
	inline int32_t get_Items_1() const { return ___Items_1; }
	inline int32_t* get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(int32_t value)
	{
		___Items_1 = value;
	}

	inline static int32_t get_offset_of_Allocator_2() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Allocator_2)); }
	inline SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  get_Allocator_2() const { return ___Allocator_2; }
	inline SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD * get_address_of_Allocator_2() { return &___Allocator_2; }
	inline void set_Allocator_2(SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  value)
	{
		___Allocator_2 = value;
	}

	inline static int32_t get_offset_of_Block_3() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Block_3)); }
	inline BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD  get_Block_3() const { return ___Block_3; }
	inline BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD * get_address_of_Block_3() { return &___Block_3; }
	inline void set_Block_3(BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD  value)
	{
		___Block_3 = value;
	}
};


// Unity.Collections.AllocatorManager/StaticFunctionTable
struct StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6  : public RuntimeObject
{
public:

public:
};

struct StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_StaticFields
{
public:
	// Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/TableEntry65536> Unity.Collections.AllocatorManager/StaticFunctionTable::Ref
	SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  ___Ref_0;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_StaticFields, ___Ref_0)); }
	inline SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  get_Ref_0() const { return ___Ref_0; }
	inline SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1 * get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  value)
	{
		___Ref_0 = value;
	}
};


// Unity.Collections.AllocatorManager/TableEntry
struct TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 
{
public:
	// System.IntPtr Unity.Collections.AllocatorManager/TableEntry::function
	intptr_t ___function_0;
	// System.IntPtr Unity.Collections.AllocatorManager/TableEntry::state
	intptr_t ___state_1;

public:
	inline static int32_t get_offset_of_function_0() { return static_cast<int32_t>(offsetof(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9, ___function_0)); }
	inline intptr_t get_function_0() const { return ___function_0; }
	inline intptr_t* get_address_of_function_0() { return &___function_0; }
	inline void set_function_0(intptr_t value)
	{
		___function_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9, ___state_1)); }
	inline intptr_t get_state_1() const { return ___state_1; }
	inline intptr_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(intptr_t value)
	{
		___state_1 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Unity.Collections.AllocatorManager/Block
struct Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 
{
public:
	// Unity.Collections.AllocatorManager/Range Unity.Collections.AllocatorManager/Block::Range
	Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  ___Range_0;
	// System.Int32 Unity.Collections.AllocatorManager/Block::BytesPerItem
	int32_t ___BytesPerItem_1;
	// System.Int32 Unity.Collections.AllocatorManager/Block::AllocatedItems
	int32_t ___AllocatedItems_2;
	// System.Byte Unity.Collections.AllocatorManager/Block::Log2Alignment
	uint8_t ___Log2Alignment_3;
	// System.Byte Unity.Collections.AllocatorManager/Block::Padding0
	uint8_t ___Padding0_4;
	// System.UInt16 Unity.Collections.AllocatorManager/Block::Padding1
	uint16_t ___Padding1_5;
	// System.UInt32 Unity.Collections.AllocatorManager/Block::Padding2
	uint32_t ___Padding2_6;

public:
	inline static int32_t get_offset_of_Range_0() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Range_0)); }
	inline Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  get_Range_0() const { return ___Range_0; }
	inline Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * get_address_of_Range_0() { return &___Range_0; }
	inline void set_Range_0(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  value)
	{
		___Range_0 = value;
	}

	inline static int32_t get_offset_of_BytesPerItem_1() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___BytesPerItem_1)); }
	inline int32_t get_BytesPerItem_1() const { return ___BytesPerItem_1; }
	inline int32_t* get_address_of_BytesPerItem_1() { return &___BytesPerItem_1; }
	inline void set_BytesPerItem_1(int32_t value)
	{
		___BytesPerItem_1 = value;
	}

	inline static int32_t get_offset_of_AllocatedItems_2() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___AllocatedItems_2)); }
	inline int32_t get_AllocatedItems_2() const { return ___AllocatedItems_2; }
	inline int32_t* get_address_of_AllocatedItems_2() { return &___AllocatedItems_2; }
	inline void set_AllocatedItems_2(int32_t value)
	{
		___AllocatedItems_2 = value;
	}

	inline static int32_t get_offset_of_Log2Alignment_3() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Log2Alignment_3)); }
	inline uint8_t get_Log2Alignment_3() const { return ___Log2Alignment_3; }
	inline uint8_t* get_address_of_Log2Alignment_3() { return &___Log2Alignment_3; }
	inline void set_Log2Alignment_3(uint8_t value)
	{
		___Log2Alignment_3 = value;
	}

	inline static int32_t get_offset_of_Padding0_4() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Padding0_4)); }
	inline uint8_t get_Padding0_4() const { return ___Padding0_4; }
	inline uint8_t* get_address_of_Padding0_4() { return &___Padding0_4; }
	inline void set_Padding0_4(uint8_t value)
	{
		___Padding0_4 = value;
	}

	inline static int32_t get_offset_of_Padding1_5() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Padding1_5)); }
	inline uint16_t get_Padding1_5() const { return ___Padding1_5; }
	inline uint16_t* get_address_of_Padding1_5() { return &___Padding1_5; }
	inline void set_Padding1_5(uint16_t value)
	{
		___Padding1_5 = value;
	}

	inline static int32_t get_offset_of_Padding2_6() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Padding2_6)); }
	inline uint32_t get_Padding2_6() const { return ___Padding2_6; }
	inline uint32_t* get_address_of_Padding2_6() { return &___Padding2_6; }
	inline void set_Padding2_6(uint32_t value)
	{
		___Padding2_6 = value;
	}
};


// Unity.Collections.AllocatorManager/TableEntry16
struct TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A 
{
public:
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f0
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f0_0;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f1
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f1_1;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f2
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f2_2;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f3
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f3_3;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f4
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f4_4;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f5
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f5_5;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f6
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f6_6;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f7
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f7_7;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f8
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f8_8;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f9
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f9_9;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f10
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f10_10;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f11
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f11_11;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f12
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f12_12;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f13
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f13_13;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f14
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f14_14;
	// Unity.Collections.AllocatorManager/TableEntry Unity.Collections.AllocatorManager/TableEntry16::f15
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  ___f15_15;

public:
	inline static int32_t get_offset_of_f0_0() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f0_0)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f0_0() const { return ___f0_0; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f0_0() { return &___f0_0; }
	inline void set_f0_0(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f0_0 = value;
	}

	inline static int32_t get_offset_of_f1_1() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f1_1)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f1_1() const { return ___f1_1; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f1_1() { return &___f1_1; }
	inline void set_f1_1(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f1_1 = value;
	}

	inline static int32_t get_offset_of_f2_2() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f2_2)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f2_2() const { return ___f2_2; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f2_2() { return &___f2_2; }
	inline void set_f2_2(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f2_2 = value;
	}

	inline static int32_t get_offset_of_f3_3() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f3_3)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f3_3() const { return ___f3_3; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f3_3() { return &___f3_3; }
	inline void set_f3_3(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f3_3 = value;
	}

	inline static int32_t get_offset_of_f4_4() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f4_4)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f4_4() const { return ___f4_4; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f4_4() { return &___f4_4; }
	inline void set_f4_4(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f4_4 = value;
	}

	inline static int32_t get_offset_of_f5_5() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f5_5)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f5_5() const { return ___f5_5; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f5_5() { return &___f5_5; }
	inline void set_f5_5(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f5_5 = value;
	}

	inline static int32_t get_offset_of_f6_6() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f6_6)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f6_6() const { return ___f6_6; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f6_6() { return &___f6_6; }
	inline void set_f6_6(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f6_6 = value;
	}

	inline static int32_t get_offset_of_f7_7() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f7_7)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f7_7() const { return ___f7_7; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f7_7() { return &___f7_7; }
	inline void set_f7_7(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f7_7 = value;
	}

	inline static int32_t get_offset_of_f8_8() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f8_8)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f8_8() const { return ___f8_8; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f8_8() { return &___f8_8; }
	inline void set_f8_8(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f8_8 = value;
	}

	inline static int32_t get_offset_of_f9_9() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f9_9)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f9_9() const { return ___f9_9; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f9_9() { return &___f9_9; }
	inline void set_f9_9(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f9_9 = value;
	}

	inline static int32_t get_offset_of_f10_10() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f10_10)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f10_10() const { return ___f10_10; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f10_10() { return &___f10_10; }
	inline void set_f10_10(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f10_10 = value;
	}

	inline static int32_t get_offset_of_f11_11() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f11_11)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f11_11() const { return ___f11_11; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f11_11() { return &___f11_11; }
	inline void set_f11_11(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f11_11 = value;
	}

	inline static int32_t get_offset_of_f12_12() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f12_12)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f12_12() const { return ___f12_12; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f12_12() { return &___f12_12; }
	inline void set_f12_12(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f12_12 = value;
	}

	inline static int32_t get_offset_of_f13_13() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f13_13)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f13_13() const { return ___f13_13; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f13_13() { return &___f13_13; }
	inline void set_f13_13(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f13_13 = value;
	}

	inline static int32_t get_offset_of_f14_14() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f14_14)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f14_14() const { return ___f14_14; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f14_14() { return &___f14_14; }
	inline void set_f14_14(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f14_14 = value;
	}

	inline static int32_t get_offset_of_f15_15() { return static_cast<int32_t>(offsetof(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A, ___f15_15)); }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  get_f15_15() const { return ___f15_15; }
	inline TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 * get_address_of_f15_15() { return &___f15_15; }
	inline void set_f15_15(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  value)
	{
		___f15_15 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.AllocatorManager/TableEntry256
struct TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 
{
public:
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f0
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f0_0;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f1
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f1_1;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f2
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f2_2;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f3
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f3_3;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f4
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f4_4;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f5
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f5_5;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f6
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f6_6;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f7
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f7_7;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f8
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f8_8;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f9
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f9_9;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f10
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f10_10;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f11
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f11_11;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f12
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f12_12;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f13
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f13_13;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f14
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f14_14;
	// Unity.Collections.AllocatorManager/TableEntry16 Unity.Collections.AllocatorManager/TableEntry256::f15
	TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  ___f15_15;

public:
	inline static int32_t get_offset_of_f0_0() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f0_0)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f0_0() const { return ___f0_0; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f0_0() { return &___f0_0; }
	inline void set_f0_0(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f0_0 = value;
	}

	inline static int32_t get_offset_of_f1_1() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f1_1)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f1_1() const { return ___f1_1; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f1_1() { return &___f1_1; }
	inline void set_f1_1(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f1_1 = value;
	}

	inline static int32_t get_offset_of_f2_2() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f2_2)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f2_2() const { return ___f2_2; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f2_2() { return &___f2_2; }
	inline void set_f2_2(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f2_2 = value;
	}

	inline static int32_t get_offset_of_f3_3() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f3_3)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f3_3() const { return ___f3_3; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f3_3() { return &___f3_3; }
	inline void set_f3_3(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f3_3 = value;
	}

	inline static int32_t get_offset_of_f4_4() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f4_4)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f4_4() const { return ___f4_4; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f4_4() { return &___f4_4; }
	inline void set_f4_4(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f4_4 = value;
	}

	inline static int32_t get_offset_of_f5_5() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f5_5)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f5_5() const { return ___f5_5; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f5_5() { return &___f5_5; }
	inline void set_f5_5(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f5_5 = value;
	}

	inline static int32_t get_offset_of_f6_6() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f6_6)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f6_6() const { return ___f6_6; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f6_6() { return &___f6_6; }
	inline void set_f6_6(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f6_6 = value;
	}

	inline static int32_t get_offset_of_f7_7() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f7_7)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f7_7() const { return ___f7_7; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f7_7() { return &___f7_7; }
	inline void set_f7_7(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f7_7 = value;
	}

	inline static int32_t get_offset_of_f8_8() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f8_8)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f8_8() const { return ___f8_8; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f8_8() { return &___f8_8; }
	inline void set_f8_8(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f8_8 = value;
	}

	inline static int32_t get_offset_of_f9_9() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f9_9)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f9_9() const { return ___f9_9; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f9_9() { return &___f9_9; }
	inline void set_f9_9(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f9_9 = value;
	}

	inline static int32_t get_offset_of_f10_10() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f10_10)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f10_10() const { return ___f10_10; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f10_10() { return &___f10_10; }
	inline void set_f10_10(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f10_10 = value;
	}

	inline static int32_t get_offset_of_f11_11() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f11_11)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f11_11() const { return ___f11_11; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f11_11() { return &___f11_11; }
	inline void set_f11_11(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f11_11 = value;
	}

	inline static int32_t get_offset_of_f12_12() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f12_12)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f12_12() const { return ___f12_12; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f12_12() { return &___f12_12; }
	inline void set_f12_12(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f12_12 = value;
	}

	inline static int32_t get_offset_of_f13_13() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f13_13)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f13_13() const { return ___f13_13; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f13_13() { return &___f13_13; }
	inline void set_f13_13(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f13_13 = value;
	}

	inline static int32_t get_offset_of_f14_14() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f14_14)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f14_14() const { return ___f14_14; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f14_14() { return &___f14_14; }
	inline void set_f14_14(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f14_14 = value;
	}

	inline static int32_t get_offset_of_f15_15() { return static_cast<int32_t>(offsetof(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5, ___f15_15)); }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  get_f15_15() const { return ___f15_15; }
	inline TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A * get_address_of_f15_15() { return &___f15_15; }
	inline void set_f15_15(TableEntry16_tF36640E5B9AE11024ADEC6CDC4E8FE4CD5D0224A  value)
	{
		___f15_15 = value;
	}
};


// Unity.Collections.AllocatorManager/TryFunction
struct TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.AllocatorManager/TableEntry4096
struct TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 
{
public:
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f0
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f0_0;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f1
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f1_1;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f2
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f2_2;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f3
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f3_3;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f4
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f4_4;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f5
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f5_5;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f6
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f6_6;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f7
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f7_7;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f8
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f8_8;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f9
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f9_9;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f10
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f10_10;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f11
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f11_11;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f12
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f12_12;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f13
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f13_13;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f14
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f14_14;
	// Unity.Collections.AllocatorManager/TableEntry256 Unity.Collections.AllocatorManager/TableEntry4096::f15
	TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  ___f15_15;

public:
	inline static int32_t get_offset_of_f0_0() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f0_0)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f0_0() const { return ___f0_0; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f0_0() { return &___f0_0; }
	inline void set_f0_0(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f0_0 = value;
	}

	inline static int32_t get_offset_of_f1_1() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f1_1)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f1_1() const { return ___f1_1; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f1_1() { return &___f1_1; }
	inline void set_f1_1(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f1_1 = value;
	}

	inline static int32_t get_offset_of_f2_2() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f2_2)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f2_2() const { return ___f2_2; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f2_2() { return &___f2_2; }
	inline void set_f2_2(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f2_2 = value;
	}

	inline static int32_t get_offset_of_f3_3() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f3_3)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f3_3() const { return ___f3_3; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f3_3() { return &___f3_3; }
	inline void set_f3_3(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f3_3 = value;
	}

	inline static int32_t get_offset_of_f4_4() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f4_4)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f4_4() const { return ___f4_4; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f4_4() { return &___f4_4; }
	inline void set_f4_4(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f4_4 = value;
	}

	inline static int32_t get_offset_of_f5_5() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f5_5)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f5_5() const { return ___f5_5; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f5_5() { return &___f5_5; }
	inline void set_f5_5(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f5_5 = value;
	}

	inline static int32_t get_offset_of_f6_6() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f6_6)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f6_6() const { return ___f6_6; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f6_6() { return &___f6_6; }
	inline void set_f6_6(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f6_6 = value;
	}

	inline static int32_t get_offset_of_f7_7() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f7_7)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f7_7() const { return ___f7_7; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f7_7() { return &___f7_7; }
	inline void set_f7_7(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f7_7 = value;
	}

	inline static int32_t get_offset_of_f8_8() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f8_8)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f8_8() const { return ___f8_8; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f8_8() { return &___f8_8; }
	inline void set_f8_8(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f8_8 = value;
	}

	inline static int32_t get_offset_of_f9_9() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f9_9)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f9_9() const { return ___f9_9; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f9_9() { return &___f9_9; }
	inline void set_f9_9(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f9_9 = value;
	}

	inline static int32_t get_offset_of_f10_10() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f10_10)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f10_10() const { return ___f10_10; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f10_10() { return &___f10_10; }
	inline void set_f10_10(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f10_10 = value;
	}

	inline static int32_t get_offset_of_f11_11() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f11_11)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f11_11() const { return ___f11_11; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f11_11() { return &___f11_11; }
	inline void set_f11_11(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f11_11 = value;
	}

	inline static int32_t get_offset_of_f12_12() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f12_12)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f12_12() const { return ___f12_12; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f12_12() { return &___f12_12; }
	inline void set_f12_12(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f12_12 = value;
	}

	inline static int32_t get_offset_of_f13_13() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f13_13)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f13_13() const { return ___f13_13; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f13_13() { return &___f13_13; }
	inline void set_f13_13(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f13_13 = value;
	}

	inline static int32_t get_offset_of_f14_14() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f14_14)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f14_14() const { return ___f14_14; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f14_14() { return &___f14_14; }
	inline void set_f14_14(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f14_14 = value;
	}

	inline static int32_t get_offset_of_f15_15() { return static_cast<int32_t>(offsetof(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6, ___f15_15)); }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  get_f15_15() const { return ___f15_15; }
	inline TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5 * get_address_of_f15_15() { return &___f15_15; }
	inline void set_f15_15(TableEntry256_t3FE81DAB1A7064E383E100E32881A599E715D4F5  value)
	{
		___f15_15 = value;
	}
};


// Unity.Collections.AllocatorManager/TableEntry65536
struct TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB 
{
public:
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f0
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f0_0;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f1
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f1_1;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f2
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f2_2;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f3
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f3_3;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f4
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f4_4;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f5
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f5_5;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f6
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f6_6;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f7
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f7_7;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f8
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f8_8;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f9
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f9_9;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f10
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f10_10;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f11
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f11_11;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f12
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f12_12;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f13
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f13_13;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f14
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f14_14;
	// Unity.Collections.AllocatorManager/TableEntry4096 Unity.Collections.AllocatorManager/TableEntry65536::f15
	TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  ___f15_15;

public:
	inline static int32_t get_offset_of_f0_0() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f0_0)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f0_0() const { return ___f0_0; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f0_0() { return &___f0_0; }
	inline void set_f0_0(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f0_0 = value;
	}

	inline static int32_t get_offset_of_f1_1() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f1_1)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f1_1() const { return ___f1_1; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f1_1() { return &___f1_1; }
	inline void set_f1_1(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f1_1 = value;
	}

	inline static int32_t get_offset_of_f2_2() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f2_2)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f2_2() const { return ___f2_2; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f2_2() { return &___f2_2; }
	inline void set_f2_2(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f2_2 = value;
	}

	inline static int32_t get_offset_of_f3_3() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f3_3)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f3_3() const { return ___f3_3; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f3_3() { return &___f3_3; }
	inline void set_f3_3(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f3_3 = value;
	}

	inline static int32_t get_offset_of_f4_4() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f4_4)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f4_4() const { return ___f4_4; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f4_4() { return &___f4_4; }
	inline void set_f4_4(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f4_4 = value;
	}

	inline static int32_t get_offset_of_f5_5() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f5_5)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f5_5() const { return ___f5_5; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f5_5() { return &___f5_5; }
	inline void set_f5_5(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f5_5 = value;
	}

	inline static int32_t get_offset_of_f6_6() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f6_6)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f6_6() const { return ___f6_6; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f6_6() { return &___f6_6; }
	inline void set_f6_6(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f6_6 = value;
	}

	inline static int32_t get_offset_of_f7_7() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f7_7)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f7_7() const { return ___f7_7; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f7_7() { return &___f7_7; }
	inline void set_f7_7(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f7_7 = value;
	}

	inline static int32_t get_offset_of_f8_8() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f8_8)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f8_8() const { return ___f8_8; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f8_8() { return &___f8_8; }
	inline void set_f8_8(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f8_8 = value;
	}

	inline static int32_t get_offset_of_f9_9() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f9_9)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f9_9() const { return ___f9_9; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f9_9() { return &___f9_9; }
	inline void set_f9_9(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f9_9 = value;
	}

	inline static int32_t get_offset_of_f10_10() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f10_10)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f10_10() const { return ___f10_10; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f10_10() { return &___f10_10; }
	inline void set_f10_10(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f10_10 = value;
	}

	inline static int32_t get_offset_of_f11_11() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f11_11)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f11_11() const { return ___f11_11; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f11_11() { return &___f11_11; }
	inline void set_f11_11(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f11_11 = value;
	}

	inline static int32_t get_offset_of_f12_12() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f12_12)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f12_12() const { return ___f12_12; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f12_12() { return &___f12_12; }
	inline void set_f12_12(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f12_12 = value;
	}

	inline static int32_t get_offset_of_f13_13() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f13_13)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f13_13() const { return ___f13_13; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f13_13() { return &___f13_13; }
	inline void set_f13_13(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f13_13 = value;
	}

	inline static int32_t get_offset_of_f14_14() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f14_14)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f14_14() const { return ___f14_14; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f14_14() { return &___f14_14; }
	inline void set_f14_14(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f14_14 = value;
	}

	inline static int32_t get_offset_of_f15_15() { return static_cast<int32_t>(offsetof(TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB, ___f15_15)); }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  get_f15_15() const { return ___f15_15; }
	inline TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6 * get_address_of_f15_15() { return &___f15_15; }
	inline void set_f15_15(TableEntry4096_t950AFE74EE0480F8973F65DF47D8BAA60A9D26A6  value)
	{
		___f15_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0& Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/TableEntry65536>::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB * SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA_gshared (SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.FunctionPointer`1<System.Object>::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mCF847800D918BA18150DD1FD8F9A6FA34C2DD9F4_gshared_inline (FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 * __this, intptr_t ___ptr0, const RuntimeMethod* method);
// !0 Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FunctionPointer_1_get_Invoke_m142905CFEEF6A1EC8290685C247CBDA721AFA95D_gshared (FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 * __this, const RuntimeMethod* method);
// T* Unity.Collections.AllocatorManager::Allocate<Unity.Collections.LowLevel.Unsafe.UnsafeList>(Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29_gshared (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, int32_t ___items1, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeList>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794_gshared (const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager::Free<Unity.Collections.LowLevel.Unsafe.UnsafeList>(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403_gshared (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * ___pointer1, int32_t ___items2, const RuntimeMethod* method);
// Unity.Burst.SharedStatic`1<!0> Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/TableEntry65536>::GetOrCreate<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  SharedStatic_1_GetOrCreate_TisRuntimeObject_mE8FF9927486064704F47C908212FB43E0C226306_gshared (uint32_t ___alignment0, const RuntimeMethod* method);

// Unity.Collections.AllocatorManager/SmallAllocatorHandle Unity.Collections.AllocatorManager/SmallAllocatorHandle::op_Implicit(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  SmallAllocatorHandle_op_Implicit_m331C33460C24794FA00760CCC974865626CAE549 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___a0, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC (intptr_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m5FB396AD54202A33190F8A94DF8467DCED010C14 (void* ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_m4E2F9DD1409BDF4C8F7E921ECA6B04C6211BDA40 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, void* ___pointer1, int32_t ___itemSizeInBytes2, int32_t ___alignmentInBytes3, int32_t ___items4, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m540451750CEC21D0DEEE8C42ED25AE9B623E2BAE (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mBC2D8A194E2E34662D81ACF759610790010D5919 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_TryLegacy_m9B0857A8A6F5903761C7F7A4D11D0B09F7063B0C (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method);
// !0& Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/TableEntry65536>::get_Data()
inline TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB * SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA (SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1 * __this, const RuntimeMethod* method)
{
	return ((  TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB * (*) (SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1 *, const RuntimeMethod*))SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA_gshared)(__this, method);
}
// System.Void Unity.Burst.FunctionPointer`1<Unity.Collections.AllocatorManager/TryFunction>::.ctor(System.IntPtr)
inline void FunctionPointer_1__ctor_m92C77EB48A342557154A375324F893CFCFD51657_inline (FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	((  void (*) (FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E *, intptr_t, const RuntimeMethod*))FunctionPointer_1__ctor_mCF847800D918BA18150DD1FD8F9A6FA34C2DD9F4_gshared_inline)(__this, ___ptr0, method);
}
// !0 Unity.Burst.FunctionPointer`1<Unity.Collections.AllocatorManager/TryFunction>::get_Invoke()
inline TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * FunctionPointer_1_get_Invoke_m9BFBB377D907CD63E0E0CB9B0E9CCA50AFD39DC5 (FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E * __this, const RuntimeMethod* method)
{
	return ((  TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * (*) (FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E *, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m142905CFEEF6A1EC8290685C247CBDA721AFA95D_gshared)(__this, method);
}
// System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE (TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// T* Unity.Collections.AllocatorManager::Allocate<Unity.Collections.LowLevel.Unsafe.UnsafeList>(Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
inline UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, int32_t ___items1, const RuntimeMethod* method)
{
	return ((  UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * (*) (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A , int32_t, const RuntimeMethod*))AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29_gshared)(___handle0, ___items1, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeList>()
inline int32_t UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794_gshared)(method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m0915615269E0140AB23F0073BF02086A51AFCABF (void* ___destination0, int64_t ___size1, const RuntimeMethod* method);
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  AllocatorHandle_op_Implicit_mBF56A735E4B575D7094AA21DAF4FD4FAB1EF94FA (int32_t ___a0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::SetCapacity(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_SetCapacity_mB0556B23A585A61FBF77ADFD61BC7EC2C43B7C1D (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___capacity2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Dispose_m622096B7E176E917588CF25DAE72085A98401579 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager::Free<Unity.Collections.LowLevel.Unsafe.UnsafeList>(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
inline void AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * ___pointer1, int32_t ___items2, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A , UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403_gshared)(___handle0, ___pointer1, ___items2, method);
}
// System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_ShouldDeallocate_mC18522E3BA69F147EF876DBF817649CA98CB5C72 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___allocator0, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_m35D460EE683601779864C35018A7C09B8AD0078F (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, void* ___pointer1, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Clear_mB978E8AADAADCDAE223841868FA0913F96A6147A (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Resize(System.Int32,System.Int32,System.Int32,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Resize_m53CE313205849622B3356EBD85E428E5DE269799 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___length2, int32_t ___options3, const RuntimeMethod* method);
// System.Void* Unity.Collections.AllocatorManager::Allocate(Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_Allocate_mA6D3BF21211707CD0A5FA130CE11644ABB716DC7 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, int32_t ___itemSizeInBytes1, int32_t ___alignmentInBytes2, int32_t ___items3, const RuntimeMethod* method);
// System.Int32 Unity.Mathematics.math::min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m2327D8A9114DC0A45309DAEE8A613635D6B40AE0_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_mA8E186A63FE9CE463F95E5C5FF1C5F1B4E84F90E (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Realloc(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Realloc_mB1E9A8B7B719B3DEDBCA68B8F94A8D6BB68309FB (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___capacity2, const RuntimeMethod* method);
// System.Int32 Unity.Mathematics.math::max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m0AE98E332E32DFBE910777CA4B4646A89D68B5EF_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Int32 Unity.Mathematics.math::ceilpow2(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_m4FB970A9DB35642C9DB7FCFF9C77A0010C1C0B54_inline (int32_t ___x0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::RemoveRangeSwapBack(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_RemoveRangeSwapBack_mF23BD5F1C770FD08A33472C1282AED747ECA2817 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___begin1, int32_t ___end2, const RuntimeMethod* method);
// System.Int32 Unity.Mathematics.math::lzcnt(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m853707633CC636FCB563E3BEEF9CC7BE4649C183_inline (int32_t ___x0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/Block::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/Range::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42 (Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * __this, const RuntimeMethod* method);
// Unity.Burst.SharedStatic`1<!0> Unity.Burst.SharedStatic`1<Unity.Collections.AllocatorManager/TableEntry65536>::GetOrCreate<Unity.Collections.AllocatorManager/StaticFunctionTable>(System.UInt32)
inline SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  SharedStatic_1_GetOrCreate_TisStaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_m25C97CA22DFF1BB7C7F56FD619FDA724B73DF582 (uint32_t ___alignment0, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisRuntimeObject_mE8FF9927486064704F47C908212FB43E0C226306_gshared)(___alignment0, method);
}
// System.Int32 Unity.Mathematics.math::lzcnt(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m0107594921BB97416EDB6ACD6EDC4C0C082703F6_inline (uint32_t ___x0, const RuntimeMethod* method);
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
// System.Void* Unity.Collections.AllocatorManager::Allocate(Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_Allocate_mA6D3BF21211707CD0A5FA130CE11644ABB716DC7 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, int32_t ___itemSizeInBytes1, int32_t ___alignmentInBytes2, int32_t ___items3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Block block = default;
		il2cpp_codegen_initobj((&V_0), sizeof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 ));
		// block.Range.Allocator = handle;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_0 = (&V_0)->get_address_of_Range_0();
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_1 = ___handle0;
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  L_2;
		L_2 = SmallAllocatorHandle_op_Implicit_m331C33460C24794FA00760CCC974865626CAE549(L_1, /*hidden argument*/NULL);
		L_0->set_Allocator_2(L_2);
		// block.Range.Items = items;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_3 = (&V_0)->get_address_of_Range_0();
		int32_t L_4 = ___items3;
		L_3->set_Items_1(L_4);
		// block.Range.Pointer = IntPtr.Zero;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_5 = (&V_0)->get_address_of_Range_0();
		L_5->set_Pointer_0((intptr_t)(0));
		// block.BytesPerItem = itemSizeInBytes;
		int32_t L_6 = ___itemSizeInBytes1;
		(&V_0)->set_BytesPerItem_1(L_6);
		// block.Alignment = alignmentInBytes;
		int32_t L_7 = ___alignmentInBytes2;
		Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), L_7, /*hidden argument*/NULL);
		// var error = Try(ref block);
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), /*hidden argument*/NULL);
		// if (error != 0)
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// throw new ArgumentException("failed to allocate");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4AF14D05765293C16D660724C9F21E86D48DB68)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AllocatorManager_Allocate_mA6D3BF21211707CD0A5FA130CE11644ABB716DC7_RuntimeMethod_var)));
	}

IL_005c:
	{
		// return (void*)block.Range.Pointer;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  L_10 = V_0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  L_11 = L_10.get_Range_0();
		intptr_t L_12 = L_11.get_Pointer_0();
		void* L_13;
		L_13 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_12, /*hidden argument*/NULL);
		return (void*)(L_13);
	}
}
// System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_m4E2F9DD1409BDF4C8F7E921ECA6B04C6211BDA40 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, void* ___pointer1, int32_t ___itemSizeInBytes2, int32_t ___alignmentInBytes3, int32_t ___items4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (pointer == null)
		void* L_0 = ___pointer1;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		// return;
		return;
	}

IL_0006:
	{
		// Block block = default;
		il2cpp_codegen_initobj((&V_0), sizeof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 ));
		// block.Range.Allocator = handle;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_1 = (&V_0)->get_address_of_Range_0();
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_2 = ___handle0;
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  L_3;
		L_3 = SmallAllocatorHandle_op_Implicit_m331C33460C24794FA00760CCC974865626CAE549(L_2, /*hidden argument*/NULL);
		L_1->set_Allocator_2(L_3);
		// block.Range.Items = 0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_4 = (&V_0)->get_address_of_Range_0();
		L_4->set_Items_1(0);
		// block.Range.Pointer = (IntPtr)pointer;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_5 = (&V_0)->get_address_of_Range_0();
		void* L_6 = ___pointer1;
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_m5FB396AD54202A33190F8A94DF8467DCED010C14((void*)(void*)L_6, /*hidden argument*/NULL);
		L_5->set_Pointer_0((intptr_t)L_7);
		// block.BytesPerItem = itemSizeInBytes;
		int32_t L_8 = ___itemSizeInBytes2;
		(&V_0)->set_BytesPerItem_1(L_8);
		// block.Alignment = alignmentInBytes;
		int32_t L_9 = ___alignmentInBytes3;
		Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), L_9, /*hidden argument*/NULL);
		// var error = Try(ref block);
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), /*hidden argument*/NULL);
		// if (error != 0)
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		// throw new ArgumentException("failed to free");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7FD340F1F606D694947CB4E58B320255D774D9D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AllocatorManager_Free_m4E2F9DD1409BDF4C8F7E921ECA6B04C6211BDA40_RuntimeMethod_var)));
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_m35D460EE683601779864C35018A7C09B8AD0078F (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___handle0, void* ___pointer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Free(handle, pointer, 1, 1, 1);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_0 = ___handle0;
		void* L_1 = ___pointer1;
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		AllocatorManager_Free_m4E2F9DD1409BDF4C8F7E921ECA6B04C6211BDA40(L_0, (void*)(void*)L_1, 1, 1, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_TryLegacy_m9B0857A8A6F5903761C7F7A4D11D0B09F7063B0C (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (block.Range.Pointer == IntPtr.Zero) // Allocate
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_0 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_1 = L_0->get_address_of_Range_0();
		intptr_t L_2 = L_1->get_Pointer_0();
		bool L_3;
		L_3 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// block.Range.Pointer =
		//     (IntPtr)UnsafeUtility.Malloc(block.Bytes, block.Alignment, (Allocator)block.Range.Allocator.Value);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_4 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_5 = L_4->get_address_of_Range_0();
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_6 = ___block0;
		int64_t L_7;
		L_7 = Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_6, /*hidden argument*/NULL);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_8 = ___block0;
		int32_t L_9;
		L_9 = Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_8, /*hidden argument*/NULL);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_10 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_11 = L_10->get_address_of_Range_0();
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD * L_12 = L_11->get_address_of_Allocator_2();
		uint16_t L_13 = L_12->get_Value_0();
		void* L_14;
		L_14 = UnsafeUtility_Malloc_m540451750CEC21D0DEEE8C42ED25AE9B623E2BAE(L_7, L_9, L_13, /*hidden argument*/NULL);
		intptr_t L_15;
		L_15 = IntPtr_op_Explicit_m5FB396AD54202A33190F8A94DF8467DCED010C14((void*)(void*)L_14, /*hidden argument*/NULL);
		L_5->set_Pointer_0((intptr_t)L_15);
		// block.AllocatedItems = block.Range.Items;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_16 = ___block0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_17 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_18 = L_17->get_address_of_Range_0();
		int32_t L_19 = L_18->get_Items_1();
		L_16->set_AllocatedItems_2(L_19);
		// return (block.Range.Pointer == IntPtr.Zero) ? -1 : 0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_20 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_21 = L_20->get_address_of_Range_0();
		intptr_t L_22 = L_21->get_Pointer_0();
		bool L_23;
		L_23 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_22, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0072;
		}
	}
	{
		return 0;
	}

IL_0072:
	{
		return (-1);
	}

IL_0074:
	{
		// if (block.Bytes == 0) // Free
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_24 = ___block0;
		int64_t L_25;
		L_25 = Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00ba;
		}
	}
	{
		// UnsafeUtility.Free((void*)block.Range.Pointer, (Allocator)block.Range.Allocator.Value);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_26 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_27 = L_26->get_address_of_Range_0();
		intptr_t L_28 = L_27->get_Pointer_0();
		void* L_29;
		L_29 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_28, /*hidden argument*/NULL);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_30 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_31 = L_30->get_address_of_Range_0();
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD * L_32 = L_31->get_address_of_Allocator_2();
		uint16_t L_33 = L_32->get_Value_0();
		UnsafeUtility_Free_mBC2D8A194E2E34662D81ACF759610790010D5919((void*)(void*)L_29, L_33, /*hidden argument*/NULL);
		// block.Range.Pointer = IntPtr.Zero;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_34 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_35 = L_34->get_address_of_Range_0();
		L_35->set_Pointer_0((intptr_t)(0));
		// block.AllocatedItems = 0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_36 = ___block0;
		L_36->set_AllocatedItems_2(0);
		// return 0;
		return 0;
	}

IL_00ba:
	{
		// return -1;
		return (-1);
	}
}
// System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1__ctor_m92C77EB48A342557154A375324F893CFCFD51657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m9BFBB377D907CD63E0E0CB9B0E9CCA50AFD39DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB * V_2 = NULL;
	{
		// if (block.Range.Allocator.Value < FirstUserIndex)
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_0 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_1 = L_0->get_address_of_Range_0();
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD * L_2 = L_1->get_address_of_Allocator_2();
		uint16_t L_3 = L_2->get_Value_0();
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		// return TryLegacy(ref block);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_4 = ___block0;
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = AllocatorManager_TryLegacy_m9B0857A8A6F5903761C7F7A4D11D0B09F7063B0C((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		// TableEntry tableEntry = default;
		il2cpp_codegen_initobj((&V_0), sizeof(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 ));
		IL2CPP_RUNTIME_CLASS_INIT(StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_il2cpp_TypeInfo_var);
		TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB * L_6;
		L_6 = SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA((SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1 *)(((StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_StaticFields*)il2cpp_codegen_static_fields_for(StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_il2cpp_TypeInfo_var))->get_address_of_Ref_0()), /*hidden argument*/SharedStatic_1_get_Data_m22D562D510F93939062F9FA61328B3EC4A805DEA_RuntimeMethod_var);
		V_2 = (TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB *)L_6;
		// fixed(TableEntry65536* tableEntry65536 = &StaticFunctionTable.Ref.Data)
		TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB * L_7 = V_2;
		// tableEntry = ((TableEntry*)tableEntry65536)[block.Range.Allocator.Value];
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_8 = ___block0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_9 = L_8->get_address_of_Range_0();
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD * L_10 = L_9->get_address_of_Allocator_2();
		uint16_t L_11 = L_10->get_Value_0();
		uint32_t L_12 = sizeof(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 );
		TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  L_13 = (*(TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9 *)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_7), (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_11), (int32_t)L_12)))));
		V_0 = L_13;
		V_2 = (TableEntry65536_t5AA7F4BBC852452CD6B3F0EE889F8FEACF92F7CB *)((uintptr_t)0);
		// var function = new FunctionPointer<TryFunction>(tableEntry.function);
		TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  L_14 = V_0;
		intptr_t L_15 = L_14.get_function_0();
		FunctionPointer_1__ctor_m92C77EB48A342557154A375324F893CFCFD51657_inline((FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E *)(&V_1), (intptr_t)L_15, /*hidden argument*/FunctionPointer_1__ctor_m92C77EB48A342557154A375324F893CFCFD51657_RuntimeMethod_var);
		// return function.Invoke(tableEntry.state, ref block);
		TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * L_16;
		L_16 = FunctionPointer_1_get_Invoke_m9BFBB377D907CD63E0E0CB9B0E9CCA50AFD39DC5((FunctionPointer_1_t4072F202AB5A338BD07170DF448D1916B3B9CA1E *)(&V_1), /*hidden argument*/FunctionPointer_1_get_Invoke_m9BFBB377D907CD63E0E0CB9B0E9CCA50AFD39DC5_RuntimeMethod_var);
		TableEntry_t72CE07B839075B0D5A28C6329526B968B3A8D9C9  L_17 = V_0;
		intptr_t L_18 = L_17.get_state_1();
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_19 = ___block0;
		int32_t L_20;
		L_20 = TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE(L_16, (intptr_t)L_18, (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void Unity.Collections.AllocatorManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager__cctor_mB68DC0C0F56649CE4C9010F11C9A42E309E46BFB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly AllocatorHandle Invalid = new AllocatorHandle {Value = 0};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		(&V_0)->set_Value_0(0);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_0 = V_0;
		((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->set_Invalid_0(L_0);
		// public static readonly AllocatorHandle None = new AllocatorHandle {Value = 1};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		(&V_0)->set_Value_0(1);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_1 = V_0;
		((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->set_None_1(L_1);
		// public static readonly AllocatorHandle Temp = new AllocatorHandle {Value = 2};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		(&V_0)->set_Value_0(2);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_2 = V_0;
		((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->set_Temp_2(L_2);
		// public static readonly AllocatorHandle TempJob = new AllocatorHandle {Value = 3};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		(&V_0)->set_Value_0(3);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_3 = V_0;
		((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->set_TempJob_3(L_3);
		// public static readonly AllocatorHandle Persistent = new AllocatorHandle {Value = 4};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		(&V_0)->set_Value_0(4);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_4 = V_0;
		((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->set_Persistent_4(L_4);
		// public static readonly AllocatorHandle AudioKernel = new AllocatorHandle {Value = 5};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		(&V_0)->set_Value_0(5);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_5 = V_0;
		((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->set_AudioKernel_5(L_5);
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
// System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_ShouldDeallocate_mC18522E3BA69F147EF876DBF817649CA98CB5C72 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___allocator0, const RuntimeMethod* method)
{
	{
		// return allocator.Value > (int)Allocator.None;
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_0 = ___allocator0;
		int32_t L_1 = L_0.get_Value_0();
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_m3B3ABDDCACD457581AB325583563481AF0A06D68 (int32_t ___x0, const RuntimeMethod* method)
{
	{
		// return x;
		int32_t L_0 = ___x0;
		return L_0;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D (EmbeddedAttribute_t0E30752C5EA9622DD2335FB26295952F020EE7B6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43 (IsUnmanagedAttribute_tC3711779D00EFADD8F826DD8391CFD36FC1B912F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Unity.Collections.LowLevel.Unsafe.UnsafeList* Unity.Collections.LowLevel.Unsafe.UnsafeList::Create(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * UnsafeList_Create_m19C289C3C8D5CE24D0E7CD1A2C3EF3E33134D063 (int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___initialCapacity2, int32_t ___allocator3, int32_t ___options4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * V_0 = NULL;
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var handle = new AllocatorManager.AllocatorHandle {Value = (int)allocator};
		il2cpp_codegen_initobj((&V_1), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		int32_t L_0 = ___allocator3;
		(&V_1)->set_Value_0(L_0);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_1 = V_1;
		// UnsafeList* listData = AllocatorManager.Allocate<UnsafeList>(handle);
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_2;
		L_2 = AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29(L_1, 1, /*hidden argument*/AllocatorManager_Allocate_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mBA79816F4AD5F8D50335B5A37046255A178B3B29_RuntimeMethod_var);
		V_0 = (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)L_2;
		// UnsafeUtility.MemClear(listData, UnsafeUtility.SizeOf<UnsafeList>());
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_3 = V_0;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794(/*hidden argument*/UnsafeUtility_SizeOf_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mEF9DB7D8094E428E15434CC89E2BF2DD851D1794_RuntimeMethod_var);
		UnsafeUtility_MemClear_m0915615269E0140AB23F0073BF02086A51AFCABF((void*)(void*)L_3, ((int64_t)((int64_t)L_4)), /*hidden argument*/NULL);
		// listData->Allocator = allocator;
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_5 = V_0;
		int32_t L_6 = ___allocator3;
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_7;
		L_7 = AllocatorHandle_op_Implicit_mBF56A735E4B575D7094AA21DAF4FD4FAB1EF94FA(L_6, /*hidden argument*/NULL);
		L_5->set_Allocator_3(L_7);
		// if (initialCapacity != 0)
		int32_t L_8 = ___initialCapacity2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// listData->SetCapacity(sizeOf, alignOf, initialCapacity);
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_9 = V_0;
		int32_t L_10 = ___sizeOf0;
		int32_t L_11 = ___alignOf1;
		int32_t L_12 = ___initialCapacity2;
		UnsafeList_SetCapacity_mB0556B23A585A61FBF77ADFD61BC7EC2C43B7C1D((UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// if (options == NativeArrayOptions.ClearMemory
		//     && listData->Ptr != null)
		int32_t L_13 = ___options4;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_14 = V_0;
		void* L_15 = L_14->get_Ptr_0();
		if ((((intptr_t)L_15) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_005f;
		}
	}
	{
		// UnsafeUtility.MemClear(listData->Ptr, listData->Capacity * sizeOf);
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_16 = V_0;
		void* L_17 = L_16->get_Ptr_0();
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_18 = V_0;
		int32_t L_19 = L_18->get_Capacity_2();
		int32_t L_20 = ___sizeOf0;
		UnsafeUtility_MemClear_m0915615269E0140AB23F0073BF02086A51AFCABF((void*)(void*)L_17, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
	}

IL_005f:
	{
		// return listData;
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_21 = V_0;
		return (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)(L_21);
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Destroy(Unity.Collections.LowLevel.Unsafe.UnsafeList*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Destroy_m2D1AA7E3DE05EA729B3814B3BF54556200C51952 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * ___listData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var allocator = listData->Allocator;
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_0 = ___listData0;
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_1 = L_0->get_Allocator_3();
		// listData->Dispose();
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_2 = ___listData0;
		UnsafeList_Dispose_m622096B7E176E917588CF25DAE72085A98401579((UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)L_2, /*hidden argument*/NULL);
		// AllocatorManager.Free(allocator, listData);
		UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * L_3 = ___listData0;
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403(L_1, (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)L_3, 1, /*hidden argument*/AllocatorManager_Free_TisUnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA_mED2B77E17BE8D321513FBF5FC02AFE3FA3747403_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Dispose_m622096B7E176E917588CF25DAE72085A98401579 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CollectionHelper.ShouldDeallocate(Allocator))
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_0 = __this->get_Allocator_3();
		bool L_1;
		L_1 = CollectionHelper_ShouldDeallocate_mC18522E3BA69F147EF876DBF817649CA98CB5C72(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// AllocatorManager.Free(Allocator, Ptr);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_2 = __this->get_Allocator_3();
		void* L_3 = __this->get_Ptr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		AllocatorManager_Free_m35D460EE683601779864C35018A7C09B8AD0078F(L_2, (void*)(void*)L_3, /*hidden argument*/NULL);
		// Allocator = AllocatorManager.Invalid;
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_4 = ((AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var))->get_Invalid_0();
		__this->set_Allocator_3(L_4);
	}

IL_0029:
	{
		// Ptr = null;
		__this->set_Ptr_0((void*)((uintptr_t)0));
		// Length = 0;
		__this->set_Length_1(0);
		// Capacity = 0;
		__this->set_Capacity_2(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_Dispose_m622096B7E176E917588CF25DAE72085A98401579_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * _thisAdjusted = reinterpret_cast<UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *>(__this + _offset);
	UnsafeList_Dispose_m622096B7E176E917588CF25DAE72085A98401579(_thisAdjusted, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Clear_mB978E8AADAADCDAE223841868FA0913F96A6147A (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, const RuntimeMethod* method)
{
	{
		// Length = 0;
		__this->set_Length_1(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_Clear_mB978E8AADAADCDAE223841868FA0913F96A6147A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * _thisAdjusted = reinterpret_cast<UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *>(__this + _offset);
	UnsafeList_Clear_mB978E8AADAADCDAE223841868FA0913F96A6147A(_thisAdjusted, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Resize(System.Int32,System.Int32,System.Int32,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Resize_m53CE313205849622B3356EBD85E428E5DE269799 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___length2, int32_t ___options3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	{
		// var oldLength = Length;
		int32_t L_0 = __this->get_Length_1();
		V_0 = L_0;
		// if (length > Capacity)
		int32_t L_1 = ___length2;
		int32_t L_2 = __this->get_Capacity_2();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		// SetCapacity(sizeOf, alignOf, length);
		int32_t L_3 = ___sizeOf0;
		int32_t L_4 = ___alignOf1;
		int32_t L_5 = ___length2;
		UnsafeList_SetCapacity_mB0556B23A585A61FBF77ADFD61BC7EC2C43B7C1D((UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)__this, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// Length = length;
		int32_t L_6 = ___length2;
		__this->set_Length_1(L_6);
		// if (options == NativeArrayOptions.ClearMemory
		//     && oldLength < length)
		int32_t L_7 = ___options3;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___length2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}
	{
		// var num = length - oldLength;
		int32_t L_10 = ___length2;
		int32_t L_11 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		// byte* ptr = (byte*)Ptr;
		void* L_12 = __this->get_Ptr_0();
		V_2 = (uint8_t*)L_12;
		// UnsafeUtility.MemClear(ptr + oldLength * sizeOf, num * sizeOf);
		uint8_t* L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15 = ___sizeOf0;
		int32_t L_16 = V_1;
		int32_t L_17 = ___sizeOf0;
		UnsafeUtility_MemClear_m0915615269E0140AB23F0073BF02086A51AFCABF((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15)))), ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_17)))), /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_Resize_m53CE313205849622B3356EBD85E428E5DE269799_AdjustorThunk (RuntimeObject * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___length2, int32_t ___options3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * _thisAdjusted = reinterpret_cast<UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *>(__this + _offset);
	UnsafeList_Resize_m53CE313205849622B3356EBD85E428E5DE269799(_thisAdjusted, ___sizeOf0, ___alignOf1, ___length2, ___options3, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::Realloc(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_Realloc_mB1E9A8B7B719B3DEDBCA68B8F94A8D6BB68309FB (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___capacity2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// void* newPointer = null;
		V_0 = (void*)((uintptr_t)0);
		// if (capacity > 0)
		int32_t L_0 = ___capacity2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// newPointer = AllocatorManager.Allocate(Allocator, sizeOf, alignOf, capacity);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_1 = __this->get_Allocator_3();
		int32_t L_2 = ___sizeOf0;
		int32_t L_3 = ___alignOf1;
		int32_t L_4 = ___capacity2;
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		void* L_5;
		L_5 = AllocatorManager_Allocate_mA6D3BF21211707CD0A5FA130CE11644ABB716DC7(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = (void*)L_5;
		// if (Capacity > 0)
		int32_t L_6 = __this->get_Capacity_2();
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var itemsToCopy = math.min(capacity, Capacity);
		int32_t L_7 = ___capacity2;
		int32_t L_8 = __this->get_Capacity_2();
		int32_t L_9;
		L_9 = math_min_m2327D8A9114DC0A45309DAEE8A613635D6B40AE0_inline(L_7, L_8, /*hidden argument*/NULL);
		// var bytesToCopy = itemsToCopy * sizeOf;
		int32_t L_10 = ___sizeOf0;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)L_10));
		// UnsafeUtility.MemCpy(newPointer, Ptr, bytesToCopy);
		void* L_11 = V_0;
		void* L_12 = __this->get_Ptr_0();
		int32_t L_13 = V_1;
		UnsafeUtility_MemCpy_mA8E186A63FE9CE463F95E5C5FF1C5F1B4E84F90E((void*)(void*)L_11, (void*)(void*)L_12, ((int64_t)((int64_t)L_13)), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// AllocatorManager.Free(Allocator, Ptr);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_14 = __this->get_Allocator_3();
		void* L_15 = __this->get_Ptr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		AllocatorManager_Free_m35D460EE683601779864C35018A7C09B8AD0078F(L_14, (void*)(void*)L_15, /*hidden argument*/NULL);
		// Ptr = newPointer;
		void* L_16 = V_0;
		__this->set_Ptr_0((void*)L_16);
		// Capacity = capacity;
		int32_t L_17 = ___capacity2;
		__this->set_Capacity_2(L_17);
		// Length = math.min(Length, capacity);
		int32_t L_18 = __this->get_Length_1();
		int32_t L_19 = ___capacity2;
		int32_t L_20;
		L_20 = math_min_m2327D8A9114DC0A45309DAEE8A613635D6B40AE0_inline(L_18, L_19, /*hidden argument*/NULL);
		__this->set_Length_1(L_20);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_Realloc_mB1E9A8B7B719B3DEDBCA68B8F94A8D6BB68309FB_AdjustorThunk (RuntimeObject * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___capacity2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * _thisAdjusted = reinterpret_cast<UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *>(__this + _offset);
	UnsafeList_Realloc_mB1E9A8B7B719B3DEDBCA68B8F94A8D6BB68309FB(_thisAdjusted, ___sizeOf0, ___alignOf1, ___capacity2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::SetCapacity(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_SetCapacity_mB0556B23A585A61FBF77ADFD61BC7EC2C43B7C1D (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___capacity2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var newCapacity = math.max(capacity, 64 / sizeOf);
		int32_t L_0 = ___capacity2;
		int32_t L_1 = ___sizeOf0;
		int32_t L_2;
		L_2 = math_max_m0AE98E332E32DFBE910777CA4B4646A89D68B5EF_inline(L_0, ((int32_t)((int32_t)((int32_t)64)/(int32_t)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// newCapacity = math.ceilpow2(newCapacity);
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = math_ceilpow2_m4FB970A9DB35642C9DB7FCFF9C77A0010C1C0B54_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (newCapacity == Capacity)
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_Capacity_2();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// Realloc(sizeOf, alignOf, newCapacity);
		int32_t L_7 = ___sizeOf0;
		int32_t L_8 = ___alignOf1;
		int32_t L_9 = V_0;
		UnsafeList_Realloc_mB1E9A8B7B719B3DEDBCA68B8F94A8D6BB68309FB((UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *)__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_SetCapacity_mB0556B23A585A61FBF77ADFD61BC7EC2C43B7C1D_AdjustorThunk (RuntimeObject * __this, int32_t ___sizeOf0, int32_t ___alignOf1, int32_t ___capacity2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * _thisAdjusted = reinterpret_cast<UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *>(__this + _offset);
	UnsafeList_SetCapacity_mB0556B23A585A61FBF77ADFD61BC7EC2C43B7C1D(_thisAdjusted, ___sizeOf0, ___alignOf1, ___capacity2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList::RemoveRangeSwapBack(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_RemoveRangeSwapBack_mF23BD5F1C770FD08A33472C1282AED747ECA2817 (UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * __this, int32_t ___sizeOf0, int32_t ___begin1, int32_t ___end2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	void* V_3 = NULL;
	{
		// int itemsToRemove = end - begin;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___begin1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		// if (itemsToRemove > 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// int copyFrom = math.max(Length - itemsToRemove, end);
		int32_t L_3 = __this->get_Length_1();
		int32_t L_4 = V_0;
		int32_t L_5 = ___end2;
		int32_t L_6;
		L_6 = math_max_m0AE98E332E32DFBE910777CA4B4646A89D68B5EF_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// void* dst = (byte*)Ptr + begin * sizeOf;
		void* L_7 = __this->get_Ptr_0();
		int32_t L_8 = ___begin1;
		int32_t L_9 = ___sizeOf0;
		V_2 = (void*)((void*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))));
		// void* src = (byte*)Ptr + copyFrom * sizeOf;
		void* L_10 = __this->get_Ptr_0();
		int32_t L_11 = V_1;
		int32_t L_12 = ___sizeOf0;
		V_3 = (void*)((void*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12))));
		// UnsafeUtility.MemCpy(dst, src, math.min(itemsToRemove, Length - copyFrom) * sizeOf);
		void* L_13 = V_2;
		void* L_14 = V_3;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get_Length_1();
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = math_min_m2327D8A9114DC0A45309DAEE8A613635D6B40AE0_inline(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		int32_t L_19 = ___sizeOf0;
		UnsafeUtility_MemCpy_mA8E186A63FE9CE463F95E5C5FF1C5F1B4E84F90E((void*)(void*)L_13, (void*)(void*)L_14, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_19)))), /*hidden argument*/NULL);
		// Length -= itemsToRemove;
		int32_t L_20 = __this->get_Length_1();
		int32_t L_21 = V_0;
		__this->set_Length_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
	}

IL_0053:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_RemoveRangeSwapBack_mF23BD5F1C770FD08A33472C1282AED747ECA2817_AdjustorThunk (RuntimeObject * __this, int32_t ___sizeOf0, int32_t ___begin1, int32_t ___end2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * _thisAdjusted = reinterpret_cast<UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA *>(__this + _offset);
	UnsafeList_RemoveRangeSwapBack_mF23BD5F1C770FD08A33472C1282AED747ECA2817(_thisAdjusted, ___sizeOf0, ___begin1, ___end2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  AllocatorHandle_op_Implicit_mBF56A735E4B575D7094AA21DAF4FD4FAB1EF94FA (int32_t ___a0, const RuntimeMethod* method)
{
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static implicit operator AllocatorHandle(Allocator a) => new AllocatorHandle {Value = (int)a};
		il2cpp_codegen_initobj((&V_0), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		int32_t L_0 = ___a0;
		(&V_0)->set_Value_0(L_0);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_1 = V_0;
		return L_1;
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
// System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method)
{
	{
		// public long Bytes => BytesPerItem * Range.Items;
		int32_t L_0 = __this->get_BytesPerItem_1();
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_1 = __this->get_address_of_Range_0();
		int32_t L_2 = L_1->get_Items_1();
		return ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C  int64_t Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * _thisAdjusted = reinterpret_cast<Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method)
{
	{
		// get => 1 << Log2Alignment;
		uint8_t L_0 = __this->get_Log2Alignment_3();
		return ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C  int32_t Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * _thisAdjusted = reinterpret_cast<Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => Log2Alignment = (byte)(32 - math.lzcnt(math.max(1, value) - 1));
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = math_max_m0AE98E332E32DFBE910777CA4B4646A89D68B5EF_inline(1, L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = math_lzcnt_m853707633CC636FCB563E3BEEF9CC7BE4649C183_inline(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_Log2Alignment_3((uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_2)))));
		return;
	}
}
IL2CPP_EXTERN_C  void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * _thisAdjusted = reinterpret_cast<Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *>(__this + _offset);
	Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.AllocatorManager/Block::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method)
{
	{
		// TryFree();
		int32_t L_0;
		L_0 = Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * _thisAdjusted = reinterpret_cast<Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *>(__this + _offset);
	Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Range.Items = 0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_0 = __this->get_address_of_Range_0();
		L_0->set_Items_1(0);
		// return Try(ref this);
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = AllocatorManager_Try_m9D21E077697EE410032DDC768E2D27CFC66145DE((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)__this, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * _thisAdjusted = reinterpret_cast<Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1(_thisAdjusted, method);
	return _returnValue;
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
// System.Void Unity.Collections.AllocatorManager/Range::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42 (Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * __this, const RuntimeMethod* method)
{
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Block block = new Block { Range = this };
		il2cpp_codegen_initobj((&V_1), sizeof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 ));
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  L_0 = (*(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 *)__this);
		(&V_1)->set_Range_0(L_0);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  L_1 = V_1;
		V_0 = L_1;
		// block.Dispose();
		Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), /*hidden argument*/NULL);
		// this = block.Range;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  L_2 = V_0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  L_3 = L_2.get_Range_0();
		*(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 *)__this = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * _thisAdjusted = reinterpret_cast<Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 *>(__this + _offset);
	Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.AllocatorManager/SmallAllocatorHandle Unity.Collections.AllocatorManager/SmallAllocatorHandle::op_Implicit(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  SmallAllocatorHandle_op_Implicit_m331C33460C24794FA00760CCC974865626CAE549 (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___a0, const RuntimeMethod* method)
{
	SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static implicit operator SmallAllocatorHandle(AllocatorHandle a) => new SmallAllocatorHandle {Value = (ushort)a.Value};
		il2cpp_codegen_initobj((&V_0), sizeof(SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD ));
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_0 = ___a0;
		int32_t L_1 = L_0.get_Value_0();
		(&V_0)->set_Value_0((uint16_t)((int32_t)((uint16_t)L_1)));
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  L_2 = V_0;
		return L_2;
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
// System.Void Unity.Collections.AllocatorManager/StaticFunctionTable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticFunctionTable__cctor_mC97CB40EBC68878E9A38190BBC924F3B350B90EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_GetOrCreate_TisStaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_m25C97CA22DFF1BB7C7F56FD619FDA724B73DF582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly SharedStatic<TableEntry65536> Ref =
		//     SharedStatic<TableEntry65536>.GetOrCreate<StaticFunctionTable>();
		SharedStatic_1_t06688A4343822CDD54C326ABD985F529188F93F1  L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisStaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_m25C97CA22DFF1BB7C7F56FD619FDA724B73DF582(0, /*hidden argument*/SharedStatic_1_GetOrCreate_TisStaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_m25C97CA22DFF1BB7C7F56FD619FDA724B73DF582_RuntimeMethod_var);
		((StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_StaticFields*)il2cpp_codegen_static_fields_for(StaticFunctionTable_t382BA2B05F6E95A3163612301DA87050C56C2BE6_il2cpp_TypeInfo_var))->set_Ref_0(L_0);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 (TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___allocatorState0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0 (TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE (TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___allocatorState0, ___block1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___allocatorState0, ___block1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(targetMethod, targetThis, ___allocatorState0, ___block1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(targetMethod, targetThis, ___allocatorState0, ___block1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___allocatorState0, ___block1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___allocatorState0, ___block1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___allocatorState0, ___block1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Collections.AllocatorManager/TryFunction::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2 (TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___allocatorState0);
	__d_args[1] = Box(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var, &*___block1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 Unity.Collections.AllocatorManager/TryFunction::EndInvoke(Unity.Collections.AllocatorManager/Block&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44 (TryFunction_t08422611F890148F40019711F54EFCB1AAEC5777 * __this, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___block0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m2327D8A9114DC0A45309DAEE8A613635D6B40AE0_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// public static int min(int x, int y) { return x < y ? x : y; }
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m0AE98E332E32DFBE910777CA4B4646A89D68B5EF_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// public static int max(int x, int y) { return x > y ? x : y; }
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_m4FB970A9DB35642C9DB7FCFF9C77A0010C1C0B54_inline (int32_t ___x0, const RuntimeMethod* method)
{
	{
		// x -= 1;
		int32_t L_0 = ___x0;
		___x0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		// x |= x >> 1;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___x0;
		___x0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)((int32_t)L_2>>(int32_t)1))));
		// x |= x >> 2;
		int32_t L_3 = ___x0;
		int32_t L_4 = ___x0;
		___x0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)L_4>>(int32_t)2))));
		// x |= x >> 4;
		int32_t L_5 = ___x0;
		int32_t L_6 = ___x0;
		___x0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)L_6>>(int32_t)4))));
		// x |= x >> 8;
		int32_t L_7 = ___x0;
		int32_t L_8 = ___x0;
		___x0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)L_8>>(int32_t)8))));
		// x |= x >> 16;
		int32_t L_9 = ___x0;
		int32_t L_10 = ___x0;
		___x0 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)16)))));
		// return x + 1;
		int32_t L_11 = ___x0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m853707633CC636FCB563E3BEEF9CC7BE4649C183_inline (int32_t ___x0, const RuntimeMethod* method)
{
	{
		// public static int lzcnt(int x) { return lzcnt((uint)x); }
		int32_t L_0 = ___x0;
		int32_t L_1;
		L_1 = math_lzcnt_m0107594921BB97416EDB6ACD6EDC4C0C082703F6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionPointer_1__ctor_mCF847800D918BA18150DD1FD8F9A6FA34C2DD9F4_gshared_inline (FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		// _ptr = ptr;
		intptr_t L_0 = ___ptr0;
		__this->set__ptr_0((intptr_t)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_m0107594921BB97416EDB6ACD6EDC4C0C082703F6_inline (uint32_t ___x0, const RuntimeMethod* method)
{
	LongDoubleUnion_t9E9847FB618DDAD09222E99804271A9E19F52097  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (x == 0)
		uint32_t L_0 = ___x0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		// return 32;
		return ((int32_t)32);
	}

IL_0006:
	{
		// u.doubleValue = 0.0;
		(&V_0)->set_doubleValue_1((0.0));
		// u.longValue = 0x4330000000000000L + x;
		uint32_t L_1 = ___x0;
		(&V_0)->set_longValue_0(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)4841369599423283200LL), (int64_t)((int64_t)((uint64_t)L_1)))));
		// u.doubleValue -= 4503599627370496.0;
		double* L_2 = (&V_0)->get_address_of_doubleValue_1();
		double* L_3 = L_2;
		double L_4 = *((double*)L_3);
		*((double*)L_3) = (double)((double)il2cpp_codegen_subtract((double)L_4, (double)(4503599627370496.0)));
		// return 0x41E - (int)(u.longValue >> 52);
		LongDoubleUnion_t9E9847FB618DDAD09222E99804271A9E19F52097  L_5 = V_0;
		int64_t L_6 = L_5.get_longValue_0();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1054), (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)L_6>>(int32_t)((int32_t)52)))))));
	}
}
