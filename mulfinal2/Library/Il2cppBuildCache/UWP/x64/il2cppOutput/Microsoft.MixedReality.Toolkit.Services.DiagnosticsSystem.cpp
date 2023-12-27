#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1;
// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F;
// Windows.Media.Capture.AppCapture
struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Windows.Media.Capture.IAppCaptureStatics
struct IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
// Windows.Media.Capture.IAppCaptureStatics2
struct IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler
struct IMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tE875A4B527E9F1FB681536F0D6F5A6EA352DC927;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_t8B7590127C57352E02B125B39641AB723F679407;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A0F778C0E661B78B1B6AD2138BA091D3D91561A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D18A0AC35B03549F77B8A582B6AD5EA3ACA01C3;
IL2CPP_EXTERN_C String_t* _stringLiteral10FFF93EF949F2334F4C415406155881D8A23640;
IL2CPP_EXTERN_C String_t* _stringLiteral11C6A78DFF7F1AD65B32D4BFAA7E9E99490CF2C3;
IL2CPP_EXTERN_C String_t* _stringLiteral13DEC32CBB5161D1725B092A6C5860B0FC2ACEC4;
IL2CPP_EXTERN_C String_t* _stringLiteral155D513E52CA71A25F673EE4D5AD6D564656F5FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1665DB987C5901E42B248E6D1128B9B20A1583AE;
IL2CPP_EXTERN_C String_t* _stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4FA5F9A66DEEA10B9329AC6B6C4542BCEC1AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F5DDA9EF7410C3C37C840965AC892E3803E4957;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral44710FB5A26187014377E8E1544F56B125E6F4A1;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6703A3F9CC9C88FFCA9574A1C64091DEAF03F7;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE;
IL2CPP_EXTERN_C String_t* _stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC;
IL2CPP_EXTERN_C String_t* _stringLiteral584F25676660FEECE7691A51DFE6DCAE69EF135A;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF01B63568D803A05C906F1C9342492BA1EDDB7;
IL2CPP_EXTERN_C String_t* _stringLiteral7406124BE72D090590042AFF1000B9BB5A1827E8;
IL2CPP_EXTERN_C String_t* _stringLiteral88C0A409384124B23F80517191AAD25B944B47B9;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADCA5E5D734CB4272E0674CADBC8A574F28212C;
IL2CPP_EXTERN_C String_t* _stringLiteral91EFB368757A86BC9A88975F715DAF8641FEA56D;
IL2CPP_EXTERN_C String_t* _stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D;
IL2CPP_EXTERN_C String_t* _stringLiteral99BD7B441BEF843E8525E112D8268BEFC467D067;
IL2CPP_EXTERN_C String_t* _stringLiteralAA7A279255A8F579DC8A660F4DB73CED7446E934;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4AFE18D2E7C6893B503506A2B19780C8F7E0C7;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2BCF9F7BF608571B66B4874A29AA5A9A5815F73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3052192431D4C5D44F2510B1AFD2632B627701B;
IL2CPP_EXTERN_C String_t* _stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437;
IL2CPP_EXTERN_C String_t* _stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE0E17908169C9D71086DA3C3CE1626CDA9F5B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC77FC609B79CF029CE1FAF8089DE5ABE43EBB168;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FD3CD68D89191C7A02CDC20BD0BF0E52B2EEA3;
IL2CPP_EXTERN_C String_t* _stringLiteralCCF6F6A4EBB06FD4DD8996FD9E3735B3D9F97BEF;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A3FE6E27265CF0EF686C9A884EA90AF8543380;
IL2CPP_EXTERN_C String_t* _stringLiteralD9955BD188DDF92C3BA106435ECA8C6ED74340BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4;
IL2CPP_EXTERN_C String_t* _stringLiteralE73E556B63D0D9AA9CA37DDA8CB42B123F187DEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE742EA1C34A6165D061B136B6C1DC96EC4815E5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE893292347C9DB12C81CB6C10FA271B45FA1DCD0;
IL2CPP_EXTERN_C String_t* _stringLiteralE91C8ADB3D2112AFBA5148B01F876064B6022CDC;
IL2CPP_EXTERN_C String_t* _stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF55841B26B9D578A89C6E499D4DE8BF3DFB4C8D9;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64_m6AA0C07BFE643180B3D2D374BC3D369A51E9DC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m5EDC0027EC1C0D29D0E06D14A3E91C8200D13C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_mD4ACCD5BBC8E0449349A91967EA27B3164C6E006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m25AE38BDFB2E00EFDD3FDA335F21A14B457CB8CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC_m8738761236A68FECFB72C9AF0598B3D8E80778A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_m95ABE8444C1574F5D0B7AA4142F0A52664AFD101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m58CD120A73E36DB2BD69058FEDC7526355D0DC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m53D42ABE7FD218A6EFE4BBAEFCEA0505A47CB9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m72A3FBE6B6EC39B7B9958724080E3B0CD9FB727E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__64_0_mFEFFF3D97F973512B3069119BDC0B52FD6C9E563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m75382B1DAAF806CED28E37E6DFF2D53E5C8B9374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m232C2AF4C9450D9E755732277190C8F513D2C0A7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB;
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
struct FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEAC7C3DC9A539B12299C3B08FBC9FC97C312350A 
{
public:

public:
};

// Windows.Media.Capture.IAppCaptureStatics
struct NOVTABLE IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics_GetForCurrentView_mF44A888E1693B303FFDA2F2DC2704F3E7D69AD3E(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics2
struct NOVTABLE IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics2_U24__Stripped0_SetAllowedAsync_m723C515568AA6438001613A9565BAE1DFD015B29() = 0;
};

// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::<>9
	U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Windows.Media.Capture.AppCapture
struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE  : public Il2CppComObject
{
public:

public:
};

struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics2
	IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics
	IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.AppCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* get_____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B()
	{
		IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* returnValue = ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* get_____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE()
	{
		IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* returnValue = ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
			}
		}
		return returnValue;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.FrameTiming
struct FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF 
{
public:
	// System.UInt64 UnityEngine.FrameTiming::cpuTimePresentCalled
	uint64_t ___cpuTimePresentCalled_0;
	// System.Double UnityEngine.FrameTiming::cpuFrameTime
	double ___cpuFrameTime_1;
	// System.UInt64 UnityEngine.FrameTiming::cpuTimeFrameComplete
	uint64_t ___cpuTimeFrameComplete_2;
	// System.Double UnityEngine.FrameTiming::gpuFrameTime
	double ___gpuFrameTime_3;
	// System.Single UnityEngine.FrameTiming::heightScale
	float ___heightScale_4;
	// System.Single UnityEngine.FrameTiming::widthScale
	float ___widthScale_5;
	// System.UInt32 UnityEngine.FrameTiming::syncInterval
	uint32_t ___syncInterval_6;

public:
	inline static int32_t get_offset_of_cpuTimePresentCalled_0() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___cpuTimePresentCalled_0)); }
	inline uint64_t get_cpuTimePresentCalled_0() const { return ___cpuTimePresentCalled_0; }
	inline uint64_t* get_address_of_cpuTimePresentCalled_0() { return &___cpuTimePresentCalled_0; }
	inline void set_cpuTimePresentCalled_0(uint64_t value)
	{
		___cpuTimePresentCalled_0 = value;
	}

	inline static int32_t get_offset_of_cpuFrameTime_1() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___cpuFrameTime_1)); }
	inline double get_cpuFrameTime_1() const { return ___cpuFrameTime_1; }
	inline double* get_address_of_cpuFrameTime_1() { return &___cpuFrameTime_1; }
	inline void set_cpuFrameTime_1(double value)
	{
		___cpuFrameTime_1 = value;
	}

	inline static int32_t get_offset_of_cpuTimeFrameComplete_2() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___cpuTimeFrameComplete_2)); }
	inline uint64_t get_cpuTimeFrameComplete_2() const { return ___cpuTimeFrameComplete_2; }
	inline uint64_t* get_address_of_cpuTimeFrameComplete_2() { return &___cpuTimeFrameComplete_2; }
	inline void set_cpuTimeFrameComplete_2(uint64_t value)
	{
		___cpuTimeFrameComplete_2 = value;
	}

	inline static int32_t get_offset_of_gpuFrameTime_3() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___gpuFrameTime_3)); }
	inline double get_gpuFrameTime_3() const { return ___gpuFrameTime_3; }
	inline double* get_address_of_gpuFrameTime_3() { return &___gpuFrameTime_3; }
	inline void set_gpuFrameTime_3(double value)
	{
		___gpuFrameTime_3 = value;
	}

	inline static int32_t get_offset_of_heightScale_4() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___heightScale_4)); }
	inline float get_heightScale_4() const { return ___heightScale_4; }
	inline float* get_address_of_heightScale_4() { return &___heightScale_4; }
	inline void set_heightScale_4(float value)
	{
		___heightScale_4 = value;
	}

	inline static int32_t get_offset_of_widthScale_5() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___widthScale_5)); }
	inline float get_widthScale_5() const { return ___widthScale_5; }
	inline float* get_address_of_widthScale_5() { return &___widthScale_5; }
	inline void set_widthScale_5(float value)
	{
		___widthScale_5 = value;
	}

	inline static int32_t get_offset_of_syncInterval_6() { return static_cast<int32_t>(offsetof(FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF, ___syncInterval_6)); }
	inline uint32_t get_syncInterval_6() const { return ___syncInterval_6; }
	inline uint32_t* get_address_of_syncInterval_6() { return &___syncInterval_6; }
	inline void set_syncInterval_6(uint32_t value)
	{
		___syncInterval_6 = value;
	}
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
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

// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_t1B1621F6FFA8C7DB5BD6094C2A6D425854E77C42  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CselectedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t1B1621F6FFA8C7DB5BD6094C2A6D425854E77C42, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t1B1621F6FFA8C7DB5BD6094C2A6D425854E77C42, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CselectedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t1B1621F6FFA8C7DB5BD6094C2A6D425854E77C42, ___U3CselectedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CselectedObjectU3Ek__BackingField_4() const { return ___U3CselectedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CselectedObjectU3Ek__BackingField_4() { return &___U3CselectedObjectU3Ek__BackingField_4; }
	inline void set_U3CselectedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CselectedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.LightProbeUsage
struct LightProbeUsage_tA8F991FA2CEE02CC835D4EF4E0D1C5BA6ADC72AE 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_tA8F991FA2CEE02CC835D4EF4E0D1C5BA6ADC72AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.MotionVectorGenerationMode
struct MotionVectorGenerationMode_t9DAE6BEB4E9218B917194E897A01E5B61BBF736D 
{
public:
	// System.Int32 UnityEngine.MotionVectorGenerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionVectorGenerationMode_t9DAE6BEB4E9218B917194E897A01E5B61BBF736D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t7355C226968A290D476E9E7314DD9C92C7DC48CF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t7355C226968A290D476E9E7314DD9C92C7DC48CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ReflectionProbeUsage
struct ReflectionProbeUsage_t153E77C72498E132A8B0731CCFF459DEABDE7740 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeUsage_t153E77C72498E132A8B0731CCFF459DEABDE7740, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct ShadowCastingMode_t4193084D236CFA695FE2F3FD04D0898ABF03F8B2 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t4193084D236CFA695FE2F3FD04D0898ABF03F8B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor
struct FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor::percentageOfTarget
	float ___percentageOfTarget_0;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_percentageOfTarget_0() { return static_cast<int32_t>(offsetof(FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D, ___percentageOfTarget_0)); }
	inline float get_percentageOfTarget_0() const { return ___percentageOfTarget_0; }
	inline float* get_address_of_percentageOfTarget_0() { return &___percentageOfTarget_0; }
	inline void set_percentageOfTarget_0(float value)
	{
		___percentageOfTarget_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___postponedActions_15)); }
	inline List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___postponedObjectActions_16)); }
	inline List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C  : public GenericBaseEventData_t1B1621F6FFA8C7DB5BD6094C2A6D425854E77C42
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652  : public BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB, ___action_4)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_com ___action_4;
};

// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790  : public BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showDiagnostics
	bool ___showDiagnostics_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfiler
	bool ___showProfiler_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showFrameInfo
	bool ___showFrameInfo_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showMemoryStats
	bool ___showMemoryStats_8;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::frameSampleRate
	float ___frameSampleRate_9;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowAnchor
	int32_t ___windowAnchor_10;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_11;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowScale
	float ___windowScale_12;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowFollowSpeed
	float ___windowFollowSpeed_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::defaultInstancedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultInstancedMaterial_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_15;

public:
	inline static int32_t get_offset_of_showDiagnostics_5() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___showDiagnostics_5)); }
	inline bool get_showDiagnostics_5() const { return ___showDiagnostics_5; }
	inline bool* get_address_of_showDiagnostics_5() { return &___showDiagnostics_5; }
	inline void set_showDiagnostics_5(bool value)
	{
		___showDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_showProfiler_6() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___showProfiler_6)); }
	inline bool get_showProfiler_6() const { return ___showProfiler_6; }
	inline bool* get_address_of_showProfiler_6() { return &___showProfiler_6; }
	inline void set_showProfiler_6(bool value)
	{
		___showProfiler_6 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_7() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___showFrameInfo_7)); }
	inline bool get_showFrameInfo_7() const { return ___showFrameInfo_7; }
	inline bool* get_address_of_showFrameInfo_7() { return &___showFrameInfo_7; }
	inline void set_showFrameInfo_7(bool value)
	{
		___showFrameInfo_7 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_8() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___showMemoryStats_8)); }
	inline bool get_showMemoryStats_8() const { return ___showMemoryStats_8; }
	inline bool* get_address_of_showMemoryStats_8() { return &___showMemoryStats_8; }
	inline void set_showMemoryStats_8(bool value)
	{
		___showMemoryStats_8 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_9() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___frameSampleRate_9)); }
	inline float get_frameSampleRate_9() const { return ___frameSampleRate_9; }
	inline float* get_address_of_frameSampleRate_9() { return &___frameSampleRate_9; }
	inline void set_frameSampleRate_9(float value)
	{
		___frameSampleRate_9 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_10() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___windowAnchor_10)); }
	inline int32_t get_windowAnchor_10() const { return ___windowAnchor_10; }
	inline int32_t* get_address_of_windowAnchor_10() { return &___windowAnchor_10; }
	inline void set_windowAnchor_10(int32_t value)
	{
		___windowAnchor_10 = value;
	}

	inline static int32_t get_offset_of_windowOffset_11() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___windowOffset_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_11() const { return ___windowOffset_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_11() { return &___windowOffset_11; }
	inline void set_windowOffset_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_11 = value;
	}

	inline static int32_t get_offset_of_windowScale_12() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___windowScale_12)); }
	inline float get_windowScale_12() const { return ___windowScale_12; }
	inline float* get_address_of_windowScale_12() { return &___windowScale_12; }
	inline void set_windowScale_12(float value)
	{
		___windowScale_12 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_13() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___windowFollowSpeed_13)); }
	inline float get_windowFollowSpeed_13() const { return ___windowFollowSpeed_13; }
	inline float* get_address_of_windowFollowSpeed_13() { return &___windowFollowSpeed_13; }
	inline void set_windowFollowSpeed_13(float value)
	{
		___windowFollowSpeed_13 = value;
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___defaultInstancedMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultInstancedMaterial_14() const { return ___defaultInstancedMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultInstancedMaterial_14() { return &___defaultInstancedMaterial_14; }
	inline void set_defaultInstancedMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultInstancedMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_15() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790, ___showProfilerDuringMRC_15)); }
	inline bool get_showProfilerDuringMRC_15() const { return ___showProfilerDuringMRC_15; }
	inline bool* get_address_of_showProfilerDuringMRC_15() { return &___showProfilerDuringMRC_15; }
	inline void set_showProfilerDuringMRC_15(bool value)
	{
		___showProfilerDuringMRC_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60  : public BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_22;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * ___visualProfiler_23;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * ___diagnosticsSystemProfile_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_28;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_29;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * ___eventData_30;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_33;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_34;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_35;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_37;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___diagnosticVisualizationParent_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_22() const { return ___diagnosticVisualizationParent_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_22() { return &___diagnosticVisualizationParent_22; }
	inline void set_diagnosticVisualizationParent_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___visualProfiler_23)); }
	inline MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * get_visualProfiler_23() const { return ___visualProfiler_23; }
	inline MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 ** get_address_of_visualProfiler_23() { return &___visualProfiler_23; }
	inline void set_visualProfiler_23(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * value)
	{
		___visualProfiler_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_23), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___diagnosticsSystemProfile_24)); }
	inline MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * get_diagnosticsSystemProfile_24() const { return ___diagnosticsSystemProfile_24; }
	inline MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 ** get_address_of_diagnosticsSystemProfile_24() { return &___diagnosticsSystemProfile_24; }
	inline void set_diagnosticsSystemProfile_24(MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * value)
	{
		___diagnosticsSystemProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_24), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___showDiagnostics_25)); }
	inline bool get_showDiagnostics_25() const { return ___showDiagnostics_25; }
	inline bool* get_address_of_showDiagnostics_25() { return &___showDiagnostics_25; }
	inline void set_showDiagnostics_25(bool value)
	{
		___showDiagnostics_25 = value;
	}

	inline static int32_t get_offset_of_showProfiler_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___showProfiler_26)); }
	inline bool get_showProfiler_26() const { return ___showProfiler_26; }
	inline bool* get_address_of_showProfiler_26() { return &___showProfiler_26; }
	inline void set_showProfiler_26(bool value)
	{
		___showProfiler_26 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___showFrameInfo_27)); }
	inline bool get_showFrameInfo_27() const { return ___showFrameInfo_27; }
	inline bool* get_address_of_showFrameInfo_27() { return &___showFrameInfo_27; }
	inline void set_showFrameInfo_27(bool value)
	{
		___showFrameInfo_27 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___showMemoryStats_28)); }
	inline bool get_showMemoryStats_28() const { return ___showMemoryStats_28; }
	inline bool* get_address_of_showMemoryStats_28() { return &___showMemoryStats_28; }
	inline void set_showMemoryStats_28(bool value)
	{
		___showMemoryStats_28 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___frameSampleRate_29)); }
	inline float get_frameSampleRate_29() const { return ___frameSampleRate_29; }
	inline float* get_address_of_frameSampleRate_29() { return &___frameSampleRate_29; }
	inline void set_frameSampleRate_29(float value)
	{
		___frameSampleRate_29 = value;
	}

	inline static int32_t get_offset_of_eventData_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___eventData_30)); }
	inline DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * get_eventData_30() const { return ___eventData_30; }
	inline DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C ** get_address_of_eventData_30() { return &___eventData_30; }
	inline void set_eventData_30(DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * value)
	{
		___eventData_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_30), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___windowAnchor_33)); }
	inline int32_t get_windowAnchor_33() const { return ___windowAnchor_33; }
	inline int32_t* get_address_of_windowAnchor_33() { return &___windowAnchor_33; }
	inline void set_windowAnchor_33(int32_t value)
	{
		___windowAnchor_33 = value;
	}

	inline static int32_t get_offset_of_windowOffset_34() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___windowOffset_34)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_34() const { return ___windowOffset_34; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_34() { return &___windowOffset_34; }
	inline void set_windowOffset_34(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_34 = value;
	}

	inline static int32_t get_offset_of_windowScale_35() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___windowScale_35)); }
	inline float get_windowScale_35() const { return ___windowScale_35; }
	inline float* get_address_of_windowScale_35() { return &___windowScale_35; }
	inline void set_windowScale_35(float value)
	{
		___windowScale_35 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_36() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___windowFollowSpeed_36)); }
	inline float get_windowFollowSpeed_36() const { return ___windowFollowSpeed_36; }
	inline float* get_address_of_windowFollowSpeed_36() { return &___windowFollowSpeed_36; }
	inline void set_windowFollowSpeed_36(float value)
	{
		___windowFollowSpeed_36 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_37() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60, ___showProfilerDuringMRC_37)); }
	inline bool get_showProfilerDuringMRC_37() const { return ___showProfilerDuringMRC_37; }
	inline bool* get_address_of_showProfilerDuringMRC_37() { return &___showProfilerDuringMRC_37; }
	inline void set_showProfilerDuringMRC_37(bool value)
	{
		___showProfilerDuringMRC_37 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * ___OnDiagnosticsChanged_32;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields, ___OnDiagnosticsChangedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_31() const { return ___OnDiagnosticsChangedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_31() { return &___OnDiagnosticsChangedPerfMarker_31; }
	inline void set_OnDiagnosticsChangedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields, ___OnDiagnosticsChanged_32)); }
	inline EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * get_OnDiagnosticsChanged_32() const { return ___OnDiagnosticsChanged_32; }
	inline EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 ** get_address_of_OnDiagnosticsChanged_32() { return &___OnDiagnosticsChanged_32; }
	inline void set_OnDiagnosticsChanged_32(EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * value)
	{
		___OnDiagnosticsChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_32), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA  : public BaseInputEventData_t33EF0985CB22B5C3318A0464BDBF0BDF3F9B7411
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::registeredForInput
	bool ___registeredForInput_4;

