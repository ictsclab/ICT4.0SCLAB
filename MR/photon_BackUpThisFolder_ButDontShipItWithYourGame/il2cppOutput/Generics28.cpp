#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED;
struct Action_2_t0BA90F82FB7F4F81246177C34580E60722D2D2A1;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4;
struct Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33;
struct Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3;
struct Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0;
struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17;
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3;
struct EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41;
struct EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75;
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tD7D6ABAE0ED462D1FFC5A89FEDD63734A24D7B40;
struct ICollection_1_t9500EF7ABF397CA3F4567A635AC50B314D532A13;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t8CB39F3F52F2AED7D7ECA9879B6CAC7036D93F55;
struct ICollection_1_t5E25C1EFA917B612021A1D336048399B407E5CB2;
struct ICollection_1_t8A5155A011D1FA6E3156CEE5FC900AFBE3F62C32;
struct ICollection_1_t820BCF52ED581777158515AA08B35379685B4D60;
struct IDictionary_2_tBD33A02B98D96F0060F1AA63210FC728A8E7D12D;
struct IDictionary_2_tADAF56AB0EF5BFA713ABBDB7E1AC51B28C0F7C1F;
struct IDictionary_2_tB3F4C6A062B8F125EFE05BBC344F69A2578DDD77;
struct IDictionary_2_t303BA49242257CB4E2E7BE35D84310721184A63A;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IDictionary_2_t71E05568CAAE1C49A9B37E3AA1D9CC17E12F6677;
struct IDictionary_2_tF99DB6297B0A6D0F2540D9AB5DE27DC5CAD6B301;
struct IEnumerator_1_tE34DE3D66AA6A1D453626A042BBA896A16BACBD1;
struct IEnumerator_1_tC08825D314F5ED0BA305DD3412315949EAFB422A;
struct IEnumerator_1_t00E626E74176236018CA87C10472ACA8B128DD95;
struct IEnumerator_1_t405D9D484B76BDBCE3D5C15FB6F0FF591315700F;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t4E8A0F92972992AD3987861E50E6E7DDADBBD62C;
struct IEnumerator_1_t8A20B9E97C5C8B430E0D2665BCD73989500E0A2B;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t4701D8BCF8A88FA94142ADCA00837DF07A8096B0;
struct IEqualityComparer_1_t984D540FC208A2CABAB23A4D766E1C17CA1D0833;
struct KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555;
struct KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54;
struct KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8;
struct KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7;
struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75;
struct List_1_t273413C8B654D2B591BCAA657421FF6CFCB3C56B;
struct ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A;
struct ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372;
struct ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1;
struct ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94;
struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305;
struct EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826;
struct EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10;
struct EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59;
struct EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E;
struct KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75;
struct KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F;
struct KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826;
struct EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10;
struct EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59;
struct EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD;
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F;
struct KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E;
struct KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75;
struct KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F;
struct KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC;
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	RuntimeObject* ____lock_5;
	int32_t ___size_6;
};

struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* ____keys_7;
	ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* ____keys_7;
	ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* ____keys_7;
	ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* ____keys_7;
	ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys_7;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* ____keys_7;
	ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* ____entries_1;
	int32_t ____count_2;
	int32_t ____freeList_3;
	int32_t ____freeCount_4;
	int32_t ____version_5;
	RuntimeObject* ____comparer_6;
	KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* ____keys_7;
	ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* ____values_8;
	RuntimeObject* ____syncRoot_9;
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17  : public RuntimeObject
{
};

struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* ___defaultComparer_0;
};

struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09  : public RuntimeObject
{
};

struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* ___defaultComparer_0;
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer_0;
};

struct EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3  : public RuntimeObject
{
};

struct EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3_StaticFields
{
	EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* ___defaultComparer_0;
};

struct EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41  : public RuntimeObject
{
};

struct EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41_StaticFields
{
	EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* ___defaultComparer_0;
};

struct EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75  : public RuntimeObject
{
};

struct EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75_StaticFields
{
	EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* ___defaultComparer_0;
};

struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1  : public RuntimeObject
{
};

struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* ___defaultComparer_0;
};

struct KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555  : public RuntimeObject
{
	Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ____dictionary_0;
};

struct KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54  : public RuntimeObject
{
	Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ____dictionary_0;
};

struct KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8  : public RuntimeObject
{
	Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ____dictionary_0;
};

struct KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922  : public RuntimeObject
{
	Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ____dictionary_0;
};

struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary_0;
};

struct KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7  : public RuntimeObject
{
	Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ____dictionary_0;
};

struct KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75  : public RuntimeObject
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary_0;
};

struct ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A  : public RuntimeObject
{
	Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ____dictionary_0;
};

struct ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372  : public RuntimeObject
{
	Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ____dictionary_0;
};

struct ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1  : public RuntimeObject
{
	Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ____dictionary_0;
};

struct ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC  : public RuntimeObject
{
	Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ____dictionary_0;
};

struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary_0;
};

struct ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94  : public RuntimeObject
{
	Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ____dictionary_0;
};

struct ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305  : public RuntimeObject
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary_0;
};
struct Il2CppArrayBounds;

struct MemberInfo_t  : public RuntimeObject
{
};

struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	int32_t ___m_currMember_7;
	RuntimeObject* ___m_converter_8;
	String_t* ___m_fullTypeName_9;
	String_t* ___m_assemName_10;
	Type_t* ___objectType_11;
	bool ___isFullTypeNameSetExplicit_12;
	bool ___isAssemblyNameSetExplicit_13;
	bool ___requireSameTokenInPartialTrust_14;
};

struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	String_t* ___Empty_6;
};

struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

struct Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	RuntimeObject* ___value_3;
};

typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;

struct KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 
{
	uint64_t ___key_0;
	RuntimeObject* ___value_1;
};

typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key_0;
	RuntimeObject* ____value_1;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

struct MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 
{
	List_1_t273413C8B654D2B591BCAA657421FF6CFCB3C56B* ___Anchors_0;
	Action_2_t74FE43E44FDC5FD99B14BCA58991B9C0572303ED* ___Delegate_1;
};
struct MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_marshaled_pinvoke
{
	List_1_t273413C8B654D2B591BCAA657421FF6CFCB3C56B* ___Anchors_0;
	Il2CppMethodPointer ___Delegate_1;
};
struct MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_marshaled_com
{
	List_1_t273413C8B654D2B591BCAA657421FF6CFCB3C56B* ___Anchors_0;
	Il2CppMethodPointer ___Delegate_1;
};

struct SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F 
{
	OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874* ___Anchor_0;
	Action_2_t0BA90F82FB7F4F81246177C34580E60722D2D2A1* ___Delegate_1;
};
struct SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_marshaled_pinvoke
{
	OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874* ___Anchor_0;
	Il2CppMethodPointer ___Delegate_1;
};
struct SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_marshaled_com
{
	OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874* ___Anchor_0;
	Il2CppMethodPointer ___Delegate_1;
};

struct RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 
{
	uint8_t ___Group_0;
	bool ___Reliable_1;
};
struct RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401_marshaled_pinvoke
{
	uint8_t ___Group_0;
	int32_t ___Reliable_1;
};
struct RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401_marshaled_com
{
	uint8_t ___Group_0;
	int32_t ___Reliable_1;
};

struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options_0;
	String_t* ____cultureKey_1;
	String_t* ____pattern_2;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options_0;
	char* ____cultureKey_1;
	char* ____pattern_2;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options_0;
	Il2CppChar* ____cultureKey_1;
	Il2CppChar* ____pattern_2;
};

struct Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value_3;
};

struct Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value_3;
};

struct Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key_2;
	RuntimeObject* ___value_3;
};

struct Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key_2;
	RuntimeObject* ___value_3;
};

struct Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key_2;
	RuntimeObject* ___value_3;
};

struct Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E 
{
	Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

struct KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 
{
	uint64_t ___key_0;
	MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value_1;
};

struct KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 
{
	uint64_t ___key_0;
	SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value_1;
};

struct KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key_0;
	RuntimeObject* ___value_1;
};

struct KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E 
{
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key_0;
	RuntimeObject* ___value_1;
};

struct KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key_0;
	RuntimeObject* ___value_1;
};

struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};

struct Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 
{
	Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 
{
	Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 
{
	Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 
{
	Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 
{
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ____dictionary_0;
	int32_t ____version_1;
	int32_t ____index_2;
	KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ____current_3;
	int32_t ____getEnumeratorRetType_4;
};

struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 m_Items[1];

	inline Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 m_Items[1];

	inline KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293 m_Items[1];

	inline Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Delegate_1), (void*)NULL);
		#endif
	}
	inline Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Delegate_1), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 m_Items[1];

	inline KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Delegate_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Delegate_1), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168 m_Items[1];

	inline Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Delegate_1), (void*)NULL);
		#endif
	}
	inline Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Delegate_1), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 m_Items[1];

	inline KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Delegate_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Delegate_1), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 m_Items[1];

	inline Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E m_Items[1];

	inline KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E m_Items[1];

	inline Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E m_Items[1];

	inline KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
