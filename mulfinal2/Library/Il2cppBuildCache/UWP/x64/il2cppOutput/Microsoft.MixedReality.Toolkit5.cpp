#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Type>
struct Action_1_t87684BD53C55B58E136F9DA7668485600A621945;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>>
struct Func_2_t71EF39248E2B41B1C2830FC0337C9AA15D4ACE94;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Byte[],System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.Vector2,System.Single>
struct Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0;
// System.Func`2<UnityEngine.Vector3,System.Single>
struct Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5;
// System.Func`3<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_3_tACC368EC9A28D7727F3365F446B437A702BEB0D8;
// System.Func`3<System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t3445FF707A7D74618AD07E0096C2546E98EE61CD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskFactory_1_tFD39BA629282A531FE86438887057E2BB4456AF4;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF;
// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D;
// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData
struct MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData
struct QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8;
// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA;
// Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786;
// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c
struct U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral51177093BF793A4BBA0B847FAFC2194F60D225A3;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C String_t* _stringLiteralB0E566742BCCF8AB9E49D753FA21FC152F37FC89;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6413F4C1B57BBCDE4356C33871D8839840581A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m824273C59D257D1CD7CEED5785EC17DC53F159E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m5CD0614666307B06F96046A849177353DB64EA09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisString_t_mADD43A0D983864DA5D5CCE373F856CACD43569B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m262389389049814D9390FAF590DA1705C8C06002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_GetResult_m30EB93B3521290C61B97C22B2D6D32521E992E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_get_IsCompleted_mE5276F6D735993D67DD181BC3CB26C04144A5C0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m72AFDE170D06DB7771AC30A207C46C7D9F78CB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m58FE548FF28F653C5D3A72BE34CF98483F35C441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_Reset_m54C5C55B72D6601A2E4B7531E13C2C91B78B7FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CProcessRequestAsyncU3Eb__10_1_m2C20A6C3163FDEAC52ACF06811D26AF80B519C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mC369E155C0AD4F6E140D3EC47092FDD2DE0045B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CProcessRequestAsyncU3Eb__0_m5A44194FE2B00EB850EB31C2DD9981121CD2F56C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__1_mA52A9990238D75702A6D633A1FCBC2539BED896C_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____items_1)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____array_0)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>
struct SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// T Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___result_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A, ___result_2)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_result_2() const { return ___result_2; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A, ___U3CIsCompletedU3Ek__BackingField_3)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_3() const { return ___U3CIsCompletedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_3() { return &___U3CIsCompletedU3Ek__BackingField_3; }
	inline void set_U3CIsCompletedU3Ek__BackingField_3(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// T Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	RuntimeObject * ___result_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___U3CIsCompletedU3Ek__BackingField_3)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_3() const { return ___U3CIsCompletedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_3() { return &___U3CIsCompletedU3Ek__BackingField_3; }
	inline void set_U3CIsCompletedU3Ek__BackingField_3(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF  : public RuntimeObject
{
public:
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0::byteArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray_0;

public:
	inline static int32_t get_offset_of_byteArray_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF, ___byteArray_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteArray_0() const { return ___byteArray_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteArray_0() { return &___byteArray_0; }
	inline void set_byteArray_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteArray_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c
struct U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c::<>9
	U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6 * ___U3CU3E9_0;
	// System.Func`3<System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c::<>9__10_1
	Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * ___U3CU3E9__10_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_StaticFields, ___U3CU3E9__10_1_1)); }
	inline Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * get_U3CU3E9__10_1_1() const { return ___U3CU3E9__10_1_1; }
	inline Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 ** get_address_of_U3CU3E9__10_1_1() { return &___U3CU3E9__10_1_1; }
	inline void set_U3CU3E9__10_1_1(Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * value)
	{
		___U3CU3E9__10_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_1_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass10_0::webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest_0;

public:
	inline static int32_t get_offset_of_webRequest_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D, ___webRequest_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_webRequest_0() const { return ___webRequest_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_webRequest_0() { return &___webRequest_0; }
	inline void set_webRequest_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___webRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequest_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>2__current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.GameObject[] Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>7__wrap2
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CU3E7__wrap2_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3E2__current_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3E7__wrap2_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0, ___U3CU3E7__wrap3_5)); }
	inline int32_t get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(int32_t value)
	{
		___U3CU3E7__wrap3_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData
struct MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Indices>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CIndicesU3Ek__BackingField_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Vertices>k__BackingField
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CVerticesU3Ek__BackingField_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<UVs>k__BackingField
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3CUVsU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675, ___U3CIndicesU3Ek__BackingField_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CIndicesU3Ek__BackingField_1() const { return ___U3CIndicesU3Ek__BackingField_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CIndicesU3Ek__BackingField_1() { return &___U3CIndicesU3Ek__BackingField_1; }
	inline void set_U3CIndicesU3Ek__BackingField_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CIndicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIndicesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVerticesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675, ___U3CVerticesU3Ek__BackingField_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CVerticesU3Ek__BackingField_2() const { return ___U3CVerticesU3Ek__BackingField_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CVerticesU3Ek__BackingField_2() { return &___U3CVerticesU3Ek__BackingField_2; }
	inline void set_U3CVerticesU3Ek__BackingField_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CVerticesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVerticesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUVsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675, ___U3CUVsU3Ek__BackingField_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3CUVsU3Ek__BackingField_3() const { return ___U3CUVsU3Ek__BackingField_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3CUVsU3Ek__BackingField_3() { return &___U3CUVsU3Ek__BackingField_3; }
	inline void set_U3CUVsU3Ek__BackingField_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3CUVsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUVsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675, ___U3CGameObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_4() const { return ___U3CGameObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_4() { return &___U3CGameObjectU3Ek__BackingField_4; }
	inline void set_U3CGameObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::startTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___startTransform_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__startTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<transform>5__2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtransformU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_includeSelf_3() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___includeSelf_3)); }
	inline bool get_includeSelf_3() const { return ___includeSelf_3; }
	inline bool* get_address_of_includeSelf_3() { return &___includeSelf_3; }
	inline void set_includeSelf_3(bool value)
	{
		___includeSelf_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_4() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___U3CU3E3__includeSelf_4)); }
	inline bool get_U3CU3E3__includeSelf_4() const { return ___U3CU3E3__includeSelf_4; }
	inline bool* get_address_of_U3CU3E3__includeSelf_4() { return &___U3CU3E3__includeSelf_4; }
	inline void set_U3CU3E3__includeSelf_4(bool value)
	{
		___U3CU3E3__includeSelf_4 = value;
	}

	inline static int32_t get_offset_of_startTransform_5() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___startTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_startTransform_5() const { return ___startTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_startTransform_5() { return &___startTransform_5; }
	inline void set_startTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___startTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__startTransform_6() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___U3CU3E3__startTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__startTransform_6() const { return ___U3CU3E3__startTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__startTransform_6() { return &___U3CU3E3__startTransform_6; }
	inline void set_U3CU3E3__startTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__startTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__startTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8, ___U3CtransformU3E5__2_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtransformU3E5__2_7() const { return ___U3CtransformU3E5__2_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtransformU3E5__2_7() { return &___U3CtransformU3E5__2_7; }
	inline void set_U3CtransformU3E5__2_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtransformU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * ___U3CtransformQueueU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___root_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_root_3() const { return ___root_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___U3CU3E3__root_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___ignore_5)); }
	inline RuntimeObject* get_ignore_5() const { return ___ignore_5; }
	inline RuntimeObject** get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(RuntimeObject* value)
	{
		___ignore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignore_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ignore_6() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___U3CU3E3__ignore_6)); }
	inline RuntimeObject* get_U3CU3E3__ignore_6() const { return ___U3CU3E3__ignore_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__ignore_6() { return &___U3CU3E3__ignore_6; }
	inline void set_U3CU3E3__ignore_6(RuntimeObject* value)
	{
		___U3CU3E3__ignore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__ignore_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformQueueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA, ___U3CtransformQueueU3E5__2_7)); }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * get_U3CtransformQueueU3E5__2_7() const { return ___U3CtransformQueueU3E5__2_7; }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 ** get_address_of_U3CtransformQueueU3E5__2_7() { return &___U3CtransformQueueU3E5__2_7; }
	inline void set_U3CtransformQueueU3E5__2_7(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * value)
	{
		___U3CtransformQueueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformQueueU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786  : public RuntimeObject
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::rootType
	Type_t * ___rootType_0;
	// System.Collections.Generic.List`1<System.Type> Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::results
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___results_1;
	// System.Action`1<System.Type> Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<>9__1
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * ___U3CU3E9__1_2;

public:
	inline static int32_t get_offset_of_rootType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786, ___rootType_0)); }
	inline Type_t * get_rootType_0() const { return ___rootType_0; }
	inline Type_t ** get_address_of_rootType_0() { return &___rootType_0; }
	inline void set_rootType_0(Type_t * value)
	{
		___rootType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootType_0), (void*)value);
	}

	inline static int32_t get_offset_of_results_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786, ___results_1)); }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * get_results_1() const { return ___results_1; }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 ** get_address_of_results_1() { return &___results_1; }
	inline void set_results_1(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * value)
	{
		___results_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786, ___U3CU3E9__1_2)); }
	inline Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Action_1_t87684BD53C55B58E136F9DA7668485600A621945 ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c
struct U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9
	U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__12_0
	Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * ___U3CU3E9__12_0_1;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__13_0
	Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * ___U3CU3E9__13_0_2;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__14_0
	Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * ___U3CU3E9__14_0_3;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__15_0
	Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * ___U3CU3E9__15_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields, ___U3CU3E9__13_0_2)); }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * get_U3CU3E9__13_0_2() const { return ___U3CU3E9__13_0_2; }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 ** get_address_of_U3CU3E9__13_0_2() { return &___U3CU3E9__13_0_2; }
	inline void set_U3CU3E9__13_0_2(Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * value)
	{
		___U3CU3E9__13_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields, ___U3CU3E9__14_0_3)); }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * get_U3CU3E9__14_0_3() const { return ___U3CU3E9__14_0_3; }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 ** get_address_of_U3CU3E9__14_0_3() { return &___U3CU3E9__14_0_3; }
	inline void set_U3CU3E9__14_0_3(Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * value)
	{
		___U3CU3E9__14_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields, ___U3CU3E9__15_0_4)); }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * get_U3CU3E9__15_0_4() const { return ___U3CU3E9__15_0_4; }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 ** get_address_of_U3CU3E9__15_0_4() { return &___U3CU3E9__15_0_4; }
	inline void set_U3CU3E9__15_0_4(Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * value)
	{
		___U3CU3E9__15_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_4), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>