public:
	inline static int32_t get_offset_of_registeredForInput_4() { return static_cast<int32_t>(offsetof(DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC, ___registeredForInput_4)); }
	inline bool get_registeredForInput_4() const { return ___registeredForInput_4; }
	inline bool* get_address_of_registeredForInput_4() { return &___registeredForInput_4; }
	inline void set_registeredForInput_4(bool value)
	{
		___registeredForInput_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::<WindowParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CWindowParentU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::isVisible
	bool ___isVisible_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoVisible
	bool ___frameInfoVisible_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStatsVisible
	bool ___memoryStatsVisible_20;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameSampleRate
	float ___frameSampleRate_21;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowAnchor
	int32_t ___windowAnchor_22;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_23;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowScale
	float ___windowScale_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowFollowSpeed
	float ___windowFollowSpeed_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::displayedDecimalDigits
	int32_t ___displayedDecimalDigits_27;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRateColors
	FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* ___frameRateColors_28;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::baseColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___baseColor_29;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___memoryUsedColor_30;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryPeakColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___memoryPeakColor_31;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryLimitColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___memoryLimitColor_32;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::window
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___window_33;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::background
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___background_34;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___cpuFrameRateText_35;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___gpuFrameRateText_36;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStats
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___memoryStats_37;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___usedMemoryText_38;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___peakMemoryText_39;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___limitMemoryText_40;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::voiceCommandText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___voiceCommandText_41;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::mrtkText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___mrtkText_42;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedAnchor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___usedAnchor_43;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakAnchor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___peakAnchor_44;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___windowHorizontalRotation_45;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotationInverse
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___windowHorizontalRotationInverse_46;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___windowVerticalRotation_47;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotationInverse
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___windowVerticalRotationInverse_48;
	// UnityEngine.Matrix4x4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoMatrices
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___frameInfoMatrices_49;
	// UnityEngine.Vector4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoColors
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___frameInfoColors_50;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoPropertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___frameInfoPropertyBlock_51;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::colorID
	int32_t ___colorID_52;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::parentMatrixID
	int32_t ___parentMatrixID_53;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameCount
	int32_t ___frameCount_54;
	// System.Diagnostics.Stopwatch Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___stopwatch_55;
	// UnityEngine.FrameTiming[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameTimings
	FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* ___frameTimings_56;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateStrings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___cpuFrameRateStrings_57;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateStrings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___gpuFrameRateStrings_58;
	// System.Char[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stringBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___stringBuffer_59;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsage
	uint64_t ___memoryUsage_60;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryUsage
	uint64_t ___peakMemoryUsage_61;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryUsage
	uint64_t ___limitMemoryUsage_62;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_63;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultInstancedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultInstancedMaterial_64;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___backgroundMaterial_65;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::foregroundMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___foregroundMaterial_66;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::textMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___textMaterial_67;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::quadMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___quadMesh_68;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::appCaptureIsCapturingVideo
	bool ___appCaptureIsCapturingVideo_69;
	// Windows.Media.Capture.AppCapture Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::appCapture
	AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * ___appCapture_70;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::previousFieldOfView
	float ___previousFieldOfView_72;

public:
	inline static int32_t get_offset_of_U3CWindowParentU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___U3CWindowParentU3Ek__BackingField_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CWindowParentU3Ek__BackingField_17() const { return ___U3CWindowParentU3Ek__BackingField_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CWindowParentU3Ek__BackingField_17() { return &___U3CWindowParentU3Ek__BackingField_17; }
	inline void set_U3CWindowParentU3Ek__BackingField_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CWindowParentU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWindowParentU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_isVisible_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___isVisible_18)); }
	inline bool get_isVisible_18() const { return ___isVisible_18; }
	inline bool* get_address_of_isVisible_18() { return &___isVisible_18; }
	inline void set_isVisible_18(bool value)
	{
		___isVisible_18 = value;
	}

	inline static int32_t get_offset_of_frameInfoVisible_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameInfoVisible_19)); }
	inline bool get_frameInfoVisible_19() const { return ___frameInfoVisible_19; }
	inline bool* get_address_of_frameInfoVisible_19() { return &___frameInfoVisible_19; }
	inline void set_frameInfoVisible_19(bool value)
	{
		___frameInfoVisible_19 = value;
	}

	inline static int32_t get_offset_of_memoryStatsVisible_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___memoryStatsVisible_20)); }
	inline bool get_memoryStatsVisible_20() const { return ___memoryStatsVisible_20; }
	inline bool* get_address_of_memoryStatsVisible_20() { return &___memoryStatsVisible_20; }
	inline void set_memoryStatsVisible_20(bool value)
	{
		___memoryStatsVisible_20 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameSampleRate_21)); }
	inline float get_frameSampleRate_21() const { return ___frameSampleRate_21; }
	inline float* get_address_of_frameSampleRate_21() { return &___frameSampleRate_21; }
	inline void set_frameSampleRate_21(float value)
	{
		___frameSampleRate_21 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowAnchor_22)); }
	inline int32_t get_windowAnchor_22() const { return ___windowAnchor_22; }
	inline int32_t* get_address_of_windowAnchor_22() { return &___windowAnchor_22; }
	inline void set_windowAnchor_22(int32_t value)
	{
		___windowAnchor_22 = value;
	}

	inline static int32_t get_offset_of_windowOffset_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowOffset_23)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_23() const { return ___windowOffset_23; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_23() { return &___windowOffset_23; }
	inline void set_windowOffset_23(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_23 = value;
	}

	inline static int32_t get_offset_of_windowScale_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowScale_24)); }
	inline float get_windowScale_24() const { return ___windowScale_24; }
	inline float* get_address_of_windowScale_24() { return &___windowScale_24; }
	inline void set_windowScale_24(float value)
	{
		___windowScale_24 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_25() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowFollowSpeed_25)); }
	inline float get_windowFollowSpeed_25() const { return ___windowFollowSpeed_25; }
	inline float* get_address_of_windowFollowSpeed_25() { return &___windowFollowSpeed_25; }
	inline void set_windowFollowSpeed_25(float value)
	{
		___windowFollowSpeed_25 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_26() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___showProfilerDuringMRC_26)); }
	inline bool get_showProfilerDuringMRC_26() const { return ___showProfilerDuringMRC_26; }
	inline bool* get_address_of_showProfilerDuringMRC_26() { return &___showProfilerDuringMRC_26; }
	inline void set_showProfilerDuringMRC_26(bool value)
	{
		___showProfilerDuringMRC_26 = value;
	}

	inline static int32_t get_offset_of_displayedDecimalDigits_27() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___displayedDecimalDigits_27)); }
	inline int32_t get_displayedDecimalDigits_27() const { return ___displayedDecimalDigits_27; }
	inline int32_t* get_address_of_displayedDecimalDigits_27() { return &___displayedDecimalDigits_27; }
	inline void set_displayedDecimalDigits_27(int32_t value)
	{
		___displayedDecimalDigits_27 = value;
	}

	inline static int32_t get_offset_of_frameRateColors_28() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameRateColors_28)); }
	inline FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* get_frameRateColors_28() const { return ___frameRateColors_28; }
	inline FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F** get_address_of_frameRateColors_28() { return &___frameRateColors_28; }
	inline void set_frameRateColors_28(FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* value)
	{
		___frameRateColors_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameRateColors_28), (void*)value);
	}

	inline static int32_t get_offset_of_baseColor_29() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___baseColor_29)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_baseColor_29() const { return ___baseColor_29; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_baseColor_29() { return &___baseColor_29; }
	inline void set_baseColor_29(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___baseColor_29 = value;
	}

	inline static int32_t get_offset_of_memoryUsedColor_30() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___memoryUsedColor_30)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_memoryUsedColor_30() const { return ___memoryUsedColor_30; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_memoryUsedColor_30() { return &___memoryUsedColor_30; }
	inline void set_memoryUsedColor_30(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___memoryUsedColor_30 = value;
	}

	inline static int32_t get_offset_of_memoryPeakColor_31() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___memoryPeakColor_31)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_memoryPeakColor_31() const { return ___memoryPeakColor_31; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_memoryPeakColor_31() { return &___memoryPeakColor_31; }
	inline void set_memoryPeakColor_31(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___memoryPeakColor_31 = value;
	}

	inline static int32_t get_offset_of_memoryLimitColor_32() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___memoryLimitColor_32)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_memoryLimitColor_32() const { return ___memoryLimitColor_32; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_memoryLimitColor_32() { return &___memoryLimitColor_32; }
	inline void set_memoryLimitColor_32(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___memoryLimitColor_32 = value;
	}

	inline static int32_t get_offset_of_window_33() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___window_33)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_window_33() const { return ___window_33; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_window_33() { return &___window_33; }
	inline void set_window_33(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___window_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_33), (void*)value);
	}

	inline static int32_t get_offset_of_background_34() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___background_34)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_background_34() const { return ___background_34; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_background_34() { return &___background_34; }
	inline void set_background_34(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___background_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_34), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateText_35() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___cpuFrameRateText_35)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_cpuFrameRateText_35() const { return ___cpuFrameRateText_35; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_cpuFrameRateText_35() { return &___cpuFrameRateText_35; }
	inline void set_cpuFrameRateText_35(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___cpuFrameRateText_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateText_35), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateText_36() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___gpuFrameRateText_36)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_gpuFrameRateText_36() const { return ___gpuFrameRateText_36; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_gpuFrameRateText_36() { return &___gpuFrameRateText_36; }
	inline void set_gpuFrameRateText_36(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___gpuFrameRateText_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateText_36), (void*)value);
	}

	inline static int32_t get_offset_of_memoryStats_37() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___memoryStats_37)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_memoryStats_37() const { return ___memoryStats_37; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_memoryStats_37() { return &___memoryStats_37; }
	inline void set_memoryStats_37(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___memoryStats_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memoryStats_37), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryText_38() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___usedMemoryText_38)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_usedMemoryText_38() const { return ___usedMemoryText_38; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_usedMemoryText_38() { return &___usedMemoryText_38; }
	inline void set_usedMemoryText_38(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___usedMemoryText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryText_38), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryText_39() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___peakMemoryText_39)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_peakMemoryText_39() const { return ___peakMemoryText_39; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_peakMemoryText_39() { return &___peakMemoryText_39; }
	inline void set_peakMemoryText_39(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___peakMemoryText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryText_39), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryText_40() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___limitMemoryText_40)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_limitMemoryText_40() const { return ___limitMemoryText_40; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_limitMemoryText_40() { return &___limitMemoryText_40; }
	inline void set_limitMemoryText_40(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___limitMemoryText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryText_40), (void*)value);
	}

	inline static int32_t get_offset_of_voiceCommandText_41() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___voiceCommandText_41)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_voiceCommandText_41() const { return ___voiceCommandText_41; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_voiceCommandText_41() { return &___voiceCommandText_41; }
	inline void set_voiceCommandText_41(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___voiceCommandText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceCommandText_41), (void*)value);
	}

	inline static int32_t get_offset_of_mrtkText_42() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___mrtkText_42)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_mrtkText_42() const { return ___mrtkText_42; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_mrtkText_42() { return &___mrtkText_42; }
	inline void set_mrtkText_42(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___mrtkText_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mrtkText_42), (void*)value);
	}

	inline static int32_t get_offset_of_usedAnchor_43() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___usedAnchor_43)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_usedAnchor_43() const { return ___usedAnchor_43; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_usedAnchor_43() { return &___usedAnchor_43; }
	inline void set_usedAnchor_43(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___usedAnchor_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedAnchor_43), (void*)value);
	}

	inline static int32_t get_offset_of_peakAnchor_44() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___peakAnchor_44)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_peakAnchor_44() const { return ___peakAnchor_44; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_peakAnchor_44() { return &___peakAnchor_44; }
	inline void set_peakAnchor_44(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___peakAnchor_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakAnchor_44), (void*)value);
	}

	inline static int32_t get_offset_of_windowHorizontalRotation_45() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowHorizontalRotation_45)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_windowHorizontalRotation_45() const { return ___windowHorizontalRotation_45; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_windowHorizontalRotation_45() { return &___windowHorizontalRotation_45; }
	inline void set_windowHorizontalRotation_45(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___windowHorizontalRotation_45 = value;
	}

	inline static int32_t get_offset_of_windowHorizontalRotationInverse_46() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowHorizontalRotationInverse_46)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_windowHorizontalRotationInverse_46() const { return ___windowHorizontalRotationInverse_46; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_windowHorizontalRotationInverse_46() { return &___windowHorizontalRotationInverse_46; }
	inline void set_windowHorizontalRotationInverse_46(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___windowHorizontalRotationInverse_46 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotation_47() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowVerticalRotation_47)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_windowVerticalRotation_47() const { return ___windowVerticalRotation_47; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_windowVerticalRotation_47() { return &___windowVerticalRotation_47; }
	inline void set_windowVerticalRotation_47(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___windowVerticalRotation_47 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotationInverse_48() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___windowVerticalRotationInverse_48)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_windowVerticalRotationInverse_48() const { return ___windowVerticalRotationInverse_48; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_windowVerticalRotationInverse_48() { return &___windowVerticalRotationInverse_48; }
	inline void set_windowVerticalRotationInverse_48(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___windowVerticalRotationInverse_48 = value;
	}

	inline static int32_t get_offset_of_frameInfoMatrices_49() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameInfoMatrices_49)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_frameInfoMatrices_49() const { return ___frameInfoMatrices_49; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_frameInfoMatrices_49() { return &___frameInfoMatrices_49; }
	inline void set_frameInfoMatrices_49(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___frameInfoMatrices_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoMatrices_49), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoColors_50() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameInfoColors_50)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_frameInfoColors_50() const { return ___frameInfoColors_50; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_frameInfoColors_50() { return &___frameInfoColors_50; }
	inline void set_frameInfoColors_50(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___frameInfoColors_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoColors_50), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoPropertyBlock_51() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameInfoPropertyBlock_51)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_frameInfoPropertyBlock_51() const { return ___frameInfoPropertyBlock_51; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_frameInfoPropertyBlock_51() { return &___frameInfoPropertyBlock_51; }
	inline void set_frameInfoPropertyBlock_51(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___frameInfoPropertyBlock_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoPropertyBlock_51), (void*)value);
	}

	inline static int32_t get_offset_of_colorID_52() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___colorID_52)); }
	inline int32_t get_colorID_52() const { return ___colorID_52; }
	inline int32_t* get_address_of_colorID_52() { return &___colorID_52; }
	inline void set_colorID_52(int32_t value)
	{
		___colorID_52 = value;
	}

	inline static int32_t get_offset_of_parentMatrixID_53() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___parentMatrixID_53)); }
	inline int32_t get_parentMatrixID_53() const { return ___parentMatrixID_53; }
	inline int32_t* get_address_of_parentMatrixID_53() { return &___parentMatrixID_53; }
	inline void set_parentMatrixID_53(int32_t value)
	{
		___parentMatrixID_53 = value;
	}

	inline static int32_t get_offset_of_frameCount_54() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameCount_54)); }
	inline int32_t get_frameCount_54() const { return ___frameCount_54; }
	inline int32_t* get_address_of_frameCount_54() { return &___frameCount_54; }
	inline void set_frameCount_54(int32_t value)
	{
		___frameCount_54 = value;
	}

	inline static int32_t get_offset_of_stopwatch_55() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___stopwatch_55)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_stopwatch_55() const { return ___stopwatch_55; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_stopwatch_55() { return &___stopwatch_55; }
	inline void set_stopwatch_55(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___stopwatch_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_55), (void*)value);
	}

	inline static int32_t get_offset_of_frameTimings_56() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___frameTimings_56)); }
	inline FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* get_frameTimings_56() const { return ___frameTimings_56; }
	inline FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB** get_address_of_frameTimings_56() { return &___frameTimings_56; }
	inline void set_frameTimings_56(FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* value)
	{
		___frameTimings_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameTimings_56), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateStrings_57() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___cpuFrameRateStrings_57)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_cpuFrameRateStrings_57() const { return ___cpuFrameRateStrings_57; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_cpuFrameRateStrings_57() { return &___cpuFrameRateStrings_57; }
	inline void set_cpuFrameRateStrings_57(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___cpuFrameRateStrings_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateStrings_57), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateStrings_58() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___gpuFrameRateStrings_58)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_gpuFrameRateStrings_58() const { return ___gpuFrameRateStrings_58; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_gpuFrameRateStrings_58() { return &___gpuFrameRateStrings_58; }
	inline void set_gpuFrameRateStrings_58(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___gpuFrameRateStrings_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateStrings_58), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_59() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___stringBuffer_59)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_stringBuffer_59() const { return ___stringBuffer_59; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_stringBuffer_59() { return &___stringBuffer_59; }
	inline void set_stringBuffer_59(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___stringBuffer_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_59), (void*)value);
	}

	inline static int32_t get_offset_of_memoryUsage_60() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___memoryUsage_60)); }
	inline uint64_t get_memoryUsage_60() const { return ___memoryUsage_60; }
	inline uint64_t* get_address_of_memoryUsage_60() { return &___memoryUsage_60; }
	inline void set_memoryUsage_60(uint64_t value)
	{
		___memoryUsage_60 = value;
	}

	inline static int32_t get_offset_of_peakMemoryUsage_61() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___peakMemoryUsage_61)); }
	inline uint64_t get_peakMemoryUsage_61() const { return ___peakMemoryUsage_61; }
	inline uint64_t* get_address_of_peakMemoryUsage_61() { return &___peakMemoryUsage_61; }
	inline void set_peakMemoryUsage_61(uint64_t value)
	{
		___peakMemoryUsage_61 = value;
	}

	inline static int32_t get_offset_of_limitMemoryUsage_62() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___limitMemoryUsage_62)); }
	inline uint64_t get_limitMemoryUsage_62() const { return ___limitMemoryUsage_62; }
	inline uint64_t* get_address_of_limitMemoryUsage_62() { return &___limitMemoryUsage_62; }
	inline void set_limitMemoryUsage_62(uint64_t value)
	{
		___limitMemoryUsage_62 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_63() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___defaultMaterial_63)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_63() const { return ___defaultMaterial_63; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_63() { return &___defaultMaterial_63; }
	inline void set_defaultMaterial_63(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_63), (void*)value);
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_64() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___defaultInstancedMaterial_64)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultInstancedMaterial_64() const { return ___defaultInstancedMaterial_64; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultInstancedMaterial_64() { return &___defaultInstancedMaterial_64; }
	inline void set_defaultInstancedMaterial_64(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultInstancedMaterial_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_64), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundMaterial_65() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___backgroundMaterial_65)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_backgroundMaterial_65() const { return ___backgroundMaterial_65; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_backgroundMaterial_65() { return &___backgroundMaterial_65; }
	inline void set_backgroundMaterial_65(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___backgroundMaterial_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMaterial_65), (void*)value);
	}

	inline static int32_t get_offset_of_foregroundMaterial_66() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___foregroundMaterial_66)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_foregroundMaterial_66() const { return ___foregroundMaterial_66; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_foregroundMaterial_66() { return &___foregroundMaterial_66; }
	inline void set_foregroundMaterial_66(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___foregroundMaterial_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foregroundMaterial_66), (void*)value);
	}

	inline static int32_t get_offset_of_textMaterial_67() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___textMaterial_67)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_textMaterial_67() const { return ___textMaterial_67; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_textMaterial_67() { return &___textMaterial_67; }
	inline void set_textMaterial_67(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___textMaterial_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMaterial_67), (void*)value);
	}

	inline static int32_t get_offset_of_quadMesh_68() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___quadMesh_68)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_quadMesh_68() const { return ___quadMesh_68; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_quadMesh_68() { return &___quadMesh_68; }
	inline void set_quadMesh_68(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___quadMesh_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMesh_68), (void*)value);
	}

	inline static int32_t get_offset_of_appCaptureIsCapturingVideo_69() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___appCaptureIsCapturingVideo_69)); }
	inline bool get_appCaptureIsCapturingVideo_69() const { return ___appCaptureIsCapturingVideo_69; }
	inline bool* get_address_of_appCaptureIsCapturingVideo_69() { return &___appCaptureIsCapturingVideo_69; }
	inline void set_appCaptureIsCapturingVideo_69(bool value)
	{
		___appCaptureIsCapturingVideo_69 = value;
	}

	inline static int32_t get_offset_of_appCapture_70() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___appCapture_70)); }
	inline AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * get_appCapture_70() const { return ___appCapture_70; }
	inline AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE ** get_address_of_appCapture_70() { return &___appCapture_70; }
	inline void set_appCapture_70(AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * value)
	{
		___appCapture_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appCapture_70), (void*)value);
	}

	inline static int32_t get_offset_of_previousFieldOfView_72() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362, ___previousFieldOfView_72)); }
	inline float get_previousFieldOfView_72() const { return ___previousFieldOfView_72; }
	inline float* get_address_of_previousFieldOfView_72() { return &___previousFieldOfView_72; }
	inline void set_previousFieldOfView_72(float value)
	{
		___previousFieldOfView_72 = value;
	}
};

struct MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxStringLength
	int32_t ___maxStringLength_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxTargetFrameRate
	int32_t ___maxTargetFrameRate_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxFrameTimings
	int32_t ___maxFrameTimings_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRange
	int32_t ___frameRange_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowRotation
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___defaultWindowRotation_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultWindowScale_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundScales
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___backgroundScales_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundOffsets
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___backgroundOffsets_11;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryString
	String_t* ___usedMemoryString_12;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryString
	String_t* ___peakMemoryString_13;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryString
	String_t* ___limitMemoryString_14;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::voiceCommandString
	String_t* ___voiceCommandString_15;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::visualProfilerTitleString
	String_t* ___visualProfilerTitleString_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPositionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateWindowPositionPerfMarker_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotationPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateWindowRotationPerfMarker_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateFrameColorPerfMarker_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSizePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateBackgroundSizePerfMarker_76;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToStringPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MemoryUsageToStringPerfMarker_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoAPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MemoryItoAPerfMarker_78;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTimingPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___AverageFrameTimingPerfMarker_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDifferPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___WillDisplayedMemoryUsageDifferPerfMarker_80;