struct EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 m_Items[1];

	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_2))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 m_Items[1];

	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key_0))->____pattern_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4631D2526B8D9CDB3BEEC29271499F5F800C8522_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_gshared_inline (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_gshared_inline (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m707010121B9EAF70F8BB636C197D93F984A4837F_gshared (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* __this, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m61F7339402B5F71CED88F7903BC6AC61330DBFDE_gshared (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* __this, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAF3AC60580F864E1A63DDC9052FE1AF50CD4D9DF_gshared (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56_gshared (Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E* __this, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4FE99BE2806EA54513D3410EC46E583A5EE68AB7_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D0A3C53287F96C5A46975A457E052F6EA2B7F30_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* Dictionary_2_get_Keys_m9325EA172FB93B3BACB00C8B5C3265D9AEDA4FA6_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* Dictionary_2_get_Values_mBB7A40D641EDDE60E69C5122414003E9EB21F362_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8C23C3613ADC67E076E8D3F450848C221AE85958_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_gshared_inline (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_gshared_inline (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m00CB84F8E4B0FFFA5172A78BE1FFC5C870235C36_gshared (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* __this, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mD3EA99AC39E4DE5E3B19002AFC054C4056A7D3C4_gshared (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* __this, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m27DCF517646F05EE649AD484BF676305B42B4E17_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m359A745591EACC43F271D6D271347170215D3B9A_gshared (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5_gshared (Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67* __this, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4897F594E231A4AAB735584DFBA548C47E31C1CC_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7C08A1421429D0965EE28CDAE1D657604655C5FD_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* Dictionary_2_get_Keys_mBC9930965EF3046F5F8454E33338E13E99A1A4EC_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* Dictionary_2_get_Values_m27FEAEF4C087C10F5D6277A4613998D6F976AC3C_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_m4973C4A0D8E56DF2FDEC3207B88E17F271813FB0_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD8AE688A975D58E72A51B0DC15B09405FBC23C8A_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB81E38343A8C908D30FE20903D28626BCAE4288C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_gshared_inline (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_gshared_inline (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9520BCA9005AA8E71D7045E1E5EC325A700B5ACC_gshared (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* __this, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m96AD4734A4C6EA449F940C6C15C61984AD044B2D_gshared (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* __this, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8E7CB9A599C811C0BB41428EDCE268151C0373B2_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m807B7A9B794DEC880BD7E33E71CED8198681588A_gshared (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F_gshared (Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6* __this, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0E54B7BCCC0580C613960DEC6A0DD4BD73EFEE73_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m41F3E4A725515E690F1F851B5A033E4DD699656C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* Dictionary_2_get_Keys_m174EF0458AC3EA056263066707A1C9D2BB450927_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* Dictionary_2_get_Values_mA19E9798FBF0B90A477726703AE950E2A07C5B3E_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_m5F443DBDB28AEE25420EDE7A899BC18F2528B6E4_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C3361A5F82F77CF494878230BAA1D7466A28111_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m856888959FA042D8DA5967263A4E9DEBE0787B3B_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A2337330B20E81DA4DDE2CA721E67A20A271586_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_gshared_inline (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_gshared_inline (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mBEFD4B7F81D583FE0007A3B178052584DD9BA732_gshared (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* __this, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF3A4D1EAAF73C123C2D0608AD17F24DB9A97728D_gshared (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* __this, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD895CC67E47D16B0254EDFBE438FCCA16EAA08C7_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD3E09C7F3BE4CE817D74F6A3E15FECF062055C10_gshared (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0_gshared (Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86* __this, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m27C219A18D6BACDE8D9B8FF43E381AF99F9783F9_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m014274E535823BA3B5856BB2ABABE370B73BB417_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* Dictionary_2_get_Keys_m69F63E9B669AF771DB9622C6281100D5E740AB02_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* Dictionary_2_get_Values_m1432B41EF2FB49A7E98360FF1A1C19385D1BBA63_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m87CBF305671E55249DE7B475FEC67B4640204158_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7563DC7A3D7F0924257D0C822E5499D51E72659F_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF268E296E53BC93762301DB7998188D37BEE4208_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_gshared_inline (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_gshared_inline (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m3DDC09978183E2819AD8DE8208A35B27B0E7736D_gshared (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* __this, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF18286F7229298BB2B0DB13CC791EAD86836B4A3_gshared (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* __this, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5A7B1047CB081B36C8FA374ABC53EFB04AE915D8_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC2514333C445ACA53A2FFC309D8B030D53E3FFB9_gshared (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245_gshared (Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4* __this, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7E6258DBD4BD666B85C4BC0B042F17E33F68D312_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF8037D1DFFE018C32BF2FBB0CF61DD9BBA0BD1C4_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* Dictionary_2_get_Keys_mED0CBF7AB0ED74D7DCAB65308653F6E623B08C10_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* Dictionary_2_get_Values_mE175470F8D9918B86A50BF90D07488832FCDDB89_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m48C1C4C0D2F50319BA67E4022C8237C87ACFFA8B_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2A66E0743CB02F4D5641FDC3F090F19039C255EA_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m529689FD1B8505A0399CA8E884C48B8692408B44_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7_gshared (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8_gshared (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___dictionary0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* EqualityComparer_1_CreateComparer_m1010F39F37C7F79557024DE7C935C5978870801F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* EqualityComparer_1_CreateComparer_m26DE28F00BCF8640D3BC997F540F89CB22212607_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* EqualityComparer_1_CreateComparer_m6BA8AC5D211E0F719AA6B51355C20A865C9F75F2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D_gshared)(__this, ___capacity0, ___comparer1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m4631D2526B8D9CDB3BEEC29271499F5F800C8522 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m4631D2526B8D9CDB3BEEC29271499F5F800C8522_gshared)(__this, ___dictionary0, ___comparer1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___argument0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, uint64_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB_gshared)(__this, ___key0, ___value1, method);
}
inline uint64_t KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141*, const RuntimeMethod*))KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_inline (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
inline void KeyCollection__ctor_m707010121B9EAF70F8BB636C197D93F984A4837F (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* __this, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, const RuntimeMethod*))KeyCollection__ctor_m707010121B9EAF70F8BB636C197D93F984A4837F_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m61F7339402B5F71CED88F7903BC6AC61330DBFDE (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* __this, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, const RuntimeMethod*))ValueCollection__ctor_m61F7339402B5F71CED88F7903BC6AC61330DBFDE_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, uint64_t, const RuntimeMethod*))Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8_gshared)(__this, ___key0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, uint64_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared)(__this, ___key0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, const RuntimeMethod*))Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___resource0, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mAF3AC60580F864E1A63DDC9052FE1AF50CD4D9DF (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141*, uint64_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mAF3AC60580F864E1A63DDC9052FE1AF50CD4D9DF_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56 (Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E* __this, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E*, Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, int32_t, const RuntimeMethod*))Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___min0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m4FE99BE2806EA54513D3410EC46E583A5EE68AB7 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, const RuntimeMethod*))Dictionary_2_Resize_m4FE99BE2806EA54513D3410EC46E583A5EE68AB7_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___resource0, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___key0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___oldSize0, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m6D0A3C53287F96C5A46975A457E052F6EA2B7F30 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m6D0A3C53287F96C5A46975A457E052F6EA2B7F30_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* Dictionary_2_get_Keys_m9325EA172FB93B3BACB00C8B5C3265D9AEDA4FA6 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, const RuntimeMethod*))Dictionary_2_get_Keys_m9325EA172FB93B3BACB00C8B5C3265D9AEDA4FA6_gshared)(__this, method);
}
inline ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* Dictionary_2_get_Values_mBB7A40D641EDDE60E69C5122414003E9EB21F362 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, const RuntimeMethod*))Dictionary_2_get_Values_mBB7A40D641EDDE60E69C5122414003E9EB21F362_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, uint64_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared)(__this, ___key0, ___value1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___value0, Type_t* ___targetType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___key0, Type_t* ___targetType1, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355 (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865_gshared)(__this, ___capacity0, method);
}
inline void Dictionary_2__ctor_m8C23C3613ADC67E076E8D3F450848C221AE85958 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m8C23C3613ADC67E076E8D3F450848C221AE85958_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, uint64_t, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, const RuntimeMethod*))Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242_gshared)(__this, ___key0, ___value1, method);
}
inline uint64_t KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4*, const RuntimeMethod*))KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_gshared_inline)(__this, method);
}
inline MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_inline (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, const RuntimeMethod* method)
{
	return ((  MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 (*) (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4*, const RuntimeMethod*))KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m00CB84F8E4B0FFFA5172A78BE1FFC5C870235C36 (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* __this, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, const RuntimeMethod*))KeyCollection__ctor_m00CB84F8E4B0FFFA5172A78BE1FFC5C870235C36_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_mD3EA99AC39E4DE5E3B19002AFC054C4056A7D3C4 (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* __this, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, const RuntimeMethod*))ValueCollection__ctor_mD3EA99AC39E4DE5E3B19002AFC054C4056A7D3C4_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, uint64_t, const RuntimeMethod*))Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, uint64_t, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m27DCF517646F05EE649AD484BF676305B42B4E17 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m27DCF517646F05EE649AD484BF676305B42B4E17_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, const RuntimeMethod*))Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m359A745591EACC43F271D6D271347170215D3B9A (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4*, uint64_t, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, const RuntimeMethod*))KeyValuePair_2__ctor_m359A745591EACC43F271D6D271347170215D3B9A_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5 (Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67* __this, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67*, Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9 (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9_gshared)(__this, ___array0, ___index1, method);
}
inline void Dictionary_2_Resize_m4897F594E231A4AAB735584DFBA548C47E31C1CC (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, const RuntimeMethod*))Dictionary_2_Resize_m4897F594E231A4AAB735584DFBA548C47E31C1CC_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m7C08A1421429D0965EE28CDAE1D657604655C5FD (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m7C08A1421429D0965EE28CDAE1D657604655C5FD_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* Dictionary_2_get_Keys_mBC9930965EF3046F5F8454E33338E13E99A1A4EC (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, const RuntimeMethod*))Dictionary_2_get_Keys_mBC9930965EF3046F5F8454E33338E13E99A1A4EC_gshared)(__this, method);
}
inline ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* Dictionary_2_get_Values_m27FEAEF4C087C10F5D6277A4613998D6F976AC3C (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, const RuntimeMethod*))Dictionary_2_get_Values_m27FEAEF4C087C10F5D6277A4613998D6F976AC3C_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_m4973C4A0D8E56DF2FDEC3207B88E17F271813FB0 (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_m4973C4A0D8E56DF2FDEC3207B88E17F271813FB0_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, uint64_t, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, const RuntimeMethod*))Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_mD8AE688A975D58E72A51B0DC15B09405FBC23C8A (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mD8AE688A975D58E72A51B0DC15B09405FBC23C8A_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147_gshared)(__this, ___capacity0, method);
}
inline void Dictionary_2__ctor_mB81E38343A8C908D30FE20903D28626BCAE4288C (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB81E38343A8C908D30FE20903D28626BCAE4288C_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, uint64_t, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, const RuntimeMethod*))Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57_gshared)(__this, ___key0, ___value1, method);
}
inline uint64_t KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_gshared_inline)(__this, method);
}
inline SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_inline (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, const RuntimeMethod* method)
{
	return ((  SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F (*) (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m9520BCA9005AA8E71D7045E1E5EC325A700B5ACC (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* __this, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, const RuntimeMethod*))KeyCollection__ctor_m9520BCA9005AA8E71D7045E1E5EC325A700B5ACC_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m96AD4734A4C6EA449F940C6C15C61984AD044B2D (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* __this, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, const RuntimeMethod*))ValueCollection__ctor_m96AD4734A4C6EA449F940C6C15C61984AD044B2D_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, uint64_t, const RuntimeMethod*))Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, uint64_t, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m8E7CB9A599C811C0BB41428EDCE268151C0373B2 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m8E7CB9A599C811C0BB41428EDCE268151C0373B2_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, const RuntimeMethod*))Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m807B7A9B794DEC880BD7E33E71CED8198681588A (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6*, uint64_t, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, const RuntimeMethod*))KeyValuePair_2__ctor_m807B7A9B794DEC880BD7E33E71CED8198681588A_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F (Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6* __this, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6*, Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, int32_t, const RuntimeMethod*))Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3_gshared)(__this, ___array0, ___index1, method);
}
inline void Dictionary_2_Resize_m0E54B7BCCC0580C613960DEC6A0DD4BD73EFEE73 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, const RuntimeMethod*))Dictionary_2_Resize_m0E54B7BCCC0580C613960DEC6A0DD4BD73EFEE73_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m41F3E4A725515E690F1F851B5A033E4DD699656C (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m41F3E4A725515E690F1F851B5A033E4DD699656C_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* Dictionary_2_get_Keys_m174EF0458AC3EA056263066707A1C9D2BB450927 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, const RuntimeMethod*))Dictionary_2_get_Keys_m174EF0458AC3EA056263066707A1C9D2BB450927_gshared)(__this, method);
}
inline ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* Dictionary_2_get_Values_mA19E9798FBF0B90A477726703AE950E2A07C5B3E (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, const RuntimeMethod*))Dictionary_2_get_Values_mA19E9798FBF0B90A477726703AE950E2A07C5B3E_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE_gshared)(___key0, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_m5F443DBDB28AEE25420EDE7A899BC18F2528B6E4 (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_m5F443DBDB28AEE25420EDE7A899BC18F2528B6E4_gshared)(___value0, ___argName1, method);
}
inline void Dictionary_2_set_Item_m5C3361A5F82F77CF494878230BAA1D7466A28111 (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, uint64_t, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, const RuntimeMethod*))Dictionary_2_set_Item_m5C3361A5F82F77CF494878230BAA1D7466A28111_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m856888959FA042D8DA5967263A4E9DEBE0787B3B (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m856888959FA042D8DA5967263A4E9DEBE0787B3B_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m7A2337330B20E81DA4DDE2CA721E67A20A271586 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7A2337330B20E81DA4DDE2CA721E67A20A271586_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF_gshared)(__this, ___key0, ___value1, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E*, const RuntimeMethod*))KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_inline (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_mBEFD4B7F81D583FE0007A3B178052584DD9BA732 (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* __this, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, const RuntimeMethod*))KeyCollection__ctor_mBEFD4B7F81D583FE0007A3B178052584DD9BA732_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_mF3A4D1EAAF73C123C2D0608AD17F24DB9A97728D (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* __this, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, const RuntimeMethod*))ValueCollection__ctor_mF3A4D1EAAF73C123C2D0608AD17F24DB9A97728D_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_mD895CC67E47D16B0254EDFBE438FCCA16EAA08C7 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))Dictionary_2_Remove_mD895CC67E47D16B0254EDFBE438FCCA16EAA08C7_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, const RuntimeMethod*))Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mD3E09C7F3BE4CE817D74F6A3E15FECF062055C10 (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mD3E09C7F3BE4CE817D74F6A3E15FECF062055C10_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0 (Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86* __this, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86*, Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, int32_t, const RuntimeMethod*))Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m27C219A18D6BACDE8D9B8FF43E381AF99F9783F9 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, const RuntimeMethod*))Dictionary_2_Resize_m27C219A18D6BACDE8D9B8FF43E381AF99F9783F9_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m014274E535823BA3B5856BB2ABABE370B73BB417 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m014274E535823BA3B5856BB2ABABE370B73BB417_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* Dictionary_2_get_Keys_m69F63E9B669AF771DB9622C6281100D5E740AB02 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, const RuntimeMethod*))Dictionary_2_get_Keys_m69F63E9B669AF771DB9622C6281100D5E740AB02_gshared)(__this, method);
}
inline ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* Dictionary_2_get_Values_m1432B41EF2FB49A7E98360FF1A1C19385D1BBA63 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, const RuntimeMethod*))Dictionary_2_get_Values_m1432B41EF2FB49A7E98360FF1A1C19385D1BBA63_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD_gshared)(___key0, method);
}
inline void Dictionary_2_set_Item_m87CBF305671E55249DE7B475FEC67B4640204158 (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m87CBF305671E55249DE7B475FEC67B4640204158_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m7563DC7A3D7F0924257D0C822E5499D51E72659F (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))Dictionary_2_ContainsKey_m7563DC7A3D7F0924257D0C822E5499D51E72659F_gshared)(__this, ___key0, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_gshared_inline)(method);
}
inline void Dictionary_2__ctor_mF268E296E53BC93762301DB7998188D37BEE4208 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF268E296E53BC93762301DB7998188D37BEE4208_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72_gshared)(__this, ___key0, ___value1, method);
}
inline RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, const RuntimeMethod* method)
{
	return ((  RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 (*) (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_inline (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E*, const RuntimeMethod*))KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m3DDC09978183E2819AD8DE8208A35B27B0E7736D (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* __this, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, const RuntimeMethod*))KeyCollection__ctor_m3DDC09978183E2819AD8DE8208A35B27B0E7736D_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_mF18286F7229298BB2B0DB13CC791EAD86836B4A3 (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* __this, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, const RuntimeMethod*))ValueCollection__ctor_mF18286F7229298BB2B0DB13CC791EAD86836B4A3_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, const RuntimeMethod*))Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_m5A7B1047CB081B36C8FA374ABC53EFB04AE915D8 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, const RuntimeMethod*))Dictionary_2_Remove_m5A7B1047CB081B36C8FA374ABC53EFB04AE915D8_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, const RuntimeMethod*))Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mC2514333C445ACA53A2FFC309D8B030D53E3FFB9 (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mC2514333C445ACA53A2FFC309D8B030D53E3FFB9_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245 (Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4* __this, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4*, Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaiseEventBatch_GetHashCode_mBD26C0817F3D9E91AE5BD4633A60CEA4E59705E3 (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m7E6258DBD4BD666B85C4BC0B042F17E33F68D312 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, const RuntimeMethod*))Dictionary_2_Resize_m7E6258DBD4BD666B85C4BC0B042F17E33F68D312_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mF8037D1DFFE018C32BF2FBB0CF61DD9BBA0BD1C4 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mF8037D1DFFE018C32BF2FBB0CF61DD9BBA0BD1C4_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* Dictionary_2_get_Keys_mED0CBF7AB0ED74D7DCAB65308653F6E623B08C10 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, const RuntimeMethod*))Dictionary_2_get_Keys_mED0CBF7AB0ED74D7DCAB65308653F6E623B08C10_gshared)(__this, method);
}
inline ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* Dictionary_2_get_Values_mE175470F8D9918B86A50BF90D07488832FCDDB89 (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, const RuntimeMethod*))Dictionary_2_get_Values_mE175470F8D9918B86A50BF90D07488832FCDDB89_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1 (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1_gshared)(___key0, method);
}
inline void Dictionary_2_set_Item_m48C1C4C0D2F50319BA67E4022C8237C87ACFFA8B (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m48C1C4C0D2F50319BA67E4022C8237C87ACFFA8B_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_m2A66E0743CB02F4D5641FDC3F090F19039C255EA (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, const RuntimeMethod*))Dictionary_2_ContainsKey_m2A66E0743CB02F4D5641FDC3F090F19039C255EA_gshared)(__this, ___key0, method);
}
inline void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared)(__this, ___capacity0, ___comparer1, method);
}
inline int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared)(__this, ___capacity0, method);
}
inline EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m529689FD1B8505A0399CA8E884C48B8692408B44 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m529689FD1B8505A0399CA8E884C48B8692408B44_gshared)(__this, ___dictionary0, ___comparer1, method);
}
inline void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared)(__this, ___key0, ___value1, method);
}
inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, const RuntimeMethod*))KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7 (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7_gshared)(__this, ___dictionary0, method);
}
inline void ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8 (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8_gshared)(__this, ___dictionary0, method);
}
inline int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared)(__this, ___key0, method);
}
inline bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared)(__this, ___key0, ___value1, ___behavior2, method);
}
inline bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared)(__this, ___key0, method);
}
inline int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2 (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2_gshared)(__this, ___key0, ___value1, method);
}
inline void Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750* __this, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750*, Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
inline void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared)(__this, ___array0, ___index1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared)(__this, ___newSize0, ___forceNewHashCodes1, method);
}
inline KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8_gshared)(__this, method);
}
inline ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, const RuntimeMethod*))Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA (RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared)(___key0, method);
}
inline void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0 (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared)(__this, ___key0, ___value1, method);
}
inline bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, const RuntimeMethod*))Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared)(__this, ___key0, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* EqualityComparer_1_CreateComparer_m1010F39F37C7F79557024DE7C935C5978870801F (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m1010F39F37C7F79557024DE7C935C5978870801F_gshared)(method);
}
inline EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* EqualityComparer_1_CreateComparer_m26DE28F00BCF8640D3BC997F540F89CB22212607 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m26DE28F00BCF8640D3BC997F540F89CB22212607_gshared)(method);
}
inline EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A_gshared)(method);
}
inline EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* EqualityComparer_1_CreateComparer_m6BA8AC5D211E0F719AA6B51355C20A865C9F75F2 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m6BA8AC5D211E0F719AA6B51355C20A865C9F75F2_gshared)(method);
}
inline EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5DA5AA64DE7BDB71265D475EF0B2D2E815A32E27_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD9F2D1A3820FA90253E302E940D67EF3BFB789E0_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m25B715982E9E4E0A268087194543AC5CD73F0CE9_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_5;
		L_5 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEEA35AE905CAD463DAD9200CD581E80CDE3A1F66_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m4631D2526B8D9CDB3BEEC29271499F5F800C8522(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4631D2526B8D9CDB3BEEC29271499F5F800C8522_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* G_B2_0 = NULL;
	Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m7A4828C9C4BD89359200F64C582A2DD5FE1AC89D(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* L_11 = ((Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_13 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint64_t L_19 = (uint64_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint64_t L_32;
				L_32 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m405E34F0293DA409F957B77C87A3B8ABD012BCB0_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* Dictionary_2_get_Keys_m9325EA172FB93B3BACB00C8B5C3265D9AEDA4FA6_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_0 = (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_1 = (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m707010121B9EAF70F8BB636C197D93F984A4837F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_2 = (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m126BE3E8EFA6A9C9F1955D75F3339AFEA0106E97_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_0 = (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_1 = (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m707010121B9EAF70F8BB636C197D93F984A4837F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_2 = (KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* Dictionary_2_get_Values_mBB7A40D641EDDE60E69C5122414003E9EB21F362_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_0 = (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_1 = (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m61F7339402B5F71CED88F7903BC6AC61330DBFDE(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_2 = (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m792E7768E3B481ECCF9BBC1B010BE1602681EB0A_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_0 = (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_1 = (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m61F7339402B5F71CED88F7903BC6AC61330DBFDE(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_2 = (ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m27326E93948245682BBADE7D8BCE3E74DBA4D4A4_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_3 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint64_t L_6 = ___key0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m6AD7EF733F5A558D8A6EED7C9E5030BFBFC26344_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4C1C46E4373720F04F1C9AB4674F99B73BB91345_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_4 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9F28A9A48819AAD6E52102DAEC42F75718FD995F_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_4 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint64_t L_9;
		L_9 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m6E34CC0D7FF8EBEE6889AF1C9DB70009EDBC1706_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_4 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mD16F83D507657848EA3796E8626A39F47860F26A_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_0 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_7 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint64_t L_16 = (uint64_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mAF3AC60580F864E1A63DDC9052FE1AF50CD4D9DF((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E Dictionary_2_GetEnumerator_m268E9A508F8F5DC992F86AB7A499607DC145E598_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m67A154807075CDBF86E35BCB856B6D96970E0C80_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8CF069BCF841CFA3F82C47E2B565136F4C3AB6E2_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_6;
		L_6 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_14 = (KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E*)(KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_15 = V_0;
		Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_2 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint64_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_19;
		L_19 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint64_t L_22 = (uint64_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint64_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint64_t L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint64_t L_48 = (uint64_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		uint64_t L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_5 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)(EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* V_10 = NULL;
	uint64_t V_11 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_4 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint64_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint64_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_24;
		L_24 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint64_t L_27 = (uint64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint64_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint64_t L_35 = ___key0;
		uint64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint64_t L_53 = (uint64_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		uint64_t L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint64_t L_61 = ___key0;
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m4FE99BE2806EA54513D3410EC46E583A5EE68AB7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_78 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_94 = V_10;
		uint64_t L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mEDE7742DF437B3C3A8731578769FEE71C1CF4FE6_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m1AA5857181E62BFB8598BDCE41B5704E806D13B2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint64_t L_21;
		L_21 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint64_t L_24;
		L_24 = KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4FE99BE2806EA54513D3410EC46E583A5EE68AB7_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m6D0A3C53287F96C5A46975A457E052F6EA2B7F30(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D0A3C53287F96C5A46975A457E052F6EA2B7F30_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_1 = NULL;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_3 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)(EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_5 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint64_t));
		uint64_t L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint64_t* L_17 = (uint64_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint64_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_13 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_20;
		L_20 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_21 = V_4;
		uint64_t L_22 = (uint64_t)L_21->___key_2;
		uint64_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_25 = V_4;
		uint64_t L_26 = (uint64_t)L_25->___key_2;
		uint64_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_34 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_4 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m2ECEF9CC20C5A76F77749D548074B9696E6A9C46_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m354A08F6B464191CE5AAB8AF3AC8FDA7D89A05D6(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mCA15DB3D1C7D760F90A537FC84F1105E70661FDB_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA3D665A9EEA449C569659EA8802E9957EB80841F_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBF9B3C95C5413D070F09D1756D76C7C123BD4B92_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mBF5D211A941281D2550A21A4D03575D8CE5761D2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t25F1392EC4313CCB29C2D45063150344A3D44B8E* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_mB57E18E121361D897CFE6C72A63AD6190A40165D(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_18 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint64_t L_27 = (uint64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_40 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			uint64_t L_49 = (uint64_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mAF3AC60580F864E1A63DDC9052FE1AF50CD4D9DF((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9C2FA6E8389AE5C38398F6469B6C119558C01095_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m6343FD7F3D489C12A91AA02170FEC3F41CC2C990_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7E2BA34A063DE5CA6B69ED6C22E86B2C2E352C7E_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2BC6A6A999E4B6137AFD65E0F15EA9CD501F7E22_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mD52D5F3F858A28DEFD378EC8536966FDCD4045A6_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mE509240A7EFDF5ACE8D7EF98AE1CDC09AFC1BF7E_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t563696675DB58EAD1AC9A42922A2B2C90AE4D555* L_0;
		L_0 = Dictionary_2_get_Keys_m9325EA172FB93B3BACB00C8B5C3265D9AEDA4FA6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m8099BDDAA7F9BAA879269D7D71D94DAC872950FD_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tB8340917182346224D1E3DA5E1B03F4928A6A87A* L_0;
		L_0 = Dictionary_2_get_Values_mBB7A40D641EDDE60E69C5122414003E9EB21F362(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mAF76D2CAF4F6A121D84CFEF57F2796D63BBE2188_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m5BBEBB51677566000E5F3A95A7E55A3A81E2CFC8(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826* L_5 = (EntryU5BU5D_tE39FBE8A2E415E6EC765A29D9AF2375C74681826*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m113B313E324CABFA07AF398062DAF82A4E4F4242_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_mF90D721AC9C32207C15A47B81257D1E5FA368B93(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m057F9AB7AC8E4041165E1F0C7DA0AC08E7B4D87D_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_m780B77D83B69F205D5C14934B23B8D91C79DDCDB(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m803A2C9405486D5EBE111595183C6541EBF42054_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m9614D897FE4C4AF2808D8BA89535FF6060823355(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA52D024A7760B170A8F2581B0C2BBC23049B42AC_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m534068017D9E353463195868F6DE2B49F30B4E56((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tD47D5E980DA77F17B740656DFC82938C8921A36E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m2A962D338BD3DF9727C26CF6017034A3036B2B7A_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9C984EBEBE2B3E3B540E8B426A344E2DEF55A6DC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_Remove_m53C10B69E80D763AF7966549B52F08796ECD4A2E(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6C75533E309F29CA2147EFFB70B94293C474B5B1_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD415350282061725D9670A03BC89EAE9A3EBA4B0_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD569A4C9CF136469216B1B8D8BFE7C99E2D526A_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_5;
		L_5 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A8D2DF6513C4240A431CAC704C8C01A180B5F43_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m8C23C3613ADC67E076E8D3F450848C221AE85958(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8C23C3613ADC67E076E8D3F450848C221AE85958_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* G_B2_0 = NULL;
	Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_mC6D12585E5DA52BF45C19DE17281585473245B84(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* L_11 = ((Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_13 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint64_t L_19 = (uint64_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_22 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint64_t L_32;
				L_32 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_33;
				L_33 = KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB53EE5BD2C2F21182818DC02B0A713530FBFA64C_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* Dictionary_2_get_Keys_mBC9930965EF3046F5F8454E33338E13E99A1A4EC_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_0 = (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_1 = (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m00CB84F8E4B0FFFA5172A78BE1FFC5C870235C36(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_2 = (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mD81F804E809734ED0D41D15198CACAFF03AEA735_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_0 = (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_1 = (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m00CB84F8E4B0FFFA5172A78BE1FFC5C870235C36(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_2 = (KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* Dictionary_2_get_Values_m27FEAEF4C087C10F5D6277A4613998D6F976AC3C_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_0 = (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_1 = (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mD3EA99AC39E4DE5E3B19002AFC054C4056A7D3C4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_2 = (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mCE62F8CCCBBBEA43267AC76E606D9BC5505A70F6_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_0 = (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_1 = (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mD3EA99AC39E4DE5E3B19002AFC054C4056A7D3C4(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_2 = (ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 Dictionary_2_get_Item_mDA5266358B014E25E4B749198373C478D3D2F24A_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_3 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_5 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint64_t L_6 = ___key0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10));
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8B690A9855A27825088F04AD2FAEFF05F4131505_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_1;
		L_1 = KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mDB1BDC9F70255492BCB42D6EF09A09D47C819884_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_3;
		L_3 = EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_4 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_6 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_7;
		L_7 = KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18FDBAEF2C53ED3D08E21F84DF5D446B519EFF5C_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_3;
		L_3 = EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_4 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_6 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_7;
		L_7 = KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint64_t L_9;
		L_9 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m27DCF517646F05EE649AD484BF676305B42B4E17(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8FE9CE3CAA5EB274CC37F4B291D6A86714DB62F4_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_4 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD8AE688A975D58E72A51B0DC15B09405FBC23C8A_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m413E673F6EACA8069FBE85FA35231E7466196A38_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_0 = NULL;
	int32_t V_1 = 0;
	MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_0 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_6;
		L_6 = EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_9 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_10 = ___value0;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_7 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint64_t L_16 = (uint64_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_19 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m359A745591EACC43F271D6D271347170215D3B9A((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 Dictionary_2_GetEnumerator_mC8BC50CD20DA67FF183D99B259FD99558B50ECBB_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mC415E43CDC0787CDEB9CA13781AE6387DB267610_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0A07AEC9E16399F8B68A631554878FCAD2B822CD_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_6;
		L_6 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_14 = (KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75*)(KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_15 = V_0;
		Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_2 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint64_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_19;
		L_19 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint64_t L_22 = (uint64_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint64_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint64_t L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint64_t L_48 = (uint64_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		uint64_t L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_5 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)(EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* V_10 = NULL;
	uint64_t V_11 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_4 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint64_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint64_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_24;
		L_24 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint64_t L_27 = (uint64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint64_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Delegate_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint64_t L_35 = ___key0;
		uint64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint64_t L_53 = (uint64_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		uint64_t L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___Delegate_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint64_t L_61 = ___key0;
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m4897F594E231A4AAB735584DFBA548C47E31C1CC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_78 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_94 = V_10;
		uint64_t L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_96 = V_10;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___Delegate_1), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m2B5DE6A11A33A5948565A1AC5C62E440DC0830CE_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m3AA6214FBA6B21D2E3885C5A142E6C118F7D2865(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint64_t L_21;
		L_21 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint64_t L_24;
		L_24 = KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_27;
		L_27 = KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4897F594E231A4AAB735584DFBA548C47E31C1CC_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m7C08A1421429D0965EE28CDAE1D657604655C5FD(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7C08A1421429D0965EE28CDAE1D657604655C5FD_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_1 = NULL;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_3 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)(EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_5 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint64_t));
		uint64_t L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint64_t* L_17 = (uint64_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m27DCF517646F05EE649AD484BF676305B42B4E17_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint64_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_13 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_20;
		L_20 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_21 = V_4;
		uint64_t L_22 = (uint64_t)L_21->___key_2;
		uint64_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_25 = V_4;
		uint64_t L_26 = (uint64_t)L_25->___key_2;
		uint64_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_34 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_41 = V_4;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10* L_42 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tAA92127DAC27EC66C179A1342BA5EFEC6E330293* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB224BBB10BDA3D8658479404E0DDCA457459D0B4_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10* L_3 = ___value1;
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_4 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_6 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)L_3)->___Anchors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)L_3)->___Delegate_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6A917FFFE0558557724D4C9A11695F6584A792EF_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, uint64_t ___key0, MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m091D70681292C37B509C76C147A51B8775035638(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mEE8C52C5FF724F77B581FE01E3BE285B714838D6_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62B33F22F72A65AD1DF50B28E46623ABAADEB993_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mFAF4FD22E6251A1FE1C1F34AFAD9933470DA0697_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m8370B2316AD2D873B153B0A059AFB1E5C87A4A33(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBD29F574F2854E8E15B8C0D6A83271F380630C75* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m28DBAF9D955AF2E8D5E25150FC3945DF25368AE9(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_18 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint64_t L_27 = (uint64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_32 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_42 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint64_t L_51 = (uint64_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_54 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m359A745591EACC43F271D6D271347170215D3B9A((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m934FB3C6D706A0E4C513316B86E011850FC06C96_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m0EAFC6003168B0876D3E48EA96D7DE93CB41B9F8_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9BC0437F37DCDA0DC12A722F116F7DD15DAFEA99_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2B060A7C1080D8757738525EDB27D92A27D2C502_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mD16007543E4FA52604C2056F6CED349DD13777C5_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m55B52B8F6838646DB0FEB88987B7E9C0DBD3E054_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t8E360D010F9864A537FFF436810C4643C7AEFC54* L_0;
		L_0 = Dictionary_2_get_Keys_mBC9930965EF3046F5F8454E33338E13E99A1A4EC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mAD3C7D86BDBF949D6C46C98FE6BF7892B36152F0_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t081070EC1AFE74D758C3447FED6B5C04E5A6B372* L_0;
		L_0 = Dictionary_2_get_Values_m27FEAEF4C087C10F5D6277A4613998D6F976AC3C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m47A19A1DB3206F3898DF1A07E8AE03989F985319_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m6B0A38283E3D8DE93A53CA21561A773EC22C5403(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10* L_5 = (EntryU5BU5D_t13AFE90C828758AD2D8B9B1F41E35AC87A6D0E10*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_7 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mAF94AD2DC4431F6ED3587BDF217BF31FDA448848_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_m4973C4A0D8E56DF2FDEC3207B88E17F271813FB0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m8578BC82910E7B32F9712571A7E547AC9F6CA44A(__this, L_3, ((*(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)((MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mFA2FD0892583337ACBEC6F2FB08499C71F13D1A3_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10_m4973C4A0D8E56DF2FDEC3207B88E17F271813FB0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_m7D7DF056D24835A4C4EA37C5A0DFBB610A4C1242(__this, L_3, ((*(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)((MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)(MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m48154440DD98D915A7C3EBA8CE7F0A0863DDED61_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD8AE688A975D58E72A51B0DC15B09405FBC23C8A(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mAD25F538BC0A5C05037A49983D38D1D8819AFB9F_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF847A489029ED57CF299F95CDF3C4B108A75BCB5((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t3801628E90B07F41DA39605BB00199146BC2AF67 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mFC6C50951EFF24D8A12522F2530B6A5502C0B878_gshared (Dictionary_2_t23FF393E49E2296FCA70BAE140470B03778A0D33* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m9E9512FE98FCFD4584684FCFC27705E12D088A1B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_Remove_m27DCF517646F05EE649AD484BF676305B42B4E17(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m37D86CB69D7F96BF05DF00803B4FB652E8185460_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m14A26825308261CF7AE4571D830E574E7600E38C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49BD56F6B53E1A418AEE8DEC47EA62A0B444ED3B_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_5;
		L_5 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF37176E36CC2592F63B3D77E6A662DD4F8E6E1FA_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_mB81E38343A8C908D30FE20903D28626BCAE4288C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB81E38343A8C908D30FE20903D28626BCAE4288C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* G_B2_0 = NULL;
	Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_mAB9A2DF7616DA75AE92D47E9432CCDA1AA6B976A(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* L_11 = ((Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_13 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint64_t L_19 = (uint64_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_22 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint64_t L_32;
				L_32 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_33;
				L_33 = KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC360F0A3971D51EB21527AF9E369A61DF69C635F_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* Dictionary_2_get_Keys_m174EF0458AC3EA056263066707A1C9D2BB450927_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_0 = (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_1 = (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m9520BCA9005AA8E71D7045E1E5EC325A700B5ACC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_2 = (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9CC2232C27F4F014A81DA43AD5FB02CEB24365C9_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_0 = (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_1 = (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m9520BCA9005AA8E71D7045E1E5EC325A700B5ACC(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_2 = (KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* Dictionary_2_get_Values_mA19E9798FBF0B90A477726703AE950E2A07C5B3E_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_0 = (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_1 = (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m96AD4734A4C6EA449F940C6C15C61984AD044B2D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_2 = (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31795B83040E4AFE484EAC265B5C4905BBC4D16C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_0 = (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_1 = (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m96AD4734A4C6EA449F940C6C15C61984AD044B2D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_2 = (ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F Dictionary_2_get_Item_m958F1FC3ED5F49D6B1F1580EAE7185D554B543D1_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_3 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_5 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint64_t L_6 = ___key0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F));
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5C3361A5F82F77CF494878230BAA1D7466A28111_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA0AC20956E8345909F91A787641D76E071B77FB0_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_1;
		L_1 = KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m0F9529A35CE742A51C58F189C85186E9FE316A96_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_3;
		L_3 = EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_4 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_6 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_7;
		L_7 = KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m760093B3BB0C56E007EFAB62A4834D299A673FC7_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_3;
		L_3 = EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_4 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_6 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_7;
		L_7 = KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint64_t L_9;
		L_9 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m8E7CB9A599C811C0BB41428EDCE268151C0373B2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8B3FF6DCAB7E119026BD3D6F77A80B06E545C024_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_4 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m856888959FA042D8DA5967263A4E9DEBE0787B3B_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m5304A95D462C0F6A8C93D03F55369021AFF8452C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_0 = NULL;
	int32_t V_1 = 0;
	SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_0 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_6;
		L_6 = EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_9 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value_3;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_10 = ___value0;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = (int32_t)__this->____count_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_7 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint64_t L_16 = (uint64_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_19 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m807B7A9B794DEC880BD7E33E71CED8198681588A((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 Dictionary_2_GetEnumerator_m4F4B49E4DA3136CD47FC4AB0E1EA7124E4C2B205_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB6F8A5B6F34897386E4A7265556909719BD35760_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m7994C87EE63C61009405DB65DEB40921F845F51B_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_6;
		L_6 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_14 = (KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F*)(KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_15 = V_0;
		Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_2 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint64_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_19;
		L_19 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint64_t L_22 = (uint64_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint64_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint64_t L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint64_t L_48 = (uint64_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		uint64_t L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_5 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)(EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* V_10 = NULL;
	uint64_t V_11 = 0;
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_4 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint64_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint64_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_24;
		L_24 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint64_t L_27 = (uint64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint64_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Delegate_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint64_t L_35 = ___key0;
		uint64_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint64_t L_53 = (uint64_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		uint64_t L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3))->___Delegate_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint64_t L_61 = ___key0;
		uint64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m0E54B7BCCC0580C613960DEC6A0DD4BD73EFEE73(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_78 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_94 = V_10;
		uint64_t L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_96 = V_10;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value_3))->___Delegate_1), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mC799C65D844A1F86B723245BB1C52AA0DB99DE10_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m77AED642B4133197D8685EF0B9AA6421AC8B7147(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint64_t L_21;
		L_21 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint64_t L_24;
		L_24 = KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_27;
		L_27 = KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0E54B7BCCC0580C613960DEC6A0DD4BD73EFEE73_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m41F3E4A725515E690F1F851B5A033E4DD699656C(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m41F3E4A725515E690F1F851B5A033E4DD699656C_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_1 = NULL;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_3 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)(EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_5 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint64_t));
		uint64_t L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint64_t* L_17 = (uint64_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8E7CB9A599C811C0BB41428EDCE268151C0373B2_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint64_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_13 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_20;
		L_20 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_21 = V_4;
		uint64_t L_22 = (uint64_t)L_21->___key_2;
		uint64_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_25 = V_4;
		uint64_t L_26 = (uint64_t)L_25->___key_2;
		uint64_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_34 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_41 = V_4;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F* L_42 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tF1E62CADED76FB22338D787DC41DA6C74023D168* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAD56A886CFCFB46D81D5C033D703AEAE9C67ADFA_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F* L_3 = ___value1;
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_4 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_6 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)L_3)->___Anchor_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)L_3)->___Delegate_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mEB6E1E891FDD36148A0C93B31CD1B61D7CE240AF_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, uint64_t ___key0, SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F ___value1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___key0;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7DCBBE24DE65988D6B282E19230A6FC84CB36C0F(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13F730C6858C9F41C4BBE6A18027D3AAB30DEC05_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m541BAEA2DF2BA0B356CB62A6F7C1080F9C918244_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m1C0B35D8B3DAF2EC512138A16D54484B9D217A30_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m34953D29810842E20BEB409B039C42A860D57ADE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t57494E4493439F71E651B4B5411BC7057C9FEF8F* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m74AF9A0556E6E0EC5619A1E29B2E544936FE3DE3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_18 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint64_t L_27 = (uint64_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_32 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_42 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint64_t L_51 = (uint64_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_54 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m807B7A9B794DEC880BD7E33E71CED8198681588A((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m832D0D64F4F889A78119BE8409D2FC0D758EEEA6_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mEA466D27A716E767BAA17014C9D30D640060D04A_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7E2D2BAE5E4438F142C46E4AA153AA772426E023_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m6D40F95DAA5C9E66D6C7C3A397146E1D31B277EC_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mA246EAE25A1BD241AFB6FB215AB5993B188A3B54_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mD41C2047E0485962C85F5F45DD888BC80EC1A4B3_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tCA894A1CF9444A6D14E56963F0117A9B8CC5FBA8* L_0;
		L_0 = Dictionary_2_get_Keys_m174EF0458AC3EA056263066707A1C9D2BB450927(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m388E12B2732CB1092C133C3E5802A463F759E261_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21E007690ACD2746268C7B76A384B3B5CB0EFBD1* L_0;
		L_0 = Dictionary_2_get_Values_mA19E9798FBF0B90A477726703AE950E2A07C5B3E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5E80913A54067A847189952A7FB16A50F1F5263B_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m7568C3AB5601A6AF0C1AF6254BDB7CB007789C49(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59* L_5 = (EntryU5BU5D_t3E2DE6573025C1D5E9A48D8B9A6A42891C933B59*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_7 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m94D2FCD74998EA765C7C237ABC6252476EBD5A34_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_m5F443DBDB28AEE25420EDE7A899BC18F2528B6E4(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m5C3361A5F82F77CF494878230BAA1D7466A28111(__this, L_3, ((*(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)((SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m12D97512C84B67BA59C4DB084A24BB0833172E63_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F_m5F443DBDB28AEE25420EDE7A899BC18F2528B6E4(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint64_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mDD890F51E2E91767A4CAFB547A7ED7F515991C57(__this, L_3, ((*(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)((SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)(SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mF9E9268691D22DDAC09F3847BB0E834C2269EDC5_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m856888959FA042D8DA5967263A4E9DEBE0787B3B(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF924511749F599F1AF26DF6AEF97EB43496FBE20_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE13508A09CB18EC3D4462E325B464B4826C9CA5F((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tAD6E4F51FD426E31EB9B08909561A5F7B98565A6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mC343D9EB926A4FDB3575C91E43AA886F631D314D_gshared (Dictionary_2_t07623FEA4E06459A96F5DFAEA7345949265458D3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE831718119AB3114301E0CFCB2719F4292A8FFAE(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_Remove_m8E7CB9A599C811C0BB41428EDCE268151C0373B2(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB158373D5DD55C693259E09C734A13A95E0D1C71_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF9CBA7BA39A3E04AC0505DEA42AA7623D8548040_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6BF5DA3F5B491BBD05F67D60CDDAED738B6053B_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_5;
		L_5 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m667B00557B199E8850550EB5F573584CE6F9F346_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m7A2337330B20E81DA4DDE2CA721E67A20A271586(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A2337330B20E81DA4DDE2CA721E67A20A271586_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* G_B2_0 = NULL;
	Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m8E138D1DC38A15FE547187E6418E9B9D8BF98900(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* L_11 = ((Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_13 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_32;
				L_32 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7BF03F0BD09BBF59C08870898825273CAA3A91D7_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* Dictionary_2_get_Keys_m69F63E9B669AF771DB9622C6281100D5E740AB02_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_0 = (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_1 = (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_mBEFD4B7F81D583FE0007A3B178052584DD9BA732(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_2 = (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11150EA018991651F4465BF7661831FFF1628997_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_0 = (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_1 = (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_mBEFD4B7F81D583FE0007A3B178052584DD9BA732(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_2 = (KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* Dictionary_2_get_Values_m1432B41EF2FB49A7E98360FF1A1C19385D1BBA63_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_0 = (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_1 = (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mF3A4D1EAAF73C123C2D0608AD17F24DB9A97728D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_2 = (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m164C53F6BB8D938FD5BDBE4AC06DF67C10565994_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_0 = (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_1 = (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mF3A4D1EAAF73C123C2D0608AD17F24DB9A97728D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_2 = (ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m8C6DEEE4BB3CB5E16ABD64BD2AF7944F95B1B093_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_3 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = ___key0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m87CBF305671E55249DE7B475FEC67B4640204158_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mC2DCE71F909A62F816CFF3A10AD0B2187BBF0AFC_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m84AF69539E61712CB1C2098DE809DC1E107854BC_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_4 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF2F1349F5AB2EF055EB2EF04B27481D8D180D97F_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_4 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
		L_9 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mD895CC67E47D16B0254EDFBE438FCCA16EAA08C7(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m9A3F431FE42A3D9DAA1CF624564C480298403E61_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_4 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7563DC7A3D7F0924257D0C822E5499D51E72659F_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m029BC4181803D44E6C4AC4E64B8D2D4B37EEE812_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_0 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_7 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mD3E09C7F3BE4CE817D74F6A3E15FECF062055C10((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 Dictionary_2_GetEnumerator_m528A9F7355E628384E2666674549778BCDAC4B95_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA04E4294E065164F2D3FBE45CECF1A897E84A221_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5264B140E5DD90752AB82FA3AED1690DDABD36EE_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_6;
		L_6 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_14 = (KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE*)(KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_15 = V_0;
		Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_2 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_19;
		L_19 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_48 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_5 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)(EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* V_10 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_4 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_24;
		L_24 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_27 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_35 = ___key0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_53 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_61 = ___key0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m27C219A18D6BACDE8D9B8FF43E381AF99F9783F9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_78 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_94 = V_10;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m2D3D1BC315A7E05BF18038478262597B824B7091_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6C3430787CF0079341DB161C556EA7D64FEE0D22(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_21;
		L_21 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_24;
		L_24 = KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m27C219A18D6BACDE8D9B8FF43E381AF99F9783F9_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m014274E535823BA3B5856BB2ABABE370B73BB417(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m014274E535823BA3B5856BB2ABABE370B73BB417_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_3 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)(EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_5 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_17 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD895CC67E47D16B0254EDFBE438FCCA16EAA08C7_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_13 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_20;
		L_20 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_21 = V_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)L_21->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_25 = V_4;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_26 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)L_25->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_34 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1F022411F33230F63B036BD2E9031753FFE0ADBB_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_4 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m8B0586FE5B9BD6C6E70D951F5E7C0262CBA3019C_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m451627B6DDE43AC056EBDA068F25F444685B189E(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB75BFF981D5EF1394E07E90D9A1AA3D75F62DEE3_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2BF6AC284632D70EB8F1D959B2D1073F046CF26D_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m12AD2A915405735864CD45A357B31E62EA8A803C_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF6B261BE1D8DC20C368D294F4B67AAB8687658AC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAD8F5BA3122F9E2B9B13E2CF8B6A9D17B07971AE* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_m383D65244AE69553188A87A6B1B704255DC3491B(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_18 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_27 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_40 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_49 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD3E09C7F3BE4CE817D74F6A3E15FECF062055C10((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m77A0FFF5B0875AC30ABA910FA570FDBA7BE1CAC6_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m8DEEF6A97D965453BFB77E056FB948B042CF37C1_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11FABEAC87823AB50448908E110AF1E2214C2393_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m029D1FD33DE903DE9FB08F8D88AC69AA9BA3A5E5_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mD714BEB1273FCFB299A961453A6E357DA72B830A_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m66C848DC1689B09A95EC830D08073A53429BDC40_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE24B2533D47D8031BA47DC7F197BA8ED30F1E922* L_0;
		L_0 = Dictionary_2_get_Keys_m69F63E9B669AF771DB9622C6281100D5E740AB02(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m35357D94115D910174F67D349C91A1721BD62913_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD5EDB9E90ED9F117DB14EAD843BDC9ADB71A98CC* L_0;
		L_0 = Dictionary_2_get_Values_m1432B41EF2FB49A7E98360FF1A1C19385D1BBA63(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m8D88B09330B7CA141AB04D6A91851F89F80E0435_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m758B5AE03830C82622D046911A14B85D2965752C(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7* L_5 = (EntryU5BU5D_t48EA7635EBB6918AE1C791B733B2B186E42ABEA7*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mDA712F277669FB5A985D8160CCF8072B66E13010_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m87CBF305671E55249DE7B475FEC67B4640204158(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m92D1323E2B2A98A24CEC303B0C660A04DB2D5EBF_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_m47ACA9290450A9F244EEAB913A88D74A259FE7EF(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m19F2B7203DEC2096050CE60232457916344B0A0E_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m7563DC7A3D7F0924257D0C822E5499D51E72659F(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m018743718C87413D7F352E393754FB7E143249D4_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDBD4D8079BF0CFA68857EBC0E89C0135D27919E0((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t7B8149BAE471F218FFF48D69FAC12B5CC53C1C86 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m9551CEB7A56C30597664885CAD5021B830F2359D_gshared (Dictionary_2_tBB4036DDC0B6D94C9A83A1CFCCB8113DBA189B5F* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m8DE69B8EDD7D151B0413247BCB30E62E8FB921FD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_Remove_mD895CC67E47D16B0254EDFBE438FCCA16EAA08C7(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CE78C81B3C997FF9C14675CFBBAD014EF68FE30_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_33 = L_22;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_31 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	memset(V_4, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B2_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_11 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_13 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_31);
				il2cpp_codegen_memcpy(V_4, L_31, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_32);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_33);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_33: *(void**)L_33));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mBE37F43780B97B9F8911558CF1758A6E0573F81A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m83C40C3BF1DFD21198ED5D890CD53F2B726FFF78_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___keyValuePair0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___keyValuePair0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___keyValuePair0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___keyValuePair0, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value0 : &___value0), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = (int32_t)__this->____count_2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value0 : &___value0), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = (int32_t)__this->____count_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value0 : &___value0), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = (int32_t)__this->____count_2;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_22 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_22, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? il2cpp_codegen_memcpy(L_20, L_16, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_21, L_19, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_19), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_22, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_25 = L_0;
	const Il2CppFullySharedGenericAny L_44 = L_0;
	const Il2CppFullySharedGenericAny L_54 = L_0;
	const Il2CppFullySharedGenericAny L_70 = L_0;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_45 = L_26;
	const Il2CppFullySharedGenericAny L_71 = L_26;
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0));
		V_5 = ((int32_t)(L_8&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)(L_10%((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_14, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_14);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_16 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_2;
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_2;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_21 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_27;
		L_27 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_26: *(void**)L_26));
		if (L_27)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_30;
		int32_t L_31 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_34;
		L_34 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = V_2;
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) < ((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_40 = V_5;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_41 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		il2cpp_codegen_memcpy(L_44, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_41);
		bool L_46;
		L_46 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_44: *(void**)L_44), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_45: *(void**)L_45));
		if (L_46)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_2;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_49;
		int32_t L_50 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_51 = V_2;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_53 = V_4;
		il2cpp_codegen_memcpy(L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_54: *(void**)L_54));
		V_8 = ((int32_t)(L_55&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_1;
		int32_t L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		NullCheck(L_58);
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)(L_57%((int32_t)(((RuntimeArray*)L_58)->max_length))));
		int32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
	}

IL_012b:
	{
		int32_t L_61 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_62 = V_2;
		NullCheck(L_62);
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_63 = V_2;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_66 = V_8;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_67 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_68 = V_2;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		il2cpp_codegen_memcpy(L_70, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_67);
		bool L_72;
		L_72 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_67, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_70: *(void**)L_70), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_71: *(void**)L_71));
		if (L_72)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_0 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_2;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_19 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_56 = L_0;
	const Il2CppFullySharedGenericAny L_64 = L_0;
	const Il2CppFullySharedGenericAny L_81 = L_0;
	const Il2CppFullySharedGenericAny L_89 = L_0;
	const Il2CppFullySharedGenericAny L_122 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_57 = L_31;
	const Il2CppFullySharedGenericAny L_82 = L_31;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_62 = L_36;
	const Il2CppFullySharedGenericAny L_87 = L_36;
	const Il2CppFullySharedGenericAny L_124 = L_36;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		V_0 = L_5;
		RuntimeObject* L_6 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_11, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0));
		G_B7_0 = L_12;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_14 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_15);
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_14%((int32_t)(((RuntimeArray*)L_15)->max_length)))))));
		int32_t* L_16 = V_4;
		int32_t L_17 = *((int32_t*)L_16);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		RuntimeObject* L_18 = V_1;
		if (L_18)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_19, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_19);
		if (!L_20)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_21 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = V_0;
		NullCheck(L_22);
		if ((!(((uint32_t)L_21) < ((uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_0;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_31: *(void**)L_31));
		if (!L_32)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_33 = ___behavior2;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_0;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_36, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_37 = ___behavior2;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_38);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_39, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = V_0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_42;
		int32_t L_43 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_46;
		L_46 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_12 = L_46;
	}

IL_0111:
	{
		int32_t L_47 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_48 = V_0;
		NullCheck(L_48);
		if ((!(((uint32_t)L_47) < ((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_53 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		il2cpp_codegen_memcpy(L_56, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_56: *(void**)L_56), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_57: *(void**)L_57));
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___behavior2;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_62, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___behavior2;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_64);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_65, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_66 = V_0;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_68;
		int32_t L_69 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_70 = V_0;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		NullCheck(L_73);
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_74 = V_0;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_77 = V_2;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_78 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_79 = V_0;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		il2cpp_codegen_memcpy(L_81, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_82, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_78);
		bool L_83;
		L_83 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_81: *(void**)L_81), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_82: *(void**)L_82));
		if (!L_83)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_84 = ___behavior2;
		if ((!(((uint32_t)L_84) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_85 = V_0;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		il2cpp_codegen_memcpy(L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_87, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_88 = ___behavior2;
		if ((!(((uint32_t)L_88) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_89, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_105 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_114 = V_10;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_116 = V_10;
		int32_t L_117 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_116, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), L_117);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_118, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), ((int32_t)il2cpp_codegen_subtract(L_120, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_121 = V_10;
		il2cpp_codegen_memcpy(L_122, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_instance_field_data(L_121, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2), L_122, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_123 = V_10;
		il2cpp_codegen_memcpy(L_124, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_instance_field_data(L_123, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3), L_124, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version_5 = L_32;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_8);
		bool L_10 = L_9;
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_20;
		L_20 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_19, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), ((int32_t)(L_20&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), ((int32_t)il2cpp_codegen_subtract(L_36, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 14)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_24 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_29 = L_25;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		int32_t L_6;
		L_6 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 14), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0));
		G_B6_0 = L_6;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_7: *(void**)L_7));
		G_B6_0 = L_8;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_10);
		V_1 = ((int32_t)(L_9%((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_17 = V_4;
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_20 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_21 = L_20;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_0095;
		}
		G_B9_0 = L_21;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_22;
		L_22 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_23 = V_4;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_22);
		bool L_26;
		L_26 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_25: *(void**)L_25));
		G_B11_0 = L_26;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_30;
		L_30 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_33 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_34 = V_4;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_36 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_38, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_39);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_40 = V_4;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_40, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_41 = V_4;
		int32_t L_42 = (int32_t)__this->____freeList_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_41, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1), L_42);
		bool L_43;
		L_43 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		if (!L_43)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_45;
		L_45 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_46 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_47 = V_3;
		__this->____freeList_3 = L_47;
		int32_t L_48 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_51, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),1));
		V_3 = L_52;
	}

IL_0142:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___value1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 15), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? ___key0 : &___key0), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? ___value1 : &___value1), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? L_1: *(void**)L_1), (uint8_t)0);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),0));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),2)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m6B325002C83A39C48EE433C300692849D3B17B71_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mCB7FB79310BFA8537169F33C6312059A2A980737_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2BAC5DEF1C5EC223FCDB30D10041CF87E9C154D7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m399CC0BA5A4F1BC1D411E66032CFF75064047405_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0;
		L_0 = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mF823AA54EA409E05B95BF34DAC275E9D27837E29_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0;
		L_0 = ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)__this->____entries_1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13),3)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_9);
		return L_10;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___value1;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)), il2cpp_rgctx_method(method->klass->rgctx_data, 62), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_9 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_11;
			L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_9, L_11, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_12 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_12, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m4C04B28E0F448E6668328CDF17784B92080DB9A0_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___value1;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_9 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_11;
			L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_9, L_11, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_12 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_12, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)), il2cpp_rgctx_method(method->klass->rgctx_data, 65), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mF1B05D2823B0E1697B8FA449F74EA0838059E448_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m83CBA7F674D9390BA19BA7AD59FC0B3E9B455D48_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB291E159EF924071A3F3FAB13A7A2A50DC8272EA_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m36645E5C738444F13D00D3C06F3D5CA35BC0D08A_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_5;
		L_5 = EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0986B9C02EB58E3D89CE25AA290A6AD58FA65E9A_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_mF268E296E53BC93762301DB7998188D37BEE4208(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF268E296E53BC93762301DB7998188D37BEE4208_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* G_B2_0 = NULL;
	Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m5E08616B247008918E5251FF918088A8802F23C7(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* L_11 = ((Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_13 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_19 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_32;
				L_32 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0DD63DBA395066D4362459B709C56CA89287892_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* Dictionary_2_get_Keys_mED0CBF7AB0ED74D7DCAB65308653F6E623B08C10_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_0 = (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_1 = (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m3DDC09978183E2819AD8DE8208A35B27B0E7736D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_2 = (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mF2B81122B5E8455B82720AAC0447DFDA865ED3C9_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_0 = (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_1 = (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m3DDC09978183E2819AD8DE8208A35B27B0E7736D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_2 = (KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* Dictionary_2_get_Values_mE175470F8D9918B86A50BF90D07488832FCDDB89_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_0 = (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_1 = (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mF18286F7229298BB2B0DB13CC791EAD86836B4A3(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_2 = (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m6FF10AADA48CF198810B3D747297CEA5D7FA5951_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_0 = (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_1 = (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_mF18286F7229298BB2B0DB13CC791EAD86836B4A3(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_2 = (ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mA0F45B5C48B2943BC21A7BAFA4B6AF8C089FCE59_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_3 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_6 = ___key0;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m48C1C4C0D2F50319BA67E4022C8237C87ACFFA8B_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32CE4C4C8AF418F960B0BAFB8B5BE293DDB6B255_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0;
		L_0 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29B821CF90A59346FDEA434CD22F4041C9A1D888_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0;
		L_0 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_4 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7E7808D43C1741C4805E6767D2DA4EB2169A18B9_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0;
		L_0 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_4 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_9;
		L_9 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m5A7B1047CB081B36C8FA374ABC53EFB04AE915D8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mFABCD55D687B230A7DDC4484404AF83E8B269C86_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_4 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2A66E0743CB02F4D5641FDC3F090F19039C255EA_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) 
{
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCAFBEA8F6D846C02DA76708996B2C21CF6FA5778_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_0 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_7 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_16 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mC2514333C445ACA53A2FFC309D8B030D53E3FFB9((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 Dictionary_2_GetEnumerator_m0F48B52169D8D05BCF52D8FB6348AFCEA2B25A79_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2A99F36D5C1DF9AEB57B87D1A7B04175977D3947_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5261D465FA4D4AB222FE1404FDC4D2AF7FE60069_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_6;
		L_6 = EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_14 = (KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC*)(KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_15 = V_0;
		Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_2 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = RaiseEventBatch_GetHashCode_mBD26C0817F3D9E91AE5BD4633A60CEA4E59705E3((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_19;
		L_19 = EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_22 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_48 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_5 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)(EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* V_10 = NULL;
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_4 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = RaiseEventBatch_GetHashCode_mBD26C0817F3D9E91AE5BD4633A60CEA4E59705E3((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_24;
		L_24 = EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_27 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_35 = ___key0;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_53 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_61 = ___key0;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m7E6258DBD4BD666B85C4BC0B042F17E33F68D312(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_78 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_94 = V_10;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_95 = ___key0;
		L_94->___key_2 = L_95;
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m019A9252B0F665F01871E05CB40B01EB372FCA0E_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m57124AB467520C88AAB422D138B4DD78C6D34440(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_21;
		L_21 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_24;
		L_24 = KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7E6258DBD4BD666B85C4BC0B042F17E33F68D312_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mF8037D1DFFE018C32BF2FBB0CF61DD9BBA0BD1C4(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF8037D1DFFE018C32BF2FBB0CF61DD9BBA0BD1C4_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_1 = NULL;
	int32_t V_2 = 0;
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_3 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)(EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_5 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401));
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401* L_17 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = RaiseEventBatch_GetHashCode_mBD26C0817F3D9E91AE5BD4633A60CEA4E59705E3(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5A7B1047CB081B36C8FA374ABC53EFB04AE915D8_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = RaiseEventBatch_GetHashCode_mBD26C0817F3D9E91AE5BD4633A60CEA4E59705E3((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_13 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_20;
		L_20 = EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_21 = V_4;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_22 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)L_21->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_25 = V_4;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_26 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)L_25->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_34 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value_3);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList_3 = L_43;
		int32_t L_44 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t54F31ABECA4B78F3AC1F81D190A90C389D8D956E* L_47 = V_4;
		int32_t L_48 = (int32_t)L_47->___next_1;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0C6B7BC93BC9344797ACDB0EC1167EFA749A8F6B_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_4 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m05BCCC83712E077A19F0F9FD1A61E25141CF3A3B_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7E1A5F1F5013E27B03551E09447F9DE557F905BA(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2FC72C7BEF16EE383FAE3420AB8BCAD3B66D88C8_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD53A8B89269D6A87C11C63B02070EA822A7650B0_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE13FAD73E8AEC61C90A2244F8B27260238847258_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m8A881A58C7B264801D1A13117D9F7828CAEB3F02(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t48F484234312D821B380174FD9B185B7A79396BC* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_mA24796A5C3A98ED61BE397E82DFBDC768C764E64(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_18 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_27 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_40 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_49 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mC2514333C445ACA53A2FFC309D8B030D53E3FFB9((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m175E91B111CE2B09A32FA061D702DDD4A70A10B4_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_mB76F7BC14CD9717E2EFBEA1869B59D0948A4D201_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m378375D9F1217F877BCF1253C15D66F56A352969_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m243960D421407E56EE748E964DFA85DD4C912CD2_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_mE3C3C7154E1979ED03BF4FC312FB3643A2FFFA2D_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m44A703593501F10D68BC98CADABA3CA150435A53_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE29CB3B4D83FE8B2B0A30028AFF23D81548DEEB7* L_0;
		L_0 = Dictionary_2_get_Keys_mED0CBF7AB0ED74D7DCAB65308653F6E623B08C10(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mBC5B143030079EA65B85B59E6BAB4C793CD78E05_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tBAD0EB068FA5E1CF163C78271C60F9B1F2A3BB94* L_0;
		L_0 = Dictionary_2_get_Values_mE175470F8D9918B86A50BF90D07488832FCDDB89(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m368E3BD05BD67FE16E2C7C7FD11F327F6914B9EC_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB518109AE767F7C6F9C6ACFA6E80591E20981D95(__this, ((*(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)((RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD* L_5 = (EntryU5BU5D_t5EF8E8434A30E9364EF9599BF78F744E6A0DDDBD*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mB9A267212C69A7E4BEFBA9BB0CABD8BF963B91EE_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)((RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m48C1C4C0D2F50319BA67E4022C8237C87ACFFA8B(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m2756513E9EFF2B5B7188F06D2C7306E1DF1A874C_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)((RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mBF532AF2F48906B16FB9C348293E3E511B324B72(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m25B8A25ADF6A3DD7147E90B28A6CE99347556BEE_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m2A66E0743CB02F4D5641FDC3F090F19039C255EA(__this, ((*(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)((RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22C75D9212712FA3306758FCD78B618DE0FDDF6A_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3FDB5F1B9FAF7BAA707B1638D72E214BFFBE0245((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_t8AE4B61393C9805B24ACB2787680A7BC17EE25F4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m75B8C0998528BF50A8AF6B1B7BEEEB68746A752A_gshared (Dictionary_2_t79FAE63630583D8BEDCD0A0448F0F3E0DC6BF2A0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m182AFBADFF600552B371754FAAA261F246EACDD1(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_Remove_m5A7B1047CB081B36C8FA374ABC53EFB04AE915D8(__this, ((*(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)((RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)(RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
	}

IL_0015:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3A972FD6D3B419C491615DEAF5727957266B2103_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80A438E817EFD7A63806E2AA6A36765099E76981_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8B0FF306D82A6E5AA52869ECC3CF8267D3F490_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_5;
		L_5 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m81D9E805A91EAE16EAAA2F73AC5A2DAD19377643_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		Dictionary_2__ctor_m529689FD1B8505A0399CA8E884C48B8692408B44(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m529689FD1B8505A0399CA8E884C48B8692408B44_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* G_B2_0 = NULL;
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		Dictionary_2__ctor_m5D02FAD2A12EA06505B72CAA8254714063C298F8(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* L_11 = ((Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_19 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = (RuntimeObject*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_32;
				L_32 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m13A38C223F0BABEECE1B8FCD3D03199345768B91_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_0 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_1 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_2 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)__this->____keys_7;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mA5A5D91792E881FE38BD2006436F877F416AF49E_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_0 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_1 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		KeyCollection__ctor_m7DD9CC8A8D66F5E96F17286F215CD22CCCDD1DF7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_2 = (KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75*)__this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_1 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_2 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)__this->____values_8;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m5F40D712F4473BE4A419A8198BE7190CAFA53828_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_1 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		ValueCollection__ctor_m4CA056E40F3696B0F634BE02C68CE9107C7598C8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_2 = (ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m07A39878AD2C13A3EC348DD0E2F64641E43E0D1A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = (RuntimeObject*)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = ___key0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB65EE0BBB002345A08BAE76881973CA1F6A55FB3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23E94334E94EFA7622F0EC303B8D0CE2235DA010_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB3F3BE11C2E5D75AED5396B2CB10742E6F0800BF_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0;
		L_0 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_9;
		L_9 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m63C07905E27C05BB33617E4BAFD09CD2048B1D9D_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mB41AF7C04A1CCE400BA62B99CCC303504102AAE8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_0 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___value0;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = (RuntimeObject*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = (RuntimeObject*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_7 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_16 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = (RuntimeObject*)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 Dictionary_2_GetEnumerator_m86A96D4E7AF5EB4FC9401A17B71821C524C98403_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mE4242487DEA1CA4F9083B7E751F70DECD5A6C5AA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEFD0BDDBCFE15749CD2E0D7AD58E6A7550D6BF74_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_6;
		L_6 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = (KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)(KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 43), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_15 = V_0;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_2 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_19;
		L_19 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_32 = ___key0;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_48 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = ___key0;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = (int32_t)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next_1;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_10 = NULL;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_24;
		L_24 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_35 = ___key0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = (int32_t)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode_0;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_53 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_54 = ___key0;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___behavior2;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___value1;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value_3), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___behavior2;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_61 = ___key0;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = (int32_t)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next_1;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = (int32_t)__this->____freeList_3;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = (int32_t)__this->____count_2;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_78 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_87 = V_10;
		int32_t L_88 = (int32_t)L_87->___next_1;
		__this->____freeList_3 = L_88;
	}

IL_028a:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode_0 = L_90;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_94 = V_10;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_95 = ___key0;
		L_94->___key_2 = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->____cultureKey_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key_2))->____pattern_2), (void*)NULL);
		#endif
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_96 = V_10;
		RuntimeObject* L_97 = ___value1;
		L_96->___value_3 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value_3), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m30C69800F481DF95A3C2B26672083C4942C7AF6A_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 42)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m26848AD8E4E7357E68D80575255064B9DCE9A824(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_21;
		L_21 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_24;
		L_24 = KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m897DFE92D2953E564DE90594548FCAFE0981A375_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m985506E79EE868501F78DDACCA0D0748751E5327_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_1 = NULL;
	int32_t V_2 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_3 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)(EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 50), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_8 = V_3;
		bool L_9 = ___forceNewHashCodes1;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = (int32_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_17 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_2);
		int32_t L_18;
		L_18 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode_0 = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = (int32_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode_0;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		int32_t L_28 = ___newSize0;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_41);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_42 = V_1;
		__this->____entries_1 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_13 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_20;
		L_20 = EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_21 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_22 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)L_21->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_25 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_26 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)L_25->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_34 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_41 = V_4;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* L_42 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31));
	}

IL_00ff:
	{
	}
	{
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m423F15A532C6A9B72D948F03DCF1E8FE95266FDE_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___key0;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___value1;
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_4 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = (RuntimeObject*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF49067A549741BBB9B9BA690E05B00A9854C7E9F_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mBC95B064A09BDE7AB5494475F83B35DC450DC81B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0BF6AA68A9292D57E071C216236F4569412741AB_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m58B657EDC37CB7C4C1FA6E5ECAA49192968290E8_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_0 = ___array0;
		int32_t L_1 = ___index1;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m822016BA854B3523CF33A27E9548ECDE43C85690_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m5334B4276CF45A2AFE4E47D4583C5430CFA23B92(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 37)));
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB128EB55E20DABB15A722F760383F1C23CB6BC12* L_14 = V_0;
		int32_t L_15 = ___index1;
		Dictionary_2_CopyTo_mB170132B09124D49C071D29B61DF9425C9351DA9(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_18 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_27 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = (RuntimeObject*)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = (int32_t)__this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_40 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = (int32_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___index1;
			int32_t L_46 = L_45;
			___index1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_49 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = (RuntimeObject*)((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m96D7A05CA73361B4E4F4FB15107EAD3EBE3913A2((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mB824CC9AE49B882D511ADFCD217426BFC12FAB38_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m165CD5B5B1A625A2033EFDFAD4EA3BEF435CF1DB_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m230B767B18EF35F11415F7A727CA1CEC19DA39EC_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m0D9050A64BD20015821A00FFBBB5935E045C2507_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m5AFBEC25615437E6F4C3BF6B67572A471D3D6073_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m24E1E499358F27188A52EF8A6A44821AE1435D24_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6725DF5AC7475F617DDB9DA237871AD9FAB80D75* L_0;
		L_0 = Dictionary_2_get_Keys_m5D309558625C4B9B2702291A262D19E9409FC1B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mFA652E8064F22DD030485EFE8143D988BAA332BC_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0F016B1C5BEC58DAA0BA4B0A2699B389590BC305* L_0;
		L_0 = Dictionary_2_get_Values_mBD99ABB93B744242980847DE776989C8ACB1C777(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m4540BEB04CE0E31DC46A4CF9EA6DDE820B175AC1_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m84136518562E6B82BBE9137A49334CAA61460DCA(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F* L_5 = (EntryU5BU5D_tE17B785CAD3F80F2B4B61714A3D2A975C55DC34F*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = (RuntimeObject*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m26BD17B7EEA27EDA57B60C2113C7AE365109523B_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_set_Item_m2387B91BA1614F8BD0037CF10888678FC0213FF0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mB998ABB8CCA0FEF2BA895C4BBDAB91AA973BA172_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			Dictionary_2_Add_mF175AF090385B15584E0E8CFC61400B38BC707D6(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m9BF33360802A4565E45703E76292DEAEB476C8D3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD3382707B0A0977575551EF563A509A60695AD4F(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61E0DFD545EE45B0C2E19B76F54D726B3A55D382_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6C95957B43BCC65A410E34547B3934C5A51E0B0D((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Enumerator_tB7298ABA389EB46AD2BEB2E35D7FF51A6525D750 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 40), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m681A36950A220BD5CEDB6AA51B4D94DAC8CB1DE3_gshared (Dictionary_2_tA06D47A9E83F6FE69E39F1FF32E19C633FF91318* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m319F8531B63DE959FF23564DE3BB1B93B943B7CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = Dictionary_2_Remove_m3CC589B84EA444155C4BFDB77E52E1F97E5D5D88(__this, ((*(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)((CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)(CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(__this, NULL);
		V_2 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		V_1 = L_3;
		int32_t L_4;
		L_4 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_5^((int32_t)(L_6<<4))))^((int32_t)(L_7>>((int32_t)28)))))^((int32_t)(L_8>>4))))^((int32_t)(L_9<<((int32_t)28)))));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_0 = NULL;
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_0 = ((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m4378284ECC99C4EDB4DBED823180D77901630117_gshared_inline (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = (uint64_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD8C68FAC73E70CDB6F3B0383A855C6806256A27D_gshared_inline (KeyValuePair_2_t1F749E064301C7FBDD1C0B79D6C7290359EA8141* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_m3F2972BFBC5D15366DC00D7D20E4A81FFE70F783_gshared_inline (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = (uint64_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 KeyValuePair_2_get_Value_m27CD4D778B14A8EF33504052EAA36C8BB5958112_gshared_inline (KeyValuePair_2_tCB9343C0A9559FFD40F6E943999D4B693E6D85A4* __this, const RuntimeMethod* method) 
{
	{
		MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10 L_0 = (MultiAnchorDelegatePair_t549B7EC3028ED8DECFCC7801928095FCDD946E10)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* EqualityComparer_1_get_Default_mF0E287377DD14827AF9943F812559F84AB28CEF5_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* V_0 = NULL;
	{
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_0 = ((EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m1010F39F37C7F79557024DE7C935C5978870801F(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t449CB30730EF554F500A878A419488B19A8888C3* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t KeyValuePair_2_get_Key_mD929606606E21031D6F05C571E1AD72D6098378C_gshared_inline (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = (uint64_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F KeyValuePair_2_get_Value_mC9AB80472ED3388DB2D4E3F2CDCF517B2F6A65DB_gshared_inline (KeyValuePair_2_t8C8AD234D49772721B4CCD2F50C3F223D89ACBC6* __this, const RuntimeMethod* method) 
{
	{
		SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F L_0 = (SingleAnchorDelegatePair_t8B8B5C4456FA0F2FBC2B89D418A595B69357A63F)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* EqualityComparer_1_get_Default_m7E3865767141C026A86069BD073F915941A1AB82_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* V_0 = NULL;
	{
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_0 = ((EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m26DE28F00BCF8640D3BC997F540F89CB22212607(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t2AC1EF99124A7FBF9B6B99F7B0543E453C8B5A41* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* V_0 = NULL;
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_0 = ((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 KeyValuePair_2_get_Key_m93A7AEFE02F4C1BA6F8F957C976ADCA7CBABDE73_gshared_inline (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4298F65592A3427E4F183C66E5A0F302C65C94D9_gshared_inline (KeyValuePair_2_tA9C08938A7BB93727C1EA7CF1C27A8902E203C1E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* EqualityComparer_1_get_Default_m51EC73F7045D44C6241C980D89AA8F647A164959_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* V_0 = NULL;
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_0 = ((EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m6BA8AC5D211E0F719AA6B51355C20A865C9F75F2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tF6BAE2DB28E528E241E3BD3801FA7258652A5D75* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 KeyValuePair_2_get_Key_mD1B081953DEE9AEAD90E3159CC99749C2CA46302_gshared_inline (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, const RuntimeMethod* method) 
{
	{
		RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401 L_0 = (RaiseEventBatch_t841FB5779B1DEA38AD940F66168BFD85F40A0401)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m66DE01E7EBA821A294B435A1E529FA1AD517D6FD_gshared_inline (KeyValuePair_2_tB65DAC81794CD4408BF1312C82BCAD64FC27DF2E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* EqualityComparer_1_get_Default_mB9A6897EE9C611611709E29230AB2F1D3D0BA6ED_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* V_0 = NULL;
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_0 = ((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m6D99876F3A0CC92388F04FA521AFA20EDAF66D25(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 KeyValuePair_2_get_Key_m301F56606347366561A21E8CCD7F3ACB3FFE4D78_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_0 = (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m4F875C153A42456E08401E2C5B26FFC6685F8569_gshared_inline (KeyValuePair_2_t07280F39D0691CE3006447A5EF281C3A867EAF95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