struct ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90, ___m_task_0)); }
	inline Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t6299078D176E4C83778DF09816E38C75EFE60512 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::responseBody
	String_t* ___responseBody_1;
	// System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::responseData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___responseData_3;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Response::responseDataAction
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___responseDataAction_4;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t6299078D176E4C83778DF09816E38C75EFE60512, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_responseBody_1() { return static_cast<int32_t>(offsetof(Response_t6299078D176E4C83778DF09816E38C75EFE60512, ___responseBody_1)); }
	inline String_t* get_responseBody_1() const { return ___responseBody_1; }
	inline String_t** get_address_of_responseBody_1() { return &___responseBody_1; }
	inline void set_responseBody_1(String_t* value)
	{
		___responseBody_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBody_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyTask_2() { return static_cast<int32_t>(offsetof(Response_t6299078D176E4C83778DF09816E38C75EFE60512, ___responseBodyTask_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_responseBodyTask_2() const { return ___responseBodyTask_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_responseBodyTask_2() { return &___responseBodyTask_2; }
	inline void set_responseBodyTask_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___responseBodyTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyTask_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_3() { return static_cast<int32_t>(offsetof(Response_t6299078D176E4C83778DF09816E38C75EFE60512, ___responseData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_responseData_3() const { return ___responseData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_responseData_3() { return &___responseData_3; }
	inline void set_responseData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___responseData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseDataAction_4() { return static_cast<int32_t>(offsetof(Response_t6299078D176E4C83778DF09816E38C75EFE60512, ___responseDataAction_4)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_responseDataAction_4() const { return ___responseDataAction_4; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_responseDataAction_4() { return &___responseDataAction_4; }
	inline void set_responseDataAction_4(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___responseDataAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseDataAction_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Response_t6299078D176E4C83778DF09816E38C75EFE60512, ___U3CResponseCodeU3Ek__BackingField_5)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_5() const { return ___U3CResponseCodeU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_5() { return &___U3CResponseCodeU3Ek__BackingField_5; }
	inline void set_U3CResponseCodeU3Ek__BackingField_5(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t6299078D176E4C83778DF09816E38C75EFE60512_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___responseBody_1;
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t6299078D176E4C83778DF09816E38C75EFE60512_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___responseBody_1;
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils
struct ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A__padding[1];
	};

public:
};

struct ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_StaticFields
{
public:
	// System.Func`2<System.Byte[],System.Threading.Tasks.Task`1<System.String>> Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils::BytesToString
	Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED * ___BytesToString_0;

public:
	inline static int32_t get_offset_of_BytesToString_0() { return static_cast<int32_t>(offsetof(ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_StaticFields, ___BytesToString_0)); }
	inline Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED * get_BytesToString_0() const { return ___BytesToString_0; }
	inline Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED ** get_address_of_BytesToString_0() { return &___BytesToString_0; }
	inline void set_BytesToString_0(Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED * value)
	{
		___BytesToString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesToString_0), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82, ___m_task_2)); }
	inline Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>
struct ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3 
{
public:
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::m_completed
	bool ___m_completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::m_lowestBreakIteration
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;

public:
	inline static int32_t get_offset_of_m_completed_0() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_completed_0)); }
	inline bool get_m_completed_0() const { return ___m_completed_0; }
	inline bool* get_address_of_m_completed_0() { return &___m_completed_0; }
	inline void set_m_completed_0(bool value)
	{
		___m_completed_0 = value;
	}

	inline static int32_t get_offset_of_m_lowestBreakIteration_1() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_lowestBreakIteration_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_m_lowestBreakIteration_1() const { return ___m_lowestBreakIteration_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_m_lowestBreakIteration_1() { return &___m_lowestBreakIteration_1; }
	inline void set_m_lowestBreakIteration_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___m_lowestBreakIteration_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_pinvoke
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_com
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData
struct QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<Extents>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CExtentsU3Ek__BackingField_1;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<OcclusionMask>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3COcclusionMaskU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F, ___U3CExtentsU3Ek__BackingField_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CExtentsU3Ek__BackingField_1() const { return ___U3CExtentsU3Ek__BackingField_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CExtentsU3Ek__BackingField_1() { return &___U3CExtentsU3Ek__BackingField_1; }
	inline void set_U3CExtentsU3Ek__BackingField_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F, ___U3COcclusionMaskU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3COcclusionMaskU3Ek__BackingField_2() const { return ___U3COcclusionMaskU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3COcclusionMaskU3Ek__BackingField_2() { return &___U3COcclusionMaskU3Ek__BackingField_2; }
	inline void set_U3COcclusionMaskU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3COcclusionMaskU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COcclusionMaskU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F, ___U3CGameObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_3() const { return ___U3CGameObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_3() { return &___U3CGameObjectU3Ek__BackingField_3; }
	inline void set_U3CGameObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t6299078D176E4C83778DF09816E38C75EFE60512  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819, ___m_result_40)); }
	inline Response_t6299078D176E4C83778DF09816E38C75EFE60512  get_m_result_40() const { return ___m_result_40; }
	inline Response_t6299078D176E4C83778DF09816E38C75EFE60512 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Response_t6299078D176E4C83778DF09816E38C75EFE60512  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyTask_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseDataAction_4), (void*)NULL);
		#endif
	}
};

struct Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD39BA629282A531FE86438887057E2BB4456AF4 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t71EF39248E2B41B1C2830FC0337C9AA15D4ACE94 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFD39BA629282A531FE86438887057E2BB4456AF4 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFD39BA629282A531FE86438887057E2BB4456AF4 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFD39BA629282A531FE86438887057E2BB4456AF4 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t71EF39248E2B41B1C2830FC0337C9AA15D4ACE94 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t71EF39248E2B41B1C2830FC0337C9AA15D4ACE94 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t71EF39248E2B41B1C2830FC0337C9AA15D4ACE94 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5
struct U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::query
	String_t* ___query_2;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::jsonData
	String_t* ___jsonData_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::timeout
	int32_t ___timeout_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::readResponseData
	bool ___readResponseData_6;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_8;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::<>u__1
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_query_2() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___query_2)); }
	inline String_t* get_query_2() const { return ___query_2; }
	inline String_t** get_address_of_query_2() { return &___query_2; }
	inline void set_query_2(String_t* value)
	{
		___query_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_2), (void*)value);
	}

	inline static int32_t get_offset_of_jsonData_3() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___jsonData_3)); }
	inline String_t* get_jsonData_3() const { return ___jsonData_3; }
	inline String_t** get_address_of_jsonData_3() { return &___jsonData_3; }
	inline void set_jsonData_3(String_t* value)
	{
		___jsonData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonData_3), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___timeout_4)); }
	inline int32_t get_timeout_4() const { return ___timeout_4; }
	inline int32_t* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(int32_t value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___headers_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_5() const { return ___headers_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_5), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_6() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___readResponseData_6)); }
	inline bool get_readResponseData_6() const { return ___readResponseData_6; }
	inline bool* get_address_of_readResponseData_6() { return &___readResponseData_6; }
	inline void set_readResponseData_6(bool value)
	{
		___readResponseData_6 = value;
	}

	inline static int32_t get_offset_of_certificateHandler_7() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___certificateHandler_7)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_7() const { return ___certificateHandler_7; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_7() { return &___certificateHandler_7; }
	inline void set_certificateHandler_7(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_8() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___disposeCertificateHandlerOnDispose_8)); }
	inline bool get_disposeCertificateHandlerOnDispose_8() const { return ___disposeCertificateHandlerOnDispose_8; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_8() { return &___disposeCertificateHandlerOnDispose_8; }
	inline void set_disposeCertificateHandlerOnDispose_8(bool value)
	{
		___disposeCertificateHandlerOnDispose_8 = value;
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___U3CwebRequestU3E5__2_9)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_9() const { return ___U3CwebRequestU3E5__2_9; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_9() { return &___U3CwebRequestU3E5__2_9; }
	inline void set_U3CwebRequestU3E5__2_9(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6
struct U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::query
	String_t* ___query_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::bodyData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::timeout
	int32_t ___timeout_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::readResponseData
	bool ___readResponseData_6;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_8;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::<>u__1
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_query_2() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___query_2)); }
	inline String_t* get_query_2() const { return ___query_2; }
	inline String_t** get_address_of_query_2() { return &___query_2; }
	inline void set_query_2(String_t* value)
	{
		___query_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_2), (void*)value);
	}

	inline static int32_t get_offset_of_bodyData_3() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___bodyData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bodyData_3() const { return ___bodyData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bodyData_3() { return &___bodyData_3; }
	inline void set_bodyData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bodyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyData_3), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___timeout_4)); }
	inline int32_t get_timeout_4() const { return ___timeout_4; }
	inline int32_t* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(int32_t value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___headers_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_5() const { return ___headers_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_5), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_6() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___readResponseData_6)); }
	inline bool get_readResponseData_6() const { return ___readResponseData_6; }
	inline bool* get_address_of_readResponseData_6() { return &___readResponseData_6; }
	inline void set_readResponseData_6(bool value)
	{
		___readResponseData_6 = value;
	}

	inline static int32_t get_offset_of_certificateHandler_7() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___certificateHandler_7)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_7() const { return ___certificateHandler_7; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_7() { return &___certificateHandler_7; }
	inline void set_certificateHandler_7(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_8() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___disposeCertificateHandlerOnDispose_8)); }
	inline bool get_disposeCertificateHandlerOnDispose_8() const { return ___disposeCertificateHandlerOnDispose_8; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_8() { return &___disposeCertificateHandlerOnDispose_8; }
	inline void set_disposeCertificateHandlerOnDispose_8(bool value)
	{
		___disposeCertificateHandlerOnDispose_8 = value;
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___U3CwebRequestU3E5__2_9)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_9() const { return ___U3CwebRequestU3E5__2_9; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_9() { return &___U3CwebRequestU3E5__2_9; }
	inline void set_U3CwebRequestU3E5__2_9(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10
struct U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  ___U3CU3Et__builder_1;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::timeout
	int32_t ___timeout_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_4;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_6;
	// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass10_0 Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<>8__1
	U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * ___U3CU3E8__1_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::readResponseData
	bool ___readResponseData_8;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<responseCode>5__2
	int64_t ___U3CresponseCodeU3E5__2_9;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<downloadHandlerDataAction>5__3
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___U3CdownloadHandlerDataActionU3E5__3_10;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<>u__1
	RuntimeObject * ___U3CU3Eu__1_11;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<responseHeaders>5__4
	String_t* ___U3CresponseHeadersU3E5__4_12;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::<>u__2
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__2_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_webRequest_2() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___webRequest_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_webRequest_2() const { return ___webRequest_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_webRequest_2() { return &___webRequest_2; }
	inline void set_webRequest_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___webRequest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequest_2), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_3() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___timeout_3)); }
	inline int32_t get_timeout_3() const { return ___timeout_3; }
	inline int32_t* get_address_of_timeout_3() { return &___timeout_3; }
	inline void set_timeout_3(int32_t value)
	{
		___timeout_3 = value;
	}

	inline static int32_t get_offset_of_headers_4() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___headers_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_4() const { return ___headers_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_4() { return &___headers_4; }
	inline void set_headers_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_4), (void*)value);
	}

	inline static int32_t get_offset_of_certificateHandler_5() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___certificateHandler_5)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_5() const { return ___certificateHandler_5; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_5() { return &___certificateHandler_5; }
	inline void set_certificateHandler_5(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_6() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___disposeCertificateHandlerOnDispose_6)); }
	inline bool get_disposeCertificateHandlerOnDispose_6() const { return ___disposeCertificateHandlerOnDispose_6; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_6() { return &___disposeCertificateHandlerOnDispose_6; }
	inline void set_disposeCertificateHandlerOnDispose_6(bool value)
	{
		___disposeCertificateHandlerOnDispose_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E8__1_7() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CU3E8__1_7)); }
	inline U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * get_U3CU3E8__1_7() const { return ___U3CU3E8__1_7; }
	inline U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D ** get_address_of_U3CU3E8__1_7() { return &___U3CU3E8__1_7; }
	inline void set_U3CU3E8__1_7(U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * value)
	{
		___U3CU3E8__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_8() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___readResponseData_8)); }
	inline bool get_readResponseData_8() const { return ___readResponseData_8; }
	inline bool* get_address_of_readResponseData_8() { return &___readResponseData_8; }
	inline void set_readResponseData_8(bool value)
	{
		___readResponseData_8 = value;
	}

	inline static int32_t get_offset_of_U3CresponseCodeU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CresponseCodeU3E5__2_9)); }
	inline int64_t get_U3CresponseCodeU3E5__2_9() const { return ___U3CresponseCodeU3E5__2_9; }
	inline int64_t* get_address_of_U3CresponseCodeU3E5__2_9() { return &___U3CresponseCodeU3E5__2_9; }
	inline void set_U3CresponseCodeU3E5__2_9(int64_t value)
	{
		___U3CresponseCodeU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CdownloadHandlerDataActionU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CdownloadHandlerDataActionU3E5__3_10)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_U3CdownloadHandlerDataActionU3E5__3_10() const { return ___U3CdownloadHandlerDataActionU3E5__3_10; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_U3CdownloadHandlerDataActionU3E5__3_10() { return &___U3CdownloadHandlerDataActionU3E5__3_10; }
	inline void set_U3CdownloadHandlerDataActionU3E5__3_10(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___U3CdownloadHandlerDataActionU3E5__3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdownloadHandlerDataActionU3E5__3_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CU3Eu__1_11)); }
	inline RuntimeObject * get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(RuntimeObject * value)
	{
		___U3CU3Eu__1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseHeadersU3E5__4_12() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CresponseHeadersU3E5__4_12)); }
	inline String_t* get_U3CresponseHeadersU3E5__4_12() const { return ___U3CresponseHeadersU3E5__4_12; }
	inline String_t** get_address_of_U3CresponseHeadersU3E5__4_12() { return &___U3CresponseHeadersU3E5__4_12; }
	inline void set_U3CresponseHeadersU3E5__4_12(String_t* value)
	{
		___U3CresponseHeadersU3E5__4_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseHeadersU3E5__4_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_13() { return static_cast<int32_t>(offsetof(U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C, ___U3CU3Eu__2_13)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__2_13() const { return ___U3CU3Eu__2_13; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__2_13() { return &___U3CU3Eu__2_13; }
	inline void set_U3CU3Eu__2_13(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_13))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7
struct U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::query
	String_t* ___query_2;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::jsonData
	String_t* ___jsonData_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::timeout
	int32_t ___timeout_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::readResponseData
	bool ___readResponseData_6;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_8;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>u__1
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_query_2() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___query_2)); }
	inline String_t* get_query_2() const { return ___query_2; }
	inline String_t** get_address_of_query_2() { return &___query_2; }
	inline void set_query_2(String_t* value)
	{
		___query_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_2), (void*)value);
	}

	inline static int32_t get_offset_of_jsonData_3() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___jsonData_3)); }
	inline String_t* get_jsonData_3() const { return ___jsonData_3; }
	inline String_t** get_address_of_jsonData_3() { return &___jsonData_3; }
	inline void set_jsonData_3(String_t* value)
	{
		___jsonData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonData_3), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___timeout_4)); }
	inline int32_t get_timeout_4() const { return ___timeout_4; }
	inline int32_t* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(int32_t value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___headers_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_5() const { return ___headers_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_5), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_6() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___readResponseData_6)); }
	inline bool get_readResponseData_6() const { return ___readResponseData_6; }
	inline bool* get_address_of_readResponseData_6() { return &___readResponseData_6; }
	inline void set_readResponseData_6(bool value)
	{
		___readResponseData_6 = value;
	}

	inline static int32_t get_offset_of_certificateHandler_7() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___certificateHandler_7)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_7() const { return ___certificateHandler_7; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_7() { return &___certificateHandler_7; }
	inline void set_certificateHandler_7(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_8() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___disposeCertificateHandlerOnDispose_8)); }
	inline bool get_disposeCertificateHandlerOnDispose_8() const { return ___disposeCertificateHandlerOnDispose_8; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_8() { return &___disposeCertificateHandlerOnDispose_8; }
	inline void set_disposeCertificateHandlerOnDispose_8(bool value)
	{
		___disposeCertificateHandlerOnDispose_8 = value;
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___U3CwebRequestU3E5__2_9)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_9() const { return ___U3CwebRequestU3E5__2_9; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_9() { return &___U3CwebRequestU3E5__2_9; }
	inline void set_U3CwebRequestU3E5__2_9(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8
struct U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::query
	String_t* ___query_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::bodyData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::timeout
	int32_t ___timeout_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::readResponseData
	bool ___readResponseData_6;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_8;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>u__1
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_query_2() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___query_2)); }
	inline String_t* get_query_2() const { return ___query_2; }
	inline String_t** get_address_of_query_2() { return &___query_2; }
	inline void set_query_2(String_t* value)
	{
		___query_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_2), (void*)value);
	}

	inline static int32_t get_offset_of_bodyData_3() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___bodyData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bodyData_3() const { return ___bodyData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bodyData_3() { return &___bodyData_3; }
	inline void set_bodyData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bodyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyData_3), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___timeout_4)); }
	inline int32_t get_timeout_4() const { return ___timeout_4; }
	inline int32_t* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(int32_t value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___headers_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_5() const { return ___headers_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_5), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_6() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___readResponseData_6)); }
	inline bool get_readResponseData_6() const { return ___readResponseData_6; }
	inline bool* get_address_of_readResponseData_6() { return &___readResponseData_6; }
	inline void set_readResponseData_6(bool value)
	{
		___readResponseData_6 = value;
	}

	inline static int32_t get_offset_of_certificateHandler_7() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___certificateHandler_7)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_7() const { return ___certificateHandler_7; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_7() { return &___certificateHandler_7; }
	inline void set_certificateHandler_7(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_8() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___disposeCertificateHandlerOnDispose_8)); }
	inline bool get_disposeCertificateHandlerOnDispose_8() const { return ___disposeCertificateHandlerOnDispose_8; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_8() { return &___disposeCertificateHandlerOnDispose_8; }
	inline void set_disposeCertificateHandlerOnDispose_8(bool value)
	{
		___disposeCertificateHandlerOnDispose_8 = value;
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___U3CwebRequestU3E5__2_9)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_9() const { return ___U3CwebRequestU3E5__2_9; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_9() { return &___U3CwebRequestU3E5__2_9; }
	inline void set_U3CwebRequestU3E5__2_9(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d
struct U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::byteArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::<>u__1
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_byteArray_2() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0, ___byteArray_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteArray_2() const { return ___byteArray_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteArray_2() { return &___byteArray_2; }
	inline void set_byteArray_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0, ___U3CU3Eu__1_3)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Type>
struct Action_1_t87684BD53C55B58E136F9DA7668485600A621945  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Byte[],System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_gshared (Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_gshared (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_t6299078D176E4C83778DF09816E38C75EFE60512  TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_gshared (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, Response_t6299078D176E4C83778DF09816E38C75EFE60512  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_1_get_IsCompleted_mCB51339508621E7D374ACA4D51C2061D75DD658A_gshared_inline (SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_mEB94D7DB3B6C3F91853780AEE34854A7E256A89C_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, RuntimeObject ** ___awaiter0, U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * ___stateMachine1, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleCoroutineAwaiter_1_GetResult_m8647C7ED460169681163D5CADE4E6E9622A4E61D_gshared (SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m731747BECC5A5E4964DE2A74FECEFA70B5C49249_gshared (Func_3_tACC368EC9A28D7727F3365F446B437A702BEB0D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!1 System.Linq.Enumerable::Aggregate<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!1,System.Func`3<!!1,!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_Aggregate_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_m6FA91757AE860E59FBC3BDDFC5D5F45FBFDB53E9_gshared (RuntimeObject* ___source0, RuntimeObject * ___seed1, Func_3_tACC368EC9A28D7727F3365F446B437A702BEB0D8 * ___func2, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_mE465BDBEF8EE16FB699EE97D636A1F2E8C5D4088_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073_gshared (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::ForEach<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Action`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_ForEach_TisRuntimeObject_m6AC482A667FC3B700BAE052C1F6F4948484F596F_gshared (RuntimeObject* ___source0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___body1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m3BDF0018F841B43C5402D8A26757B1F8DA07D7B4_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Post_m661DC62ED36C9BA54246F5795DB8866BE2948739 (String_t* ___uri0, String_t* ___postData1, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::ProcessRequestAsync(UnityEngine.Networking.UnityWebRequest,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,UnityEngine.Networking.CertificateHandler,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * Rest_ProcessRequestAsync_m15CC6A0DB75CB79CCB9BAB8F8A935ACA7B38C293 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest0, int32_t ___timeout1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers2, bool ___readResponseData3, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler4, bool ___disposeCertificateHandlerOnDispose5, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
inline TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB (Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  (*) (Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 *, const RuntimeMethod*))Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365 (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *, U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
inline Response_t6299078D176E4C83778DF09816E38C75EFE60512  TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * __this, const RuntimeMethod* method)
{
	return ((  Response_t6299078D176E4C83778DF09816E38C75EFE60512  (*) (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15 (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, Response_t6299078D176E4C83778DF09816E38C75EFE60512  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, Response_t6299078D176E4C83778DF09816E38C75EFE60512 , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__5_MoveNext_m0B97ABB44A113AF55D99906F7302B3BC53718AC6 (U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966 (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__5_SetStateMachine_mAAB504CCE7394269697FD500FD5F4588B04A3BC8 (U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189 (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *, U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__6_MoveNext_m40AADD00B8123E1D0236B00F348447794CDF6C2F (U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__6_SetStateMachine_m742016FD8D720D05A7878CA3433526B8B1724D2D (U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m88CD5A9BF293BF31F838224A2C37943A768E51AB (U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetRequestHeader_mF9A1FBF5F39F5701281E4146EE93E83D33FB1240 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_certificateHandler(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation> Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * AwaiterExtensions_GetAwaiter_mEE90814945C5C1CB26C13928BCAAF4691D6C3E03 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>::get_IsCompleted()
inline bool SimpleCoroutineAwaiter_1_get_IsCompleted_mE5276F6D735993D67DD181BC3CB26C04144A5C0A_inline (SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A *, const RuntimeMethod*))SimpleCoroutineAwaiter_1_get_IsCompleted_mCB51339508621E7D374ACA4D51C2061D75DD658A_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m824273C59D257D1CD7CEED5785EC17DC53F159E1 (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A ** ___awaiter0, U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A **, U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_mEB94D7DB3B6C3F91853780AEE34854A7E256A89C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<UnityEngine.AsyncOperation>::GetResult()
inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SimpleCoroutineAwaiter_1_GetResult_m30EB93B3521290C61B97C22B2D6D32521E992E24 (SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * (*) (SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A *, const RuntimeMethod*))SimpleCoroutineAwaiter_1_GetResult_m8647C7ED460169681163D5CADE4E6E9622A4E61D_gshared)(__this, method);
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20 (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Response::.ctor(System.Boolean,System.String,System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_mAD4815B552099CC997D1CC2407BF6667FFBA379B (Response_t6299078D176E4C83778DF09816E38C75EFE60512 * __this, bool ___successful0, String_t* ___responseBody1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___responseData2, int64_t ___responseCode3, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Func`3<System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m262389389049814D9390FAF590DA1705C8C06002 (Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m731747BECC5A5E4964DE2A74FECEFA70B5C49249_gshared)(__this, ___object0, ___method1, method);
}
// !!1 System.Linq.Enumerable::Aggregate<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!1,System.Func`3<!!1,!!0,!!1>)
inline String_t* Enumerable_Aggregate_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisString_t_mADD43A0D983864DA5D5CCE373F856CACD43569B4 (RuntimeObject* ___source0, String_t* ___seed1, Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * ___func2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, String_t*, Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 *, const RuntimeMethod*))Enumerable_Aggregate_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_m6FA91757AE860E59FBC3BDDFC5D5F45FBFDB53E9_gshared)(___source0, ___seed1, ___func2, method);
}
// !0 System.Func`1<System.Byte[]>::Invoke()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// !1 System.Func`2<System.Byte[],System.Threading.Tasks.Task`1<System.String>>::Invoke(!0)
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF (Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___arg0, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3 (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_mE465BDBEF8EE16FB699EE97D636A1F2E8C5D4088_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Response::.ctor(System.Boolean,System.Func`1<System.Byte[]>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_mB4FEAF0C44E73E91102444B7A000E50FA5F9448B (Response_t6299078D176E4C83778DF09816E38C75EFE60512 * __this, bool ___successful0, Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___responseDataAction1, int64_t ___responseCode2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessRequestAsyncU3Ed__10_MoveNext_m20FC45B92022C3CE1500A37AE686A23B4409D18D (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessRequestAsyncU3Ed__10_SetStateMachine_m8BFDE604FB80F4C7701F07855F796272A63075FB (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA91C5DE79F2D9D04541E48CB218B5CE9CBD02E5F (String_t* ___uri0, String_t* ___bodyData1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *, U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_MoveNext_mC678C9821AEF0C5FCB36A313DB5B241C5FBA5213 (U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_SetStateMachine_m6CC2F01106B5040A46A7776F530E54A8A396B760 (U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4 (String_t* ___uri0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073 (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * __this, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * ___awaiter0, U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *, TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *, U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_MoveNext_m31760DE08FA2FD2D378BFC3ADCCACD5F567425ED (U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_SetStateMachine_mB9A7A3A571CE99D8B3DC4D0636E8032C1C135BDE (U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_m57B8EB790D8B6673BA840442B4F125121CC5456E (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2__ctor_m60FC6A64A8E4051828774AE6ADB51E58811A99BD (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumerableU3CUnityEngine_GameObjectU3E_GetEnumerator_mE7F5F764DD6319A9E927CF439E89A30CD64A9F25 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8__ctor_m8F279BC2D1302FD9EE0126A741E7D2E913355181 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m08B954249CBD1AC6DF29EEE9AEBE044CE118C977 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812 (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_m19A3D7C8248C02494FB71682425E90DF802F6037 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m6DC26B2E7D7D8F9DCD56C8F1AE97C103A145F667 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.MixedReality.Toolkit.AssemblyExtensions::GetLoadableTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssemblyExtensions_GetLoadableTypes_m893D06B818385E09FDE13E9401DAACC1284D9E0D (Assembly_t * ___this0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Type>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5 (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::ForEach<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Action`1<!!0>)
inline ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B (RuntimeObject* ___source0, Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * ___body1, const RuntimeMethod* method)
{
	return ((  ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  (*) (RuntimeObject*, Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *, const RuntimeMethod*))Parallel_ForEach_TisRuntimeObject_m6AC482A667FC3B700BAE052C1F6F4948484F596F_gshared)(___source0, ___body1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
inline void List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, Type_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE463167FE005F01357E435EB7381A9ECA89160FD (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m89FD24D1194F05A873DBACEB97995138CE6DF7A4 (U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.String>(System.Func`1<!!0>)
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963 (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.String>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>::GetAwaiter()
inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline (ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  (*) (ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3 (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m5CD0614666307B06F96046A849177353DB64EA09 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * ___awaiter0, U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m3BDF0018F841B43C5402D8A26757B1F8DA07D7B4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::GetResult()
inline String_t* ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587 (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m92FD55D285A1E510F882A5BD601615ADD2294AA1 (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m3BA490CD448DA6B2266F77DF5CCF509BE789412E (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__5_MoveNext_m0B97ABB44A113AF55D99906F7302B3BC53718AC6 (U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t6299078D176E4C83778DF09816E38C75EFE60512  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0020;
			}
		}

IL_000a:
		{
			// using (var webRequest = UnityWebRequest.Post(query, "POST"))
			String_t* L_2 = __this->get_query_2();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3;
			L_3 = UnityWebRequest_Post_m661DC62ED36C9BA54246F5795DB8866BE2948739(L_2, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_9(L_3);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_00db;
				}
			}

IL_0027:
			{
				// var data = new UTF8Encoding().GetBytes(jsonData);
				UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_5 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
				UTF8Encoding__ctor_mA3F21D41B65D155202345802A05761A4BC022888(L_5, /*hidden argument*/NULL);
				String_t* L_6 = __this->get_jsonData_3();
				NullCheck(L_5);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
				L_7 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
				V_2 = L_7;
				// webRequest.uploadHandler = new UploadHandlerRaw(data);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CwebRequestU3E5__2_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
				UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_10 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
				UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_10, L_9, /*hidden argument*/NULL);
				NullCheck(L_8);
				UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_8, L_10, /*hidden argument*/NULL);
				// webRequest.downloadHandler = new DownloadHandlerBuffer();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CwebRequestU3E5__2_9();
				DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_12 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
				DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_12, /*hidden argument*/NULL);
				NullCheck(L_11);
				UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_11, L_12, /*hidden argument*/NULL);
				// webRequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_13);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
				// webRequest.SetRequestHeader("Accept", "application/json");
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_14);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_14, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
				// return await ProcessRequestAsync(webRequest, timeout, headers, readResponseData, certificateHandler, disposeCertificateHandlerOnDispose);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CwebRequestU3E5__2_9();
				int32_t L_16 = __this->get_timeout_4();
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_17 = __this->get_headers_5();
				bool L_18 = __this->get_readResponseData_6();
				CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_19 = __this->get_certificateHandler_7();
				bool L_20 = __this->get_disposeCertificateHandlerOnDispose_8();
				Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * L_21;
				L_21 = Rest_ProcessRequestAsync_m15CC6A0DB75CB79CCB9BAB8F8A935ACA7B38C293(L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
				NullCheck(L_21);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_22;
				L_22 = Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB(L_21, /*hidden argument*/Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
				V_3 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00f7;
				}
			}

IL_00bb:
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_25 = V_3;
				__this->set_U3CU3Eu__1_10(L_25);
				AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_26, (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_3), (U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425_mE0943568E37BA4E68CD2A529739A84843AE2018D_RuntimeMethod_var);
				IL2CPP_LEAVE(0x146, FINALLY_0101);
			}

IL_00db:
			{
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_27 = __this->get_U3CU3Eu__1_10();
				V_3 = L_27;
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * L_28 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 ));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
			}

IL_00f7:
			{
				Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_30;
				L_30 = TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
				V_1 = L_30;
				IL2CPP_LEAVE(0x132, FINALLY_0101);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0101;
		}

FINALLY_0101:
		{ // begin finally (depth: 2)
			{
				int32_t L_31 = V_0;
				if ((((int32_t)L_31) >= ((int32_t)0)))
				{
					goto IL_0118;
				}
			}

IL_0105:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_32 = __this->get_U3CwebRequestU3E5__2_9();
				if (!L_32)
				{
					goto IL_0118;
				}
			}

IL_010d:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_33 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_33);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_33);
			}

IL_0118:
			{
				IL2CPP_END_FINALLY(257)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(257)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x146, IL_0146)
			IL2CPP_JUMP_TBL(0x132, IL_0132)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_34, L_35, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0146;
	} // end catch (depth: 1)

IL_0132:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_37 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_36, L_37, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
	}

IL_0146:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPostAsyncU3Ed__5_MoveNext_m0B97ABB44A113AF55D99906F7302B3BC53718AC6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * _thisAdjusted = reinterpret_cast<U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 *>(__this + _offset);
	U3CPostAsyncU3Ed__5_MoveNext_m0B97ABB44A113AF55D99906F7302B3BC53718AC6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__5_SetStateMachine_mAAB504CCE7394269697FD500FD5F4588B04A3BC8 (U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPostAsyncU3Ed__5_SetStateMachine_mAAB504CCE7394269697FD500FD5F4588B04A3BC8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 * _thisAdjusted = reinterpret_cast<U3CPostAsyncU3Ed__5_tF490B90320FD07FDF2056C2DD09654A7C660F425 *>(__this + _offset);
	U3CPostAsyncU3Ed__5_SetStateMachine_mAAB504CCE7394269697FD500FD5F4588B04A3BC8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__6_MoveNext_m40AADD00B8123E1D0236B00F348447794CDF6C2F (U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t6299078D176E4C83778DF09816E38C75EFE60512  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0020;
			}
		}

IL_000a:
		{
			// using (var webRequest = UnityWebRequest.Post(query, "POST"))
			String_t* L_2 = __this->get_query_2();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_3;
			L_3 = UnityWebRequest_Post_m661DC62ED36C9BA54246F5795DB8866BE2948739(L_2, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_9(L_3);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				if (!L_4)
				{
					goto IL_00ba;
				}
			}

IL_0027:
			{
				// webRequest.uploadHandler = new UploadHandlerRaw(bodyData);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = __this->get_U3CwebRequestU3E5__2_9();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_bodyData_3();
				UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_7 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
				UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_7, L_6, /*hidden argument*/NULL);
				NullCheck(L_5);
				UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_5, L_7, /*hidden argument*/NULL);
				// webRequest.downloadHandler = new DownloadHandlerBuffer();
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CwebRequestU3E5__2_9();
				DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_9 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
				DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_9, /*hidden argument*/NULL);
				NullCheck(L_8);
				UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_8, L_9, /*hidden argument*/NULL);
				// webRequest.SetRequestHeader("Content-Type", "application/octet-stream");
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_10);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_10, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral641255E7CDC790311725CCB47DB63D989117D244, /*hidden argument*/NULL);
				// return await ProcessRequestAsync(webRequest, timeout, headers, readResponseData, certificateHandler, disposeCertificateHandlerOnDispose);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CwebRequestU3E5__2_9();
				int32_t L_12 = __this->get_timeout_4();
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_13 = __this->get_headers_5();
				bool L_14 = __this->get_readResponseData_6();
				CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_15 = __this->get_certificateHandler_7();
				bool L_16 = __this->get_disposeCertificateHandlerOnDispose_8();
				Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * L_17;
				L_17 = Rest_ProcessRequestAsync_m15CC6A0DB75CB79CCB9BAB8F8A935ACA7B38C293(L_11, L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
				NullCheck(L_17);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_18;
				L_18 = Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB(L_17, /*hidden argument*/Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
				V_2 = L_18;
				bool L_19;
				L_19 = TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_00d6;
				}
			}

IL_009a:
			{
				int32_t L_20 = 0;
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_21 = V_2;
				__this->set_U3CU3Eu__1_10(L_21);
				AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_22, (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), (U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66_m466235D6596195186BFAE33F3BCD2450FC8FB189_RuntimeMethod_var);
				IL2CPP_LEAVE(0x123, FINALLY_00e0);
			}

IL_00ba:
			{
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_23 = __this->get_U3CU3Eu__1_10();
				V_2 = L_23;
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * L_24 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 ));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->set_U3CU3E1__state_0(L_25);
			}

IL_00d6:
			{
				Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_26;
				L_26 = TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
				V_1 = L_26;
				IL2CPP_LEAVE(0x10F, FINALLY_00e0);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e0;
		}

FINALLY_00e0:
		{ // begin finally (depth: 2)
			{
				int32_t L_27 = V_0;
				if ((((int32_t)L_27) >= ((int32_t)0)))
				{
					goto IL_00f7;
				}
			}

IL_00e4:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_28 = __this->get_U3CwebRequestU3E5__2_9();
				if (!L_28)
				{
					goto IL_00f7;
				}
			}

IL_00ec:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_29);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_29);
			}

IL_00f7:
			{
				IL2CPP_END_FINALLY(224)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(224)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x123, IL_0123)
			IL2CPP_JUMP_TBL(0x10F, IL_010f)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f8;
		}
		throw e;
	}

CATCH_00f8:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_30, L_31, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0123;
	} // end catch (depth: 1)

IL_010f:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_33 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
	}

IL_0123:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPostAsyncU3Ed__6_MoveNext_m40AADD00B8123E1D0236B00F348447794CDF6C2F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * _thisAdjusted = reinterpret_cast<U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 *>(__this + _offset);
	U3CPostAsyncU3Ed__6_MoveNext_m40AADD00B8123E1D0236B00F348447794CDF6C2F(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PostAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostAsyncU3Ed__6_SetStateMachine_m742016FD8D720D05A7878CA3433526B8B1724D2D (U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPostAsyncU3Ed__6_SetStateMachine_m742016FD8D720D05A7878CA3433526B8B1724D2D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 * _thisAdjusted = reinterpret_cast<U3CPostAsyncU3Ed__6_t76871CC8FF65A9EFAB11EEE9769C3E19F0232B66 *>(__this + _offset);
	U3CPostAsyncU3Ed__6_SetStateMachine_m742016FD8D720D05A7878CA3433526B8B1724D2D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessRequestAsyncU3Ed__10_MoveNext_m20FC45B92022C3CE1500A37AE686A23B4409D18D (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m824273C59D257D1CD7CEED5785EC17DC53F159E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Aggregate_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisString_t_mADD43A0D983864DA5D5CCE373F856CACD43569B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m262389389049814D9390FAF590DA1705C8C06002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_GetResult_m30EB93B3521290C61B97C22B2D6D32521E992E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_get_IsCompleted_mE5276F6D735993D67DD181BC3CB26C04144A5C0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CProcessRequestAsyncU3Eb__10_1_m2C20A6C3163FDEAC52ACF06811D26AF80B519C60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CProcessRequestAsyncU3Eb__0_m5A44194FE2B00EB850EB31C2DD9981121CD2F56C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51177093BF793A4BBA0B847FAFC2194F60D225A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0E566742BCCF8AB9E49D753FA21FC152F37FC89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6413F4C1B57BBCDE4356C33871D8839840581A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t6299078D176E4C83778DF09816E38C75EFE60512  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * V_5 = NULL;
	String_t* V_6 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * G_B28_0 = NULL;
	String_t* G_B28_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B28_2 = NULL;
	U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * G_B28_3 = NULL;
	Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * G_B27_0 = NULL;
	String_t* G_B27_1 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * G_B27_2 = NULL;
	U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * G_B27_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_019a;
				}
				case 1:
				{
					goto IL_02ed;
				}
				case 2:
				{
					goto IL_03b8;
				}
			}
		}

IL_0019:
		{
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_2 = (U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass10_0__ctor_m88CD5A9BF293BF31F838224A2C37943A768E51AB(L_2, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_7(L_2);
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_3 = __this->get_U3CU3E8__1_7();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4 = __this->get_webRequest_2();
			NullCheck(L_3);
			L_3->set_webRequest_0(L_4);
			// if (timeout > 0)
			int32_t L_5 = __this->get_timeout_3();
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0054;
			}
		}

IL_003e:
		{
			// webRequest.timeout = timeout;
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_6 = __this->get_U3CU3E8__1_7();
			NullCheck(L_6);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = L_6->get_webRequest_0();
			int32_t L_8 = __this->get_timeout_3();
			NullCheck(L_7);
			UnityWebRequest_set_timeout_m0989005A41FB3E2D0E31CBED68C441798E2E7F90(L_7, L_8, /*hidden argument*/NULL);
		}

IL_0054:
		{
			// if (headers != null)
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = __this->get_headers_4();
			if (!L_9)
			{
				goto IL_00ad;
			}
		}

IL_005c:
		{
			// foreach (var header in headers)
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = __this->get_headers_4();
			NullCheck(L_10);
			Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_11;
			L_11 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
			V_2 = L_11;
		}

IL_0068:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0090;
			}

IL_006a:
			{
				// foreach (var header in headers)
				KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_12;
				L_12 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
				V_3 = L_12;
				// webRequest.SetRequestHeader(header.Key, header.Value);
				U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_13 = __this->get_U3CU3E8__1_7();
				NullCheck(L_13);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = L_13->get_webRequest_0();
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
				String_t* L_16;
				L_16 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
				NullCheck(L_14);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_14, L_15, L_16, /*hidden argument*/NULL);
			}

IL_0090:
			{
				// foreach (var header in headers)
				bool L_17;
				L_17 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_006a;
				}
			}

IL_0099:
			{
				IL2CPP_LEAVE(0xAD, FINALLY_009b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009b;
		}

FINALLY_009b:
		{ // begin finally (depth: 2)
			{
				int32_t L_18 = V_0;
				if ((((int32_t)L_18) >= ((int32_t)0)))
				{
					goto IL_00ac;
				}
			}

IL_009f:
			{
				Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
			}

IL_00ac:
			{
				IL2CPP_END_FINALLY(155)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(155)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		}

IL_00ad:
		{
			// if (webRequest.method == UnityWebRequest.kHttpVerbPOST ||
			//     webRequest.method == UnityWebRequest.kHttpVerbPUT)
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_19 = __this->get_U3CU3E8__1_7();
			NullCheck(L_19);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = L_19->get_webRequest_0();
			NullCheck(L_20);
			String_t* L_21;
			L_21 = UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F(L_20, /*hidden argument*/NULL);
			bool L_22;
			L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
			if (L_22)
			{
				goto IL_00e5;
			}
		}

IL_00c9:
		{
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_23 = __this->get_U3CU3E8__1_7();
			NullCheck(L_23);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_24 = L_23->get_webRequest_0();
			NullCheck(L_24);
			String_t* L_25;
			L_25 = UnityWebRequest_get_method_mDEB685B259E296FAE2484B504108AA384A3E0A4F(L_24, /*hidden argument*/NULL);
			bool L_26;
			L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_012a;
			}
		}

IL_00e5:
		{
			// string contentType = webRequest.GetRequestHeader("Content-Type");
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_27 = __this->get_U3CU3E8__1_7();
			NullCheck(L_27);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_28 = L_27->get_webRequest_0();
			NullCheck(L_28);
			String_t* L_29;
			L_29 = UnityWebRequest_GetRequestHeader_mF9A1FBF5F39F5701281E4146EE93E83D33FB1240(L_28, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, /*hidden argument*/NULL);
			V_4 = L_29;
			// if (contentType != null)
			String_t* L_30 = V_4;
			if (!L_30)
			{
				goto IL_012a;
			}
		}

IL_0100:
		{
			// contentType = contentType.Replace("\"", "");
			String_t* L_31 = V_4;
			NullCheck(L_31);
			String_t* L_32;
			L_32 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_31, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			V_4 = L_32;
			// webRequest.SetRequestHeader("Content-Type", contentType);
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_33 = __this->get_U3CU3E8__1_7();
			NullCheck(L_33);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_34 = L_33->get_webRequest_0();
			String_t* L_35 = V_4;
			NullCheck(L_34);
			UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_34, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_35, /*hidden argument*/NULL);
		}

IL_012a:
		{
			// webRequest.certificateHandler = certificateHandler;
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_36 = __this->get_U3CU3E8__1_7();
			NullCheck(L_36);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_37 = L_36->get_webRequest_0();
			CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_38 = __this->get_certificateHandler_5();
			NullCheck(L_37);
			UnityWebRequest_set_certificateHandler_mBB6DDBB83B2639B1D47EFCDDDCC56E1217D139F7(L_37, L_38, /*hidden argument*/NULL);
			// webRequest.disposeCertificateHandlerOnDispose = disposeCertificateHandlerOnDispose;
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_39 = __this->get_U3CU3E8__1_7();
			NullCheck(L_39);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_40 = L_39->get_webRequest_0();
			bool L_41 = __this->get_disposeCertificateHandlerOnDispose_6();
			NullCheck(L_40);
			UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline(L_40, L_41, /*hidden argument*/NULL);
			// await webRequest.SendWebRequest();
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_42 = __this->get_U3CU3E8__1_7();
			NullCheck(L_42);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_43 = L_42->get_webRequest_0();
			NullCheck(L_43);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_44;
			L_44 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_43, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * L_45;
			L_45 = AwaiterExtensions_GetAwaiter_mEE90814945C5C1CB26C13928BCAAF4691D6C3E03(L_44, /*hidden argument*/NULL);
			V_5 = L_45;
			SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * L_46 = V_5;
			NullCheck(L_46);
			bool L_47;
			L_47 = SimpleCoroutineAwaiter_1_get_IsCompleted_mE5276F6D735993D67DD181BC3CB26C04144A5C0A_inline(L_46, /*hidden argument*/SimpleCoroutineAwaiter_1_get_IsCompleted_mE5276F6D735993D67DD181BC3CB26C04144A5C0A_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_01b7;
			}
		}

IL_0176:
		{
			int32_t L_48 = 0;
			V_0 = L_48;
			__this->set_U3CU3E1__state_0(L_48);
			SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * L_49 = V_5;
			__this->set_U3CU3Eu__1_11(L_49);
			AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_50 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m824273C59D257D1CD7CEED5785EC17DC53F159E1((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_50, (SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A **)(&V_5), (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m824273C59D257D1CD7CEED5785EC17DC53F159E1_RuntimeMethod_var);
			goto IL_0458;
		}

IL_019a:
		{
			RuntimeObject * L_51 = __this->get_U3CU3Eu__1_11();
			V_5 = ((SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A *)CastclassClass((RuntimeObject*)L_51, SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_11(NULL);
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->set_U3CU3E1__state_0(L_52);
		}

IL_01b7:
		{
			SimpleCoroutineAwaiter_1_tCA2627A4D0BEA5D2A298D554776A1F66C560FA2A * L_53 = V_5;
			NullCheck(L_53);
			AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_54;
			L_54 = SimpleCoroutineAwaiter_1_GetResult_m30EB93B3521290C61B97C22B2D6D32521E992E24(L_53, /*hidden argument*/SimpleCoroutineAwaiter_1_GetResult_m30EB93B3521290C61B97C22B2D6D32521E992E24_RuntimeMethod_var);
			// long responseCode = webRequest.responseCode;
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_55 = __this->get_U3CU3E8__1_7();
			NullCheck(L_55);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_56 = L_55->get_webRequest_0();
			NullCheck(L_56);
			int64_t L_57;
			L_57 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_56, /*hidden argument*/NULL);
			__this->set_U3CresponseCodeU3E5__2_9(L_57);
			// Func<byte[]> downloadHandlerDataAction = () => webRequest.downloadHandler?.data;
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_58 = __this->get_U3CU3E8__1_7();
			Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_59 = (Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *)il2cpp_codegen_object_new(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473_il2cpp_TypeInfo_var);
			Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20(L_59, L_58, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CProcessRequestAsyncU3Eb__0_m5A44194FE2B00EB850EB31C2DD9981121CD2F56C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m75C930823750A53153FBC8864D8A23F358DCDD20_RuntimeMethod_var);
			__this->set_U3CdownloadHandlerDataActionU3E5__3_10(L_59);
			// if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_60 = __this->get_U3CU3E8__1_7();
			NullCheck(L_60);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_61 = L_60->get_webRequest_0();
			NullCheck(L_61);
			int32_t L_62;
			L_62 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_61, /*hidden argument*/NULL);
			if ((((int32_t)L_62) == ((int32_t)2)))
			{
				goto IL_0215;
			}
		}

IL_01ff:
		{
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_63 = __this->get_U3CU3E8__1_7();
			NullCheck(L_63);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_64 = L_63->get_webRequest_0();
			NullCheck(L_64);
			int32_t L_65;
			L_65 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_64, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_65) == ((uint32_t)3))))
			{
				goto IL_0364;
			}
		}

IL_0215:
		{
			// if (responseCode == 401) { return new Response(false, "Invalid Credentials", null, responseCode); }
			int64_t L_66 = __this->get_U3CresponseCodeU3E5__2_9();
			if ((!(((uint64_t)L_66) == ((uint64_t)((int64_t)((int64_t)((int32_t)401)))))))
			{
				goto IL_023b;
			}
		}

IL_0223:
		{
			// if (responseCode == 401) { return new Response(false, "Invalid Credentials", null, responseCode); }
			int64_t L_67 = __this->get_U3CresponseCodeU3E5__2_9();
			Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_68;
			memset((&L_68), 0, sizeof(L_68));
			Response__ctor_mAD4815B552099CC997D1CC2407BF6667FFBA379B((&L_68), (bool)0, _stringLiteralFC6413F4C1B57BBCDE4356C33871D8839840581A, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, L_67, /*hidden argument*/NULL);
			V_1 = L_68;
			goto IL_0436;
		}

IL_023b:
		{
			// if (webRequest.GetResponseHeaders() == null)
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_69 = __this->get_U3CU3E8__1_7();
			NullCheck(L_69);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_70 = L_69->get_webRequest_0();
			NullCheck(L_70);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_71;
			L_71 = UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23(L_70, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0265;
			}
		}

IL_024d:
		{
			// return new Response(false, "Device Unavailable", null, responseCode);
			int64_t L_72 = __this->get_U3CresponseCodeU3E5__2_9();
			Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_73;
			memset((&L_73), 0, sizeof(L_73));
			Response__ctor_mAD4815B552099CC997D1CC2407BF6667FFBA379B((&L_73), (bool)0, _stringLiteral51177093BF793A4BBA0B847FAFC2194F60D225A3, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, L_72, /*hidden argument*/NULL);
			V_1 = L_73;
			goto IL_0436;
		}

IL_0265:
		{
			// string responseHeaders = webRequest.GetResponseHeaders().Aggregate(string.Empty, (current, header) => $"\n{header.Key}: {header.Value}");
			U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D * L_74 = __this->get_U3CU3E8__1_7();
			NullCheck(L_74);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_75 = L_74->get_webRequest_0();
			NullCheck(L_75);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_76;
			L_76 = UnityWebRequest_GetResponseHeaders_mD42F316C2E0B8A8AD0F9E6F3A3D4103CAB92FB23(L_75, /*hidden argument*/NULL);
			String_t* L_77 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var);
			Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * L_78 = ((U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var))->get_U3CU3E9__10_1_1();
			Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * L_79 = L_78;
			G_B27_0 = L_79;
			G_B27_1 = L_77;
			G_B27_2 = L_76;
			G_B27_3 = __this;
			if (L_79)
			{
				G_B28_0 = L_79;
				G_B28_1 = L_77;
				G_B28_2 = L_76;
				G_B28_3 = __this;
				goto IL_029a;
			}
		}

IL_0283:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var);
			U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6 * L_80 = ((U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * L_81 = (Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 *)il2cpp_codegen_object_new(Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116_il2cpp_TypeInfo_var);
			Func_3__ctor_m262389389049814D9390FAF590DA1705C8C06002(L_81, L_80, (intptr_t)((intptr_t)U3CU3Ec_U3CProcessRequestAsyncU3Eb__10_1_m2C20A6C3163FDEAC52ACF06811D26AF80B519C60_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m262389389049814D9390FAF590DA1705C8C06002_RuntimeMethod_var);
			Func_3_tCE83D63C50499718D097C87B778CCCF4D5FBB116 * L_82 = L_81;
			((U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD60903352A8DE2FEF12A949BC4E3F0F253EB59D6_il2cpp_TypeInfo_var))->set_U3CU3E9__10_1_1(L_82);
			G_B28_0 = L_82;
			G_B28_1 = G_B27_1;
			G_B28_2 = G_B27_2;
			G_B28_3 = G_B27_3;
		}

IL_029a:
		{
			String_t* L_83;
			L_83 = Enumerable_Aggregate_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisString_t_mADD43A0D983864DA5D5CCE373F856CACD43569B4(G_B28_2, G_B28_1, G_B28_0, /*hidden argument*/Enumerable_Aggregate_TisKeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_TisString_t_mADD43A0D983864DA5D5CCE373F856CACD43569B4_RuntimeMethod_var);
			G_B28_3->set_U3CresponseHeadersU3E5__4_12(L_83);
			// string downloadHandlerText = await ResponseUtils.BytesToString(downloadHandlerDataAction.Invoke());
			IL2CPP_RUNTIME_CLASS_INIT(ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_il2cpp_TypeInfo_var);
			Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED * L_84 = ((ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_StaticFields*)il2cpp_codegen_static_fields_for(ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_il2cpp_TypeInfo_var))->get_BytesToString_0();
			Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_85 = __this->get_U3CdownloadHandlerDataActionU3E5__3_10();
			NullCheck(L_85);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86;
			L_86 = Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB(L_85, /*hidden argument*/Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB_RuntimeMethod_var);
			NullCheck(L_84);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_87;
			L_87 = Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF(L_84, L_86, /*hidden argument*/Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF_RuntimeMethod_var);
			NullCheck(L_87);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_88;
			L_88 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_87, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_7 = L_88;
			bool L_89;
			L_89 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_89)
			{
				goto IL_030a;
			}
		}

IL_02c9:
		{
			int32_t L_90 = 1;
			V_0 = L_90;
			__this->set_U3CU3E1__state_0(L_90);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_91 = V_7;
			__this->set_U3CU3Eu__2_13(L_91);
			AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_92 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_92, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3_RuntimeMethod_var);
			goto IL_0458;
		}

IL_02ed:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_93 = __this->get_U3CU3Eu__2_13();
			V_7 = L_93;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_94 = __this->get_address_of_U3CU3Eu__2_13();
			il2cpp_codegen_initobj(L_94, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_95 = (-1);
			V_0 = L_95;
			__this->set_U3CU3E1__state_0(L_95);
		}

IL_030a:
		{
			String_t* L_96;
			L_96 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_6 = L_96;
			// Debug.LogError($"REST Error: {responseCode}\n{downloadHandlerText}{responseHeaders}");
			int64_t L_97 = __this->get_U3CresponseCodeU3E5__2_9();
			int64_t L_98 = L_97;
			RuntimeObject * L_99 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_98);
			String_t* L_100 = V_6;
			String_t* L_101 = __this->get_U3CresponseHeadersU3E5__4_12();
			String_t* L_102;
			L_102 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralB0E566742BCCF8AB9E49D753FA21FC152F37FC89, L_99, L_100, L_101, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_102, /*hidden argument*/NULL);
			// return new Response(false, $"{responseHeaders}\n{downloadHandlerText}", downloadHandlerDataAction.Invoke(), responseCode);
			String_t* L_103 = __this->get_U3CresponseHeadersU3E5__4_12();
			String_t* L_104 = V_6;
			String_t* L_105;
			L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_103, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_104, /*hidden argument*/NULL);
			Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_106 = __this->get_U3CdownloadHandlerDataActionU3E5__3_10();
			NullCheck(L_106);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107;
			L_107 = Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB(L_106, /*hidden argument*/Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB_RuntimeMethod_var);
			int64_t L_108 = __this->get_U3CresponseCodeU3E5__2_9();
			Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_109;
			memset((&L_109), 0, sizeof(L_109));
			Response__ctor_mAD4815B552099CC997D1CC2407BF6667FFBA379B((&L_109), (bool)0, L_105, L_107, L_108, /*hidden argument*/NULL);
			V_1 = L_109;
			goto IL_0436;
		}

IL_0364:
		{
			// if (readResponseData)
			bool L_110 = __this->get_readResponseData_8();
			if (!L_110)
			{
				goto IL_03fa;
			}
		}

IL_036f:
		{
			// return new Response(true, await ResponseUtils.BytesToString(downloadHandlerDataAction.Invoke()), downloadHandlerDataAction.Invoke(), responseCode);
			IL2CPP_RUNTIME_CLASS_INIT(ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_il2cpp_TypeInfo_var);
			Func_2_t07E5CAB1F52F8A5BDB584056A9CD893687E72FED * L_111 = ((ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_StaticFields*)il2cpp_codegen_static_fields_for(ResponseUtils_t11800F85A5C5374D5CEE219A5C69B8E70F45823A_il2cpp_TypeInfo_var))->get_BytesToString_0();
			Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_112 = __this->get_U3CdownloadHandlerDataActionU3E5__3_10();
			NullCheck(L_112);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_113;
			L_113 = Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB(L_112, /*hidden argument*/Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB_RuntimeMethod_var);
			NullCheck(L_111);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_114;
			L_114 = Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF(L_111, L_113, /*hidden argument*/Func_2_Invoke_mADC544626C96BDA93504072C5669B37D4A5A93BF_RuntimeMethod_var);
			NullCheck(L_114);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_115;
			L_115 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_114, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_7 = L_115;
			bool L_116;
			L_116 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_116)
			{
				goto IL_03d5;
			}
		}

IL_0394:
		{
			int32_t L_117 = 2;
			V_0 = L_117;
			__this->set_U3CU3E1__state_0(L_117);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_118 = V_7;
			__this->set_U3CU3Eu__2_13(L_118);
			AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_119 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_119, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C_m78BBEE5D48C3C4D0EFAA15D88C8F23C601047BE3_RuntimeMethod_var);
			goto IL_0458;
		}

IL_03b8:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_120 = __this->get_U3CU3Eu__2_13();
			V_7 = L_120;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_121 = __this->get_address_of_U3CU3Eu__2_13();
			il2cpp_codegen_initobj(L_121, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_122 = (-1);
			V_0 = L_122;
			__this->set_U3CU3E1__state_0(L_122);
		}

IL_03d5:
		{
			String_t* L_123;
			L_123 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_8 = L_123;
			String_t* L_124 = V_8;
			Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_125 = __this->get_U3CdownloadHandlerDataActionU3E5__3_10();
			NullCheck(L_125);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_126;
			L_126 = Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB(L_125, /*hidden argument*/Func_1_Invoke_m9345007B9F5542C50CA9B3361496EE7870A546FB_RuntimeMethod_var);
			int64_t L_127 = __this->get_U3CresponseCodeU3E5__2_9();
			Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_128;
			memset((&L_128), 0, sizeof(L_128));
			Response__ctor_mAD4815B552099CC997D1CC2407BF6667FFBA379B((&L_128), (bool)1, L_124, L_126, L_127, /*hidden argument*/NULL);
			V_1 = L_128;
			goto IL_0436;
		}

IL_03fa:
		{
			// return new Response(true, downloadHandlerDataAction, responseCode);
			Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * L_129 = __this->get_U3CdownloadHandlerDataActionU3E5__3_10();
			int64_t L_130 = __this->get_U3CresponseCodeU3E5__2_9();
			Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_131;
			memset((&L_131), 0, sizeof(L_131));
			Response__ctor_mB4FEAF0C44E73E91102444B7A000E50FA5F9448B((&L_131), (bool)1, L_129, L_130, /*hidden argument*/NULL);
			V_1 = L_131;
			goto IL_0436;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_040f;
		}
		throw e;
	}

CATCH_040f:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_7((U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D *)NULL);
		__this->set_U3CdownloadHandlerDataActionU3E5__3_10((Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *)NULL);
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_132 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_133 = V_9;
		AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_132, L_133, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0458;
	} // end catch (depth: 1)

IL_0436:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_7((U3CU3Ec__DisplayClass10_0_t530E3A97ACEB4534A95AD7520D6F61033CF6283D *)NULL);
		__this->set_U3CdownloadHandlerDataActionU3E5__3_10((Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 *)NULL);
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_134 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_135 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_134, L_135, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
	}

IL_0458:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CProcessRequestAsyncU3Ed__10_MoveNext_m20FC45B92022C3CE1500A37AE686A23B4409D18D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * _thisAdjusted = reinterpret_cast<U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *>(__this + _offset);
	U3CProcessRequestAsyncU3Ed__10_MoveNext_m20FC45B92022C3CE1500A37AE686A23B4409D18D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<ProcessRequestAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessRequestAsyncU3Ed__10_SetStateMachine_m8BFDE604FB80F4C7701F07855F796272A63075FB (U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CProcessRequestAsyncU3Ed__10_SetStateMachine_m8BFDE604FB80F4C7701F07855F796272A63075FB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C * _thisAdjusted = reinterpret_cast<U3CProcessRequestAsyncU3Ed__10_tC138546550CBE202AF2430ABCD117130F2AA484C *>(__this + _offset);
	U3CProcessRequestAsyncU3Ed__10_SetStateMachine_m8BFDE604FB80F4C7701F07855F796272A63075FB(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_MoveNext_mC678C9821AEF0C5FCB36A313DB5B241C5FBA5213 (U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t6299078D176E4C83778DF09816E38C75EFE60512  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0021;
			}
		}

IL_000a:
		{
			// using (var webRequest = UnityWebRequest.Put(query, jsonData))
			String_t* L_2 = __this->get_query_2();
			String_t* L_3 = __this->get_jsonData_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4;
			L_4 = UnityWebRequest_Put_mA91C5DE79F2D9D04541E48CB218B5CE9CBD02E5F(L_2, L_3, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_9(L_4);
		}

IL_0021:
		{
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0092;
				}
			}

IL_0025:
			{
				// webRequest.SetRequestHeader("Content-Type", "application/json");
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_6);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_6, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
				// return await ProcessRequestAsync(webRequest, timeout, headers, readResponseData, certificateHandler, disposeCertificateHandlerOnDispose);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwebRequestU3E5__2_9();
				int32_t L_8 = __this->get_timeout_4();
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = __this->get_headers_5();
				bool L_10 = __this->get_readResponseData_6();
				CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_11 = __this->get_certificateHandler_7();
				bool L_12 = __this->get_disposeCertificateHandlerOnDispose_8();
				Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * L_13;
				L_13 = Rest_ProcessRequestAsync_m15CC6A0DB75CB79CCB9BAB8F8A935ACA7B38C293(L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
				NullCheck(L_13);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_14;
				L_14 = Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB(L_13, /*hidden argument*/Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00ae;
				}
			}

IL_0072:
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_17 = V_2;
				__this->set_U3CU3Eu__1_10(L_17);
				AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_18, (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), (U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A_m4FE4BC0A9DBA9153CCB70B9EAC67681E22FA052E_RuntimeMethod_var);
				IL2CPP_LEAVE(0xFB, FINALLY_00b8);
			}

IL_0092:
			{
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_19 = __this->get_U3CU3Eu__1_10();
				V_2 = L_19;
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * L_20 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 ));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
			}

IL_00ae:
			{
				Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_22;
				L_22 = TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
				V_1 = L_22;
				IL2CPP_LEAVE(0xE7, FINALLY_00b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00b8;
		}

FINALLY_00b8:
		{ // begin finally (depth: 2)
			{
				int32_t L_23 = V_0;
				if ((((int32_t)L_23) >= ((int32_t)0)))
				{
					goto IL_00cf;
				}
			}

IL_00bc:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_24 = __this->get_U3CwebRequestU3E5__2_9();
				if (!L_24)
				{
					goto IL_00cf;
				}
			}

IL_00c4:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_25 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_25);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
			}

IL_00cf:
			{
				IL2CPP_END_FINALLY(184)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(184)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xFB, IL_00fb)
			IL2CPP_JUMP_TBL(0xE7, IL_00e7)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d0;
		}
		throw e;
	}

CATCH_00d0:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_27 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_26, L_27, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fb;
	} // end catch (depth: 1)

IL_00e7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_29 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_28, L_29, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__7_MoveNext_mC678C9821AEF0C5FCB36A313DB5B241C5FBA5213_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A *>(__this + _offset);
	U3CPutAsyncU3Ed__7_MoveNext_mC678C9821AEF0C5FCB36A313DB5B241C5FBA5213(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_SetStateMachine_m6CC2F01106B5040A46A7776F530E54A8A396B760 (U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__7_SetStateMachine_m6CC2F01106B5040A46A7776F530E54A8A396B760_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__7_t801E8851E28B9BC3CE498EE59B847DA83DDD817A *>(__this + _offset);
	U3CPutAsyncU3Ed__7_SetStateMachine_m6CC2F01106B5040A46A7776F530E54A8A396B760(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_MoveNext_m31760DE08FA2FD2D378BFC3ADCCACD5F567425ED (U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t6299078D176E4C83778DF09816E38C75EFE60512  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0021;
			}
		}

IL_000a:
		{
			// using (var webRequest = UnityWebRequest.Put(query, bodyData))
			String_t* L_2 = __this->get_query_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_bodyData_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4;
			L_4 = UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4(L_2, L_3, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_9(L_4);
		}

IL_0021:
		{
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0092;
				}
			}

IL_0025:
			{
				// webRequest.SetRequestHeader("Content-Type", "application/octet-stream");
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_6);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_6, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral641255E7CDC790311725CCB47DB63D989117D244, /*hidden argument*/NULL);
				// return await ProcessRequestAsync(webRequest, timeout, headers, readResponseData, certificateHandler, disposeCertificateHandlerOnDispose);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwebRequestU3E5__2_9();
				int32_t L_8 = __this->get_timeout_4();
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = __this->get_headers_5();
				bool L_10 = __this->get_readResponseData_6();
				CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_11 = __this->get_certificateHandler_7();
				bool L_12 = __this->get_disposeCertificateHandlerOnDispose_8();
				Task_1_t257A31097DBB00D178A4F1016BD3CD2CC8EDE819 * L_13;
				L_13 = Rest_ProcessRequestAsync_m15CC6A0DB75CB79CCB9BAB8F8A935ACA7B38C293(L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
				NullCheck(L_13);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_14;
				L_14 = Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB(L_13, /*hidden argument*/Task_1_GetAwaiter_mC42757E35D2F564A4BE8C012A362A1D1347CC3CB_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4FEF9613DB16972888CD0767B58451656ECFE365_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00ae;
				}
			}

IL_0072:
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_17 = V_2;
				__this->set_U3CU3Eu__1_10(L_17);
				AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_18, (TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), (U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90_TisU3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A_m8D31678DFAAABA354EA891E136A31FB7FE8E0073_RuntimeMethod_var);
				IL2CPP_LEAVE(0xFB, FINALLY_00b8);
			}

IL_0092:
			{
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90  L_19 = __this->get_U3CU3Eu__1_10();
				V_2 = L_19;
				TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 * L_20 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 ));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
			}

IL_00ae:
			{
				Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_22;
				L_22 = TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B((TaskAwaiter_1_tC1A5694AB9185E61DC98348BC125EE1DD2FA4A90 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1AA07E91B917F840125C5ABF670DC84B42BBE85B_RuntimeMethod_var);
				V_1 = L_22;
				IL2CPP_LEAVE(0xE7, FINALLY_00b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00b8;
		}

FINALLY_00b8:
		{ // begin finally (depth: 2)
			{
				int32_t L_23 = V_0;
				if ((((int32_t)L_23) >= ((int32_t)0)))
				{
					goto IL_00cf;
				}
			}

IL_00bc:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_24 = __this->get_U3CwebRequestU3E5__2_9();
				if (!L_24)
				{
					goto IL_00cf;
				}
			}

IL_00c4:
			{
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_25 = __this->get_U3CwebRequestU3E5__2_9();
				NullCheck(L_25);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
			}

IL_00cf:
			{
				IL2CPP_END_FINALLY(184)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(184)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xFB, IL_00fb)
			IL2CPP_JUMP_TBL(0xE7, IL_00e7)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d0;
		}
		throw e;
	}

CATCH_00d0:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_27 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_26, L_27, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD9B4A8F1B3E504E87C1CFD3BE68D26E5068206FE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fb;
	} // end catch (depth: 1)

IL_00e7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t6299078D176E4C83778DF09816E38C75EFE60512  L_29 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_28, L_29, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m28EB801ABCD68C76A2E493DA264E6255CEE00C15_RuntimeMethod_var);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__8_MoveNext_m31760DE08FA2FD2D378BFC3ADCCACD5F567425ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A *>(__this + _offset);
	U3CPutAsyncU3Ed__8_MoveNext_m31760DE08FA2FD2D378BFC3ADCCACD5F567425ED(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_SetStateMachine_mB9A7A3A571CE99D8B3DC4D0636E8032C1C135BDE (U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966((AsyncTaskMethodBuilder_1_t06A4406192832103E698019C5B82D2724B8B4A82 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m598A872CCD4C8E5FD7663C58F838EAFC2DC1E966_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__8_SetStateMachine_mB9A7A3A571CE99D8B3DC4D0636E8032C1C135BDE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__8_tEA14E85A0C36CA5D42C445F6FD2FA1E4ECA9AD5A *>(__this + _offset);
	U3CPutAsyncU3Ed__8_SetStateMachine_mB9A7A3A571CE99D8B3DC4D0636E8032C1C135BDE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2__ctor_m60FC6A64A8E4051828774AE6ADB51E58811A99BD (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_IDisposable_Dispose_m0E67813F141265974E565C345B4488D71565DC8E (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRootGameObjectsInLoadedScenesU3Ed__2_MoveNext_m583D7E9699BF9B8CDB5E9FC4E55D1BE2D904E5E8 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < SceneManager.sceneCount; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_00a8;
	}

IL_0023:
	{
		// Scene loadedScene = SceneManager.GetSceneAt(i);
		int32_t L_3 = __this->get_U3CiU3E5__2_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (!loadedScene.isLoaded)
		bool L_5;
		L_5 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0098;
		}
	}
	{
		// foreach (GameObject rootGameObject in loadedScene.GetRootGameObjects())
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6;
		L_6 = Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CU3E7__wrap2_4(L_6);
		__this->set_U3CU3E7__wrap3_5(0);
		goto IL_0081;
	}

IL_004e:
	{
		// foreach (GameObject rootGameObject in loadedScene.GetRootGameObjects())
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_U3CU3E7__wrap2_4();
		int32_t L_8 = __this->get_U3CU3E7__wrap3_5();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// yield return rootGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_2;
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_12 = __this->get_U3CU3E7__wrap3_5();
		__this->set_U3CU3E7__wrap3_5(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_0081:
	{
		// foreach (GameObject rootGameObject in loadedScene.GetRootGameObjects())
		int32_t L_13 = __this->get_U3CU3E7__wrap3_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_U3CU3E7__wrap2_4();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		__this->set_U3CU3E7__wrap2_4((GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)NULL);
	}

IL_0098:
	{
		// for (int i = 0; i < SceneManager.sceneCount; i++)
		int32_t L_15 = __this->get_U3CiU3E5__2_3();
		V_3 = L_15;
		int32_t L_16 = V_3;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
	}

IL_00a8:
	{
		// for (int i = 0; i < SceneManager.sceneCount; i++)
		int32_t L_17 = __this->get_U3CiU3E5__2_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = SceneManager_get_sceneCount_m57B8EB790D8B6673BA840442B4F125121CC5456E(/*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0023;
		}
	}
	{
		// yield break;
		return (bool)0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_GameObjectU3E_get_Current_mAB6C9C4778B573B7FF65856803F463C1A288C64E (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_Reset_m54C5C55B72D6601A2E4B7531E13C2C91B78B7FB8 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_Reset_m54C5C55B72D6601A2E4B7531E13C2C91B78B7FB8_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_get_Current_mD76E56E1192FD7FBF1C716C520DD07B9A07C59B2 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumerableU3CUnityEngine_GameObjectU3E_GetEnumerator_mE7F5F764DD6319A9E927CF439E89A30CD64A9F25 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * L_3 = (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 *)il2cpp_codegen_object_new(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0_il2cpp_TypeInfo_var);
		U3CGetRootGameObjectsInLoadedScenesU3Ed__2__ctor_m60FC6A64A8E4051828774AE6ADB51E58811A99BD(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m63DA3497F615860A33CC78C3E896169A40847C14 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tFB2ABE257798ACDF4540821111DAA56A953844E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumerableU3CUnityEngine_GameObjectU3E_GetEnumerator_mE7F5F764DD6319A9E927CF439E89A30CD64A9F25(__this, /*hidden argument*/NULL);
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
// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_Id_mBF2549345E0651C842AD195581F5994578E778C0 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Id_mDF52D03C2E027B2F40640984297789335A9C83A6 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* MeshData_get_Indices_mD3D790D337C479E146906C03B594BB143E293CB1 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, const RuntimeMethod* method)
{
	{
		// public int[] Indices { get; set; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_U3CIndicesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Indices(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Indices_m0F74B1E71CB0F2F11A72A4B9477B67F3BA70AF61 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] Indices { get; set; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_U3CIndicesU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* MeshData_get_Vertices_m599A84FB2D49EB8C2BBB95FA57B14F6BE56880D3 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3[] Vertices { get; set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_U3CVerticesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Vertices_m18947801D315D4D9B58B350183297682015EC32A (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3[] Vertices { get; set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___value0;
		__this->set_U3CVerticesU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_UVs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* MeshData_get_UVs_m56CC2827AEB748FDD293B6C01329607D10ED8C4D (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2[] UVs { get; set; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_U3CUVsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_UVs(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_UVs_mD90C0B0861F3DFCF3E21CDC72632BAC432C15F44 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2[] UVs { get; set; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___value0;
		__this->set_U3CUVsU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MeshData_get_GameObject_m46C16AF4F881292947115F0CFB559243FD276CE8 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_GameObject_mAB2CAD5F7EFB5246AC18AA3F2B0D1DCCA0641C1C (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData__ctor_mBCCE01F49C284AED0209607482CDA84373AEEDF4 (MeshData_tA980868D5C61525B8F6847F1892616B8BA6BF675 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuadData_get_Id_mBF6F29DAD0C58AD776BF7E9A9A4978C104568E5A (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_Id_m7F1858F1F69C19E522BB6FBF007D8D1764D42A3E (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_Extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  QuadData_get_Extents_m243E13B8D42317B79A90A57F7C3DC7E2395873E5 (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Extents { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CExtentsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_Extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_Extents_mEC72B41E0AB462EC7147D7E43F1713BF87E4BD9D (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 Extents { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CExtentsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Byte[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_OcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* QuadData_get_OcclusionMask_mC25FF2808782362645446C76D2AE190969E8A5E4 (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, const RuntimeMethod* method)
{
	{
		// public byte[] OcclusionMask { get; set; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3COcclusionMaskU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_OcclusionMask(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_OcclusionMask_mCF2EBABCB14CA3FAC10026214F278B343F4E2A7B (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		// public byte[] OcclusionMask { get; set; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3COcclusionMaskU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * QuadData_get_GameObject_mB2E0A2414CD33D0DA9DB56DEA0E8C86BA2791416 (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_GameObject_mF258E577280C86DBD6B805A9A07BCC374107181E (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData__ctor_m3F4529DAE685507523B35556AEAA14EBC8BC80C3 (QuadData_tE3A6CACA31F28BC11F294AAC8347D26A2C0D3A6F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8__ctor_m8F279BC2D1302FD9EE0126A741E7D2E913355181 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8_System_IDisposable_Dispose_m95A4FAF6E270867CE4E8DB6768D60AA72F4F5B3A (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateAncestorsU3Ed__8_MoveNext_m51DBCAA24553A117FE954DD54759498FAFE65747 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!includeSelf)
		bool L_3 = __this->get_includeSelf_3();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// startTransform = startTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_startTransform_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		__this->set_startTransform_5(L_5);
	}

IL_0030:
	{
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_startTransform_5();
		__this->set_U3CtransformU3E5__2_7(L_6);
		goto IL_006b;
	}

IL_003e:
	{
		// yield return transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_U3CtransformU3E5__2_7();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_U3CtransformU3E5__2_7();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		__this->set_U3CtransformU3E5__2_7(L_9);
	}

IL_006b:
	{
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_U3CtransformU3E5__2_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		__this->set_U3CtransformU3E5__2_7((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m644CC984DE0C435C83584410444B1F83220D326F (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m72AFDE170D06DB7771AC30A207C46C7D9F78CB17 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m72AFDE170D06DB7771AC30A207C46C7D9F78CB17_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_get_Current_m14FFAED045575A6F6FDB60D38C2A1E754CBB00C0 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m08B954249CBD1AC6DF29EEE9AEBE044CE118C977 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * L_3 = (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 *)il2cpp_codegen_object_new(U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8_il2cpp_TypeInfo_var);
		U3CEnumerateAncestorsU3Ed__8__ctor_m8F279BC2D1302FD9EE0126A741E7D2E913355181(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_U3CU3E3__startTransform_6();
		NullCheck(L_4);
		L_4->set_startTransform_5(L_5);
		U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__includeSelf_4();
		NullCheck(L_6);
		L_6->set_includeSelf_3(L_7);
		U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerable_GetEnumerator_mE7F0BFC8E6DCF9687FAFD64AD821E7E4FF4A3A47 (U3CEnumerateAncestorsU3Ed__8_t050E3C31B6FBB91D928C97AFC5BA0120C36AB0A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m08B954249CBD1AC6DF29EEE9AEBE044CE118C977(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_m19A3D7C8248C02494FB71682425E90DF802F6037 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_IDisposable_Dispose_mAB3D846F8FFA6B245406800A8007D864E53E2E5E (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateHierarchyCoreU3Ed__4_MoveNext_mA33CE73937DE919F604E88A54CACC5C91A157743 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var transformQueue = new Queue<Transform>();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_3 = (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *)il2cpp_codegen_object_new(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B(L_3, /*hidden argument*/Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		__this->set_U3CtransformQueueU3E5__2_7(L_3);
		// transformQueue.Enqueue(root);
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_4 = __this->get_U3CtransformQueueU3E5__2_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_root_3();
		NullCheck(L_4);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_4, L_5, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		goto IL_0091;
	}

IL_0035:
	{
		// var parentTransform = transformQueue.Dequeue();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_6 = __this->get_U3CtransformQueueU3E5__2_7();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812(L_6, /*hidden argument*/Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		V_1 = L_7;
		// if (!parentTransform || ignore.Contains(parentTransform)) { continue; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_10 = __this->get_ignore_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Transform>::Contains(!0) */, ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var, L_10, L_11);
		if (L_12)
		{
			goto IL_0091;
		}
	}
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		V_2 = 0;
		goto IL_0071;
	}

IL_005b:
	{
		// transformQueue.Enqueue(parentTransform.GetChild(i));
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_13 = __this->get_U3CtransformQueueU3E5__2_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_13, L_16, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0071:
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_18 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_005b;
		}
	}
	{
		// yield return parentTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_1;
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0091:
	{
		// while (transformQueue.Count > 0)
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_22 = __this->get_U3CtransformQueueU3E5__2_7();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline(L_22, /*hidden argument*/Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m5A365739AE46A60A14930EB6F6BF1C1CC41DCBFC (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m58FE548FF28F653C5D3A72BE34CF98483F35C441 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m58FE548FF28F653C5D3A72BE34CF98483F35C441_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_get_Current_mE7A48033B204DFFF9F23D0E6A2D0177F0D79F969 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m6DC26B2E7D7D8F9DCD56C8F1AE97C103A145F667 (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * L_3 = (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA *)il2cpp_codegen_object_new(U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA_il2cpp_TypeInfo_var);
		U3CEnumerateHierarchyCoreU3Ed__4__ctor_m19A3D7C8248C02494FB71682425E90DF802F6037(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_U3CU3E3__root_4();
		NullCheck(L_4);
		L_4->set_root_3(L_5);
		U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__ignore_6();
		NullCheck(L_6);
		L_6->set_ignore_5(L_7);
		U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerable_GetEnumerator_m3DF04EB76E6DAA08A6F1A63071F233C7C62B00FB (U3CEnumerateHierarchyCoreU3Ed__4_tB7557B31C9B7DD3638423B35D9946D08D0A9F4DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m6DC26B2E7D7D8F9DCD56C8F1AE97C103A145F667(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mEDA934E0B6B89960BA923917747543745B26D842 (U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<GetAllSubClassesOf>b__0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__0_m79F7A01E1668542B8CA12F008FB2E40CBA880081 (U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mC369E155C0AD4F6E140D3EC47092FDD2DE0045B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * V_0 = NULL;
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// Parallel.ForEach(assembly.GetLoadableTypes(), (type) =>
		// {
		//     if (type != null && type.IsClass && !type.IsAbstract && type.IsSubclassOf(rootType))
		//     {
		//         results.Add(type);
		//     }
		// });
		Assembly_t * L_0 = ___assembly0;
		RuntimeObject* L_1;
		L_1 = AssemblyExtensions_GetLoadableTypes_m893D06B818385E09FDE13E9401DAACC1284D9E0D(L_0, /*hidden argument*/NULL);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_2 = __this->get_U3CU3E9__1_2();
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_4 = (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *)il2cpp_codegen_object_new(Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var);
		Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mC369E155C0AD4F6E140D3EC47092FDD2DE0045B3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_2(L_5);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_7;
		L_7 = Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B(G_B2_1, G_B2_0, /*hidden argument*/Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<GetAllSubClassesOf>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mC369E155C0AD4F6E140D3EC47092FDD2DE0045B3 (U3CU3Ec__DisplayClass0_0_tA12551328334C04A076208E82ACCE8CAA53DD786 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type != null && type.IsClass && !type.IsAbstract && type.IsSubclassOf(rootType))
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7 = __this->get_rootType_0();
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(112 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// results.Add(type);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_9 = __this->get_results_1();
		Type_t * L_10 = ___type0;
		NullCheck(L_9);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_9, L_10, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
	}

IL_0033:
	{
		// });
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
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEC4CFAC3319E7A8A886FE462795E4B4D629143C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * L_0 = (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 *)il2cpp_codegen_object_new(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE463167FE005F01357E435EB7381A9ECA89160FD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE463167FE005F01357E435EB7381A9ECA89160FD (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__12_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__12_0_m95A8720616EF61CBFFF0A450961028A9741E4386 (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector2.zero : enumerable.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__13_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__13_0_mFB3F7FE63EA2FAFE070451273455F5AAACE1C983 (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector3.zero : enumerable.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__14_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__14_0_mE983B7C75E0B6559BE1DF97B7CC4D93C3B439B09 (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector2.zero : vectors.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__15_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__15_0_mD704A6AC6EB6431A9F7FF43614DA33FAB9388F88 (U3CU3Ec_t583D35402ED7F27831CC0B6795C6F6AE4DDF6C24 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector3.zero : vectors.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m92FD55D285A1E510F882A5BD601615ADD2294AA1 (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m5CD0614666307B06F96046A849177353DB64EA09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__1_mA52A9990238D75702A6D633A1FCBC2539BED896C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF * L_2 = (U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass2_0__ctor_m89FD24D1194F05A873DBACEB97995138CE6DF7A4(L_2, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass2_0_t1EC7D9535B39C96F9E1814ECFC9CA2615E069ACF * L_3 = L_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_byteArray_2();
			NullCheck(L_3);
			L_3->set_byteArray_0(L_4);
			// public static Func<byte[], Task<string>> BytesToString = async (byteArray) => await Task.Run(() =>
			//      System.Text.Encoding.Default.GetString(byteArray)).ConfigureAwait(false);
			Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_5 = (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *)il2cpp_codegen_object_new(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
			Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA(L_5, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__1_mA52A9990238D75702A6D633A1FCBC2539BED896C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_6;
			L_6 = Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963(L_5, /*hidden argument*/Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963_RuntimeMethod_var);
			NullCheck(L_6);
			ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  L_7;
			L_7 = Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A(L_6, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
			V_3 = L_7;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_8;
			L_8 = ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline((ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
			V_2 = L_8;
			bool L_9;
			L_9 = ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_11 = V_2;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m5CD0614666307B06F96046A849177353DB64EA09((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_12, (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_2), (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0_m5CD0614666307B06F96046A849177353DB64EA09_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0063:
		{
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_13 = __this->get_U3CU3Eu__1_3();
			V_2 = L_13;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_007f:
		{
			String_t* L_16;
			L_16 = ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
			V_1 = L_16;
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_17, L_18, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a2:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_20 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_19, L_20, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m92FD55D285A1E510F882A5BD601615ADD2294AA1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * _thisAdjusted = reinterpret_cast<U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 *>(__this + _offset);
	U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m92FD55D285A1E510F882A5BD601615ADD2294AA1(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m3BA490CD448DA6B2266F77DF5CCF509BE789412E (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m3BA490CD448DA6B2266F77DF5CCF509BE789412E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 * _thisAdjusted = reinterpret_cast<U3CU3CU2DcctorU3Eb__2_0U3Ed_tF998EDBD74B5A43434C990EAF081FD8EDF8070D0 *>(__this + _offset);
	U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m3BA490CD448DA6B2266F77DF5CCF509BE789412E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_mBF38D6481CE40882846C679F3E51C8D70B502E3C_inline (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_1_get_IsCompleted_mCB51339508621E7D374ACA4D51C2061D75DD658A_gshared_inline (SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = (bool)__this->get_U3CIsCompletedU3Ek__BackingField_3();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