public:
	inline static int32_t get_offset_of_maxStringLength_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___maxStringLength_4)); }
	inline int32_t get_maxStringLength_4() const { return ___maxStringLength_4; }
	inline int32_t* get_address_of_maxStringLength_4() { return &___maxStringLength_4; }
	inline void set_maxStringLength_4(int32_t value)
	{
		___maxStringLength_4 = value;
	}

	inline static int32_t get_offset_of_maxTargetFrameRate_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___maxTargetFrameRate_5)); }
	inline int32_t get_maxTargetFrameRate_5() const { return ___maxTargetFrameRate_5; }
	inline int32_t* get_address_of_maxTargetFrameRate_5() { return &___maxTargetFrameRate_5; }
	inline void set_maxTargetFrameRate_5(int32_t value)
	{
		___maxTargetFrameRate_5 = value;
	}

	inline static int32_t get_offset_of_maxFrameTimings_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___maxFrameTimings_6)); }
	inline int32_t get_maxFrameTimings_6() const { return ___maxFrameTimings_6; }
	inline int32_t* get_address_of_maxFrameTimings_6() { return &___maxFrameTimings_6; }
	inline void set_maxFrameTimings_6(int32_t value)
	{
		___maxFrameTimings_6 = value;
	}

	inline static int32_t get_offset_of_frameRange_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___frameRange_7)); }
	inline int32_t get_frameRange_7() const { return ___frameRange_7; }
	inline int32_t* get_address_of_frameRange_7() { return &___frameRange_7; }
	inline void set_frameRange_7(int32_t value)
	{
		___frameRange_7 = value;
	}

	inline static int32_t get_offset_of_defaultWindowRotation_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___defaultWindowRotation_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_defaultWindowRotation_8() const { return ___defaultWindowRotation_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_defaultWindowRotation_8() { return &___defaultWindowRotation_8; }
	inline void set_defaultWindowRotation_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___defaultWindowRotation_8 = value;
	}

	inline static int32_t get_offset_of_defaultWindowScale_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___defaultWindowScale_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_defaultWindowScale_9() const { return ___defaultWindowScale_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_defaultWindowScale_9() { return &___defaultWindowScale_9; }
	inline void set_defaultWindowScale_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___defaultWindowScale_9 = value;
	}

	inline static int32_t get_offset_of_backgroundScales_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___backgroundScales_10)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_backgroundScales_10() const { return ___backgroundScales_10; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_backgroundScales_10() { return &___backgroundScales_10; }
	inline void set_backgroundScales_10(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___backgroundScales_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundScales_10), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundOffsets_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___backgroundOffsets_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_backgroundOffsets_11() const { return ___backgroundOffsets_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_backgroundOffsets_11() { return &___backgroundOffsets_11; }
	inline void set_backgroundOffsets_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___backgroundOffsets_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundOffsets_11), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryString_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___usedMemoryString_12)); }
	inline String_t* get_usedMemoryString_12() const { return ___usedMemoryString_12; }
	inline String_t** get_address_of_usedMemoryString_12() { return &___usedMemoryString_12; }
	inline void set_usedMemoryString_12(String_t* value)
	{
		___usedMemoryString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryString_12), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryString_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___peakMemoryString_13)); }
	inline String_t* get_peakMemoryString_13() const { return ___peakMemoryString_13; }
	inline String_t** get_address_of_peakMemoryString_13() { return &___peakMemoryString_13; }
	inline void set_peakMemoryString_13(String_t* value)
	{
		___peakMemoryString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryString_13), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryString_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___limitMemoryString_14)); }
	inline String_t* get_limitMemoryString_14() const { return ___limitMemoryString_14; }
	inline String_t** get_address_of_limitMemoryString_14() { return &___limitMemoryString_14; }
	inline void set_limitMemoryString_14(String_t* value)
	{
		___limitMemoryString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryString_14), (void*)value);
	}

	inline static int32_t get_offset_of_voiceCommandString_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___voiceCommandString_15)); }
	inline String_t* get_voiceCommandString_15() const { return ___voiceCommandString_15; }
	inline String_t** get_address_of_voiceCommandString_15() { return &___voiceCommandString_15; }
	inline void set_voiceCommandString_15(String_t* value)
	{
		___voiceCommandString_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceCommandString_15), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfilerTitleString_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___visualProfilerTitleString_16)); }
	inline String_t* get_visualProfilerTitleString_16() const { return ___visualProfilerTitleString_16; }
	inline String_t** get_address_of_visualProfilerTitleString_16() { return &___visualProfilerTitleString_16; }
	inline void set_visualProfilerTitleString_16(String_t* value)
	{
		___visualProfilerTitleString_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfilerTitleString_16), (void*)value);
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_71() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___LateUpdatePerfMarker_71)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_71() const { return ___LateUpdatePerfMarker_71; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_71() { return &___LateUpdatePerfMarker_71; }
	inline void set_LateUpdatePerfMarker_71(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_71 = value;
	}

	inline static int32_t get_offset_of_CalculateWindowPositionPerfMarker_73() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___CalculateWindowPositionPerfMarker_73)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateWindowPositionPerfMarker_73() const { return ___CalculateWindowPositionPerfMarker_73; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateWindowPositionPerfMarker_73() { return &___CalculateWindowPositionPerfMarker_73; }
	inline void set_CalculateWindowPositionPerfMarker_73(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateWindowPositionPerfMarker_73 = value;
	}

	inline static int32_t get_offset_of_CalculateWindowRotationPerfMarker_74() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___CalculateWindowRotationPerfMarker_74)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateWindowRotationPerfMarker_74() const { return ___CalculateWindowRotationPerfMarker_74; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateWindowRotationPerfMarker_74() { return &___CalculateWindowRotationPerfMarker_74; }
	inline void set_CalculateWindowRotationPerfMarker_74(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateWindowRotationPerfMarker_74 = value;
	}

	inline static int32_t get_offset_of_CalculateFrameColorPerfMarker_75() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___CalculateFrameColorPerfMarker_75)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateFrameColorPerfMarker_75() const { return ___CalculateFrameColorPerfMarker_75; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateFrameColorPerfMarker_75() { return &___CalculateFrameColorPerfMarker_75; }
	inline void set_CalculateFrameColorPerfMarker_75(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateFrameColorPerfMarker_75 = value;
	}

	inline static int32_t get_offset_of_CalculateBackgroundSizePerfMarker_76() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___CalculateBackgroundSizePerfMarker_76)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateBackgroundSizePerfMarker_76() const { return ___CalculateBackgroundSizePerfMarker_76; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateBackgroundSizePerfMarker_76() { return &___CalculateBackgroundSizePerfMarker_76; }
	inline void set_CalculateBackgroundSizePerfMarker_76(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateBackgroundSizePerfMarker_76 = value;
	}

	inline static int32_t get_offset_of_MemoryUsageToStringPerfMarker_77() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___MemoryUsageToStringPerfMarker_77)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MemoryUsageToStringPerfMarker_77() const { return ___MemoryUsageToStringPerfMarker_77; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MemoryUsageToStringPerfMarker_77() { return &___MemoryUsageToStringPerfMarker_77; }
	inline void set_MemoryUsageToStringPerfMarker_77(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MemoryUsageToStringPerfMarker_77 = value;
	}

	inline static int32_t get_offset_of_MemoryItoAPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___MemoryItoAPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MemoryItoAPerfMarker_78() const { return ___MemoryItoAPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MemoryItoAPerfMarker_78() { return &___MemoryItoAPerfMarker_78; }
	inline void set_MemoryItoAPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MemoryItoAPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_AverageFrameTimingPerfMarker_79() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___AverageFrameTimingPerfMarker_79)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_AverageFrameTimingPerfMarker_79() const { return ___AverageFrameTimingPerfMarker_79; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_AverageFrameTimingPerfMarker_79() { return &___AverageFrameTimingPerfMarker_79; }
	inline void set_AverageFrameTimingPerfMarker_79(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___AverageFrameTimingPerfMarker_79 = value;
	}

	inline static int32_t get_offset_of_WillDisplayedMemoryUsageDifferPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields, ___WillDisplayedMemoryUsageDifferPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_WillDisplayedMemoryUsageDifferPerfMarker_80() const { return ___WillDisplayedMemoryUsageDifferPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_WillDisplayedMemoryUsageDifferPerfMarker_80() { return &___WillDisplayedMemoryUsageDifferPerfMarker_80; }
	inline void set_WillDisplayedMemoryUsageDifferPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___WillDisplayedMemoryUsageDifferPerfMarker_80 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_t8B7590127C57352E02B125B39641AB723F679407  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF  m_Items[1];

public:
	inline FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameTiming_tB4FE4A2022D1E4A85172CACAFDBA96800E16A8EF  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  m_Items[1];

public:
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  m_Items[1];

public:
	inline FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m3F82DE59817188D1A794C88049022C027E5EC53D_gshared (EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF8F6D577870A85934643309F5131312E767837DE_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_m8F2F90B9242AB317F1CD9228A1220F9B14CC1782_gshared (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<System.Object>(System.Func`2<!!0,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_m5D51FAD762E797FA160AFA0CE1FCF309A32A9BD0_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, RuntimeObject * ___handler2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_RemoveEventHandler_TisRuntimeObject_m83C0B2561CA83623A5ED44981D61430E4673BCAC_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, RuntimeObject * ___handler1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::get_Command()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  SpeechEventData_get_Command_m8EA86A11DE0374418C1DC3E5FD554BF1887C4F66_inline (SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_Keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_mB9BDA8B5A590199F36F0295F0016E25C00DC28A6 (SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m2A523DB1E3A27337D2E02D1925FC08E909B546E0 (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_m17D131730ABD74354DF9E0AC809F281321B39379 (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.CoreServices::get_DiagnosticsSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mE914410E55BD4C3756592B5DF1A517CE0593F306 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mFA14F1029E1BC5761649F87E1E57F448818D0B4D_inline (BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m5C061DA8D0F941B48E83A4925AE8AA591E67B10C (BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652 * __this, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls>()
inline DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC_m8738761236A68FECFB72C9AF0598B3D8E80778A7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_mB72730ABDFB3EFB9BB8CD09EF43C5146C189F759 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB5025E5148DDFAA742F368D364410E79ACBC5613_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler>()
inline MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_m95ABE8444C1574F5D0B7AA4142F0A52664AFD101 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_mADD0B9429C2FA3ABD1179653419E58C069770809_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m073D9AE9E12E32F84B302A7384FF9100091A9586_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mE7301DA618CDBC16AD5384720E3FBCA31DDE3022_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_m8C4114D0B6B129ACB97B98EDEBED6C2AFD246E34_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m6BBEB54AA2C140ACE610FE007EFDF1DB87F5867F_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_m529AB0ABE5ADF9A458F630C970F9529A46D8FB8E_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mD4C8A47BF1506A657FB00191D025BF03FDC460A2_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_mD6AE5971CDCBE77A3AA662A52B5C978257ACE2F3_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m008CE655DA41365F415C5B2D5851F39B7A212C46_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mCE2D31E02345C638D8C12AE4E3E0ABC36D88318D_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_mB44C6B0383017EF09624122518928ED7C0326247_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityDiagnosticsSystem_get_WindowOffset_m05D623D9266581109E8B6BACBB75416D3C4B4268_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m1219CADA80B41BAA15838D8C871CE49B765FD25C_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_mA5483D5B98B369E585E3D688D6139184F8930A08_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_m2D7C027982708B84BEEB5337187999722C962492 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6B9F4082B5F0E316A67DD611EBC3CDD7E0C0AB82_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_mEC643AFCD695B7732496673A266DE7C52BBE15D1 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfilerDuringMRC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_mAE85C76064A85EA1248D299BC317B0111A728216_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m0E89388ECEECC76059347129429B8ECCB06753DC_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m468213D350A8820AF2D976385A740D38ADA538B4 (BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData__ctor_m315D3A16630F8946DCD836A098D547AFB1E1FCE0 (DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowDiagnostics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mA25E3C7D2ED5836B7347CEE92D985C232FE2A58C_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mC8EC738F99E9606444556BF6A2D69C93770B538B (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfiler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m5FC96999E3B087F3BB4400E0B95606EBEC57D32F_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mFBFB74744B3274630731EA3508AA92EF8D0BF5D3 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowFrameInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m9CBE1D3325F4A92B59864452BA671C9A98B6F163_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m88592F9F7E6D0891D2DEEA1D05CF85FBEBA03278 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowMemoryStats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m4DCE58B887A38EF610AC8AA442D5B343F99A5774_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m411684A7B513A7B9F333046305104E74B3B378C3 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_FrameSampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_m1BF3DA15590C9D1C38A9B9B3368036D2F5E8067A_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m66C4CBA66197880F97D296A255DF5F5FB0775469 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_mD8A000E901A44F3194CE7D9AE404BC9D18BCFC91_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_m9379D8AFEF9E1EF69657DF9B3FF52A09EF78C42F (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityDiagnosticsProfile_get_WindowOffset_mA0D6C802B759DA2832030A0C9D386A332AB1D511_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_mAB51C12F5ADFCC55A2792DD6419EB542EF5BEA6D (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_mF582B2DC40EB64A3D38BF4F66479876BCD86B992_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_m1AC2F060F8B761C86059961DB514D9FE88E17EEB (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowFollowSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m0B9FAC35E53B2BFE5B57EC40B677189E4EAFD735_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mECDD61EBE7822F4C11994E36A21951A151F7BBD7 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfilerDuringMRC()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_mA78B4401CB3EDC1BA620AB8DD5FDD0299CC8C29A_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_m9217654B352D722475A5C310B0C2961EDE4AD32A (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m7354B1B3157C70A9D419CDF97930D47C3BCB436E (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_mC9508900BA952DDFB8C6C896D16C4DC425FB014A (BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m96FA152F963E2A21F4BED2D638EFAE078F8C9AEC (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::Initialize(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData_Initialize_m7AD6324F0CE09CC0CD1D97EA40E525311B5A2FCC (DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * __this, RuntimeObject* ___diagnosticsSystem0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m5EDC0027EC1C0D29D0E06D14A3E91C8200D13C91 (EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m3F82DE59817188D1A794C88049022C027E5EC53D_gshared)(__this, ___object0, ___method1, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_mFFFBFD2E11E5D92D97D8703BAA61816E9EB6731A (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_m847595816DCD8C47E76D47903A785061957224B1 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m1F0AF86EB2538BF9A7FE77E50664460479E3A8B2 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method);
// Windows.Media.Capture.AppCapture Windows.Media.Capture.AppCapture::GetForCurrentView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * AppCapture_GetForCurrentView_m15566CDBA94ED8CED6F8DFE0B109D169CA68DE7C (const RuntimeMethod* method);
// System.Boolean Windows.Media.Capture.AppCapture::get_IsCapturingVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppCapture_get_IsCapturingVideo_m6EE5908A72E9262E5250C7796321CB65288EA8C9 (AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m25AE38BDFB2E00EFDD3FDA335F21A14B457CB8CD (Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF8F6D577870A85934643309F5131312E767837DE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>::.ctor(System.Object,System.IntPtr)
inline void TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *, RuntimeObject *, intptr_t, const RuntimeMethod*))TypedEventHandler_2__ctor_m8F2F90B9242AB317F1CD9228A1220F9B14CC1782_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>>(System.Func`2<!!0,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
inline void WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m75382B1DAAF806CED28E37E6DFF2D53E5C8B9374 (Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * ___handler2, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266 *, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *, const RuntimeMethod*))WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_m5D51FAD762E797FA160AFA0CE1FCF309A32A9BD0_gshared)(___addMethod0, ___removeMethod1, ___handler2, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::RemoveEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
inline void WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m232C2AF4C9450D9E755732277190C8F513D2C0A7 (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * ___handler1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *, const RuntimeMethod*))WindowsRuntimeMarshal_RemoveEventHandler_TisRuntimeObject_m83C0B2561CA83623A5ED44981D61430E4673BCAC_gshared)(___removeMethod0, ___handler1, method);
}
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShouldShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m7307E74236A31D7EC9B6BA7B969ED567DA5F6F9E (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m8BE2A654B1D28FBB77958BFF8BD61268D24A7D06 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m31C4B29BD3F4A193F6F4D7E06E2052078D0CA745 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.FrameTimingManager::CaptureFrameTimings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameTimingManager_CaptureFrameTimings_m6D5D9CC73A92AC35A2F7B31AB486DB3B95C2B9FD (const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.FrameTimingManager::GetLatestTimings(System.UInt32,UnityEngine.FrameTiming[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FrameTimingManager_GetLatestTimings_mEE3E5D1048D277D377859DE65ACAB8EC45AC345D (uint32_t ___numFrames0, FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* ___timings1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_m26054107BBF35F714B4EE7FCDC796C3B71DA9220 (FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MixedRealityToolkitVisualProfiler_CalculateFrameColor_m97BBC879738BC265CC1185DF7D9341B70A2CC585 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, int32_t ___frameRate0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m21A4FAD0C5299CC9289DB8CBBCA77AD6C1FC781E (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___values1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsInstancing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsInstancing_m754DA2DF0A412E7F36D1393F9BA1E9D75EFF48C3 (const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetMatrix_m74F35565B785F2F1627CFD02819DB9AA2EBAF50C (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_m888BB305A12012A17D24D07ED5B08529C7B6413C (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, int32_t ___submeshIndex1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___matrices3, int32_t ___count4, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties5, int32_t ___castShadows6, bool ___receiveShadows7, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_m46B21DC15F5FAF0C647A0D53729839794EEAA4EB (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, int32_t ___layer3, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mD2440693336DA8B18F2E4911F368C8D153320F26 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m22F2E1FFA1B2D17C079858542CF8649F37A05A23 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mB906184138F1F2CB32DA5C9BA67D64741157AF76 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mB90F975BB0541DC2650E377A826B190F66706689 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA1A0BD21A4B521DB2050F3DC9EF4E959CBB8ECDD (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MixedRealityToolkitVisualProfiler_get_WindowParent_m5D71F49D186EAB1D11F086CBBF87327C176E4CA5_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealityToolkitVisualProfiler_CreateQuad_mBA439D92C95A8828429E8DD0D37CF40EF02130A2 (String_t* ___name0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * MixedRealityToolkitVisualProfiler_InitializeRenderer_m3FB2B093AB05BA3FBB08C0F6C35275D6F038DC55 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, int32_t ___colorID2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE (String_t* ___name0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent2, int32_t ___anchor3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color5, String_t* ___text6, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_fontSize_mD7888FBF4798ACE5E6E6D21466D2FA82927DEB60 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MixedRealityToolkitVisualProfiler_CreateAnchor_mBBC8F17A81D74DF6BA1A4523B9623BE11865A1C1 (String_t* ___name0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m1A9871D2FD70AE79F4FE3F3912757834392A9674 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_richText_m89D281DA0D36552BB529E98E908E7E25971DB1C0 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m1F04FBE7A55AD403B57E1B4E47E60F0978700136 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___renderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mDD2D9695A5F1B0D1FCACB8D87A3D1148C14D6F01 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mA7D75C6A0E4C9F3BEB8F9BB27829A5B749AAD875 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m4B0D86CCF92EF2D12EFA1E46953D12B52DBA39AC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_m29E6F739FD1F547AC42BBE9CB9E69852358E2803 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m69F31E68FF530A0B0BE76FC77A0655DBE02F7DB6 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_m4F287992468A4F2A46BC4419C22E9EAE80DECA84 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m2152665A0A3121325EFA960A01448CDC211FF9E7 (uint64_t ___bytes0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_mFDA401E5C3FAC325AAE66A7491BEE51CEE311903 (int32_t ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_mD4F76121803499E672DBAF04FEC026C04CBB9D30 (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsage_mC56F027A2D650BCC43228CD8AEDCEBB517F0B677 (const RuntimeMethod* method);
// System.UInt64 Windows.System.MemoryManager::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MemoryManager_get_AppMemoryUsageLimit_m4037BAE37C41E7F7FE868436D715C41E4CD9E636 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA7BED9EB49729777F6DFB079E4C662ADB7472F63 (U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData>(UnityEngine.EventSystems.BaseEventData)
inline DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_mD4ACCD5BBC8E0449349A91967EA27B3164C6E006 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m5B0E68F2BA8094CE8F20407CBC51DFE2CB4A429F_gshared)(___data0, method);
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnEnable_mE91E039F2378C9473EE220B1FDA70B1B94962F56 (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m58CD120A73E36DB2BD69058FEDC7526355D0DC8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!registeredForInput)
		bool L_0 = __this->get_registeredForInput_4();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (CoreServices.InputSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// CoreServices.InputSystem.RegisterHandler<IMixedRealitySpeechHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m58CD120A73E36DB2BD69058FEDC7526355D0DC8B_RuntimeMethod_var, L_2, __this);
		// registeredForInput = true;
		__this->set_registeredForInput_4((bool)1);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnDisable_m3EE1347597D7E330D9B85AC451F952E0DDE9971F (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m53D42ABE7FD218A6EFE4BBAEFCEA0505A47CB9DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (registeredForInput)
		bool L_0 = __this->get_registeredForInput_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// CoreServices.InputSystem.UnregisterHandler<IMixedRealitySpeechHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_t5334FAB956513541ADED66C150F22BA8CFE475D5_m53D42ABE7FD218A6EFE4BBAEFCEA0505A47CB9DE_RuntimeMethod_var, L_1, __this);
		// registeredForInput = false;
		__this->set_registeredForInput_4((bool)0);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler.OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_m1265A734D2582D577BCCD1B96F4982BF3676BD2E (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13DEC32CBB5161D1725B092A6C5860B0FC2ACEC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCF6F6A4EBB06FD4DD8996FD9E3735B3D9F97BEF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// switch (eventData.Command.Keyword.ToLower())
		SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * L_0 = ___eventData0;
		NullCheck(L_0);
		SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  L_1;
		L_1 = SpeechEventData_get_Command_m8EA86A11DE0374418C1DC3E5FD554BF1887C4F66_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = SpeechCommands_get_Keyword_mB9BDA8B5A590199F36F0295F0016E25C00DC28A6((SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralCCF6F6A4EBB06FD4DD8996FD9E3735B3D9F97BEF, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral13DEC32CBB5161D1725B092A6C5860B0FC2ACEC4, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0032:
	{
		// ToggleDiagnostics();
		DiagnosticsSystemVoiceControls_ToggleDiagnostics_m2A523DB1E3A27337D2E02D1925FC08E909B546E0(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0039:
	{
		// ToggleProfiler();
		DiagnosticsSystemVoiceControls_ToggleProfiler_m17D131730ABD74354DF9E0AC809F281321B39379(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m2A523DB1E3A27337D2E02D1925FC08E909B546E0 (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowDiagnostics = !CoreServices.DiagnosticsSystem.ShowDiagnostics;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowDiagnostics() */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean) */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_m17D131730ABD74354DF9E0AC809F281321B39379 (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls__ctor_mF37CE77D9056FBA646551228F06C1AF8465C0BE3 (DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_m4FD8F512B7EE45CD6E12EE137B400B2E343EB360 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, RuntimeObject* ___registrar0, MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealityDiagnosticsProfile profile) : this(profile)
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_0 = ___profile1;
		MixedRealityDiagnosticsSystem__ctor_mE914410E55BD4C3756592B5DF1A517CE0593F306(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mFA14F1029E1BC5761649F87E1E57F448818D0B4D_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mE914410E55BD4C3756592B5DF1A517CE0593F306 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		__this->set_U3CNameU3Ek__BackingField_21(_stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4);
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_29((0.100000001f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_33(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->set_windowOffset_34(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_35((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_36((5.0f));
		// MixedRealityDiagnosticsProfile profile) : base(profile)
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_1 = ___profile0;
		BaseCoreSystem__ctor_m5C061DA8D0F941B48E83A4925AE8AA591E67B10C(__this, L_1, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_Name_mD100CD5610964CADA5EE3DFDCD03749419CF53F1 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_Name_m1DC1C4C4F38B4DF3860B253AB0AF9273201B1BF2 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m7354B1B3157C70A9D419CDF97930D47C3BCB436E (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC_m8738761236A68FECFB72C9AF0598B3D8E80778A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_m95ABE8444C1574F5D0B7AA4142F0A52664AFD101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9955BD188DDF92C3BA106435ECA8C6ED74340BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// diagnosticVisualizationParent = new GameObject("Diagnostics");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralD9955BD188DDF92C3BA106435ECA8C6ED74340BE, /*hidden argument*/NULL);
		__this->set_diagnosticVisualizationParent_22(L_0);
		// diagnosticVisualizationParent.AddComponent<DiagnosticsSystemVoiceControls>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_diagnosticVisualizationParent_22();
		NullCheck(L_1);
		DiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC * L_2;
		L_2 = GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC_m8738761236A68FECFB72C9AF0598B3D8E80778A7(L_1, /*hidden argument*/GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_t8E618BA5D6E98239634F2DEB8C04A86BDF7E76DC_m8738761236A68FECFB72C9AF0598B3D8E80778A7_RuntimeMethod_var);
		// MixedRealityPlayspace.AddChild(diagnosticVisualizationParent.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_diagnosticVisualizationParent_22();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_mB72730ABDFB3EFB9BB8CD09EF43C5146C189F759(L_4, /*hidden argument*/NULL);
		// diagnosticVisualizationParent.SetActive(ShowDiagnostics);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_diagnosticVisualizationParent_22();
		bool L_6;
		L_6 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB5025E5148DDFAA742F368D364410E79ACBC5613_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, L_6, /*hidden argument*/NULL);
		// visualProfiler = diagnosticVisualizationParent.AddComponent<MixedRealityToolkitVisualProfiler>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_diagnosticVisualizationParent_22();
		NullCheck(L_7);
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_8;
		L_8 = GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_m95ABE8444C1574F5D0B7AA4142F0A52664AFD101(L_7, /*hidden argument*/GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_m95ABE8444C1574F5D0B7AA4142F0A52664AFD101_RuntimeMethod_var);
		__this->set_visualProfiler_23(L_8);
		// visualProfiler.WindowParent = diagnosticVisualizationParent.transform;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_9 = __this->get_visualProfiler_23();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_diagnosticVisualizationParent_22();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		MixedRealityToolkitVisualProfiler_set_WindowParent_mADD0B9429C2FA3ABD1179653419E58C069770809_inline(L_9, L_11, /*hidden argument*/NULL);
		// visualProfiler.IsVisible = ShowProfiler;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_12 = __this->get_visualProfiler_23();
		bool L_13;
		L_13 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m073D9AE9E12E32F84B302A7384FF9100091A9586_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mE7301DA618CDBC16AD5384720E3FBCA31DDE3022_inline(L_12, L_13, /*hidden argument*/NULL);
		// visualProfiler.FrameInfoVisible = ShowFrameInfo;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_14 = __this->get_visualProfiler_23();
		bool L_15;
		L_15 = MixedRealityDiagnosticsSystem_get_ShowFrameInfo_m8C4114D0B6B129ACB97B98EDEBED6C2AFD246E34_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m6BBEB54AA2C140ACE610FE007EFDF1DB87F5867F_inline(L_14, L_15, /*hidden argument*/NULL);
		// visualProfiler.MemoryStatsVisible = ShowMemoryStats;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_16 = __this->get_visualProfiler_23();
		bool L_17;
		L_17 = MixedRealityDiagnosticsSystem_get_ShowMemoryStats_m529AB0ABE5ADF9A458F630C970F9529A46D8FB8E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mD4C8A47BF1506A657FB00191D025BF03FDC460A2_inline(L_16, L_17, /*hidden argument*/NULL);
		// visualProfiler.FrameSampleRate = FrameSampleRate;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_18 = __this->get_visualProfiler_23();
		float L_19;
		L_19 = MixedRealityDiagnosticsSystem_get_FrameSampleRate_mD6AE5971CDCBE77A3AA662A52B5C978257ACE2F3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m008CE655DA41365F415C5B2D5851F39B7A212C46_inline(L_18, L_19, /*hidden argument*/NULL);
		// visualProfiler.WindowAnchor = WindowAnchor;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_20 = __this->get_visualProfiler_23();
		int32_t L_21;
		L_21 = MixedRealityDiagnosticsSystem_get_WindowAnchor_mCE2D31E02345C638D8C12AE4E3E0ABC36D88318D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_mB44C6B0383017EF09624122518928ED7C0326247_inline(L_20, L_21, /*hidden argument*/NULL);
		// visualProfiler.WindowOffset = WindowOffset;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_22 = __this->get_visualProfiler_23();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = MixedRealityDiagnosticsSystem_get_WindowOffset_m05D623D9266581109E8B6BACBB75416D3C4B4268_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_m1219CADA80B41BAA15838D8C871CE49B765FD25C_inline(L_22, L_23, /*hidden argument*/NULL);
		// visualProfiler.WindowScale = WindowScale;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_24 = __this->get_visualProfiler_23();
		float L_25;
		L_25 = MixedRealityDiagnosticsSystem_get_WindowScale_mA5483D5B98B369E585E3D688D6139184F8930A08_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		MixedRealityToolkitVisualProfiler_set_WindowScale_m2D7C027982708B84BEEB5337187999722C962492(L_24, L_25, /*hidden argument*/NULL);
		// visualProfiler.WindowFollowSpeed = WindowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_26 = __this->get_visualProfiler_23();
		float L_27;
		L_27 = MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6B9F4082B5F0E316A67DD611EBC3CDD7E0C0AB82_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_mEC643AFCD695B7732496673A266DE7C52BBE15D1(L_26, L_27, /*hidden argument*/NULL);
		// visualProfiler.ShowProfilerDuringMRC = ShowProfilerDuringMRC;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_28 = __this->get_visualProfiler_23();
		bool L_29;
		L_29 = MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_mAE85C76064A85EA1248D299BC317B0111A728216_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m0E89388ECEECC76059347129429B8ECCB06753DC_inline(L_28, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Initialize_m3630DC63F41BFFF1B88879421FAE4C045C2487D8 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * V_0 = NULL;
	{
		// if (!Application.isPlaying) { return; }
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// MixedRealityDiagnosticsProfile profile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_1;
		L_1 = VirtFuncInvoker0< BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 *)IsInstClass((RuntimeObject*)L_1, MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790_il2cpp_TypeInfo_var));
		// if (profile == null) { return; }
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (profile == null) { return; }
		return;
	}

IL_001e:
	{
		// base.Initialize();
		BaseService_Initialize_m468213D350A8820AF2D976385A740D38ADA538B4(__this, /*hidden argument*/NULL);
		// eventData = new DiagnosticsEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4;
		L_4 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * L_5 = (DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C *)il2cpp_codegen_object_new(DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_il2cpp_TypeInfo_var);
		DiagnosticsEventData__ctor_m315D3A16630F8946DCD836A098D547AFB1E1FCE0(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventData_30(L_5);
		// ShowDiagnostics = profile.ShowDiagnostics;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mA25E3C7D2ED5836B7347CEE92D985C232FE2A58C_inline(L_6, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mC8EC738F99E9606444556BF6A2D69C93770B538B(__this, L_7, /*hidden argument*/NULL);
		// ShowProfiler = profile.ShowProfiler;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = MixedRealityDiagnosticsProfile_get_ShowProfiler_m5FC96999E3B087F3BB4400E0B95606EBEC57D32F_inline(L_8, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfiler_mFBFB74744B3274630731EA3508AA92EF8D0BF5D3(__this, L_9, /*hidden argument*/NULL);
		// ShowFrameInfo = profile.ShowFrameInfo;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m9CBE1D3325F4A92B59864452BA671C9A98B6F163_inline(L_10, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m88592F9F7E6D0891D2DEEA1D05CF85FBEBA03278(__this, L_11, /*hidden argument*/NULL);
		// ShowMemoryStats = profile.ShowMemoryStats;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m4DCE58B887A38EF610AC8AA442D5B343F99A5774_inline(L_12, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m411684A7B513A7B9F333046305104E74B3B378C3(__this, L_13, /*hidden argument*/NULL);
		// FrameSampleRate = profile.FrameSampleRate;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_14 = V_0;
		NullCheck(L_14);
		float L_15;
		L_15 = MixedRealityDiagnosticsProfile_get_FrameSampleRate_m1BF3DA15590C9D1C38A9B9B3368036D2F5E8067A_inline(L_14, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_FrameSampleRate_m66C4CBA66197880F97D296A255DF5F5FB0775469(__this, L_15, /*hidden argument*/NULL);
		// WindowAnchor = profile.WindowAnchor;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MixedRealityDiagnosticsProfile_get_WindowAnchor_mD8A000E901A44F3194CE7D9AE404BC9D18BCFC91_inline(L_16, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowAnchor_m9379D8AFEF9E1EF69657DF9B3FF52A09EF78C42F(__this, L_17, /*hidden argument*/NULL);
		// WindowOffset = profile.WindowOffset;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_18 = V_0;
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = MixedRealityDiagnosticsProfile_get_WindowOffset_mA0D6C802B759DA2832030A0C9D386A332AB1D511_inline(L_18, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowOffset_mAB51C12F5ADFCC55A2792DD6419EB542EF5BEA6D(__this, L_19, /*hidden argument*/NULL);
		// WindowScale = profile.WindowScale;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_20 = V_0;
		NullCheck(L_20);
		float L_21;
		L_21 = MixedRealityDiagnosticsProfile_get_WindowScale_mF582B2DC40EB64A3D38BF4F66479876BCD86B992_inline(L_20, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowScale_m1AC2F060F8B761C86059961DB514D9FE88E17EEB(__this, L_21, /*hidden argument*/NULL);
		// WindowFollowSpeed = profile.WindowFollowSpeed;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_22 = V_0;
		NullCheck(L_22);
		float L_23;
		L_23 = MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m0B9FAC35E53B2BFE5B57EC40B677189E4EAFD735_inline(L_22, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mECDD61EBE7822F4C11994E36A21951A151F7BBD7(__this, L_23, /*hidden argument*/NULL);
		// ShowProfilerDuringMRC = profile.ShowProfilerDuringMRC;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_24 = V_0;
		NullCheck(L_24);
		bool L_25;
		L_25 = MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_mA78B4401CB3EDC1BA620AB8DD5FDD0299CC8C29A_inline(L_24, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_m9217654B352D722475A5C310B0C2961EDE4AD32A(__this, L_25, /*hidden argument*/NULL);
		// CreateVisualizations();
		MixedRealityDiagnosticsSystem_CreateVisualizations_m7354B1B3157C70A9D419CDF97930D47C3BCB436E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Destroy_mCC08AFC30D5FE5FF380672EC7AF79A70E448DFF4 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticVisualizationParent != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_diagnosticVisualizationParent_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2;
		L_2 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Object.DestroyImmediate(diagnosticVisualizationParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_diagnosticVisualizationParent_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_3, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0022:
	{
		// diagnosticVisualizationParent.transform.DetachChildren();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_diagnosticVisualizationParent_22();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2(L_5, /*hidden argument*/NULL);
		// Object.Destroy(diagnosticVisualizationParent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_diagnosticVisualizationParent_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// diagnosticVisualizationParent = null;
		__this->set_diagnosticVisualizationParent_22((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0044:
	{
		// base.Destroy();
		BaseEventSystem_Destroy_mC9508900BA952DDFB8C6C896D16C4DC425FB014A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_DiagnosticsSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m46FC1E49C3D2B332EE7DD60C3FDEDF42A0DE5986 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticsSystemProfile == null)
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_0 = __this->get_diagnosticsSystemProfile_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// diagnosticsSystemProfile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_2;
		L_2 = VirtFuncInvoker0< BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_diagnosticsSystemProfile_24(((MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 *)IsInstClass((RuntimeObject*)L_2, MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return diagnosticsSystemProfile;
		MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * L_3 = __this->get_diagnosticsSystemProfile_24();
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB5025E5148DDFAA742F368D364410E79ACBC5613 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_mC8EC738F99E9606444556BF6A2D69C93770B538B (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value != showDiagnostics)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showDiagnostics_25();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		// showDiagnostics = value;
		bool L_2 = ___value0;
		__this->set_showDiagnostics_25(L_2);
		// if (ShowProfiler)
		bool L_3;
		L_3 = MixedRealityDiagnosticsSystem_get_ShowProfiler_m073D9AE9E12E32F84B302A7384FF9100091A9586_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_4 = __this->get_visualProfiler_23();
		bool L_5 = ___value0;
		NullCheck(L_4);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mE7301DA618CDBC16AD5384720E3FBCA31DDE3022_inline(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m073D9AE9E12E32F84B302A7384FF9100091A9586 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mFBFB74744B3274630731EA3508AA92EF8D0BF5D3 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfiler)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfiler_26();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// showProfiler = value;
		bool L_2 = ___value0;
		__this->set_showProfiler_26(L_2);
		// if ((visualProfiler != null) && ShowDiagnostics)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5;
		L_5 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB5025E5148DDFAA742F368D364410E79ACBC5613_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_6 = __this->get_visualProfiler_23();
		bool L_7 = ___value0;
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_IsVisible_mE7301DA618CDBC16AD5384720E3FBCA31DDE3022_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_m8C4114D0B6B129ACB97B98EDEBED6C2AFD246E34 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_m88592F9F7E6D0891D2DEEA1D05CF85FBEBA03278 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showFrameInfo)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showFrameInfo_27();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showFrameInfo = value;
		bool L_2 = ___value0;
		__this->set_showFrameInfo_27(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.FrameInfoVisible = value;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_5 = __this->get_visualProfiler_23();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m6BBEB54AA2C140ACE610FE007EFDF1DB87F5867F_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_m529AB0ABE5ADF9A458F630C970F9529A46D8FB8E (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m411684A7B513A7B9F333046305104E74B3B378C3 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showMemoryStats)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showMemoryStats_28();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showMemoryStats = value;
		bool L_2 = ___value0;
		__this->set_showMemoryStats_28(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.MemoryStatsVisible = value;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_5 = __this->get_visualProfiler_23();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mD4C8A47BF1506A657FB00191D025BF03FDC460A2_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_mD6AE5971CDCBE77A3AA662A52B5C978257ACE2F3 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m66C4CBA66197880F97D296A255DF5F5FB0775469 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Mathf.Approximately(frameSampleRate, value))
		float L_0 = __this->get_frameSampleRate_29();
		float L_1 = ___value0;
		bool L_2;
		L_2 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		// frameSampleRate = value;
		float L_3 = ___value0;
		__this->set_frameSampleRate_29(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_4 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.FrameSampleRate = frameSampleRate;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_6 = __this->get_visualProfiler_23();
		float L_7 = __this->get_frameSampleRate_29();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m008CE655DA41365F415C5B2D5851F39B7A212C46_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityDiagnosticsSystem_get_SourceId_mB95C81F2B9566101CCEF5385819E66EB79994EC2 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId => (uint)SourceName.GetHashCode();
		String_t* L_0;
		L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m96FA152F963E2A21F4BED2D638EFAE078F8C9AEC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_m96FA152F963E2A21F4BED2D638EFAE078F8C9AEC (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName => "Mixed Reality Diagnostics System";
		return _stringLiteral1EE2FC1E941A5930213C8E0F3A238E9A18A8F1C4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_Equals_mB81382F1144F11925495B714EB4F228A8D16D13C (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// public new bool Equals(object x, object y) => false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_GetHashCode_m7320D0FE73C2A632505DB652BF8C1AFAD12270C0 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode(object obj) => SourceName.GetHashCode();
		String_t* L_0;
		L_0 = MixedRealityDiagnosticsSystem_get_SourceName_m96FA152F963E2A21F4BED2D638EFAE078F8C9AEC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::RaiseDiagnosticsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_mA99A5BE62D902DABBE32E338CEABE2C45498E735 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64_m6AA0C07BFE643180B3D2D374BC3D369A51E9DC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Initialize(this);
		DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * L_0 = __this->get_eventData_30();
		NullCheck(L_0);
		DiagnosticsEventData_Initialize_m7AD6324F0CE09CC0CD1D97EA40E525311B5A2FCC(L_0, __this, /*hidden argument*/NULL);
		// HandleEvent(eventData, OnDiagnosticsChanged);
		DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * L_1 = __this->get_eventData_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var);
		EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * L_2 = ((MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var))->get_OnDiagnosticsChanged_32();
		GenericVirtActionInvoker2< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64_m6AA0C07BFE643180B3D2D374BC3D369A51E9DC11_RuntimeMethod_var, __this, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mCE2D31E02345C638D8C12AE4E3E0ABC36D88318D (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_33();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_m9379D8AFEF9E1EF69657DF9B3FF52A09EF78C42F (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowAnchor)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_windowAnchor_33();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowAnchor = value;
		int32_t L_2 = ___value0;
		__this->set_windowAnchor_33(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowAnchor = windowAnchor;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_5 = __this->get_visualProfiler_23();
		int32_t L_6 = __this->get_windowAnchor_33();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_mB44C6B0383017EF09624122518928ED7C0326247_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityDiagnosticsSystem_get_WindowOffset_m05D623D9266581109E8B6BACBB75416D3C4B4268 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_windowOffset_34();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_mAB51C12F5ADFCC55A2792DD6419EB542EF5BEA6D (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowOffset)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_windowOffset_34();
		bool L_2;
		L_2 = Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// windowOffset = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value0;
		__this->set_windowOffset_34(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_4 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.WindowOffset = windowOffset;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_6 = __this->get_visualProfiler_23();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_windowOffset_34();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_m1219CADA80B41BAA15838D8C871CE49B765FD25C_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_mA5483D5B98B369E585E3D688D6139184F8930A08 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_35();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_m1AC2F060F8B761C86059961DB514D9FE88E17EEB (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowScale)
		float L_0 = ___value0;
		float L_1 = __this->get_windowScale_35();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowScale = value;
		float L_2 = ___value0;
		__this->set_windowScale_35(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowScale = windowScale;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_5 = __this->get_visualProfiler_23();
		float L_6 = __this->get_windowScale_35();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowScale_m2D7C027982708B84BEEB5337187999722C962492(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6B9F4082B5F0E316A67DD611EBC3CDD7E0C0AB82 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_36();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mECDD61EBE7822F4C11994E36A21951A151F7BBD7 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowFollowSpeed)
		float L_0 = ___value0;
		float L_1 = __this->get_windowFollowSpeed_36();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowFollowSpeed = value;
		float L_2 = ___value0;
		__this->set_windowFollowSpeed_36(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowFollowSpeed = windowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_5 = __this->get_visualProfiler_23();
		float L_6 = __this->get_windowFollowSpeed_36();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_mEC643AFCD695B7732496673A266DE7C52BBE15D1(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_mAE85C76064A85EA1248D299BC317B0111A728216 (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->get_showProfilerDuringMRC_37();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfilerDuringMRC_m9217654B352D722475A5C310B0C2961EDE4AD32A (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfilerDuringMRC)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfilerDuringMRC_37();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// showProfilerDuringMRC = value;
		bool L_2 = ___value0;
		__this->set_showProfilerDuringMRC_37(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_3 = __this->get_visualProfiler_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.ShowProfilerDuringMRC = showProfilerDuringMRC;
		MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * L_5 = __this->get_visualProfiler_23();
		bool L_6 = __this->get_showProfilerDuringMRC_37();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m0E89388ECEECC76059347129429B8ECCB06753DC_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__cctor_m9D63425FB443CC953FE5504FDE978BD67EC48B3D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1__ctor_m5EDC0027EC1C0D29D0E06D14A3E91C8200D13C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__64_0_mFEFFF3D97F973512B3069119BDC0B52FD6C9E563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6703A3F9CC9C88FFCA9574A1C64091DEAF03F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnDiagnosticsChangedPerfMarker = new ProfilerMarker("[MRTK] MixedRealityDiagnosticsSystem.OnDiagnosticsChanged - Raise event");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral4A6703A3F9CC9C88FFCA9574A1C64091DEAF03F7, /*hidden argument*/NULL);
		((MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var))->set_OnDiagnosticsChangedPerfMarker_31(L_0);
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityDiagnosticsHandler> OnDiagnosticsChanged =
		//     delegate (IMixedRealityDiagnosticsHandler handler, BaseEventData eventData)
		//     {
		//         using (OnDiagnosticsChangedPerfMarker.Auto())
		//         {
		//             var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		//             handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		//         }
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var);
		U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * L_1 = ((U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 * L_2 = (EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5 *)il2cpp_codegen_object_new(EventFunction_1_t5F6FD150EC5B3610E223B9E184E0F6EC6A4EA1D5_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m5EDC0027EC1C0D29D0E06D14A3E91C8200D13C91(L_2, L_1, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__64_0_mFEFFF3D97F973512B3069119BDC0B52FD6C9E563_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m5EDC0027EC1C0D29D0E06D14A3E91C8200D13C91_RuntimeMethod_var);
		((MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var))->set_OnDiagnosticsChanged_32(L_2);
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MixedRealityToolkitVisualProfiler_get_WindowParent_m5D71F49D186EAB1D11F086CBBF87327C176E4CA5 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_mADD0B9429C2FA3ABD1179653419E58C069770809 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_IsVisible_m6EA9459178BC10B8B24B5E99BB79D33E5DACB239 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return isVisible; }
		bool L_0 = __this->get_isVisible_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mE7301DA618CDBC16AD5384720E3FBCA31DDE3022 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_18(L_0);
		// set { isVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShouldShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		//             (!appCaptureIsCapturingVideo || showProfilerDuringMRC) &&
		// #endif // WINDOWS_UWP
		//             isVisible;
		bool L_0 = __this->get_appCaptureIsCapturingVideo_69();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_showProfilerDuringMRC_26();
		if (!L_1)
		{
			goto IL_0017;
		}
	}

IL_0010:
	{
		bool L_2 = __this->get_isVisible_18();
		return L_2;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameInfoVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_FrameInfoVisible_m45E8B622D86CF71D4AA920C8A7D503452A5A817F (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return frameInfoVisible; }
		bool L_0 = __this->get_frameInfoVisible_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m6BBEB54AA2C140ACE610FE007EFDF1DB87F5867F (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->set_frameInfoVisible_19(L_0);
		// set { frameInfoVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_MemoryStatsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_MemoryStatsVisible_m73B59A4970802C6DE2F40AEDD509513CEA72D21E (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return memoryStatsVisible; }
		bool L_0 = __this->get_memoryStatsVisible_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mD4C8A47BF1506A657FB00191D025BF03FDC460A2 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->set_memoryStatsVisible_20(L_0);
		// set { memoryStatsVisible = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_FrameSampleRate_m4B6744B2865CEAC02AC295837D0D90768C0C8318 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return frameSampleRate; }
		float L_0 = __this->get_frameSampleRate_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m008CE655DA41365F415C5B2D5851F39B7A212C46 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_21(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_get_WindowAnchor_m3C03094627C99C5E15D3BCC05D9E327E07DFE8D4 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_mB44C6B0383017EF09624122518928ED7C0326247 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_22(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityToolkitVisualProfiler_get_WindowOffset_m873AEECE53DEF99EE8EA9D3EE588406414FABC7A (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_windowOffset_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m1219CADA80B41BAA15838D8C871CE49B765FD25C (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_windowOffset_23(L_0);
		// set { windowOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowScale_m818CBC22C8FB8746EB17696513A83BAF88DF531D (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_m2D7C027982708B84BEEB5337187999722C962492 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, (0.5f), (5.0f), /*hidden argument*/NULL);
		__this->set_windowScale_24(L_1);
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowFollowSpeed_mC041D32CAE003AF71BE657EE1A4BB06585FAE590 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_mEC643AFCD695B7732496673A266DE7C52BBE15D1 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { windowFollowSpeed = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_windowFollowSpeed_25(L_1);
		// set { windowFollowSpeed = Mathf.Abs(value); }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_ShowProfilerDuringMRC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_ShowProfilerDuringMRC_m24790ED83389D1DB8B7B99B57B6341E97A747E0D (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->get_showProfilerDuringMRC_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_ShowProfilerDuringMRC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m0E89388ECEECC76059347129429B8ECCB06753DC (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { showProfilerDuringMRC = value; }
		bool L_0 = ___value0;
		__this->set_showProfilerDuringMRC_26(L_0);
		// set { showProfilerDuringMRC = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_mFFFBFD2E11E5D92D97D8703BAA61816E9EB6731A (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F5DDA9EF7410C3C37C840965AC892E3803E4957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44710FB5A26187014377E8E1544F56B125E6F4A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_0 = NULL;
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * V_1 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_2 = NULL;
	{
		// if (defaultMaterial == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_defaultMaterial_63();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral4E8A8460777BA546EF33027F63BAAF6396716FBE, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_defaultMaterial_63(L_3);
		// defaultMaterial.SetFloat("_ZWrite", 1.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_defaultMaterial_63();
		NullCheck(L_4);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_4, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, (1.0f), /*hidden argument*/NULL);
		// defaultMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_defaultMaterial_63();
		NullCheck(L_5);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_5, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.renderQueue = 5000;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_defaultMaterial_63();
		NullCheck(L_6);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_6, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_005d:
	{
		// if (defaultInstancedMaterial == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_defaultInstancedMaterial_64();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}
	{
		// Shader defaultInstancedShader = Shader.Find("Hidden/Instanced-Colored");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_9;
		L_9 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral44710FB5A26187014377E8E1544F56B125E6F4A1, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (defaultInstancedShader != null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00d3;
		}
	}
	{
		// defaultInstancedMaterial = new Material(defaultInstancedShader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_12 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultInstancedMaterial_64(L_13);
		// defaultInstancedMaterial.enableInstancing = true;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_14);
		Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B(L_14, (bool)1, /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZWrite", 1.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_15);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_15, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, (1.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_16);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_16, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, (0.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.renderQueue = 5000;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_defaultInstancedMaterial_64();
		NullCheck(L_17);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_17, ((int32_t)5000), /*hidden argument*/NULL);
		// }
		goto IL_00dd;
	}

IL_00d3:
	{
		// Debug.LogWarning("A shader supporting instancing could not be found for the VisualProfiler, falling back to traditional rendering. This may impact performance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2F5DDA9EF7410C3C37C840965AC892E3803E4957, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// if (Application.isPlaying)
		bool L_18;
		L_18 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_01de;
		}
	}
	{
		// backgroundMaterial = new Material(defaultMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_defaultMaterial_63();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_20, L_19, /*hidden argument*/NULL);
		__this->set_backgroundMaterial_65(L_20);
		// foregroundMaterial = new Material(defaultMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_defaultMaterial_63();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_22, L_21, /*hidden argument*/NULL);
		__this->set_foregroundMaterial_66(L_22);
		// defaultMaterial.renderQueue = foregroundMaterial.renderQueue - 1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = __this->get_defaultMaterial_63();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = __this->get_foregroundMaterial_66();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		// backgroundMaterial.renderQueue = defaultMaterial.renderQueue - 1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = __this->get_backgroundMaterial_65();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = __this->get_defaultMaterial_63();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
		// MeshRenderer meshRenderer = new GameObject().AddComponent<TextMesh>().GetComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_29, /*hidden argument*/NULL);
		NullCheck(L_29);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_30;
		L_30 = GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F(L_29, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var);
		NullCheck(L_30);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_31;
		L_31 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(L_30, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		V_1 = L_31;
		// textMaterial = new Material(meshRenderer.sharedMaterial);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_32 = V_1;
		NullCheck(L_32);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33;
		L_33 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_32, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_34, L_33, /*hidden argument*/NULL);
		__this->set_textMaterial_67(L_34);
		// textMaterial.renderQueue = defaultMaterial.renderQueue;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_35 = __this->get_textMaterial_67();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_defaultMaterial_63();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_35, L_37, /*hidden argument*/NULL);
		// Destroy(meshRenderer.gameObject);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_38 = V_1;
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_39, /*hidden argument*/NULL);
		// MeshFilter quadMeshFilter = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<MeshFilter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(5, /*hidden argument*/NULL);
		NullCheck(L_40);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_41;
		L_41 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_40, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		V_2 = L_41;
		// if (defaultInstancedMaterial != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_defaultInstancedMaterial_64();
		bool L_43;
		L_43 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_42, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01c7;
		}
	}
	{
		// quadMesh = quadMeshFilter.mesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_44 = V_2;
		NullCheck(L_44);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_45;
		L_45 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_44, /*hidden argument*/NULL);
		__this->set_quadMesh_68(L_45);
		// quadMesh.bounds = new Bounds(Vector3.zero, Vector3.one * float.MaxValue);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_46 = __this->get_quadMesh_68();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_48, ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3((&L_50), L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A(L_46, L_50, /*hidden argument*/NULL);
		// }
		goto IL_01d3;
	}

IL_01c7:
	{
		// quadMesh = quadMeshFilter.sharedMesh;
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_51 = V_2;
		NullCheck(L_51);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_52;
		L_52 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_51, /*hidden argument*/NULL);
		__this->set_quadMesh_68(L_52);
	}

IL_01d3:
	{
		// Destroy(quadMeshFilter.gameObject);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_53 = V_2;
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_54, /*hidden argument*/NULL);
	}

IL_01de:
	{
		// stopwatch.Reset();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_55 = __this->get_stopwatch_55();
		NullCheck(L_55);
		Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_55, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_56 = __this->get_stopwatch_55();
		NullCheck(L_56);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_56, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Start_m91B669ABC9BBC7274F785DC2DD156159765916D2 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m25AE38BDFB2E00EFDD3FDA335F21A14B457CB8CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m72A3FBE6B6EC39B7B9958724080E3B0CD9FB727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m75382B1DAAF806CED28E37E6DFF2D53E5C8B9374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * V_0 = NULL;
	{
		// Reset();
		MixedRealityToolkitVisualProfiler_Reset_mFFFBFD2E11E5D92D97D8703BAA61816E9EB6731A(__this, /*hidden argument*/NULL);
		// BuildWindow();
		MixedRealityToolkitVisualProfiler_BuildWindow_m847595816DCD8C47E76D47903A785061957224B1(__this, /*hidden argument*/NULL);
		// BuildFrameRateStrings();
		MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m1F0AF86EB2538BF9A7FE77E50664460479E3A8B2(__this, /*hidden argument*/NULL);
		// appCapture = AppCapture.GetForCurrentView();
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_0;
		L_0 = AppCapture_GetForCurrentView_m15566CDBA94ED8CED6F8DFE0B109D169CA68DE7C(/*hidden argument*/NULL);
		__this->set_appCapture_70(L_0);
		// if (appCapture != null)
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_1 = __this->get_appCapture_70();
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		// appCaptureIsCapturingVideo = appCapture.IsCapturingVideo;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_2 = __this->get_appCapture_70();
		NullCheck(L_2);
		bool L_3;
		L_3 = AppCapture_get_IsCapturingVideo_m6EE5908A72E9262E5250C7796321CB65288EA8C9(L_2, /*hidden argument*/NULL);
		__this->set_appCaptureIsCapturingVideo_69(L_3);
		// appCapture.CapturingChanged += AppCapture_CapturingChanged;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_4 = __this->get_appCapture_70();
		V_0 = L_4;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_5 = V_0;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_6 = L_5;
		Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266 * L_7 = (Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266 *)il2cpp_codegen_object_new(Func_2_t25BC3BAF2B4B4D76E084CCBAB992580FA2F75266_il2cpp_TypeInfo_var);
		Func_2__ctor_m25AE38BDFB2E00EFDD3FDA335F21A14B457CB8CD(L_7, L_6, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_6, 5)), /*hidden argument*/Func_2__ctor_m25AE38BDFB2E00EFDD3FDA335F21A14B457CB8CD_RuntimeMethod_var);
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_8 = V_0;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_9 = L_8;
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_10 = (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)il2cpp_codegen_object_new(Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F(L_10, L_9, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_9, 6)), /*hidden argument*/Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * L_11 = (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *)il2cpp_codegen_object_new(TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_il2cpp_TypeInfo_var);
		TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E(L_11, __this, (intptr_t)((intptr_t)MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m72A3FBE6B6EC39B7B9958724080E3B0CD9FB727E_RuntimeMethod_var), /*hidden argument*/TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m75382B1DAAF806CED28E37E6DFF2D53E5C8B9374(L_7, L_10, L_11, /*hidden argument*/WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m75382B1DAAF806CED28E37E6DFF2D53E5C8B9374_RuntimeMethod_var);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OnDestroy_m661A05EA55CF8FDDF286C16FAB629AEC6FC64B5D (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m72A3FBE6B6EC39B7B9958724080E3B0CD9FB727E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m232C2AF4C9450D9E755732277190C8F513D2C0A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (appCapture != null)
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_0 = __this->get_appCapture_70();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// appCapture.CapturingChanged -= AppCapture_CapturingChanged;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_1 = __this->get_appCapture_70();
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_2 = L_1;
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_3 = (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)il2cpp_codegen_object_new(Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F(L_3, L_2, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_2, 6)), /*hidden argument*/Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * L_4 = (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *)il2cpp_codegen_object_new(TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_il2cpp_TypeInfo_var);
		TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E(L_4, __this, (intptr_t)((intptr_t)MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m72A3FBE6B6EC39B7B9958724080E3B0CD9FB727E_RuntimeMethod_var), /*hidden argument*/TypedEventHandler_2__ctor_m88F5F2B6E9DDF6816C76574F3D824796EECDBD8E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m232C2AF4C9450D9E755732277190C8F513D2C0A7(L_3, L_4, /*hidden argument*/WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_m232C2AF4C9450D9E755732277190C8F513D2C0A7_RuntimeMethod_var);
	}

IL_002b:
	{
		// if (window != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_window_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// Destroy(window.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_window_33();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_LateUpdate_m1064383BE413791D12F07D91A1C89ABE53AE7814 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B6_0 = NULL;
	{
		// if (window == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_window_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// using (LateUpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_LateUpdatePerfMarker_71();
		V_1 = L_2;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_3;
		L_3 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			// Transform cameraTransform = CameraCache.Main ? CameraCache.Main.transform : null;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
			L_4 = CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002c;
			}
		}

IL_0029:
		{
			G_B6_0 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)(NULL));
			goto IL_0036;
		}

IL_002c:
		{
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
			L_6 = CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1(/*hidden argument*/NULL);
			NullCheck(L_6);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
			L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0036:
		{
			V_2 = G_B6_0;
			// if (ShouldShowProfiler && cameraTransform != null)
			bool L_8;
			L_8 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_00c2;
			}
		}

IL_0042:
		{
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00c2;
			}
		}

IL_004b:
		{
			// float t = Time.deltaTime * windowFollowSpeed;
			float L_11;
			L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
			float L_12 = __this->get_windowFollowSpeed_25();
			V_4 = ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12));
			// window.position = Vector3.Lerp(window.position, CalculateWindowPosition(cameraTransform), t);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_window_33();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_window_33();
			NullCheck(L_14);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m7307E74236A31D7EC9B6BA7B969ED567DA5F6F9E(__this, L_16, /*hidden argument*/NULL);
			float L_18 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_15, L_17, L_18, /*hidden argument*/NULL);
			NullCheck(L_13);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_19, /*hidden argument*/NULL);
			// window.rotation = Quaternion.Slerp(window.rotation, CalculateWindowRotation(cameraTransform), t);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_window_33();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_window_33();
			NullCheck(L_21);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
			L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
			L_24 = MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m8BE2A654B1D28FBB77958BFF8BD61268D24A7D06(__this, L_23, /*hidden argument*/NULL);
			float L_25 = V_4;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
			L_26 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_22, L_24, L_25, /*hidden argument*/NULL);
			NullCheck(L_20);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_20, L_26, /*hidden argument*/NULL);
			// window.localScale = defaultWindowScale * windowScale;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_window_33();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
			float L_29 = __this->get_windowScale_24();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
			L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, L_29, /*hidden argument*/NULL);
			NullCheck(L_27);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_27, L_30, /*hidden argument*/NULL);
			// CalculateBackgroundSize();
			MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m31C4B29BD3F4A193F6F4D7E06E2052078D0CA745(__this, /*hidden argument*/NULL);
		}

IL_00c2:
		{
			// FrameTimingManager.CaptureFrameTimings();
			FrameTimingManager_CaptureFrameTimings_m6D5D9CC73A92AC35A2F7B31AB486DB3B95C2B9FD(/*hidden argument*/NULL);
			// ++frameCount;
			int32_t L_31 = __this->get_frameCount_54();
			__this->set_frameCount_54(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
			// float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_32 = __this->get_stopwatch_55();
			NullCheck(L_32);
			int64_t L_33;
			L_33 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_32, /*hidden argument*/NULL);
			V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_33)), (float)(0.00100000005f)));
			// if (elapsedSeconds >= frameSampleRate)
			float L_34 = V_3;
			float L_35 = __this->get_frameSampleRate_21();
			if ((!(((float)L_34) >= ((float)L_35))))
			{
				goto IL_023b;
			}
		}

IL_00f4:
		{
			// int cpuFrameRate = (int)(1.0f / (elapsedSeconds / frameCount));
			float L_36 = V_3;
			int32_t L_37 = __this->get_frameCount_54();
			V_5 = ((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_36/(float)((float)((float)L_37))))))));
			// int gpuFrameRate = 0;
			V_6 = 0;
			// uint frameTimingsCount = FrameTimingManager.GetLatestTimings((uint)Mathf.Min(frameCount, maxFrameTimings), frameTimings);
			int32_t L_38 = __this->get_frameCount_54();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			int32_t L_39 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
			int32_t L_40;
			L_40 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_38, L_39, /*hidden argument*/NULL);
			FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* L_41 = __this->get_frameTimings_56();
			uint32_t L_42;
			L_42 = FrameTimingManager_GetLatestTimings_mEE3E5D1048D277D377859DE65ACAB8EC45AC345D(L_40, L_41, /*hidden argument*/NULL);
			V_7 = L_42;
			// if (frameTimingsCount != 0)
			uint32_t L_43 = V_7;
			if (!L_43)
			{
				goto IL_0161;
			}
		}

IL_012a:
		{
			// AverageFrameTiming(frameTimings, frameTimingsCount, out cpuFrameTime, out gpuFrameTime);
			FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* L_44 = __this->get_frameTimings_56();
			uint32_t L_45 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			MixedRealityToolkitVisualProfiler_AverageFrameTiming_m26054107BBF35F714B4EE7FCDC796C3B71DA9220(L_44, L_45, (float*)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
			// cpuFrameRate = (int)(1.0f / (cpuFrameTime / frameCount));
			float L_46 = V_8;
			int32_t L_47 = __this->get_frameCount_54();
			V_5 = ((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_46/(float)((float)((float)L_47))))))));
			// gpuFrameRate = (int)(1.0f / (gpuFrameTime / frameCount));
			float L_48 = V_9;
			int32_t L_49 = __this->get_frameCount_54();
			V_6 = ((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_48/(float)((float)((float)L_49))))))));
		}

IL_0161:
		{
			// cpuFrameRateText.text = cpuFrameRateStrings[Mathf.Clamp(cpuFrameRate, 0, maxTargetFrameRate)];
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_50 = __this->get_cpuFrameRateText_35();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = __this->get_cpuFrameRateStrings_57();
			int32_t L_52 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			int32_t L_53 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
			int32_t L_54;
			L_54 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_52, 0, L_53, /*hidden argument*/NULL);
			NullCheck(L_51);
			int32_t L_55 = L_54;
			String_t* L_56 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			NullCheck(L_50);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_50, L_56, /*hidden argument*/NULL);
			// if (gpuFrameRate != 0)
			int32_t L_57 = V_6;
			if (!L_57)
			{
				goto IL_01b4;
			}
		}

IL_0184:
		{
			// gpuFrameRateText.gameObject.SetActive(true);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_58 = __this->get_gpuFrameRateText_36();
			NullCheck(L_58);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
			L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_58, /*hidden argument*/NULL);
			NullCheck(L_59);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_59, (bool)1, /*hidden argument*/NULL);
			// gpuFrameRateText.text = gpuFrameRateStrings[Mathf.Clamp(gpuFrameRate, 0, maxTargetFrameRate)];
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_60 = __this->get_gpuFrameRateText_36();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = __this->get_gpuFrameRateStrings_58();
			int32_t L_62 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			int32_t L_63 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
			int32_t L_64;
			L_64 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_62, 0, L_63, /*hidden argument*/NULL);
			NullCheck(L_61);
			int32_t L_65 = L_64;
			String_t* L_66 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
			NullCheck(L_60);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_60, L_66, /*hidden argument*/NULL);
		}

IL_01b4:
		{
			// if (frameInfoVisible)
			bool L_67 = __this->get_frameInfoVisible_19();
			if (!L_67)
			{
				goto IL_021e;
			}
		}

IL_01bc:
		{
			// for (int i = frameRange - 1; i > 0; --i)
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			int32_t L_68 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_frameRange_7();
			V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1));
			goto IL_01e9;
		}

IL_01c7:
		{
			// frameInfoColors[i] = frameInfoColors[i - 1];
			Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_69 = __this->get_frameInfoColors_50();
			int32_t L_70 = V_10;
			Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_71 = __this->get_frameInfoColors_50();
			int32_t L_72 = V_10;
			NullCheck(L_71);
			int32_t L_73 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			NullCheck(L_69);
			(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_74);
			// for (int i = frameRange - 1; i > 0; --i)
			int32_t L_75 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		}

IL_01e9:
		{
			// for (int i = frameRange - 1; i > 0; --i)
			int32_t L_76 = V_10;
			if ((((int32_t)L_76) > ((int32_t)0)))
			{
				goto IL_01c7;
			}
		}

IL_01ee:
		{
			// frameInfoColors[0] = CalculateFrameColor(cpuFrameRate);
			Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_77 = __this->get_frameInfoColors_50();
			int32_t L_78 = V_5;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79;
			L_79 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_m97BBC879738BC265CC1185DF7D9341B70A2CC585(__this, L_78, /*hidden argument*/NULL);
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_80;
			L_80 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_79, /*hidden argument*/NULL);
			NullCheck(L_77);
			(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_80);
			// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_81 = __this->get_frameInfoPropertyBlock_51();
			int32_t L_82 = __this->get_colorID_52();
			Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_83 = __this->get_frameInfoColors_50();
			NullCheck(L_81);
			MaterialPropertyBlock_SetVectorArray_m21A4FAD0C5299CC9289DB8CBBCA77AD6C1FC781E(L_81, L_82, L_83, /*hidden argument*/NULL);
		}

IL_021e:
		{
			// frameCount = 0;
			__this->set_frameCount_54(0);
			// stopwatch.Reset();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_84 = __this->get_stopwatch_55();
			NullCheck(L_84);
			Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_84, /*hidden argument*/NULL);
			// stopwatch.Start();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_85 = __this->get_stopwatch_55();
			NullCheck(L_85);
			Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_85, /*hidden argument*/NULL);
		}

IL_023b:
		{
			// if (ShouldShowProfiler && frameInfoVisible)
			bool L_86;
			L_86 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_031b;
			}
		}

IL_0246:
		{
			bool L_87 = __this->get_frameInfoVisible_19();
			if (!L_87)
			{
				goto IL_031b;
			}
		}

IL_0251:
		{
			// Matrix4x4 parentLocalToWorldMatrix = window.localToWorldMatrix;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = __this->get_window_33();
			NullCheck(L_88);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_89;
			L_89 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_88, /*hidden argument*/NULL);
			V_11 = L_89;
			// if (defaultInstancedMaterial != null && SystemInfo.supportsInstancing)
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_90 = __this->get_defaultInstancedMaterial_64();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_91;
			L_91 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_90, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_91)
			{
				goto IL_02b0;
			}
		}

IL_026c:
		{
			bool L_92;
			L_92 = SystemInfo_get_supportsInstancing_m754DA2DF0A412E7F36D1393F9BA1E9D75EFF48C3(/*hidden argument*/NULL);
			if (!L_92)
			{
				goto IL_02b0;
			}
		}

IL_0273:
		{
			// frameInfoPropertyBlock.SetMatrix(parentMatrixID, parentLocalToWorldMatrix);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_93 = __this->get_frameInfoPropertyBlock_51();
			int32_t L_94 = __this->get_parentMatrixID_53();
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_95 = V_11;
			NullCheck(L_93);
			MaterialPropertyBlock_SetMatrix_m74F35565B785F2F1627CFD02819DB9AA2EBAF50C(L_93, L_94, L_95, /*hidden argument*/NULL);
			// Graphics.DrawMeshInstanced(quadMesh, 0, defaultInstancedMaterial, frameInfoMatrices, frameInfoMatrices.Length, frameInfoPropertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_96 = __this->get_quadMesh_68();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_97 = __this->get_defaultInstancedMaterial_64();
			Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_98 = __this->get_frameInfoMatrices_49();
			Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_99 = __this->get_frameInfoMatrices_49();
			NullCheck(L_99);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_100 = __this->get_frameInfoPropertyBlock_51();
			IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
			Graphics_DrawMeshInstanced_m888BB305A12012A17D24D07ED5B08529C7B6413C(L_96, 0, L_97, L_98, ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))), L_100, 0, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_031b;
		}

IL_02b0:
		{
			// for (int i = 0; i < frameInfoMatrices.Length; ++i)
			V_12 = 0;
			goto IL_030f;
		}

IL_02b5:
		{
			// frameInfoPropertyBlock.SetColor(colorID, frameInfoColors[i]);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_101 = __this->get_frameInfoPropertyBlock_51();
			int32_t L_102 = __this->get_colorID_52();
			Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_103 = __this->get_frameInfoColors_50();
			int32_t L_104 = V_12;
			NullCheck(L_103);
			int32_t L_105 = L_104;
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_107;
			L_107 = Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0(L_106, /*hidden argument*/NULL);
			NullCheck(L_101);
			MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496(L_101, L_102, L_107, /*hidden argument*/NULL);
			// Graphics.DrawMesh(quadMesh, parentLocalToWorldMatrix * frameInfoMatrices[i], defaultMaterial, 0, null, 0, frameInfoPropertyBlock, false, false, false);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_108 = __this->get_quadMesh_68();
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_109 = V_11;
			Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_110 = __this->get_frameInfoMatrices_49();
			int32_t L_111 = V_12;
			NullCheck(L_110);
			int32_t L_112 = L_111;
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_114;
			L_114 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_109, L_113, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_115 = __this->get_defaultMaterial_63();
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_116 = __this->get_frameInfoPropertyBlock_51();
			IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
			Graphics_DrawMesh_m46B21DC15F5FAF0C647A0D53729839794EEAA4EB(L_108, L_114, L_115, 0, (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL, 0, L_116, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
			// for (int i = 0; i < frameInfoMatrices.Length; ++i)
			int32_t L_117 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		}

IL_030f:
		{
			// for (int i = 0; i < frameInfoMatrices.Length; ++i)
			int32_t L_118 = V_12;
			Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_119 = __this->get_frameInfoMatrices_49();
			NullCheck(L_119);
			if ((((int32_t)L_118) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_119)->max_length))))))
			{
				goto IL_02b5;
			}
		}

IL_031b:
		{
			// if (ShouldShowProfiler && memoryStatsVisible)
			bool L_120;
			L_120 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
			if (!L_120)
			{
				goto IL_049f;
			}
		}

IL_0326:
		{
			bool L_121 = __this->get_memoryStatsVisible_20();
			if (!L_121)
			{
				goto IL_049f;
			}
		}

IL_0331:
		{
			// ulong limit = AppMemoryUsageLimit;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			uint64_t L_122;
			L_122 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mD2440693336DA8B18F2E4911F368C8D153320F26(/*hidden argument*/NULL);
			V_13 = L_122;
			// if (limit != limitMemoryUsage)
			uint64_t L_123 = V_13;
			uint64_t L_124 = __this->get_limitMemoryUsage_62();
			if ((((int64_t)L_123) == ((int64_t)L_124)))
			{
				goto IL_037d;
			}
		}

IL_0342:
		{
			// if (WillDisplayedMemoryUsageDiffer(limitMemoryUsage, limit, displayedDecimalDigits))
			uint64_t L_125 = __this->get_limitMemoryUsage_62();
			uint64_t L_126 = V_13;
			int32_t L_127 = __this->get_displayedDecimalDigits_27();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			bool L_128;
			L_128 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m22F2E1FFA1B2D17C079858542CF8649F37A05A23(L_125, L_126, L_127, /*hidden argument*/NULL);
			if (!L_128)
			{
				goto IL_0375;
			}
		}

IL_0357:
		{
			// MemoryUsageToString(stringBuffer, displayedDecimalDigits, limitMemoryText, limitMemoryString, limit);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_129 = __this->get_stringBuffer_59();
			int32_t L_130 = __this->get_displayedDecimalDigits_27();
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_131 = __this->get_limitMemoryText_40();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			String_t* L_132 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_limitMemoryString_14();
			uint64_t L_133 = V_13;
			MixedRealityToolkitVisualProfiler_MemoryUsageToString_mB906184138F1F2CB32DA5C9BA67D64741157AF76(L_129, L_130, L_131, L_132, L_133, /*hidden argument*/NULL);
		}

IL_0375:
		{
			// limitMemoryUsage = limit;
			uint64_t L_134 = V_13;
			__this->set_limitMemoryUsage_62(L_134);
		}

IL_037d:
		{
			// ulong usage = AppMemoryUsage;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			uint64_t L_135;
			L_135 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mB90F975BB0541DC2650E377A826B190F66706689(/*hidden argument*/NULL);
			V_14 = L_135;
			// if (usage != memoryUsage)
			uint64_t L_136 = V_14;
			uint64_t L_137 = __this->get_memoryUsage_60();
			if ((((int64_t)L_136) == ((int64_t)L_137)))
			{
				goto IL_0406;
			}
		}

IL_038e:
		{
			// usedAnchor.localScale = new Vector3((float)usage / limitMemoryUsage, usedAnchor.localScale.y, usedAnchor.localScale.z);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138 = __this->get_usedAnchor_43();
			uint64_t L_139 = V_14;
			uint64_t L_140 = __this->get_limitMemoryUsage_62();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_141 = __this->get_usedAnchor_43();
			NullCheck(L_141);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
			L_142 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_141, /*hidden argument*/NULL);
			float L_143 = L_142.get_y_3();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_144 = __this->get_usedAnchor_43();
			NullCheck(L_144);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
			L_145 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_144, /*hidden argument*/NULL);
			float L_146 = L_145.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147;
			memset((&L_147), 0, sizeof(L_147));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_147), ((float)((float)((float)((float)((double)((uint64_t)L_139))))/(float)((float)((float)((double)((uint64_t)L_140)))))), L_143, L_146, /*hidden argument*/NULL);
			NullCheck(L_138);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_138, L_147, /*hidden argument*/NULL);
			// if (WillDisplayedMemoryUsageDiffer(memoryUsage, usage, displayedDecimalDigits))
			uint64_t L_148 = __this->get_memoryUsage_60();
			uint64_t L_149 = V_14;
			int32_t L_150 = __this->get_displayedDecimalDigits_27();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			bool L_151;
			L_151 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m22F2E1FFA1B2D17C079858542CF8649F37A05A23(L_148, L_149, L_150, /*hidden argument*/NULL);
			if (!L_151)
			{
				goto IL_03fe;
			}
		}

IL_03e0:
		{
			// MemoryUsageToString(stringBuffer, displayedDecimalDigits, usedMemoryText, usedMemoryString, usage);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_152 = __this->get_stringBuffer_59();
			int32_t L_153 = __this->get_displayedDecimalDigits_27();
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_154 = __this->get_usedMemoryText_38();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			String_t* L_155 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_usedMemoryString_12();
			uint64_t L_156 = V_14;
			MixedRealityToolkitVisualProfiler_MemoryUsageToString_mB906184138F1F2CB32DA5C9BA67D64741157AF76(L_152, L_153, L_154, L_155, L_156, /*hidden argument*/NULL);
		}

IL_03fe:
		{
			// memoryUsage = usage;
			uint64_t L_157 = V_14;
			__this->set_memoryUsage_60(L_157);
		}

IL_0406:
		{
			// if (memoryUsage > peakMemoryUsage)
			uint64_t L_158 = __this->get_memoryUsage_60();
			uint64_t L_159 = __this->get_peakMemoryUsage_61();
			if ((!(((uint64_t)L_158) > ((uint64_t)L_159))))
			{
				goto IL_049f;
			}
		}

IL_0417:
		{
			// peakAnchor.localScale = new Vector3((float)memoryUsage / limitMemoryUsage, peakAnchor.localScale.y, peakAnchor.localScale.z);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_160 = __this->get_peakAnchor_44();
			uint64_t L_161 = __this->get_memoryUsage_60();
			uint64_t L_162 = __this->get_limitMemoryUsage_62();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_163 = __this->get_peakAnchor_44();
			NullCheck(L_163);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164;
			L_164 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_163, /*hidden argument*/NULL);
			float L_165 = L_164.get_y_3();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_166 = __this->get_peakAnchor_44();
			NullCheck(L_166);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167;
			L_167 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_166, /*hidden argument*/NULL);
			float L_168 = L_167.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169;
			memset((&L_169), 0, sizeof(L_169));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_169), ((float)((float)((float)((float)((double)((uint64_t)L_161))))/(float)((float)((float)((double)((uint64_t)L_162)))))), L_165, L_168, /*hidden argument*/NULL);
			NullCheck(L_160);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_160, L_169, /*hidden argument*/NULL);
			// if (WillDisplayedMemoryUsageDiffer(peakMemoryUsage, memoryUsage, displayedDecimalDigits))
			uint64_t L_170 = __this->get_peakMemoryUsage_61();
			uint64_t L_171 = __this->get_memoryUsage_60();
			int32_t L_172 = __this->get_displayedDecimalDigits_27();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			bool L_173;
			L_173 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m22F2E1FFA1B2D17C079858542CF8649F37A05A23(L_170, L_171, L_172, /*hidden argument*/NULL);
			if (!L_173)
			{
				goto IL_0493;
			}
		}

IL_0471:
		{
			// MemoryUsageToString(stringBuffer, displayedDecimalDigits, peakMemoryText, peakMemoryString, memoryUsage);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_174 = __this->get_stringBuffer_59();
			int32_t L_175 = __this->get_displayedDecimalDigits_27();
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_176 = __this->get_peakMemoryText_39();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			String_t* L_177 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_peakMemoryString_13();
			uint64_t L_178 = __this->get_memoryUsage_60();
			MixedRealityToolkitVisualProfiler_MemoryUsageToString_mB906184138F1F2CB32DA5C9BA67D64741157AF76(L_174, L_175, L_176, L_177, L_178, /*hidden argument*/NULL);
		}

IL_0493:
		{
			// peakMemoryUsage = memoryUsage;
			uint64_t L_179 = __this->get_memoryUsage_60();
			__this->set_peakMemoryUsage_61(L_179);
		}

IL_049f:
		{
			// if (window.gameObject.activeSelf != ShouldShowProfiler)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_180 = __this->get_window_33();
			NullCheck(L_180);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_181;
			L_181 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_180, /*hidden argument*/NULL);
			NullCheck(L_181);
			bool L_182;
			L_182 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_181, /*hidden argument*/NULL);
			bool L_183;
			L_183 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_182) == ((int32_t)L_183)))
			{
				goto IL_04cd;
			}
		}

IL_04b7:
		{
			// window.gameObject.SetActive(ShouldShowProfiler);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_184 = __this->get_window_33();
			NullCheck(L_184);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_185;
			L_185 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_184, /*hidden argument*/NULL);
			bool L_186;
			L_186 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
			NullCheck(L_185);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_185, L_186, /*hidden argument*/NULL);
		}

