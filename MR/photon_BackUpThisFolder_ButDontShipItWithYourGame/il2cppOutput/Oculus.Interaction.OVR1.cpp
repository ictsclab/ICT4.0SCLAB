#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F;
struct OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5DBA01FA0D57322C841527A85BCDB936F4AABE5F;
IL2CPP_EXTERN_C String_t* _stringLiteral8307880B84740DB654CFBFE2F4EAEEDA3297C010;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_mAF7DF78FE81C7ADD5EAA7B8EBA6203438E6836C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisOVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F_m275919A99C696034F16E13C19CF666CE20B42084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource_4;
};

struct OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuestAndRiftSLeftController_5;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuestAndRiftSRightController_6;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchRiftLeftController_7;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchRiftRightController_8;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuest2LeftController_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelOculusTouchQuest2RightController_10;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelMetaTouchProLeftController_11;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_modelMetaTouchProRightController_12;
	int32_t ___m_controller_13;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_14;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_activeController_15;
	bool ___m_controllerModelsInitialized_16;
	bool ___m_hasInputFocus_17;
	bool ___m_hasInputFocusPrev_18;
	int32_t ___activeControllerType_19;
	bool ___m_prevControllerConnected_20;
	bool ___m_prevControllerConnectedCached_21;
};

struct OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____controller_5;
	RuntimeObject* ___Controller_6;
	OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ____ovrControllerHelper_7;
	bool ___U3CForceOffVisibilityU3Ek__BackingField_8;
	bool ____started_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, RuntimeObject* ___value1, String_t* ___variableName2, String_t* ___whyItFailed3, String_t* ___whereItFailed4, String_t* ___howToFix5, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
inline void AssertUtils_AssertField_TisIController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_mAF7DF78FE81C7ADD5EAA7B8EBA6203438E6836C2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, RuntimeObject* ___value1, String_t* ___variableName2, String_t* ___whyItFailed3, String_t* ___whereItFailed4, String_t* ___howToFix5, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___component0, ___value1, ___variableName2, ___whyItFailed3, ___whereItFailed4, ___howToFix5, method);
}
inline void AssertUtils_AssertField_TisOVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F_m275919A99C696034F16E13C19CF666CE20B42084 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___value1, String_t* ___variableName2, String_t* ___whyItFailed3, String_t* ___whereItFailed4, String_t* ___howToFix5, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___component0, ___value1, ___variableName2, ___whyItFailed3, ___whereItFailed4, ___howToFix5, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6_inline (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectController_m88C4432F0B0CA047F62BC9D0DF5DC3302B5F05BB (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, RuntimeObject* ___controller0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CForceOffVisibilityU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_set_ForceOffVisibility_m231B7EFC10879F66D25B393CAC366D02287BB341 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CForceOffVisibilityU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_Awake_mC9A29A2934C219E871DAA971716F4DBE03785441 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____controller_5;
		__this->___Controller_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Controller_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_Start_mEBE2CAD8B217957A29D058684C371DE63AD6D529 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_mAF7DF78FE81C7ADD5EAA7B8EBA6203438E6836C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisOVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F_m275919A99C696034F16E13C19CF666CE20B42084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DBA01FA0D57322C841527A85BCDB936F4AABE5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307880B84740DB654CFBFE2F4EAEEDA3297C010);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool* L_0 = (&__this->____started_9);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		RuntimeObject* L_1 = __this->___Controller_6;
		AssertUtils_AssertField_TisIController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_mAF7DF78FE81C7ADD5EAA7B8EBA6203438E6836C2(__this, L_1, _stringLiteral8307880B84740DB654CFBFE2F4EAEEDA3297C010, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_mAF7DF78FE81C7ADD5EAA7B8EBA6203438E6836C2_RuntimeMethod_var);
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_2 = __this->____ovrControllerHelper_7;
		AssertUtils_AssertField_TisOVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F_m275919A99C696034F16E13C19CF666CE20B42084(__this, L_2, _stringLiteral5DBA01FA0D57322C841527A85BCDB936F4AABE5F, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisOVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F_m275919A99C696034F16E13C19CF666CE20B42084_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->___Controller_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		goto IL_006e;
	}

IL_0052:
	{
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_8 = __this->____ovrControllerHelper_7;
		NullCheck(L_8);
		L_8->___m_controller_13 = 1;
		goto IL_006e;
	}

IL_0060:
	{
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_9 = __this->____ovrControllerHelper_7;
		NullCheck(L_9);
		L_9->___m_controller_13 = 2;
		goto IL_006e;
	}

IL_006e:
	{
		bool* L_10 = (&__this->____started_9);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_OnEnable_m7B49E7A5389C6289203707219E8BFD9E203F2292 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->____started_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->___Controller_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(8, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_OnDisable_mF09EF8F6D29649B179DAA7264EFCE8F293D3FB05 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->____started_9;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->____controller_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_4 = __this->___Controller_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(9, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0036:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_HandleUpdated_mBDEBB686F063FB7B6ECA22D73328B58F82AAC7EE (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	float G_B9_0 = 0.0f;
	{
		RuntimeObject* L_0 = __this->___Controller_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2;
		L_2 = OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6_inline(__this, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = __this->___Controller_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(3, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_3, (&V_0));
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		V_2 = (bool)G_B4_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_6 = __this->____ovrControllerHelper_7;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		goto IL_00ce;
	}

IL_0045:
	{
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_8 = __this->____ovrControllerHelper_7;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11.___position_0;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14.___rotation_1;
		NullCheck(L_13);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_18)
		{
			goto IL_0095;
		}
	}
	{
		G_B9_0 = (1.0f);
		goto IL_00aa;
	}

IL_0095:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_20, NULL);
		float L_22 = L_21.___x_2;
		G_B9_0 = L_22;
	}

IL_00aa:
	{
		V_1 = G_B9_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_24 = __this->___Controller_6;
		NullCheck(L_24);
		float L_25;
		L_25 = InterfaceFuncInvoker0< float >::Invoke(5, IController_tBB414CDC1750977B683AF8D8FA056A7D2176A1EA_il2cpp_TypeInfo_var, L_24);
		float L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(L_25/L_26)), L_27, NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_28, NULL);
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerVisual_m167637C984FEA203699F72F3E3F5A0807B05C7C9 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, RuntimeObject* ___controller0, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___controller0;
		OVRControllerVisual_InjectController_m88C4432F0B0CA047F62BC9D0DF5DC3302B5F05BB(__this, L_0, NULL);
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_1 = ___ovrControllerHelper1;
		OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectController_m88C4432F0B0CA047F62BC9D0DF5DC3302B5F05BB (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, RuntimeObject* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___controller0;
		__this->____controller_5 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_5), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = ___controller0;
		__this->___Controller_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Controller_6), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual_InjectAllOVRControllerHelper_m799D33B5BB72DF7A765A667812D36620B9917222 (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* ___ovrControllerHelper0, const RuntimeMethod* method) 
{
	{
		OVRControllerHelper_tE74358674840FCEA3E11CA3F6E87BC1653056D6F* L_0 = ___ovrControllerHelper0;
		__this->____ovrControllerHelper_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrControllerHelper_7), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRControllerVisual__ctor_mC0577E7320E03CE7593955752190A912E9C7AADE (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	{
		__this->____started_9 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRControllerVisual_get_ForceOffVisibility_m0C45B7C4C12000F3BCF270DFC8F3A5D1DEB823E6_inline (OVRControllerVisual_t0A2C503E6A07EF6F01D6FB5CED8A580F0890D2B9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CForceOffVisibilityU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