IL_04cd:
		{
			// if (memoryStats.gameObject.activeSelf != memoryStatsVisible)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_187 = __this->get_memoryStats_37();
			NullCheck(L_187);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_188;
			L_188 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_187, /*hidden argument*/NULL);
			NullCheck(L_188);
			bool L_189;
			L_189 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_188, /*hidden argument*/NULL);
			bool L_190 = __this->get_memoryStatsVisible_20();
			if ((((int32_t)L_189) == ((int32_t)L_190)))
			{
				goto IL_04fb;
			}
		}

IL_04e5:
		{
			// memoryStats.gameObject.SetActive(memoryStatsVisible);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_191 = __this->get_memoryStats_37();
			NullCheck(L_191);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_192;
			L_192 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_191, /*hidden argument*/NULL);
			bool L_193 = __this->get_memoryStatsVisible_20();
			NullCheck(L_192);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_192, L_193, /*hidden argument*/NULL);
		}

IL_04fb:
		{
			// }
			IL2CPP_LEAVE(0x50B, FINALLY_04fd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_04fd;
	}

FINALLY_04fd:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1277)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1277)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50B, IL_050b)
	}

IL_050b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AppCapture_CapturingChanged(Windows.Media.Capture.AppCapture,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AppCapture_CapturingChanged_m72A3FBE6B6EC39B7B9958724080E3B0CD9FB727E (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	{
		// private void AppCapture_CapturingChanged(AppCapture sender, object args) => appCaptureIsCapturingVideo = sender.IsCapturingVideo;
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * L_0 = ___sender0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AppCapture_get_IsCapturingVideo_m6EE5908A72E9262E5250C7796321CB65288EA8C9(L_0, /*hidden argument*/NULL);
		__this->set_appCaptureIsCapturingVideo_69(L_1);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m7307E74236A31D7EC9B6BA7B969ED567DA5F6F9E (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	{
		// using (CalculateWindowPositionPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_CalculateWindowPositionPerfMarker_73();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			//                 float windowDistance =
			// #if WINDOWS_UWP
			//                     Mathf.Max(16.0f / (appCaptureIsCapturingVideo ? previousFieldOfView : previousFieldOfView = CameraCache.Main.fieldOfView), Mathf.Max(CameraCache.Main.nearClipPlane, 0.5f));
			bool L_2 = __this->get_appCaptureIsCapturingVideo_69();
			G_B2_0 = (16.0f);
			if (L_2)
			{
				G_B3_0 = (16.0f);
				goto IL_0032;
			}
		}

IL_001b:
		{
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
			L_3 = CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1(/*hidden argument*/NULL);
			NullCheck(L_3);
			float L_4;
			L_4 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_3, /*hidden argument*/NULL);
			float L_5 = L_4;
			V_6 = L_5;
			__this->set_previousFieldOfView_72(L_5);
			float L_6 = V_6;
			G_B4_0 = L_6;
			G_B4_1 = G_B2_0;
			goto IL_0038;
		}

IL_0032:
		{
			float L_7 = __this->get_previousFieldOfView_72();
			G_B4_0 = L_7;
			G_B4_1 = G_B3_0;
		}

IL_0038:
		{
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
			L_8 = CameraCache_get_Main_m23DFE991C3A937306115E7BAA6ECF6F27D2B57A1(/*hidden argument*/NULL);
			NullCheck(L_8);
			float L_9;
			L_9 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_8, /*hidden argument*/NULL);
			float L_10;
			L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_9, (0.5f), /*hidden argument*/NULL);
			float L_11;
			L_11 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)((float)G_B4_1/(float)G_B4_0)), L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			// Vector3 position = cameraTransform.position + (cameraTransform.forward * windowDistance);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___cameraTransform0;
			NullCheck(L_12);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = ___cameraTransform0;
			NullCheck(L_14);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_14, /*hidden argument*/NULL);
			float L_16 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			// Vector3 horizontalOffset = cameraTransform.right * windowOffset.x;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = ___cameraTransform0;
			NullCheck(L_19);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_19, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_windowOffset_23();
			float L_22 = L_21->get_x_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			// Vector3 verticalOffset = cameraTransform.up * windowOffset.y;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = ___cameraTransform0;
			NullCheck(L_24);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
			L_25 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_24, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_windowOffset_23();
			float L_27 = L_26->get_y_1();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_27, /*hidden argument*/NULL);
			V_5 = L_28;
			// switch (windowAnchor)
			int32_t L_29 = __this->get_windowAnchor_22();
			V_7 = L_29;
			int32_t L_30 = V_7;
			switch (L_30)
			{
				case 0:
				{
					goto IL_00d0;
				}
				case 1:
				{
					goto IL_00e2;
				}
				case 2:
				{
					goto IL_00ed;
				}
				case 3:
				{
					goto IL_00ff;
				}
				case 4:
				{
					goto IL_0142;
				}
				case 5:
				{
					goto IL_010a;
				}
				case 6:
				{
					goto IL_0115;
				}
				case 7:
				{
					goto IL_0127;
				}
				case 8:
				{
					goto IL_0132;
				}
			}
		}

IL_00ce:
		{
			goto IL_0142;
		}

IL_00d0:
		{
			// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_32, L_33, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_34, /*hidden argument*/NULL);
			V_3 = L_35;
			// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
			goto IL_0142;
		}

IL_00e2:
		{
			// case TextAnchor.UpperCenter: position += verticalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_36, L_37, /*hidden argument*/NULL);
			V_3 = L_38;
			// case TextAnchor.UpperCenter: position += verticalOffset; break;
			goto IL_0142;
		}

IL_00ed:
		{
			// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_40, L_41, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_39, L_42, /*hidden argument*/NULL);
			V_3 = L_43;
			// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
			goto IL_0142;
		}

IL_00ff:
		{
			// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_44, L_45, /*hidden argument*/NULL);
			V_3 = L_46;
			// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
			goto IL_0142;
		}

IL_010a:
		{
			// case TextAnchor.MiddleRight: position += horizontalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
			L_49 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_47, L_48, /*hidden argument*/NULL);
			V_3 = L_49;
			// case TextAnchor.MiddleRight: position += horizontalOffset; break;
			goto IL_0142;
		}

IL_0115:
		{
			// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
			L_53 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_52, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
			L_54 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_50, L_53, /*hidden argument*/NULL);
			V_3 = L_54;
			// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
			goto IL_0142;
		}

IL_0127:
		{
			// case TextAnchor.LowerCenter: position -= verticalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
			L_57 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_55, L_56, /*hidden argument*/NULL);
			V_3 = L_57;
			// case TextAnchor.LowerCenter: position -= verticalOffset; break;
			goto IL_0142;
		}

IL_0132:
		{
			// case TextAnchor.LowerRight: position -= verticalOffset - horizontalOffset; break;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
			L_61 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_59, L_60, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			L_62 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_58, L_61, /*hidden argument*/NULL);
			V_3 = L_62;
		}

IL_0142:
		{
			// return position;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_3;
			V_8 = L_63;
			IL2CPP_LEAVE(0x155, FINALLY_0147);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0147;
	}

FINALLY_0147:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(327)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(327)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x155, IL_0155)
	}

IL_0155:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_8;
		return L_64;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_m8BE2A654B1D28FBB77958BFF8BD61268D24A7D06 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (CalculateWindowRotationPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_CalculateWindowRotationPerfMarker_74();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// Quaternion rotation = cameraTransform.rotation;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___cameraTransform0;
			NullCheck(L_2);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
			L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			// switch (windowAnchor)
			int32_t L_4 = __this->get_windowAnchor_22();
			V_3 = L_4;
			int32_t L_5 = V_3;
			switch (L_5)
			{
				case 0:
				{
					goto IL_004b;
				}
				case 1:
				{
					goto IL_0068;
				}
				case 2:
				{
					goto IL_0077;
				}
				case 3:
				{
					goto IL_0091;
				}
				case 4:
				{
					goto IL_00f0;
				}
				case 5:
				{
					goto IL_00a0;
				}
				case 6:
				{
					goto IL_00af;
				}
				case 7:
				{
					goto IL_00c9;
				}
				case 8:
				{
					goto IL_00d8;
				}
			}
		}

IL_0046:
		{
			goto IL_00f0;
		}

IL_004b:
		{
			// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = __this->get_windowHorizontalRotationInverse_46();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = __this->get_windowVerticalRotationInverse_48();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
			L_9 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_7, L_8, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
			L_10 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_6, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
			goto IL_00f0;
		}

IL_0068:
		{
			// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = __this->get_windowHorizontalRotationInverse_46();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
			L_13 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_11, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
			goto IL_00f0;
		}

IL_0077:
		{
			// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_windowHorizontalRotationInverse_46();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = __this->get_windowVerticalRotation_47();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
			L_17 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_15, L_16, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
			L_18 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_17, /*hidden argument*/NULL);
			V_2 = L_18;
			// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
			goto IL_00f0;
		}

IL_0091:
		{
			// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = __this->get_windowVerticalRotationInverse_48();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
			L_21 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_19, L_20, /*hidden argument*/NULL);
			V_2 = L_21;
			// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
			goto IL_00f0;
		}

IL_00a0:
		{
			// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = __this->get_windowVerticalRotation_47();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
			L_24 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_22, L_23, /*hidden argument*/NULL);
			V_2 = L_24;
			// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
			goto IL_00f0;
		}

IL_00af:
		{
			// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = __this->get_windowHorizontalRotation_45();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27 = __this->get_windowVerticalRotationInverse_48();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
			L_28 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_26, L_27, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
			L_29 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_25, L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
			goto IL_00f0;
		}

IL_00c9:
		{
			// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = __this->get_windowHorizontalRotation_45();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
			L_32 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_30, L_31, /*hidden argument*/NULL);
			V_2 = L_32;
			// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
			goto IL_00f0;
		}

IL_00d8:
		{
			// case TextAnchor.LowerRight: rotation *= windowHorizontalRotation * windowVerticalRotation; break;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = V_2;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34 = __this->get_windowHorizontalRotation_45();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35 = __this->get_windowVerticalRotation_47();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
			L_36 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_34, L_35, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
			L_37 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_33, L_36, /*hidden argument*/NULL);
			V_2 = L_37;
		}

IL_00f0:
		{
			// return rotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38 = V_2;
			V_4 = L_38;
			IL2CPP_LEAVE(0x103, FINALLY_00f5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f5;
	}

FINALLY_00f5:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(245)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(245)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x103, IL_0103)
	}

IL_0103:
	{
		// }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = V_4;
		return L_39;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MixedRealityToolkitVisualProfiler_CalculateFrameColor_m97BBC879738BC265CC1185DF7D9341B70A2CC585 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, int32_t ___frameRate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (CalculateFrameColorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_CalculateFrameColorPerfMarker_75();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// int colorCount = frameRateColors.Length;
			FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_2 = __this->get_frameRateColors_28();
			NullCheck(L_2);
			V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
			// if (colorCount == 0)
			int32_t L_3 = V_2;
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001a:
		{
			// return baseColor;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_baseColor_29();
			V_5 = L_4;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0024:
		{
			// float percentageOfTarget = frameRate / AppTargetFrameRate;
			int32_t L_5 = ___frameRate0;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			float L_6;
			L_6 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA1A0BD21A4B521DB2050F3DC9EF4E959CBB8ECDD(/*hidden argument*/NULL);
			V_3 = ((float)((float)((float)((float)L_5))/(float)L_6));
			// int lastColor = colorCount - 1;
			int32_t L_7 = V_2;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
			// for (int i = 0; i < lastColor; ++i)
			V_6 = 0;
			goto IL_0068;
		}

IL_0037:
		{
			// if (percentageOfTarget >= frameRateColors[i].percentageOfTarget)
			float L_8 = V_3;
			FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_9 = __this->get_frameRateColors_28();
			int32_t L_10 = V_6;
			NullCheck(L_9);
			float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_percentageOfTarget_0();
			if ((!(((float)L_8) >= ((float)L_11))))
			{
				goto IL_0062;
			}
		}

IL_004c:
		{
			// return frameRateColors[i].color;
			FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_12 = __this->get_frameRateColors_28();
			int32_t L_13 = V_6;
			NullCheck(L_12);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_color_1();
			V_5 = L_14;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0062:
		{
			// for (int i = 0; i < lastColor; ++i)
			int32_t L_15 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		}

IL_0068:
		{
			// for (int i = 0; i < lastColor; ++i)
			int32_t L_16 = V_6;
			int32_t L_17 = V_4;
			if ((((int32_t)L_16) < ((int32_t)L_17)))
			{
				goto IL_0037;
			}
		}

IL_006e:
		{
			// return frameRateColors[lastColor].color;
			FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_18 = __this->get_frameRateColors_28();
			int32_t L_19 = V_4;
			NullCheck(L_18);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_color_1();
			V_5 = L_20;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = V_5;
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m31C4B29BD3F4A193F6F4D7E06E2052078D0CA745 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (CalculateBackgroundSizePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_CalculateBackgroundSizePerfMarker_76();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (memoryStatsVisible)
			bool L_2 = __this->get_memoryStatsVisible_20();
			if (!L_2)
			{
				goto IL_0044;
			}
		}

IL_0016:
		{
			// background.localPosition = backgroundOffsets[0];
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_background_34();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
			NullCheck(L_4);
			int32_t L_5 = 0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			NullCheck(L_3);
			Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_3, L_6, /*hidden argument*/NULL);
			// background.localScale = backgroundScales[0];
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_background_34();
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_backgroundScales_10();
			NullCheck(L_8);
			int32_t L_9 = 0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			NullCheck(L_7);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_7, L_10, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}

IL_0044:
		{
			// else if (frameInfoVisible)
			bool L_11 = __this->get_frameInfoVisible_19();
			if (!L_11)
			{
				goto IL_007a;
			}
		}

IL_004c:
		{
			// background.localPosition = backgroundOffsets[1];
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_background_34();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
			NullCheck(L_13);
			int32_t L_14 = 1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			NullCheck(L_12);
			Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_12, L_15, /*hidden argument*/NULL);
			// background.localScale = backgroundScales[1];
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_background_34();
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_backgroundScales_10();
			NullCheck(L_17);
			int32_t L_18 = 1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_16);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_16, L_19, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}

IL_007a:
		{
			// background.localPosition = backgroundOffsets[2];
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_background_34();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
			NullCheck(L_21);
			int32_t L_22 = 2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			NullCheck(L_20);
			Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_20, L_23, /*hidden argument*/NULL);
			// background.localScale = backgroundScales[2];
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_background_34();
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_backgroundScales_10();
			NullCheck(L_25);
			int32_t L_26 = 2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			NullCheck(L_24);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_24, L_27, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(168)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_m847595816DCD8C47E76D47903A785061957224B1 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11C6A78DFF7F1AD65B32D4BFAA7E9E99490CF2C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral155D513E52CA71A25F673EE4D5AD6D564656F5FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1665DB987C5901E42B248E6D1128B9B20A1583AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4FA5F9A66DEEA10B9329AC6B6C4542BCEC1AB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C0A409384124B23F80517191AAD25B944B47B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91EFB368757A86BC9A88975F715DAF8641FEA56D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99BD7B441BEF843E8525E112D8268BEFC467D067);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA7A279255A8F579DC8A660F4DB73CED7446E934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4AFE18D2E7C6893B503506A2B19780C8F7E0C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3052192431D4C5D44F2510B1AFD2632B627701B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE0E17908169C9D71086DA3C3CE1626CDA9F5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC77FC609B79CF029CE1FAF8089DE5ABE43EBB168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE742EA1C34A6165D061B136B6C1DC96EC4815E5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91C8ADB3D2112AFBA5148B01F876064B6022CDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55841B26B9D578A89C6E499D4DE8BF3DFB4C8D9);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_4 = NULL;
	{
		// colorID = Shader.PropertyToID("_Color");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, /*hidden argument*/NULL);
		__this->set_colorID_52(L_0);
		// parentMatrixID = Shader.PropertyToID("_ParentLocalToWorldMatrix");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC77FC609B79CF029CE1FAF8089DE5ABE43EBB168, /*hidden argument*/NULL);
		__this->set_parentMatrixID_53(L_1);
		// window = new GameObject("VisualProfiler").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral155D513E52CA71A25F673EE4D5AD6D564656F5FB, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		__this->set_window_33(L_3);
		// window.parent = WindowParent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_window_33();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = MixedRealityToolkitVisualProfiler_get_WindowParent_m5D71F49D186EAB1D11F086CBBF87327C176E4CA5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_4, L_5, /*hidden argument*/NULL);
		// window.localScale = defaultWindowScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_window_33();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// windowHorizontalRotation = Quaternion.AngleAxis(defaultWindowRotation.y, Vector3.right);
		float L_8 = (((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_8, L_9, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotation_45(L_10);
		// windowHorizontalRotationInverse = Quaternion.Inverse(windowHorizontalRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = __this->get_windowHorizontalRotation_45();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_11, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotationInverse_46(L_12);
		// windowVerticalRotation = Quaternion.AngleAxis(defaultWindowRotation.x, Vector3.up);
		float L_13 = (((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_13, L_14, /*hidden argument*/NULL);
		__this->set_windowVerticalRotation_47(L_15);
		// windowVerticalRotationInverse = Quaternion.Inverse(windowVerticalRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = __this->get_windowVerticalRotation_47();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_16, /*hidden argument*/NULL);
		__this->set_windowVerticalRotationInverse_48(L_17);
		// background = CreateQuad("Background", window).transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = __this->get_window_33();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = MixedRealityToolkitVisualProfiler_CreateQuad_mBA439D92C95A8828429E8DD0D37CF40EF02130A2(_stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		__this->set_background_34(L_20);
		// InitializeRenderer(background.gameObject, backgroundMaterial, colorID, baseColor);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_background_34();
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = __this->get_backgroundMaterial_65();
		int32_t L_24 = __this->get_colorID_52();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = __this->get_baseColor_29();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_26;
		L_26 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m3FB2B093AB05BA3FBB08C0F6C35275D6F038DC55(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		// CalculateBackgroundSize();
		MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m31C4B29BD3F4A193F6F4D7E06E2052078D0CA745(__this, /*hidden argument*/NULL);
		// cpuFrameRateText = CreateText("CPUFrameRateText", new Vector3(-0.495f, 0.5f, 0.0f), window, TextAnchor.UpperLeft, textMaterial, Color.white, string.Empty);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), (-0.495000005f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = __this->get_window_33();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_32;
		L_32 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteralE91C8ADB3D2112AFBA5148B01F876064B6022CDC, L_27, L_28, 0, L_29, L_30, L_31, /*hidden argument*/NULL);
		__this->set_cpuFrameRateText_35(L_32);
		// gpuFrameRateText = CreateText("GPUFrameRateText", new Vector3(0.495f, 0.5f, 0.0f), window, TextAnchor.UpperRight, textMaterial, Color.white, string.Empty);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), (0.495000005f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_window_33();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_35 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_38;
		L_38 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteralF55841B26B9D578A89C6E499D4DE8BF3DFB4C8D9, L_33, L_34, 2, L_35, L_36, L_37, /*hidden argument*/NULL);
		__this->set_gpuFrameRateText_36(L_38);
		// gpuFrameRateText.gameObject.SetActive(false);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_39 = __this->get_gpuFrameRateText_36();
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)0, /*hidden argument*/NULL);
		// frameInfoMatrices = new Matrix4x4[frameRange];
		int32_t L_41 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_frameRange_7();
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_42 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->set_frameInfoMatrices_49(L_42);
		// frameInfoColors = new Vector4[frameRange];
		int32_t L_43 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_44 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)SZArrayNew(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var, (uint32_t)L_43);
		__this->set_frameInfoColors_50(L_44);
		// Vector3 scale = new Vector3(1.0f / frameRange, 0.2f, 1.0f);
		int32_t L_45 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)((float)(1.0f)/(float)((float)((float)L_45)))), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		// Vector3 position = new Vector3(0.5f - (scale.x * 0.5f), 0.15f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_0;
		float L_47 = L_46.get_x_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_subtract((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)L_47, (float)(0.5f))))), (0.150000006f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < frameRange; ++i)
		V_2 = 0;
		goto IL_0241;
	}

IL_01db:
	{
		// frameInfoMatrices[i] = Matrix4x4.TRS(position, Quaternion.identity, new Vector3(scale.x * 0.8f, scale.y, scale.z));
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_48 = __this->get_frameInfoMatrices_49();
		int32_t L_49 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_0;
		float L_53 = L_52.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_0;
		float L_55 = L_54.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_0;
		float L_57 = L_56.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), ((float)il2cpp_codegen_multiply((float)L_53, (float)(0.800000012f))), L_55, L_57, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_59;
		L_59 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_50, L_51, L_58, /*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_59);
		// position.x -= scale.x;
		float* L_60 = (&V_1)->get_address_of_x_2();
		float* L_61 = L_60;
		float L_62 = *((float*)L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_0;
		float L_64 = L_63.get_x_2();
		*((float*)L_61) = (float)((float)il2cpp_codegen_subtract((float)L_62, (float)L_64));
		// frameInfoColors[i] = CalculateFrameColor((int)AppTargetFrameRate);
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_65 = __this->get_frameInfoColors_50();
		int32_t L_66 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		float L_67;
		L_67 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA1A0BD21A4B521DB2050F3DC9EF4E959CBB8ECDD(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
		L_68 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_m97BBC879738BC265CC1185DF7D9341B70A2CC585(__this, ((int32_t)((int32_t)L_67)), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_69;
		L_69 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_68, /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_69);
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0241:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_71 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		int32_t L_72 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_frameRange_7();
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_01db;
		}
	}
	{
		// frameInfoPropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_73 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_73, /*hidden argument*/NULL);
		__this->set_frameInfoPropertyBlock_51(L_73);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_74 = __this->get_frameInfoPropertyBlock_51();
		int32_t L_75 = __this->get_colorID_52();
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_76 = __this->get_frameInfoColors_50();
		NullCheck(L_74);
		MaterialPropertyBlock_SetVectorArray_m21A4FAD0C5299CC9289DB8CBBCA77AD6C1FC781E(L_74, L_75, L_76, /*hidden argument*/NULL);
		// memoryStats = new GameObject("MemoryStats").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_77, _stringLiteralB3052192431D4C5D44F2510B1AFD2632B627701B, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		__this->set_memoryStats_37(L_78);
		// memoryStats.parent = window;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79 = __this->get_memoryStats_37();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80 = __this->get_window_33();
		NullCheck(L_79);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_79, L_80, /*hidden argument*/NULL);
		// memoryStats.localScale = Vector3.one;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81 = __this->get_memoryStats_37();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_81);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_81, L_82, /*hidden argument*/NULL);
		// usedMemoryText = CreateText("UsedMemoryText", new Vector3(-0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, memoryUsedColor, usedMemoryString);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_83), (-0.495000005f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84 = __this->get_memoryStats_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_85 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_86 = __this->get_memoryUsedColor_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		String_t* L_87 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_usedMemoryString_12();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_88;
		L_88 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteral99BD7B441BEF843E8525E112D8268BEFC467D067, L_83, L_84, 0, L_85, L_86, L_87, /*hidden argument*/NULL);
		__this->set_usedMemoryText_38(L_88);
		// peakMemoryText = CreateText("PeakMemoryText", new Vector3(0.0f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperCenter, textMaterial, memoryPeakColor, peakMemoryString);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_89), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90 = __this->get_memoryStats_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_91 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_92 = __this->get_memoryPeakColor_31();
		String_t* L_93 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_peakMemoryString_13();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_94;
		L_94 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteralAA7A279255A8F579DC8A660F4DB73CED7446E934, L_89, L_90, 1, L_91, L_92, L_93, /*hidden argument*/NULL);
		__this->set_peakMemoryText_39(L_94);
		// limitMemoryText = CreateText("LimitMemoryText", new Vector3(0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, limitMemoryString);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_95), (0.495000005f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96 = __this->get_memoryStats_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_97 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98;
		L_98 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		String_t* L_99 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_limitMemoryString_14();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_100;
		L_100 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteralE742EA1C34A6165D061B136B6C1DC96EC4815E5A, L_95, L_96, 2, L_97, L_98, L_99, /*hidden argument*/NULL);
		__this->set_limitMemoryText_40(L_100);
		// voiceCommandText = CreateText("VoiceCommandText", new Vector3(-0.525f, -0.7f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, Color.white, voiceCommandString);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_101), (-0.524999976f), (-0.699999988f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102 = __this->get_memoryStats_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_103 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_104;
		L_104 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		String_t* L_105 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_voiceCommandString_15();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_106;
		L_106 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteral2A4FA5F9A66DEEA10B9329AC6B6C4542BCEC1AB2, L_101, L_102, 0, L_103, L_104, L_105, /*hidden argument*/NULL);
		__this->set_voiceCommandText_41(L_106);
		// mrtkText = CreateText("MRTKText", new Vector3(0.52f, -0.7f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, visualProfilerTitleString);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_107), (0.519999981f), (-0.699999988f), (0.0f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108 = __this->get_memoryStats_37();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_109 = __this->get_textMaterial_67();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_110;
		L_110 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		String_t* L_111 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_visualProfilerTitleString_16();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_112;
		L_112 = MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE(_stringLiteralAE4AFE18D2E7C6893B503506A2B19780C8F7E0C7, L_107, L_108, 2, L_109, L_110, L_111, /*hidden argument*/NULL);
		__this->set_mrtkText_42(L_112);
		// voiceCommandText.fontSize = 32;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_113 = __this->get_voiceCommandText_41();
		NullCheck(L_113);
		TextMesh_set_fontSize_mD7888FBF4798ACE5E6E6D21466D2FA82927DEB60(L_113, ((int32_t)32), /*hidden argument*/NULL);
		// mrtkText.fontSize = 32;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_114 = __this->get_mrtkText_42();
		NullCheck(L_114);
		TextMesh_set_fontSize_mD7888FBF4798ACE5E6E6D21466D2FA82927DEB60(L_114, ((int32_t)32), /*hidden argument*/NULL);
		// GameObject limitBar = CreateQuad("LimitBar", memoryStats);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115 = __this->get_memoryStats_37();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116;
		L_116 = MixedRealityToolkitVisualProfiler_CreateQuad_mBA439D92C95A8828429E8DD0D37CF40EF02130A2(_stringLiteral91EFB368757A86BC9A88975F715DAF8641FEA56D, L_115, /*hidden argument*/NULL);
		V_3 = L_116;
		// InitializeRenderer(limitBar, defaultMaterial, colorID, memoryLimitColor);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = V_3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_118 = __this->get_defaultMaterial_63();
		int32_t L_119 = __this->get_colorID_52();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_120 = __this->get_memoryLimitColor_32();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_121;
		L_121 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m3FB2B093AB05BA3FBB08C0F6C35275D6F038DC55(L_117, L_118, L_119, L_120, /*hidden argument*/NULL);
		// limitBar.transform.localScale = new Vector3(0.99f, 0.2f, 1.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = V_3;
		NullCheck(L_122);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_123;
		L_123 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_122, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_124), (0.99000001f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_123);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_123, L_124, /*hidden argument*/NULL);
		// limitBar.transform.localPosition = new Vector3(0.0f, -0.37f, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = V_3;
		NullCheck(L_125);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126;
		L_126 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_125, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_127), (0.0f), (-0.370000005f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_126);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_126, L_127, /*hidden argument*/NULL);
		// usedAnchor = CreateAnchor("UsedAnchor", limitBar.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = V_3;
		NullCheck(L_128);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_129;
		L_129 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_128, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = MixedRealityToolkitVisualProfiler_CreateAnchor_mBBC8F17A81D74DF6BA1A4523B9623BE11865A1C1(_stringLiteralBDE0E17908169C9D71086DA3C3CE1626CDA9F5B8, L_129, /*hidden argument*/NULL);
		__this->set_usedAnchor_43(L_130);
		// GameObject bar = CreateQuad("UsedBar", usedAnchor);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131 = __this->get_usedAnchor_43();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_132;
		L_132 = MixedRealityToolkitVisualProfiler_CreateQuad_mBA439D92C95A8828429E8DD0D37CF40EF02130A2(_stringLiteral88C0A409384124B23F80517191AAD25B944B47B9, L_131, /*hidden argument*/NULL);
		// Material material = new Material(foregroundMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_133 = __this->get_foregroundMaterial_66();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_134 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_134, L_133, /*hidden argument*/NULL);
		V_4 = L_134;
		// material.renderQueue += 1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_135 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_136 = L_135;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_136, /*hidden argument*/NULL);
		NullCheck(L_136);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_136, ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1)), /*hidden argument*/NULL);
		// InitializeRenderer(bar, material, colorID, memoryUsedColor);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_138 = L_132;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_139 = V_4;
		int32_t L_140 = __this->get_colorID_52();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_141 = __this->get_memoryUsedColor_30();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_142;
		L_142 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m3FB2B093AB05BA3FBB08C0F6C35275D6F038DC55(L_138, L_139, L_140, L_141, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_143 = L_138;
		NullCheck(L_143);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_144;
		L_144 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_143, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
		L_145 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_144);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_144, L_145, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_143);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_146;
		L_146 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_143, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_147), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_146);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_146, L_147, /*hidden argument*/NULL);
		// peakAnchor = CreateAnchor("PeakAnchor", limitBar.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_148 = V_3;
		NullCheck(L_148);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_149;
		L_149 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_148, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_150;
		L_150 = MixedRealityToolkitVisualProfiler_CreateAnchor_mBBC8F17A81D74DF6BA1A4523B9623BE11865A1C1(_stringLiteral1665DB987C5901E42B248E6D1128B9B20A1583AE, L_149, /*hidden argument*/NULL);
		__this->set_peakAnchor_44(L_150);
		// GameObject bar = CreateQuad("PeakBar", peakAnchor);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_151 = __this->get_peakAnchor_44();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_152;
		L_152 = MixedRealityToolkitVisualProfiler_CreateQuad_mBA439D92C95A8828429E8DD0D37CF40EF02130A2(_stringLiteral11C6A78DFF7F1AD65B32D4BFAA7E9E99490CF2C3, L_151, /*hidden argument*/NULL);
		// InitializeRenderer(bar, foregroundMaterial, colorID, memoryPeakColor);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153 = L_152;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_154 = __this->get_foregroundMaterial_66();
		int32_t L_155 = __this->get_colorID_52();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_156 = __this->get_memoryPeakColor_31();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_157;
		L_157 = MixedRealityToolkitVisualProfiler_InitializeRenderer_m3FB2B093AB05BA3FBB08C0F6C35275D6F038DC55(L_153, L_154, L_155, L_156, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_158 = L_153;
		NullCheck(L_158);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_159;
		L_159 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_158, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_160;
		L_160 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_159);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_159, L_160, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_158);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_161;
		L_161 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_158, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162;
		memset((&L_162), 0, sizeof(L_162));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_162), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_161);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_161, L_162, /*hidden argument*/NULL);
		// if (window.gameObject.activeSelf != ShouldShowProfiler)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_163 = __this->get_window_33();
		NullCheck(L_163);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_164;
		L_164 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_163, /*hidden argument*/NULL);
		NullCheck(L_164);
		bool L_165;
		L_165 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_164, /*hidden argument*/NULL);
		bool L_166;
		L_166 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_165) == ((int32_t)L_166)))
		{
			goto IL_056c;
		}
	}
	{
		// window.gameObject.SetActive(ShouldShowProfiler);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_167 = __this->get_window_33();
		NullCheck(L_167);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_168;
		L_168 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_167, /*hidden argument*/NULL);
		bool L_169;
		L_169 = MixedRealityToolkitVisualProfiler_get_ShouldShowProfiler_mDA2FF2A8DD552B566FF62BD49EE81F301104760E(__this, /*hidden argument*/NULL);
		NullCheck(L_168);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_168, L_169, /*hidden argument*/NULL);
	}

IL_056c:
	{
		// if (memoryStats.gameObject.activeSelf != memoryStatsVisible)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170 = __this->get_memoryStats_37();
		NullCheck(L_170);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_171;
		L_171 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_170, /*hidden argument*/NULL);
		NullCheck(L_171);
		bool L_172;
		L_172 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_171, /*hidden argument*/NULL);
		bool L_173 = __this->get_memoryStatsVisible_20();
		if ((((int32_t)L_172) == ((int32_t)L_173)))
		{
			goto IL_059a;
		}
	}
	{
		// memoryStats.gameObject.SetActive(memoryStatsVisible);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_174 = __this->get_memoryStats_37();
		NullCheck(L_174);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_175;
		L_175 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_174, /*hidden argument*/NULL);
		bool L_176 = __this->get_memoryStatsVisible_20();
		NullCheck(L_175);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_175, L_176, /*hidden argument*/NULL);
	}

IL_059a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_m1F0AF86EB2538BF9A7FE77E50664460479E3A8B2 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF01B63568D803A05C906F1C9342492BA1EDDB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A3FE6E27265CF0EF686C9A884EA90AF8543380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73E556B63D0D9AA9CA37DDA8CB42B123F187DEC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// cpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		__this->set_cpuFrameRateStrings_57(L_1);
		// gpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		int32_t L_2 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_gpuFrameRateStrings_58(L_3);
		// string displayedDecimalFormat = string.Format("{{0:F{0}}}", displayedDecimalDigits);
		int32_t L_4 = __this->get_displayedDecimalDigits_27();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5AF01B63568D803A05C906F1C9342492BA1EDDB7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// StringBuilder stringBuilder = new StringBuilder(32);
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_8, ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_8;
		// StringBuilder milisecondStringBuilder = new StringBuilder(16);
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_9, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		V_3 = 0;
		goto IL_00e1;
	}

IL_0051:
	{
		// float miliseconds = (i == 0) ? 0.0f : (1.0f / i) * 1000.0f;
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_3;
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)((float)((float)L_11)))), (float)(1000.0f)));
		goto IL_0069;
	}

IL_0064:
	{
		G_B4_0 = (0.0f);
	}

IL_0069:
	{
		V_4 = G_B4_0;
		// milisecondStringBuilder.AppendFormat(displayedDecimalFormat, miliseconds);
		StringBuilder_t * L_12 = V_2;
		String_t* L_13 = V_0;
		float L_14 = V_4;
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_12, L_13, L_16, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("CPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_18 = V_1;
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_20 = V_2;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		NullCheck(L_18);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_18, _stringLiteralD4A3FE6E27265CF0EF686C9A884EA90AF8543380, L_19, L_21, /*hidden argument*/NULL);
		// cpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = __this->get_cpuFrameRateStrings_57();
		int32_t L_24 = V_3;
		StringBuilder_t * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (String_t*)L_26);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_27 = V_1;
		NullCheck(L_27);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_27, 0, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("GPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_28 = V_1;
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_30 = V_2;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		NullCheck(L_28);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_28, _stringLiteralE73E556B63D0D9AA9CA37DDA8CB42B123F187DEC, L_29, L_31, /*hidden argument*/NULL);
		// gpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = __this->get_gpuFrameRateStrings_58();
		int32_t L_34 = V_3;
		StringBuilder_t * L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (String_t*)L_36);
		// milisecondStringBuilder.Length = 0;
		StringBuilder_t * L_37 = V_2;
		NullCheck(L_37);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_37, 0, /*hidden argument*/NULL);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_38 = V_1;
		NullCheck(L_38);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_38, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_40 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = __this->get_cpuFrameRateStrings_57();
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MixedRealityToolkitVisualProfiler_CreateAnchor_mBBC8F17A81D74DF6BA1A4523B9623BE11865A1C1 (String_t* ___name0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform anchor = new GameObject(name).transform;
		String_t* L_0 = ___name0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		// anchor.parent = parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = L_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___parent1;
		NullCheck(L_3);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_4, /*hidden argument*/NULL);
		// anchor.localScale = Vector3.one;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_6, /*hidden argument*/NULL);
		// anchor.localPosition = new Vector3(-0.5f, 0.0f, 0.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_7, L_8, /*hidden argument*/NULL);
		// return anchor;
		return L_7;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MixedRealityToolkitVisualProfiler_CreateQuad_mBA439D92C95A8828429E8DD0D37CF40EF02130A2 (String_t* ___name0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(5, /*hidden argument*/NULL);
		// Destroy(quad.GetComponent<Collider>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2;
		L_2 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_1, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// quad.name = name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_3, L_4, /*hidden argument*/NULL);
		// quad.transform.parent = parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_3;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___parent1;
		NullCheck(L_6);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_6, L_7, /*hidden argument*/NULL);
		// return quad;
		return L_5;
	}
}
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * MixedRealityToolkitVisualProfiler_CreateText_m2ED4F5991F80AC74892D6224E3EBC8712C6E8BEE (String_t* ___name0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent2, int32_t ___anchor3, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material4, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color5, String_t* ___text6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// obj.transform.localScale = Vector3.one * 0.0016f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, (0.00159999996f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_3, L_5, /*hidden argument*/NULL);
		// obj.transform.parent = parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___parent2;
		NullCheck(L_7);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// obj.transform.localPosition = position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___position1;
		NullCheck(L_10);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_10, L_11, /*hidden argument*/NULL);
		// TextMesh textMesh = obj.AddComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_0;
		NullCheck(L_12);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_13;
		L_13 = GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F(L_12, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_mFC38716F8D0DCF6656476102C13234C43AC9DB6F_RuntimeMethod_var);
		// textMesh.fontSize = 48;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_14 = L_13;
		NullCheck(L_14);
		TextMesh_set_fontSize_mD7888FBF4798ACE5E6E6D21466D2FA82927DEB60(L_14, ((int32_t)48), /*hidden argument*/NULL);
		// textMesh.anchor = anchor;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_15 = L_14;
		int32_t L_16 = ___anchor3;
		NullCheck(L_15);
		TextMesh_set_anchor_m1A9871D2FD70AE79F4FE3F3912757834392A9674(L_15, L_16, /*hidden argument*/NULL);
		// textMesh.color = color;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_17 = L_15;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18 = ___color5;
		NullCheck(L_17);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_17, L_18, /*hidden argument*/NULL);
		// textMesh.text = text;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_19 = L_17;
		String_t* L_20 = ___text6;
		NullCheck(L_19);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_19, L_20, /*hidden argument*/NULL);
		// textMesh.richText = false;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_21 = L_19;
		NullCheck(L_21);
		TextMesh_set_richText_m89D281DA0D36552BB529E98E908E7E25971DB1C0(L_21, (bool)0, /*hidden argument*/NULL);
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_0;
		NullCheck(L_22);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_22, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_24 = L_23;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_25 = ___material4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_24, L_25, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m1F04FBE7A55AD403B57E1B4E47E60F0978700136(L_24, /*hidden argument*/NULL);
		// return textMesh;
		return L_21;
	}
}
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * MixedRealityToolkitVisualProfiler_InitializeRenderer_m3FB2B093AB05BA3FBB08C0F6C35275D6F038DC55 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, int32_t ___colorID2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * V_0 = NULL;
	{
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = L_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___material1;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_2, L_3, /*hidden argument*/NULL);
		// MaterialPropertyBlock propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_4 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = L_2;
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC(L_5, L_6, /*hidden argument*/NULL);
		// propertyBlock.SetColor(colorID, color);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_7 = V_0;
		int32_t L_8 = ___colorID2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___color3;
		NullCheck(L_7);
		MaterialPropertyBlock_SetColor_mF3C09C80572DB6D21B813EAEB04AA3A49A0DC496(L_7, L_8, L_9, /*hidden argument*/NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10 = L_5;
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_11 = V_0;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A(L_10, L_11, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_12 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m1F04FBE7A55AD403B57E1B4E47E60F0978700136(L_12, /*hidden argument*/NULL);
		// return renderer;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m1F04FBE7A55AD403B57E1B4E47E60F0978700136 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___renderer0, const RuntimeMethod* method)
{
	{
		// renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___renderer0;
		NullCheck(L_0);
		Renderer_set_shadowCastingMode_mDD2D9695A5F1B0D1FCACB8D87A3D1148C14D6F01(L_0, 0, /*hidden argument*/NULL);
		// renderer.receiveShadows = false;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = ___renderer0;
		NullCheck(L_1);
		Renderer_set_receiveShadows_mA7D75C6A0E4C9F3BEB8F9BB27829A5B749AAD875(L_1, (bool)0, /*hidden argument*/NULL);
		// renderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2 = ___renderer0;
		NullCheck(L_2);
		Renderer_set_motionVectorGenerationMode_m4B0D86CCF92EF2D12EFA1E46953D12B52DBA39AC(L_2, 2, /*hidden argument*/NULL);
		// renderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3 = ___renderer0;
		NullCheck(L_3);
		Renderer_set_lightProbeUsage_m29E6F739FD1F547AC42BBE9CB9E69852358E2803(L_3, 0, /*hidden argument*/NULL);
		// renderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = ___renderer0;
		NullCheck(L_4);
		Renderer_set_reflectionProbeUsage_m69F31E68FF530A0B0BE76FC77A0655DBE02F7DB6(L_4, 0, /*hidden argument*/NULL);
		// renderer.allowOcclusionWhenDynamic = false;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = ___renderer0;
		NullCheck(L_5);
		Renderer_set_allowOcclusionWhenDynamic_m4F287992468A4F2A46BC4419C22E9EAE80DECA84(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mB906184138F1F2CB32DA5C9BA67D64741157AF76 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (MemoryUsageToStringPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_MemoryUsageToStringPerfMarker_77();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// float memoryUsageMB = ConvertBytesToMegabytes(memoryUsage);
			uint64_t L_2 = ___memoryUsage4;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			float L_3;
			L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m2152665A0A3121325EFA960A01448CDC211FF9E7(L_2, /*hidden argument*/NULL);
			// int memoryUsageIntegerDigits = (int)memoryUsageMB;
			float L_4 = L_3;
			V_2 = ((int32_t)((int32_t)L_4));
			// int memoryUsageFractionalDigits = (int)((memoryUsageMB - memoryUsageIntegerDigits) * Mathf.Pow(10.0f, displayedDecimalDigits));
			int32_t L_5 = V_2;
			int32_t L_6 = ___displayedDecimalDigits1;
			float L_7;
			L_7 = powf((10.0f), ((float)((float)L_6)));
			V_3 = ((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)((float)((float)L_5)))), (float)L_7))));
			// int bufferIndex = 0;
			V_4 = 0;
			// for (int i = 0; i < prefixString.Length; ++i)
			V_5 = 0;
			goto IL_0049;
		}

IL_0032:
		{
			// stringBuffer[bufferIndex++] = prefixString[i];
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___stringBuffer0;
			int32_t L_9 = V_4;
			int32_t L_10 = L_9;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
			String_t* L_11 = ___prefixString3;
			int32_t L_12 = V_5;
			NullCheck(L_11);
			Il2CppChar L_13;
			L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, L_12, /*hidden argument*/NULL);
			NullCheck(L_8);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppChar)L_13);
			// for (int i = 0; i < prefixString.Length; ++i)
			int32_t L_14 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		}

IL_0049:
		{
			// for (int i = 0; i < prefixString.Length; ++i)
			int32_t L_15 = V_5;
			String_t* L_16 = ___prefixString3;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0032;
			}
		}

IL_0053:
		{
			// bufferIndex = MemoryItoA(memoryUsageIntegerDigits, stringBuffer, bufferIndex);
			int32_t L_18 = V_2;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = ___stringBuffer0;
			int32_t L_20 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			int32_t L_21;
			L_21 = MixedRealityToolkitVisualProfiler_MemoryItoA_mFDA401E5C3FAC325AAE66A7491BEE51CEE311903(L_18, L_19, L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			// stringBuffer[bufferIndex++] = '.';
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ___stringBuffer0;
			int32_t L_23 = V_4;
			int32_t L_24 = L_23;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
			NullCheck(L_22);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Il2CppChar)((int32_t)46));
			// if (memoryUsageFractionalDigits != 0)
			int32_t L_25 = V_3;
			if (!L_25)
			{
				goto IL_0079;
			}
		}

IL_006c:
		{
			// bufferIndex = MemoryItoA(memoryUsageFractionalDigits, stringBuffer, bufferIndex);
			int32_t L_26 = V_3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = ___stringBuffer0;
			int32_t L_28 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
			int32_t L_29;
			L_29 = MixedRealityToolkitVisualProfiler_MemoryItoA_mFDA401E5C3FAC325AAE66A7491BEE51CEE311903(L_26, L_27, L_28, /*hidden argument*/NULL);
			V_4 = L_29;
			// }
			goto IL_0094;
		}

IL_0079:
		{
			// for (int i = 0; i < displayedDecimalDigits; ++i)
			V_6 = 0;
			goto IL_008f;
		}

IL_007e:
		{
			// stringBuffer[bufferIndex++] = '0';
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_30 = ___stringBuffer0;
			int32_t L_31 = V_4;
			int32_t L_32 = L_31;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
			NullCheck(L_30);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Il2CppChar)((int32_t)48));
			// for (int i = 0; i < displayedDecimalDigits; ++i)
			int32_t L_33 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_008f:
		{
			// for (int i = 0; i < displayedDecimalDigits; ++i)
			int32_t L_34 = V_6;
			int32_t L_35 = ___displayedDecimalDigits1;
			if ((((int32_t)L_34) < ((int32_t)L_35)))
			{
				goto IL_007e;
			}
		}

IL_0094:
		{
			// stringBuffer[bufferIndex++] = 'M';
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_36 = ___stringBuffer0;
			int32_t L_37 = V_4;
			int32_t L_38 = L_37;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
			NullCheck(L_36);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Il2CppChar)((int32_t)77));
			// stringBuffer[bufferIndex++] = 'B';
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = ___stringBuffer0;
			int32_t L_40 = V_4;
			int32_t L_41 = L_40;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
			NullCheck(L_39);
			(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)((int32_t)66));
			// textMesh.text = new string(stringBuffer, 0, bufferIndex);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_42 = ___textMesh2;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = ___stringBuffer0;
			int32_t L_44 = V_4;
			String_t* L_45;
			L_45 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_43, 0, L_44, /*hidden argument*/NULL);
			NullCheck(L_42);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_42, L_45, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_mFDA401E5C3FAC325AAE66A7491BEE51CEE311903 (int32_t ___value0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (MemoryItoAPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_MemoryItoAPerfMarker_78();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// int startIndex = bufferIndex;
			int32_t L_2 = ___bufferIndex2;
			V_2 = L_2;
			goto IL_0029;
		}

IL_0012:
		{
			// stringBuffer[bufferIndex++] = (char)((char)(value % 10) + '0');
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___stringBuffer1;
			int32_t L_4 = ___bufferIndex2;
			int32_t L_5 = L_4;
			___bufferIndex2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
			int32_t L_6 = ___value0;
			NullCheck(L_3);
			(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_6%(int32_t)((int32_t)10))))), (int32_t)((int32_t)48))))));
			// for (; value != 0; value /= 10)
			int32_t L_7 = ___value0;
			___value0 = ((int32_t)((int32_t)L_7/(int32_t)((int32_t)10)));
		}

IL_0029:
		{
			// for (; value != 0; value /= 10)
			int32_t L_8 = ___value0;
			if (L_8)
			{
				goto IL_0012;
			}
		}

IL_002c:
		{
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_9 = ___bufferIndex2;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
			goto IL_004d;
		}

IL_0033:
		{
			// temp = stringBuffer[startIndex];
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___stringBuffer1;
			int32_t L_11 = V_2;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_3 = L_13;
			// stringBuffer[startIndex] = stringBuffer[endIndex];
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = ___stringBuffer1;
			int32_t L_15 = V_2;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___stringBuffer1;
			int32_t L_17 = V_4;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_14);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Il2CppChar)L_19);
			// stringBuffer[endIndex] = temp;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = ___stringBuffer1;
			int32_t L_21 = V_4;
			Il2CppChar L_22 = V_3;
			NullCheck(L_20);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)L_22);
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_24 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		}

IL_004d:
		{
			// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
			int32_t L_25 = V_2;
			int32_t L_26 = V_4;
			if ((((int32_t)L_25) < ((int32_t)L_26)))
			{
				goto IL_0033;
			}
		}

IL_0052:
		{
			// return bufferIndex;
			int32_t L_27 = ___bufferIndex2;
			V_5 = L_27;
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// }
		int32_t L_28 = V_5;
		return L_28;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA1A0BD21A4B521DB2050F3DC9EF4E959CBB8ECDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float refreshRate = UnityEngine.XR.XRDevice.refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = XRDevice_get_refreshRate_mD4F76121803499E672DBAF04FEC026C04CBB9D30(/*hidden argument*/NULL);
		V_0 = L_0;
		// return ((int)refreshRate == 0) ? 60.0f : refreshRate;
		float L_1 = V_0;
		if (!((int32_t)((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		return (60.0f);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_m26054107BBF35F714B4EE7FCDC796C3B71DA9220 (FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (AverageFrameTimingPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_AverageFrameTimingPerfMarker_79();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// double cpuTime = 0.0f;
			V_2 = (0.0);
			// double gpuTime = 0.0f;
			V_3 = (0.0);
			// for (int i = 0; i < frameTimingsCount; ++i)
			V_4 = 0;
			goto IL_004d;
		}

IL_0027:
		{
			// cpuTime += frameTimings[i].cpuFrameTime;
			double L_2 = V_2;
			FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* L_3 = ___frameTimings0;
			int32_t L_4 = V_4;
			NullCheck(L_3);
			double L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_cpuFrameTime_1();
			V_2 = ((double)il2cpp_codegen_add((double)L_2, (double)L_5));
			// gpuTime += frameTimings[i].gpuFrameTime;
			double L_6 = V_3;
			FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* L_7 = ___frameTimings0;
			int32_t L_8 = V_4;
			NullCheck(L_7);
			double L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_gpuFrameTime_3();
			V_3 = ((double)il2cpp_codegen_add((double)L_6, (double)L_9));
			// for (int i = 0; i < frameTimingsCount; ++i)
			int32_t L_10 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_004d:
		{
			// for (int i = 0; i < frameTimingsCount; ++i)
			int32_t L_11 = V_4;
			uint32_t L_12 = ___frameTimingsCount1;
			if ((((int64_t)((int64_t)((int64_t)L_11))) < ((int64_t)((int64_t)((uint64_t)L_12)))))
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			// cpuTime /= frameTimingsCount;
			double L_13 = V_2;
			uint32_t L_14 = ___frameTimingsCount1;
			V_2 = ((double)((double)L_13/(double)((double)((double)((double)((uint32_t)L_14))))));
			// gpuTime /= frameTimingsCount;
			double L_15 = V_3;
			uint32_t L_16 = ___frameTimingsCount1;
			V_3 = ((double)((double)L_15/(double)((double)((double)((double)((uint32_t)L_16))))));
			// cpuFrameTime = (float)(cpuTime * 0.001);
			float* L_17 = ___cpuFrameTime2;
			double L_18 = V_2;
			*((float*)L_17) = (float)((float)((float)((double)il2cpp_codegen_multiply((double)L_18, (double)(0.001)))));
			// gpuFrameTime = (float)(gpuTime * 0.001);
			float* L_19 = ___gpuFrameTime3;
			double L_20 = V_3;
			*((float*)L_19) = (float)((float)((float)((double)il2cpp_codegen_multiply((double)L_20, (double)(0.001)))));
			// }
			IL2CPP_LEAVE(0x8C, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mB90F975BB0541DC2650E377A826B190F66706689 (const RuntimeMethod* method)
{
	{
		// return MemoryManager.AppMemoryUsage;
		uint64_t L_0;
		L_0 = MemoryManager_get_AppMemoryUsage_mC56F027A2D650BCC43228CD8AEDCEBB517F0B677(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_mD2440693336DA8B18F2E4911F368C8D153320F26 (const RuntimeMethod* method)
{
	{
		// return MemoryManager.AppMemoryUsageLimit;
		uint64_t L_0;
		L_0 = MemoryManager_get_AppMemoryUsageLimit_m4037BAE37C41E7F7FE868436D715C41E4CD9E636(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_m22F2E1FFA1B2D17C079858542CF8649F37A05A23 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (WillDisplayedMemoryUsageDifferPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_WillDisplayedMemoryUsageDifferPerfMarker_80();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// float oldUsageMBs = ConvertBytesToMegabytes(oldUsage);
		uint64_t L_2 = ___oldUsage0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m2152665A0A3121325EFA960A01448CDC211FF9E7(L_2, /*hidden argument*/NULL);
		// float newUsageMBs = ConvertBytesToMegabytes(newUsage);
		uint64_t L_4 = ___newUsage1;
		float L_5;
		L_5 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m2152665A0A3121325EFA960A01448CDC211FF9E7(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float decimalPower = Mathf.Pow(10.0f, displayedDecimalDigits);
		int32_t L_6 = ___displayedDecimalDigits2;
		float L_7;
		L_7 = powf((10.0f), ((float)((float)L_6)));
		V_3 = L_7;
		// return (int)(oldUsageMBs * decimalPower) != (int)(newUsageMBs * decimalPower);
		float L_8 = V_3;
		float L_9 = V_2;
		float L_10 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_3, (float)L_8))))) == ((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		IL2CPP_LEAVE(0x46, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m7DE4EDE6B125ADC69C832A44822944ED70F52673 (int32_t ___megabytes0, const RuntimeMethod* method)
{
	{
		// return ((ulong)megabytes * 1024UL) * 1024UL;
		int32_t L_0 = ___megabytes0;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_0)), (int64_t)((int64_t)((int64_t)((int32_t)1024))))), (int64_t)((int64_t)((int64_t)((int32_t)1024)))));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m2152665A0A3121325EFA960A01448CDC211FF9E7 (uint64_t ___bytes0, const RuntimeMethod* method)
{
	{
		// return (bytes / 1024.0f) / 1024.0f;
		uint64_t L_0 = ___bytes0;
		return ((float)((float)((float)((float)((float)((float)((double)((uint64_t)L_0))))/(float)(1024.0f)))/(float)(1024.0f)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__ctor_m004EF7D4A0FD86426CBD73FD3967357C4E84E820 (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private bool frameInfoVisible = true;
		__this->set_frameInfoVisible_19((bool)1);
		// private bool memoryStatsVisible = true;
		__this->set_memoryStatsVisible_20((bool)1);
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_21((0.100000001f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_22(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		__this->set_windowOffset_23(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_24((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_25((5.0f));
		// private int displayedDecimalDigits = 1;
		__this->set_displayedDecimalDigits_27(1);
		// private FrameRateColor[] frameRateColors = new FrameRateColor[]
		// {
		//     // Green
		//     new FrameRateColor() { percentageOfTarget = 0.95f, color = new Color(127 / 256.0f, 186 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Yellow
		//     new FrameRateColor() { percentageOfTarget = 0.75f, color = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Red
		//     new FrameRateColor() { percentageOfTarget = 0.0f, color = new Color(255 / 256.0f, 0 / 256.0f, 0 / 256.0f, 1.0f) },
		// };
		FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_1 = (FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F*)(FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F*)SZArrayNew(FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F_il2cpp_TypeInfo_var, (uint32_t)3);
		FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_2 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D ));
		(&V_0)->set_percentageOfTarget_0((0.949999988f));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (0.49609375f), (0.7265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_3);
		FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D )L_4);
		FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_5 = L_2;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D ));
		(&V_0)->set_percentageOfTarget_0((0.75f));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_6);
		FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D )L_7);
		FrameRateColorU5BU5D_tEC2AC84BFD344459F76E721DF3DA1121B6C4B21F* L_8 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D ));
		(&V_0)->set_percentageOfTarget_0((0.0f));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_9), (0.99609375f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_9);
		FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D  L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (FrameRateColor_t067C094BE04ED2604A683AAC0B7E0F7FBCD0A48D )L_10);
		__this->set_frameRateColors_28(L_8);
		// private Color baseColor = new Color(80 / 256.0f, 80 / 256.0f, 80 / 256.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (0.3125f), (0.3125f), (0.3125f), (1.0f), /*hidden argument*/NULL);
		__this->set_baseColor_29(L_11);
		// private Color memoryUsedColor = new Color(0 / 256.0f, 164 / 256.0f, 239 / 256.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (0.0f), (0.640625f), (0.93359375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryUsedColor_30(L_12);
		// private Color memoryPeakColor = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_13), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryPeakColor_31(L_13);
		// private Color memoryLimitColor = new Color(150 / 256.0f, 150 / 256.0f, 150 / 256.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_14), (0.5859375f), (0.5859375f), (0.5859375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryLimitColor_32(L_14);
		// private System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_15 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_15, /*hidden argument*/NULL);
		__this->set_stopwatch_55(L_15);
		// private FrameTiming[] frameTimings = new FrameTiming[maxFrameTimings];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		int32_t L_16 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
		FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB* L_17 = (FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB*)(FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB*)SZArrayNew(FrameTimingU5BU5D_tA802E646D7F5BFD7CF16E56ABAB00B4122478CEB_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->set_frameTimings_56(L_17);
		// private char[] stringBuffer = new char[maxStringLength];
		int32_t L_18 = ((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->get_maxStringLength_4();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->set_stringBuffer_59(L_19);
		// private float previousFieldOfView = -1.0f;
		__this->set_previousFieldOfView_72((-1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__cctor_mC2F779CE319F425419BA918390850121E37EE092 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A0F778C0E661B78B1B6AD2138BA091D3D91561A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D18A0AC35B03549F77B8A582B6AD5EA3ACA01C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FFF93EF949F2334F4C415406155881D8A23640);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral584F25676660FEECE7691A51DFE6DCAE69EF135A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7406124BE72D090590042AFF1000B9BB5A1827E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADCA5E5D734CB4272E0674CADBC8A574F28212C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2BCF9F7BF608571B66B4874A29AA5A9A5815F73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9FD3CD68D89191C7A02CDC20BD0BF0E52B2EEA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE893292347C9DB12C81CB6C10FA271B45FA1DCD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int maxStringLength = 32;
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_maxStringLength_4(((int32_t)32));
		// private static readonly int maxTargetFrameRate = 120;
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_maxTargetFrameRate_5(((int32_t)120));
		// private static readonly int maxFrameTimings = 128;
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_maxFrameTimings_6(((int32_t)128));
		// private static readonly int frameRange = 30;
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_frameRange_7(((int32_t)30));
		// private static readonly Vector2 defaultWindowRotation = new Vector2(10.0f, 20.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (10.0f), (20.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_defaultWindowRotation_8(L_0);
		// private static readonly Vector3 defaultWindowScale = new Vector3(0.2f, 0.04f, 1.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.200000003f), (0.0399999991f), (1.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_defaultWindowScale_9(L_1);
		// private static readonly Vector3[] backgroundScales = { new Vector3(1.05f, 1.2f, 1.2f), new Vector3(1.0f, 0.5f, 1.0f), new Vector3(1.0f, 0.25f, 1.0f) };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (1.04999995f), (1.20000005f), (1.20000005f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (1.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (1.0f), (0.25f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_backgroundScales_10(L_7);
		// private static readonly Vector3[] backgroundOffsets = { new Vector3(0.0f, 0.0f, 0.0f), new Vector3(0.0f, 0.25f, 0.0f), new Vector3(0.0f, 0.375f, 0.0f) };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (0.25f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_13);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (0.375f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_15);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_backgroundOffsets_11(L_14);
		// private static readonly string usedMemoryString = "Used: ";
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_usedMemoryString_12(_stringLiteralE9F27BF4412297971361960DC3B04D57C4E019A6);
		// private static readonly string peakMemoryString = "Peak: ";
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_peakMemoryString_13(_stringLiteralBAABD0AA623F4F0C79BE8B249C24DC7764281437);
		// private static readonly string limitMemoryString = "Limit: ";
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_limitMemoryString_14(_stringLiteralBDDC80DB00CCB0ED669D1DC7E87019825A1F10BE);
		// private static readonly string voiceCommandString = "Say \"Toggle Profiler\" to show/hide";
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_voiceCommandString_15(_stringLiteralDE22FF12133F1B7AE98C2C860D576E4AB10754C4);
		// private static readonly string visualProfilerTitleString = "MRTK Visual Profiler";
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_visualProfilerTitleString_16(_stringLiteral9344B1909CA0FB9AF4A07D363E622D12B38FA32D);
		// private static readonly ProfilerMarker LateUpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.LateUpdate");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_16), _stringLiteral10FFF93EF949F2334F4C415406155881D8A23640, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_LateUpdatePerfMarker_71(L_16);
		// private static readonly ProfilerMarker CalculateWindowPositionPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateWindowPosition");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_17;
		memset((&L_17), 0, sizeof(L_17));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_17), _stringLiteral0D18A0AC35B03549F77B8A582B6AD5EA3ACA01C3, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_CalculateWindowPositionPerfMarker_73(L_17);
		// private static readonly ProfilerMarker CalculateWindowRotationPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateWindowRotation");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_18;
		memset((&L_18), 0, sizeof(L_18));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_18), _stringLiteral8ADCA5E5D734CB4272E0674CADBC8A574F28212C, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_CalculateWindowRotationPerfMarker_74(L_18);
		// private static readonly ProfilerMarker CalculateFrameColorPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateFrameColor");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_19;
		memset((&L_19), 0, sizeof(L_19));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_19), _stringLiteralE893292347C9DB12C81CB6C10FA271B45FA1DCD0, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_CalculateFrameColorPerfMarker_75(L_19);
		// private static readonly ProfilerMarker CalculateBackgroundSizePerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.CalculateBackgroundSize");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_20), _stringLiteral0A0F778C0E661B78B1B6AD2138BA091D3D91561A, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_CalculateBackgroundSizePerfMarker_76(L_20);
		// private static readonly ProfilerMarker MemoryUsageToStringPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryUsageToString");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_21;
		memset((&L_21), 0, sizeof(L_21));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_21), _stringLiteralB2BCF9F7BF608571B66B4874A29AA5A9A5815F73, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_MemoryUsageToStringPerfMarker_77(L_21);
		// private static readonly ProfilerMarker MemoryItoAPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.MemoryItoA");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_22;
		memset((&L_22), 0, sizeof(L_22));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_22), _stringLiteral584F25676660FEECE7691A51DFE6DCAE69EF135A, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_MemoryItoAPerfMarker_78(L_22);
		// private static readonly ProfilerMarker AverageFrameTimingPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.AverageFrameTiming");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_23;
		memset((&L_23), 0, sizeof(L_23));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_23), _stringLiteral7406124BE72D090590042AFF1000B9BB5A1827E8, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_AverageFrameTimingPerfMarker_79(L_23);
		// private static readonly ProfilerMarker WillDisplayedMemoryUsageDifferPerfMarker = new ProfilerMarker("[MRTK] MixedRealityToolkitVisualProfiler.WillDisplayedMemoryUsageDiffer");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_24;
		memset((&L_24), 0, sizeof(L_24));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_24), _stringLiteralC9FD3CD68D89191C7A02CDC20BD0BF0E52B2EEA3, /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362_il2cpp_TypeInfo_var))->set_WillDisplayedMemoryUsageDifferPerfMarker_80(L_24);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_ToggleProfiler_mF6F172D9B212FAD0A4E874436DD0ACF3D4E2FA32 (VisualProfilerControl_t8B7590127C57352E02B125B39641AB723F679407 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::SetProfilerVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_SetProfilerVisibility_mD9AAFDFB20D5DF1D0B4ACBE3D8BEE5F2B773AB27 (VisualProfilerControl_t8B7590127C57352E02B125B39641AB723F679407 * __this, bool ___isVisible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = isVisible;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CoreServices_get_DiagnosticsSystem_mE5F9CCA691A2708CF3C8F69CF97AC09B08E16905(/*hidden argument*/NULL);
		bool L_2 = ___isVisible0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_t74654ED4695110E95271950B99FD4C6E4F1B8D96_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl__ctor_mD5467C28297405CE29FE2841AB248F1F6B198EC6 (VisualProfilerControl_t8B7590127C57352E02B125B39641AB723F679407 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5E1FE488767704DDFB4D7FE14E8C41D78E984589 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * L_0 = (U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C *)il2cpp_codegen_object_new(U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA7BED9EB49729777F6DFB079E4C662ADB7472F63(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA7BED9EB49729777F6DFB079E4C662ADB7472F63 (U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::<.cctor>b__64_0(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__64_0_mFEFFF3D97F973512B3069119BDC0B52FD6C9E563 (U3CU3Ec_tC394C80572FF1BF6427FBFDA1565A1548E51EE7C * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_mD4ACCD5BBC8E0449349A91967EA27B3164C6E006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnDiagnosticsChangedPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60_il2cpp_TypeInfo_var))->get_OnDiagnosticsChangedPerfMarker_31();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_2 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * L_3;
		L_3 = ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_mD4ACCD5BBC8E0449349A91967EA27B3164C6E006(L_2, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C_mD4ACCD5BBC8E0449349A91967EA27B3164C6E006_RuntimeMethod_var);
		V_2 = L_3;
		// handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		RuntimeObject* L_4 = ___handler0;
		DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * L_5 = V_2;
		NullCheck(L_4);
		InterfaceActionInvoker1< DiagnosticsEventData_tC571F9461A23075E16E59C461BD386604E25035C * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler::OnDiagnosticSettingsChanged(Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData) */, IMixedRealityDiagnosticsHandler_t91D072FFBFC0AA1865462AB46D8FAEDB39B72E64_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		IL2CPP_LEAVE(0x2C, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
	}

IL_002c:
	{
		// };
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  SpeechEventData_get_Command_m8EA86A11DE0374418C1DC3E5FD554BF1887C4F66_inline (SpeechEventData_tD78CF6193A91059515B28CC48DE8B8DDE7AA73DA * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands Command { get; private set; }
		SpeechCommands_tB5EB0ECFA6A91657370C348F8F7862ADC9AE44EB  L_0 = __this->get_U3CCommandU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mFA14F1029E1BC5761649F87E1E57F448818D0B4D_inline (BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mB5025E5148DDFAA742F368D364410E79ACBC5613_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_mADD0B9429C2FA3ABD1179653419E58C069770809_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_m073D9AE9E12E32F84B302A7384FF9100091A9586_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_mE7301DA618CDBC16AD5384720E3FBCA31DDE3022_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_18(L_0);
		// set { isVisible = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_m8C4114D0B6B129ACB97B98EDEBED6C2AFD246E34_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m6BBEB54AA2C140ACE610FE007EFDF1DB87F5867F_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->set_frameInfoVisible_19(L_0);
		// set { frameInfoVisible = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_m529AB0ABE5ADF9A458F630C970F9529A46D8FB8E_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mD4C8A47BF1506A657FB00191D025BF03FDC460A2_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->set_memoryStatsVisible_20(L_0);
		// set { memoryStatsVisible = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_mD6AE5971CDCBE77A3AA662A52B5C978257ACE2F3_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m008CE655DA41365F415C5B2D5851F39B7A212C46_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_21(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mCE2D31E02345C638D8C12AE4E3E0ABC36D88318D_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_mB44C6B0383017EF09624122518928ED7C0326247_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_22(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityDiagnosticsSystem_get_WindowOffset_m05D623D9266581109E8B6BACBB75416D3C4B4268_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_windowOffset_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_m1219CADA80B41BAA15838D8C871CE49B765FD25C_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_windowOffset_23(L_0);
		// set { windowOffset = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_mA5483D5B98B369E585E3D688D6139184F8930A08_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_35();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_m6B9F4082B5F0E316A67DD611EBC3CDD7E0C0AB82_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfilerDuringMRC_mAE85C76064A85EA1248D299BC317B0111A728216_inline (MixedRealityDiagnosticsSystem_tE2712D2A6E11C15576F585A04E8380B27251CC60 * __this, const RuntimeMethod* method)
{
	{
		// get { return showProfilerDuringMRC; }
		bool L_0 = __this->get_showProfilerDuringMRC_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_ShowProfilerDuringMRC_m0E89388ECEECC76059347129429B8ECCB06753DC_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { showProfilerDuringMRC = value; }
		bool L_0 = ___value0;
		__this->set_showProfilerDuringMRC_26(L_0);
		// set { showProfilerDuringMRC = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_mA25E3C7D2ED5836B7347CEE92D985C232FE2A58C_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowDiagnostics => showDiagnostics;
		bool L_0 = __this->get_showDiagnostics_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_m5FC96999E3B087F3BB4400E0B95606EBEC57D32F_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowProfiler => showProfiler;
		bool L_0 = __this->get_showProfiler_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m9CBE1D3325F4A92B59864452BA671C9A98B6F163_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowFrameInfo => showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_m4DCE58B887A38EF610AC8AA442D5B343F99A5774_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowMemoryStats => showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_m1BF3DA15590C9D1C38A9B9B3368036D2F5E8067A_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public float FrameSampleRate => frameSampleRate;
		float L_0 = __this->get_frameSampleRate_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_mD8A000E901A44F3194CE7D9AE404BC9D18BCFC91_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public TextAnchor WindowAnchor => windowAnchor;
		int32_t L_0 = __this->get_windowAnchor_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityDiagnosticsProfile_get_WindowOffset_mA0D6C802B759DA2832030A0C9D386A332AB1D511_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 WindowOffset => windowOffset;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_windowOffset_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_mF582B2DC40EB64A3D38BF4F66479876BCD86B992_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowScale => windowScale;
		float L_0 = __this->get_windowScale_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_m0B9FAC35E53B2BFE5B57EC40B677189E4EAFD735_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowFollowSpeed => windowFollowSpeed;
		float L_0 = __this->get_windowFollowSpeed_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfilerDuringMRC_mA78B4401CB3EDC1BA620AB8DD5FDD0299CC8C29A_inline (MixedRealityDiagnosticsProfile_tC91EAD30C6CE7ED1ED343602D42310ED6A136790 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowProfilerDuringMRC => showProfilerDuringMRC;
		bool L_0 = __this->get_showProfilerDuringMRC_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MixedRealityToolkitVisualProfiler_get_WindowParent_m5D71F49D186EAB1D11F086CBBF87327C176E4CA5_inline (MixedRealityToolkitVisualProfiler_t7F7AFE5C06E9AD4CC6226A13876169F56E462362 * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
