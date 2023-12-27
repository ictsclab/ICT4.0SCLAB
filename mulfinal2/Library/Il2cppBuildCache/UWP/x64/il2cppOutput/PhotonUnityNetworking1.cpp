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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t61231B053F1E40EB760E7E161322235AC46FD570;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B;
// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>
struct Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t510FB791361517D9490A57D6259732545477D57C;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9;
// System.Func`2<Photon.Realtime.IConnectionCallbacks,System.String>
struct Func_2_t99A158E575AD8C6916634213AB82D9896C1FA97F;
// System.Func`2<Photon.Realtime.Player,System.Boolean>
struct Func_2_t5117ECCB0088744BFF5EFC62C02A66D064CECA98;
// System.Func`2<Photon.Realtime.Player,System.Int32>
struct Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView>
struct HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.Reflection.MethodInfo>
struct IEqualityComparer_1_tD41599604E7D2EEFDD1C9D964713638F0711E61C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>
struct KeyCollection_tB79965E995603568BC2EF7D272ED9A97462B905A;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Pun.PhotonView>
struct List_1_t22AB20B25E776225271DB850CE278C084A9985EF;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView>
struct NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_tFF9526B5F79416765882A99F02C06F237631B787;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>
struct ValueCollection_t1C2B2CA3BFF3EB385AC690CFF63CA266433B289D;
// System.Collections.Generic.Dictionary`2/Entry<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>[]
struct EntryU5BU5D_t27D8EC49ED0B08285B4A69DFD8414E97B36CDEDA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component[]
struct ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A;
// Photon.Pun.IOnPhotonViewControllerChange[]
struct IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5;
// Photon.Pun.IOnPhotonViewOwnerChange[]
struct IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2;
// Photon.Pun.IOnPhotonViewPreNetDestroy[]
struct IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
// Photon.Pun.PhotonView[]
struct PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Photon.Pun.PhotonView/CallbackTargetChange[]
struct CallbackTargetChangeU5BU5D_tCE800EAAFF98CF6B109DE820466BB8613D4EE007;
// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF;
// Photon.Realtime.IConnectionCallbacks
struct IConnectionCallbacks_t32D8D387CF91F7243A29ED7F9683C94A187C873A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Photon.Pun.IOnPhotonViewControllerChange
struct IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0;
// Photon.Pun.IOnPhotonViewOwnerChange
struct IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C;
// Photon.Pun.IOnPhotonViewPreNetDestroy
struct IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551;
// Photon.Pun.IPhotonViewCallback
struct IPhotonViewCallback_t13B9283F6190068C308E7068E11730BB87468609;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_tA7FF722E5855D5361A1291E669A607E5EC89C6FF;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// Photon.Pun.PhotonRigidbodyView
struct PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D;
// Photon.Pun.PhotonStream
struct PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA;
// Photon.Pun.PhotonStreamQueue
struct PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816;
// Photon.Pun.PhotonTransformView
struct PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD;
// Photon.Pun.PhotonTransformViewClassic
struct PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2;
// Photon.Pun.PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985;
// Photon.Pun.PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0;
// Photon.Pun.PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC;
// Photon.Pun.PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773;
// Photon.Pun.PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90;
// Photon.Pun.PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// Photon.Pun.PunEvent
struct PunEvent_tAE1CA55F9A4C7F7349222A2B7F5F817D33CF0A0D;
// Photon.Pun.PunRPC
struct PunRPC_t31AB169F10D003D1468E0A99182ABAA68F5254CC;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Photon.Pun.SceneManagerHelper
struct SceneManagerHelper_t481F5559B1FE84E2917976A4D6A2DF713184203B;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Photon.Pun.ServerSettings
struct ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96;
// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t2BF79E6CABC573790AB84BBDA3A679FF86BA6CCE;
// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t59710B7E3F5BED5FE0960F7D47878CB15E255155;
// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t68DE6186BF5229AFCD259905E1B67D810F6DC1D1;
// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t2B422A17087D506C711916877E31AEFC8070EF9B;
// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tD53F6678436C7A81CC78286FCB9862889F7B9CEA;
// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tC5B3C81890FB1C625592B75652EA3D763F65C7B7;
// Photon.Pun.PhotonAnimatorView/SynchronizedLayer
struct SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6;
// Photon.Pun.PhotonAnimatorView/SynchronizedParameter
struct SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06;
// Photon.Pun.PhotonHandler/<>c
struct U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1;
// Photon.Pun.PhotonNetwork/<>c
struct U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8;
// Photon.Pun.PhotonNetwork/SerializeViewBatch
struct SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tC6DFC22DFF5978489C4CFA025695FEC556610214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029F39055118406B2B10C8EFE242178369516105;
IL2CPP_EXTERN_C String_t* _stringLiteral04BD814D8D663E1D5903A490670AF1CF5F5DD3B7;
IL2CPP_EXTERN_C String_t* _stringLiteral04EF2E53B34AB4888397326C0503A46726384E88;
IL2CPP_EXTERN_C String_t* _stringLiteral221D22859907A7D55C94586400E95F005CC96F1D;
IL2CPP_EXTERN_C String_t* _stringLiteral267766853FBB5579C928C15FAF19A370C711D10B;
IL2CPP_EXTERN_C String_t* _stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21;
IL2CPP_EXTERN_C String_t* _stringLiteral2A01D96F3CB63CD7CCDB665F7DCA7398B7AA98AF;
IL2CPP_EXTERN_C String_t* _stringLiteral363D8D2D063A7F9FD9F54E87F29501D9B1F387A5;
IL2CPP_EXTERN_C String_t* _stringLiteral40442D03F3081D2D675CC161C5FBF890936F62BA;
IL2CPP_EXTERN_C String_t* _stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral7479B031BCFD873A0953EABEDF49BB0FD5447A55;
IL2CPP_EXTERN_C String_t* _stringLiteral90C0BB8415FC2EEFB6C5883A8B54921411008D18;
IL2CPP_EXTERN_C String_t* _stringLiteral976614BB1A772FCE8B23338F35FB810C0EE9E157;
IL2CPP_EXTERN_C String_t* _stringLiteral994505630F9AE7D1BD057B7329595DF5BE06232E;
IL2CPP_EXTERN_C String_t* _stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5;
IL2CPP_EXTERN_C String_t* _stringLiteralA3990101931EBAF0679A4910CB044959A62ADF5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41;
IL2CPP_EXTERN_C String_t* _stringLiteralAA6C011A05F1C4122FD6AAD721B36B5B12F1D8E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F5042D76FEF4BD560574FCDEB92AA1C24CF87E;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA42C46D2FE209A52C134EB8FC71D8844840788;
IL2CPP_EXTERN_C String_t* _stringLiteralD61B38F8322180B98477583BE94BD63E60722777;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3989BF3B9829EAB75FE39A2179D5DEE8EF95162;
IL2CPP_EXTERN_C String_t* _stringLiteralE51520DAD70E6903017CE7E9D2CA1FEFB8DADDE6;
IL2CPP_EXTERN_C String_t* _stringLiteralF0CEA048C6DA7000ED56729D2EEA422BD42D1DD5;
IL2CPP_EXTERN_C String_t* _stringLiteralF7691A467FFEFADC572E6C24DC3FD2081027B99B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6A3CDB1BC44401E80F9B9EC923AA20842409EF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C85EAB4E088919032BFED41F1DB3370A05AD5E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7C7CA1894B3C5CF900AEB582509C62BFD6FF4E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4893CCEE7DDB83589BC49779ECC29131F5F77D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m38CD2B2F02C983F34F4A14B0057B38F2D9182B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m156C8F63ECC0F806B6325064808EAA5CC494EA8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEA47488E23EE960D757A61DC0F4EC6839E269FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m08838414B0BD261A33CED7EDDD6AAB51E0E913ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3F1CF5E813B2E139867498D5FB08ECA3AB7B6369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAF56FC447CCC318A3617D6694D012E5E30A55963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m25C04EAF6788545CBBE782CA7AD706FE0EF437DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2F4EC2E33EA9E8F8B98B70BAD778E0972F14BAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAA3B212DA3A139A11F2F07A465C4A25A79C87AA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedComponentUtilities_GetNestedComponentsInChildren_TisComponent_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_TisIPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m5F2B95EC8ECAAAD16924C74C4A8C75D193B9EE17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonStream_SetWriteStream_m543E5AB19D8FAF0B61766D9EE27E3D55C3F0BAB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonView_RegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_m09C04B40C83F5C451EF7EB90A1BC7C24236524F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonView_RegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_mF8F06E0C972F38B4835C27F19F6777608CD7F7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonView_RegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_m42297B4AA8E51284AAED7CC22243735EDBC30E12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonView_TryRegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_mF198097DB842FB170E1E9D3930DA2BCF8BEB6C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonView_TryRegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_m250A4027A321D2E7A2B86D7E04E5811DB6053059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhotonView_TryRegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_mCF7711B2CB14FCAA1BCF162CB17B1553D029A4BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializeViewBatch_Add_m5C1663B0B977328EB6C3B058EFBCC1AC009A87A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>
struct Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t27D8EC49ED0B08285B4A69DFD8414E97B36CDEDA* ___entries_1;
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
	KeyCollection_tB79965E995603568BC2EF7D272ED9A97462B905A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1C2B2CA3BFF3EB385AC690CFF63CA266433B289D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___entries_1)); }
	inline EntryU5BU5D_t27D8EC49ED0B08285B4A69DFD8414E97B36CDEDA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t27D8EC49ED0B08285B4A69DFD8414E97B36CDEDA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t27D8EC49ED0B08285B4A69DFD8414E97B36CDEDA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___keys_7)); }
	inline KeyCollection_tB79965E995603568BC2EF7D272ED9A97462B905A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB79965E995603568BC2EF7D272ED9A97462B905A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB79965E995603568BC2EF7D272ED9A97462B905A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ___values_8)); }
	inline ValueCollection_t1C2B2CA3BFF3EB385AC690CFF63CA266433B289D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1C2B2CA3BFF3EB385AC690CFF63CA266433B289D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1C2B2CA3BFF3EB385AC690CFF63CA266433B289D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____items_1)); }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* get__items_1() const { return ____items_1; }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_StaticFields, ____emptyArray_5)); }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340, ____items_1)); }
	inline IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5* get__items_1() const { return ____items_1; }
	inline IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340_StaticFields, ____emptyArray_5)); }
	inline IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IOnPhotonViewControllerChangeU5BU5D_t4D95C738688F4E17C9A85D5D42428B0BC4E56AD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6, ____items_1)); }
	inline IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2* get__items_1() const { return ____items_1; }
	inline IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6_StaticFields, ____emptyArray_5)); }
	inline IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IOnPhotonViewOwnerChangeU5BU5D_tDF64ED750CA6A56D2E897D8A2E84AF9E544E64B2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4, ____items_1)); }
	inline IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8* get__items_1() const { return ____items_1; }
	inline IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4_StaticFields, ____emptyArray_5)); }
	inline IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IOnPhotonViewPreNetDestroyU5BU5D_tE652DC88F56F5FAC988A3E0AFEB2E15DC9A38DA8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____array_0;
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
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____array_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__array_0() const { return ____array_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	CallbackTargetChangeU5BU5D_tCE800EAAFF98CF6B109DE820466BB8613D4EE007* ____array_0;
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
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA, ____array_0)); }
	inline CallbackTargetChangeU5BU5D_tCE800EAAFF98CF6B109DE820466BB8613D4EE007* get__array_0() const { return ____array_0; }
	inline CallbackTargetChangeU5BU5D_tCE800EAAFF98CF6B109DE820466BB8613D4EE007** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(CallbackTargetChangeU5BU5D_tCE800EAAFF98CF6B109DE820466BB8613D4EE007* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Photon.Pun.PhotonStream
struct PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonStream::writeData
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___writeData_0;
	// System.Object[] Photon.Pun.PhotonStream::readData
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___readData_1;
	// System.Int32 Photon.Pun.PhotonStream::currentItem
	int32_t ___currentItem_2;
	// System.Boolean Photon.Pun.PhotonStream::<IsWriting>k__BackingField
	bool ___U3CIsWritingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_writeData_0() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___writeData_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_writeData_0() const { return ___writeData_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_writeData_0() { return &___writeData_0; }
	inline void set_writeData_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___writeData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeData_0), (void*)value);
	}

	inline static int32_t get_offset_of_readData_1() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___readData_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_readData_1() const { return ___readData_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_readData_1() { return &___readData_1; }
	inline void set_readData_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___readData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readData_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentItem_2() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___currentItem_2)); }
	inline int32_t get_currentItem_2() const { return ___currentItem_2; }
	inline int32_t* get_address_of_currentItem_2() { return &___currentItem_2; }
	inline void set_currentItem_2(int32_t value)
	{
		___currentItem_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsWritingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___U3CIsWritingU3Ek__BackingField_3)); }
	inline bool get_U3CIsWritingU3Ek__BackingField_3() const { return ___U3CIsWritingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsWritingU3Ek__BackingField_3() { return &___U3CIsWritingU3Ek__BackingField_3; }
	inline void set_U3CIsWritingU3Ek__BackingField_3(bool value)
	{
		___U3CIsWritingU3Ek__BackingField_3 = value;
	}
};


// Photon.Pun.PhotonStreamQueue
struct PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.PhotonStreamQueue::m_SampleRate
	int32_t ___m_SampleRate_0;
	// System.Int32 Photon.Pun.PhotonStreamQueue::m_SampleCount
	int32_t ___m_SampleCount_1;
	// System.Int32 Photon.Pun.PhotonStreamQueue::m_ObjectsPerSample
	int32_t ___m_ObjectsPerSample_2;
	// System.Single Photon.Pun.PhotonStreamQueue::m_LastSampleTime
	float ___m_LastSampleTime_3;
	// System.Int32 Photon.Pun.PhotonStreamQueue::m_LastFrameCount
	int32_t ___m_LastFrameCount_4;
	// System.Int32 Photon.Pun.PhotonStreamQueue::m_NextObjectIndex
	int32_t ___m_NextObjectIndex_5;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonStreamQueue::m_Objects
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___m_Objects_6;
	// System.Boolean Photon.Pun.PhotonStreamQueue::m_IsWriting
	bool ___m_IsWriting_7;

public:
	inline static int32_t get_offset_of_m_SampleRate_0() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_SampleRate_0)); }
	inline int32_t get_m_SampleRate_0() const { return ___m_SampleRate_0; }
	inline int32_t* get_address_of_m_SampleRate_0() { return &___m_SampleRate_0; }
	inline void set_m_SampleRate_0(int32_t value)
	{
		___m_SampleRate_0 = value;
	}

	inline static int32_t get_offset_of_m_SampleCount_1() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_SampleCount_1)); }
	inline int32_t get_m_SampleCount_1() const { return ___m_SampleCount_1; }
	inline int32_t* get_address_of_m_SampleCount_1() { return &___m_SampleCount_1; }
	inline void set_m_SampleCount_1(int32_t value)
	{
		___m_SampleCount_1 = value;
	}

	inline static int32_t get_offset_of_m_ObjectsPerSample_2() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_ObjectsPerSample_2)); }
	inline int32_t get_m_ObjectsPerSample_2() const { return ___m_ObjectsPerSample_2; }
	inline int32_t* get_address_of_m_ObjectsPerSample_2() { return &___m_ObjectsPerSample_2; }
	inline void set_m_ObjectsPerSample_2(int32_t value)
	{
		___m_ObjectsPerSample_2 = value;
	}

	inline static int32_t get_offset_of_m_LastSampleTime_3() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_LastSampleTime_3)); }
	inline float get_m_LastSampleTime_3() const { return ___m_LastSampleTime_3; }
	inline float* get_address_of_m_LastSampleTime_3() { return &___m_LastSampleTime_3; }
	inline void set_m_LastSampleTime_3(float value)
	{
		___m_LastSampleTime_3 = value;
	}

	inline static int32_t get_offset_of_m_LastFrameCount_4() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_LastFrameCount_4)); }
	inline int32_t get_m_LastFrameCount_4() const { return ___m_LastFrameCount_4; }
	inline int32_t* get_address_of_m_LastFrameCount_4() { return &___m_LastFrameCount_4; }
	inline void set_m_LastFrameCount_4(int32_t value)
	{
		___m_LastFrameCount_4 = value;
	}

	inline static int32_t get_offset_of_m_NextObjectIndex_5() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_NextObjectIndex_5)); }
	inline int32_t get_m_NextObjectIndex_5() const { return ___m_NextObjectIndex_5; }
	inline int32_t* get_address_of_m_NextObjectIndex_5() { return &___m_NextObjectIndex_5; }
	inline void set_m_NextObjectIndex_5(int32_t value)
	{
		___m_NextObjectIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_Objects_6() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_Objects_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_m_Objects_6() const { return ___m_Objects_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_m_Objects_6() { return &___m_Objects_6; }
	inline void set_m_Objects_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___m_Objects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsWriting_7() { return static_cast<int32_t>(offsetof(PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816, ___m_IsWriting_7)); }
	inline bool get_m_IsWriting_7() const { return ___m_IsWriting_7; }
	inline bool* get_address_of_m_IsWriting_7() { return &___m_IsWriting_7; }
	inline void set_m_IsWriting_7(bool value)
	{
		___m_IsWriting_7 = value;
	}
};


// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// Photon.Pun.PunEvent
struct PunEvent_tAE1CA55F9A4C7F7349222A2B7F5F817D33CF0A0D  : public RuntimeObject
{
public:

public:
};


// Photon.Pun.PunExtensions
struct PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499  : public RuntimeObject
{
public:

public:
};

struct PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]> Photon.Pun.PunExtensions::ParametersOfMethods
	Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * ___ParametersOfMethods_0;

public:
	inline static int32_t get_offset_of_ParametersOfMethods_0() { return static_cast<int32_t>(offsetof(PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_StaticFields, ___ParametersOfMethods_0)); }
	inline Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * get_ParametersOfMethods_0() const { return ___ParametersOfMethods_0; }
	inline Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 ** get_address_of_ParametersOfMethods_0() { return &___ParametersOfMethods_0; }
	inline void set_ParametersOfMethods_0(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * value)
	{
		___ParametersOfMethods_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParametersOfMethods_0), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___customProperties_1)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___expectedUsers_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Pun.SceneManagerHelper
struct SceneManagerHelper_t481F5559B1FE84E2917976A4D6A2DF713184203B  : public RuntimeObject
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

// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t2BF79E6CABC573790AB84BBDA3A679FF86BA6CCE  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.PhotonAnimatorView/<>c__DisplayClass18_0::layerIndex
	int32_t ___layerIndex_0;

public:
	inline static int32_t get_offset_of_layerIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t2BF79E6CABC573790AB84BBDA3A679FF86BA6CCE, ___layerIndex_0)); }
	inline int32_t get_layerIndex_0() const { return ___layerIndex_0; }
	inline int32_t* get_address_of_layerIndex_0() { return &___layerIndex_0; }
	inline void set_layerIndex_0(int32_t value)
	{
		___layerIndex_0 = value;
	}
};


// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t59710B7E3F5BED5FE0960F7D47878CB15E255155  : public RuntimeObject
{
public:
	// System.String Photon.Pun.PhotonAnimatorView/<>c__DisplayClass19_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t59710B7E3F5BED5FE0960F7D47878CB15E255155, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t68DE6186BF5229AFCD259905E1B67D810F6DC1D1  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.PhotonAnimatorView/<>c__DisplayClass22_0::layerIndex
	int32_t ___layerIndex_0;

public:
	inline static int32_t get_offset_of_layerIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t68DE6186BF5229AFCD259905E1B67D810F6DC1D1, ___layerIndex_0)); }
	inline int32_t get_layerIndex_0() const { return ___layerIndex_0; }
	inline int32_t* get_address_of_layerIndex_0() { return &___layerIndex_0; }
	inline void set_layerIndex_0(int32_t value)
	{
		___layerIndex_0 = value;
	}
};


// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t2B422A17087D506C711916877E31AEFC8070EF9B  : public RuntimeObject
{
public:
	// System.String Photon.Pun.PhotonAnimatorView/<>c__DisplayClass23_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t2B422A17087D506C711916877E31AEFC8070EF9B, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tD53F6678436C7A81CC78286FCB9862889F7B9CEA  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0::layerIndex
	int32_t ___layerIndex_0;

public:
	inline static int32_t get_offset_of_layerIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tD53F6678436C7A81CC78286FCB9862889F7B9CEA, ___layerIndex_0)); }
	inline int32_t get_layerIndex_0() const { return ___layerIndex_0; }
	inline int32_t* get_address_of_layerIndex_0() { return &___layerIndex_0; }
	inline void set_layerIndex_0(int32_t value)
	{
		___layerIndex_0 = value;
	}
};


// Photon.Pun.PhotonAnimatorView/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tC5B3C81890FB1C625592B75652EA3D763F65C7B7  : public RuntimeObject
{
public:
	// System.String Photon.Pun.PhotonAnimatorView/<>c__DisplayClass25_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_tC5B3C81890FB1C625592B75652EA3D763F65C7B7, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Photon.Pun.PhotonHandler/<>c
struct U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_StaticFields
{
public:
	// Photon.Pun.PhotonHandler/<>c Photon.Pun.PhotonHandler/<>c::<>9
	U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> Photon.Pun.PhotonHandler/<>c::<>9__13_0
	UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_StaticFields, ___U3CU3E9__13_0_1)); }
	inline UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}
};


// Photon.Pun.PhotonNetwork/<>c
struct U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields
{
public:
	// Photon.Pun.PhotonNetwork/<>c Photon.Pun.PhotonNetwork/<>c::<>9
	U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * ___U3CU3E9_0;
	// System.Func`2<Photon.Realtime.Player,System.Int32> Photon.Pun.PhotonNetwork/<>c::<>9__47_0
	Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 * ___U3CU3E9__47_0_1;
	// System.Func`2<Photon.Realtime.Player,System.Int32> Photon.Pun.PhotonNetwork/<>c::<>9__49_0
	Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 * ___U3CU3E9__49_0_2;
	// System.Func`2<Photon.Realtime.Player,System.Boolean> Photon.Pun.PhotonNetwork/<>c::<>9__49_1
	Func_2_t5117ECCB0088744BFF5EFC62C02A66D064CECA98 * ___U3CU3E9__49_1_3;
	// System.Func`2<Photon.Realtime.IConnectionCallbacks,System.String> Photon.Pun.PhotonNetwork/<>c::<>9__217_0
	Func_2_t99A158E575AD8C6916634213AB82D9896C1FA97F * ___U3CU3E9__217_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields, ___U3CU3E9__47_0_1)); }
	inline Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 * get_U3CU3E9__47_0_1() const { return ___U3CU3E9__47_0_1; }
	inline Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 ** get_address_of_U3CU3E9__47_0_1() { return &___U3CU3E9__47_0_1; }
	inline void set_U3CU3E9__47_0_1(Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 * value)
	{
		___U3CU3E9__47_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields, ___U3CU3E9__49_0_2)); }
	inline Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 * get_U3CU3E9__49_0_2() const { return ___U3CU3E9__49_0_2; }
	inline Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 ** get_address_of_U3CU3E9__49_0_2() { return &___U3CU3E9__49_0_2; }
	inline void set_U3CU3E9__49_0_2(Func_2_tB9C65E7FF543C1E0D28FEF00B033FFF832AD6D76 * value)
	{
		___U3CU3E9__49_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields, ___U3CU3E9__49_1_3)); }
	inline Func_2_t5117ECCB0088744BFF5EFC62C02A66D064CECA98 * get_U3CU3E9__49_1_3() const { return ___U3CU3E9__49_1_3; }
	inline Func_2_t5117ECCB0088744BFF5EFC62C02A66D064CECA98 ** get_address_of_U3CU3E9__49_1_3() { return &___U3CU3E9__49_1_3; }
	inline void set_U3CU3E9__49_1_3(Func_2_t5117ECCB0088744BFF5EFC62C02A66D064CECA98 * value)
	{
		___U3CU3E9__49_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__217_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields, ___U3CU3E9__217_0_4)); }
	inline Func_2_t99A158E575AD8C6916634213AB82D9896C1FA97F * get_U3CU3E9__217_0_4() const { return ___U3CU3E9__217_0_4; }
	inline Func_2_t99A158E575AD8C6916634213AB82D9896C1FA97F ** get_address_of_U3CU3E9__217_0_4() { return &___U3CU3E9__217_0_4; }
	inline void set_U3CU3E9__217_0_4(Func_2_t99A158E575AD8C6916634213AB82D9896C1FA97F * value)
	{
		___U3CU3E9__217_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__217_0_4), (void*)value);
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786 
{
public:
	// System.Int32 Photon.Pun.PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// Photon.Realtime.Player Photon.Pun.PhotonMessageInfo::Sender
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	// Photon.Pun.PhotonView Photon.Pun.PhotonMessageInfo::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_Sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___Sender_1)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_Sender_1() const { return ___Sender_1; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_Sender_1() { return &___Sender_1; }
	inline void set_Sender_1(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___Sender_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sender_1), (void*)value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___photonView_2)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;
};
// Native definition for COM marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786_marshaled_com
{
	int32_t ___timeInt_0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 
{
public:
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;

public:
	inline static int32_t get_offset_of_NameServerPort_1() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___NameServerPort_1)); }
	inline uint16_t get_NameServerPort_1() const { return ___NameServerPort_1; }
	inline uint16_t* get_address_of_NameServerPort_1() { return &___NameServerPort_1; }
	inline void set_NameServerPort_1(uint16_t value)
	{
		___NameServerPort_1 = value;
	}

	inline static int32_t get_offset_of_MasterServerPort_2() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___MasterServerPort_2)); }
	inline uint16_t get_MasterServerPort_2() const { return ___MasterServerPort_2; }
	inline uint16_t* get_address_of_MasterServerPort_2() { return &___MasterServerPort_2; }
	inline void set_MasterServerPort_2(uint16_t value)
	{
		___MasterServerPort_2 = value;
	}

	inline static int32_t get_offset_of_GameServerPort_3() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___GameServerPort_3)); }
	inline uint16_t get_GameServerPort_3() const { return ___GameServerPort_3; }
	inline uint16_t* get_address_of_GameServerPort_3() { return &___GameServerPort_3; }
	inline void set_GameServerPort_3(uint16_t value)
	{
		___GameServerPort_3 = value;
	}
};

struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields
{
public:
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___AlternativeUdpPorts_0;

public:
	inline static int32_t get_offset_of_AlternativeUdpPorts_0() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields, ___AlternativeUdpPorts_0)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_AlternativeUdpPorts_0() const { return ___AlternativeUdpPorts_0; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_AlternativeUdpPorts_0() { return &___AlternativeUdpPorts_0; }
	inline void set_AlternativeUdpPorts_0(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___AlternativeUdpPorts_0 = value;
	}
};


// Photon.Pun.PunRPC
struct PunRPC_t31AB169F10D003D1468E0A99182ABAA68F5254CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D  : public RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___players_15)); }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressRoomEventsU3Ek__BackingField_17)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_17() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return &___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_17(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressPlayerInfoU3Ek__BackingField_18)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_18() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_18(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CPublishUserIdU3Ek__BackingField_19)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_19() const { return ___U3CPublishUserIdU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_19() { return &___U3CPublishUserIdU3Ek__BackingField_19; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_19(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CDeleteNullPropertiesU3Ek__BackingField_20)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_20() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_20(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_20 = value;
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


// Photon.Pun.PhotonNetwork/RaiseEventBatch
struct RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 
{
public:
	// System.Byte Photon.Pun.PhotonNetwork/RaiseEventBatch::Group
	uint8_t ___Group_0;
	// System.Boolean Photon.Pun.PhotonNetwork/RaiseEventBatch::Reliable
	bool ___Reliable_1;

public:
	inline static int32_t get_offset_of_Group_0() { return static_cast<int32_t>(offsetof(RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7, ___Group_0)); }
	inline uint8_t get_Group_0() const { return ___Group_0; }
	inline uint8_t* get_address_of_Group_0() { return &___Group_0; }
	inline void set_Group_0(uint8_t value)
	{
		___Group_0 = value;
	}

	inline static int32_t get_offset_of_Reliable_1() { return static_cast<int32_t>(offsetof(RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7, ___Reliable_1)); }
	inline bool get_Reliable_1() const { return ___Reliable_1; }
	inline bool* get_address_of_Reliable_1() { return &___Reliable_1; }
	inline void set_Reliable_1(bool value)
	{
		___Reliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.PhotonNetwork/RaiseEventBatch
struct RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_pinvoke
{
	uint8_t ___Group_0;
	int32_t ___Reliable_1;
};
// Native definition for COM marshalling of Photon.Pun.PhotonNetwork/RaiseEventBatch
struct RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_com
{
	uint8_t ___Group_0;
	int32_t ___Reliable_1;
};

// Photon.Pun.PhotonView/CallbackTargetChange
struct CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541 
{
public:
	// Photon.Pun.IPhotonViewCallback Photon.Pun.PhotonView/CallbackTargetChange::obj
	RuntimeObject* ___obj_0;
	// System.Type Photon.Pun.PhotonView/CallbackTargetChange::type
	Type_t * ___type_1;
	// System.Boolean Photon.Pun.PhotonView/CallbackTargetChange::add
	bool ___add_2;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541, ___obj_0)); }
	inline RuntimeObject* get_obj_0() const { return ___obj_0; }
	inline RuntimeObject** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject* value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}

	inline static int32_t get_offset_of_add_2() { return static_cast<int32_t>(offsetof(CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541, ___add_2)); }
	inline bool get_add_2() const { return ___add_2; }
	inline bool* get_address_of_add_2() { return &___add_2; }
	inline void set_add_2(bool value)
	{
		___add_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.PhotonView/CallbackTargetChange
struct CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_pinvoke
{
	RuntimeObject* ___obj_0;
	Type_t * ___type_1;
	int32_t ___add_2;
};
// Native definition for COM marshalling of Photon.Pun.PhotonView/CallbackTargetChange
struct CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_com
{
	RuntimeObject* ___obj_0;
	Type_t * ___type_1;
	int32_t ___add_2;
};

// Photon.Realtime.AuthModeOption
struct AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Photon.Realtime.ClientAppType
struct ClientAppType_t01DC8E82AB058170EEDEA419365F12ACFD487298 
{
public:
	// System.Int32 Photon.Realtime.ClientAppType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientAppType_t01DC8E82AB058170EEDEA419365F12ACFD487298, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ConnectMethod
struct ConnectMethod_tA13C60CAD48EBE9B1ED72E47FC72070A48660BDD 
{
public:
	// System.Int32 Photon.Pun.ConnectMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectMethod_tA13C60CAD48EBE9B1ED72E47FC72070A48660BDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_tD2BDC5B7F51B6082132AEDBF91A5CBF93E06B40E 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tD2BDC5B7F51B6082132AEDBF91A5CBF93E06B40E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tA121543C9778860E3BA2B55FB5C958F4DACA92E2 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tA121543C9778860E3BA2B55FB5C958F4DACA92E2, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Photon.Realtime.JoinType
struct JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
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

// Photon.Pun.OwnershipOption
struct OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985  : public RuntimeObject
{
public:
	// Photon.Pun.PhotonTransformViewPositionModel Photon.Pun.PhotonTransformViewPositionControl::m_Model
	PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * ___m_Model_0;
	// System.Single Photon.Pun.PhotonTransformViewPositionControl::m_CurrentSpeed
	float ___m_CurrentSpeed_1;
	// System.Double Photon.Pun.PhotonTransformViewPositionControl::m_LastSerializeTime
	double ___m_LastSerializeTime_2;
	// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::m_SynchronizedSpeed
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SynchronizedSpeed_3;
	// System.Single Photon.Pun.PhotonTransformViewPositionControl::m_SynchronizedTurnSpeed
	float ___m_SynchronizedTurnSpeed_4;
	// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::m_NetworkPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NetworkPosition_5;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> Photon.Pun.PhotonTransformViewPositionControl::m_OldNetworkPositions
	Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * ___m_OldNetworkPositions_6;
	// System.Boolean Photon.Pun.PhotonTransformViewPositionControl::m_UpdatedPositionAfterOnSerialize
	bool ___m_UpdatedPositionAfterOnSerialize_7;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_Model_0)); }
	inline PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Model_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentSpeed_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_CurrentSpeed_1)); }
	inline float get_m_CurrentSpeed_1() const { return ___m_CurrentSpeed_1; }
	inline float* get_address_of_m_CurrentSpeed_1() { return &___m_CurrentSpeed_1; }
	inline void set_m_CurrentSpeed_1(float value)
	{
		___m_CurrentSpeed_1 = value;
	}

	inline static int32_t get_offset_of_m_LastSerializeTime_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_LastSerializeTime_2)); }
	inline double get_m_LastSerializeTime_2() const { return ___m_LastSerializeTime_2; }
	inline double* get_address_of_m_LastSerializeTime_2() { return &___m_LastSerializeTime_2; }
	inline void set_m_LastSerializeTime_2(double value)
	{
		___m_LastSerializeTime_2 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizedSpeed_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_SynchronizedSpeed_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_SynchronizedSpeed_3() const { return ___m_SynchronizedSpeed_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_SynchronizedSpeed_3() { return &___m_SynchronizedSpeed_3; }
	inline void set_m_SynchronizedSpeed_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_SynchronizedSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizedTurnSpeed_4() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_SynchronizedTurnSpeed_4)); }
	inline float get_m_SynchronizedTurnSpeed_4() const { return ___m_SynchronizedTurnSpeed_4; }
	inline float* get_address_of_m_SynchronizedTurnSpeed_4() { return &___m_SynchronizedTurnSpeed_4; }
	inline void set_m_SynchronizedTurnSpeed_4(float value)
	{
		___m_SynchronizedTurnSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_NetworkPosition_5() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_NetworkPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NetworkPosition_5() const { return ___m_NetworkPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NetworkPosition_5() { return &___m_NetworkPosition_5; }
	inline void set_m_NetworkPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NetworkPosition_5 = value;
	}

	inline static int32_t get_offset_of_m_OldNetworkPositions_6() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_OldNetworkPositions_6)); }
	inline Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * get_m_OldNetworkPositions_6() const { return ___m_OldNetworkPositions_6; }
	inline Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 ** get_address_of_m_OldNetworkPositions_6() { return &___m_OldNetworkPositions_6; }
	inline void set_m_OldNetworkPositions_6(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * value)
	{
		___m_OldNetworkPositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OldNetworkPositions_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdatedPositionAfterOnSerialize_7() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985, ___m_UpdatedPositionAfterOnSerialize_7)); }
	inline bool get_m_UpdatedPositionAfterOnSerialize_7() const { return ___m_UpdatedPositionAfterOnSerialize_7; }
	inline bool* get_address_of_m_UpdatedPositionAfterOnSerialize_7() { return &___m_UpdatedPositionAfterOnSerialize_7; }
	inline void set_m_UpdatedPositionAfterOnSerialize_7(bool value)
	{
		___m_UpdatedPositionAfterOnSerialize_7 = value;
	}
};


// Photon.Pun.PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC  : public RuntimeObject
{
public:
	// Photon.Pun.PhotonTransformViewRotationModel Photon.Pun.PhotonTransformViewRotationControl::m_Model
	PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * ___m_Model_0;
	// UnityEngine.Quaternion Photon.Pun.PhotonTransformViewRotationControl::m_NetworkRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_NetworkRotation_1;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC, ___m_Model_0)); }
	inline PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Model_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkRotation_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC, ___m_NetworkRotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_NetworkRotation_1() const { return ___m_NetworkRotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_NetworkRotation_1() { return &___m_NetworkRotation_1; }
	inline void set_m_NetworkRotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_NetworkRotation_1 = value;
	}
};


// Photon.Pun.PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90  : public RuntimeObject
{
public:
	// Photon.Pun.PhotonTransformViewScaleModel Photon.Pun.PhotonTransformViewScaleControl::m_Model
	PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * ___m_Model_0;
	// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewScaleControl::m_NetworkScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NetworkScale_1;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90, ___m_Model_0)); }
	inline PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Model_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkScale_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90, ___m_NetworkScale_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NetworkScale_1() const { return ___m_NetworkScale_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NetworkScale_1() { return &___m_NetworkScale_1; }
	inline void set_m_NetworkScale_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NetworkScale_1 = value;
	}
};


// Photon.Pun.PunLogLevel
struct PunLogLevel_t32F30888D76A17E85CDDA79DBD838574BBC5DD11 
{
public:
	// System.Int32 Photon.Pun.PunLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PunLogLevel_t32F30888D76A17E85CDDA79DBD838574BBC5DD11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.RpcTarget
struct RpcTarget_t32B58E6C450B442EBD42403B0549DB8B908CD6EF 
{
public:
	// System.Int32 Photon.Pun.RpcTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RpcTarget_t32B58E6C450B442EBD42403B0549DB8B908CD6EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Photon.Realtime.ServerConnection
struct ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonAnimatorView/ParameterType
struct ParameterType_t8C6F64E5E34D9EBA9AE13321929A49DB55186C32 
{
public:
	// System.Int32 Photon.Pun.PhotonAnimatorView/ParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterType_t8C6F64E5E34D9EBA9AE13321929A49DB55186C32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonAnimatorView/SynchronizeType
struct SynchronizeType_tE62AE69EA4AFF400AC8568DB4257F0943239462B 
{
public:
	// System.Int32 Photon.Pun.PhotonAnimatorView/SynchronizeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizeType_tE62AE69EA4AFF400AC8568DB4257F0943239462B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonNetwork/SerializeViewBatch
struct SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59  : public RuntimeObject
{
public:
	// Photon.Pun.PhotonNetwork/RaiseEventBatch Photon.Pun.PhotonNetwork/SerializeViewBatch::Batch
	RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___Batch_0;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonNetwork/SerializeViewBatch::ObjectUpdates
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___ObjectUpdates_1;
	// System.Int32 Photon.Pun.PhotonNetwork/SerializeViewBatch::defaultSize
	int32_t ___defaultSize_2;
	// System.Int32 Photon.Pun.PhotonNetwork/SerializeViewBatch::offset
	int32_t ___offset_3;

public:
	inline static int32_t get_offset_of_Batch_0() { return static_cast<int32_t>(offsetof(SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59, ___Batch_0)); }
	inline RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  get_Batch_0() const { return ___Batch_0; }
	inline RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * get_address_of_Batch_0() { return &___Batch_0; }
	inline void set_Batch_0(RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  value)
	{
		___Batch_0 = value;
	}

	inline static int32_t get_offset_of_ObjectUpdates_1() { return static_cast<int32_t>(offsetof(SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59, ___ObjectUpdates_1)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_ObjectUpdates_1() const { return ___ObjectUpdates_1; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_ObjectUpdates_1() { return &___ObjectUpdates_1; }
	inline void set_ObjectUpdates_1(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___ObjectUpdates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectUpdates_1), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSize_2() { return static_cast<int32_t>(offsetof(SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59, ___defaultSize_2)); }
	inline int32_t get_defaultSize_2() const { return ___defaultSize_2; }
	inline int32_t* get_address_of_defaultSize_2() { return &___defaultSize_2; }
	inline void set_defaultSize_2(int32_t value)
	{
		___defaultSize_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}
};


// Photon.Pun.PhotonTransformViewPositionModel/ExtrapolateOptions
struct ExtrapolateOptions_t8D5C4D7D4A1A13B1A3F83FF5E8321C083384F041 
{
public:
	// System.Int32 Photon.Pun.PhotonTransformViewPositionModel/ExtrapolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtrapolateOptions_t8D5C4D7D4A1A13B1A3F83FF5E8321C083384F041, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonTransformViewPositionModel/InterpolateOptions
struct InterpolateOptions_t056B41B8AB71DDE9EAF275E0B8FA08D0836AF405 
{
public:
	// System.Int32 Photon.Pun.PhotonTransformViewPositionModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_t056B41B8AB71DDE9EAF275E0B8FA08D0836AF405, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions
struct InterpolateOptions_tE6CE87190BF92912DFEC1A18DCEC9CD594FF51DE 
{
public:
	// System.Int32 Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_tE6CE87190BF92912DFEC1A18DCEC9CD594FF51DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions
struct InterpolateOptions_t797CE756E5C82928FA9259FE9054C6316F4C1900 
{
public:
	// System.Int32 Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_t797CE756E5C82928FA9259FE9054C6316F4C1900, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView/ObservableSearch
struct ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47 
{
public:
	// System.Int32 Photon.Pun.PhotonView/ObservableSearch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;

public:
	inline static int32_t get_offset_of_AppIdRealtime_0() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdRealtime_0)); }
	inline String_t* get_AppIdRealtime_0() const { return ___AppIdRealtime_0; }
	inline String_t** get_address_of_AppIdRealtime_0() { return &___AppIdRealtime_0; }
	inline void set_AppIdRealtime_0(String_t* value)
	{
		___AppIdRealtime_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdRealtime_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdFusion_1() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdFusion_1)); }
	inline String_t* get_AppIdFusion_1() const { return ___AppIdFusion_1; }
	inline String_t** get_address_of_AppIdFusion_1() { return &___AppIdFusion_1; }
	inline void set_AppIdFusion_1(String_t* value)
	{
		___AppIdFusion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdFusion_1), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdChat_2() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdChat_2)); }
	inline String_t* get_AppIdChat_2() const { return ___AppIdChat_2; }
	inline String_t** get_address_of_AppIdChat_2() { return &___AppIdChat_2; }
	inline void set_AppIdChat_2(String_t* value)
	{
		___AppIdChat_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_2), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdVoice_3() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdVoice_3)); }
	inline String_t* get_AppIdVoice_3() const { return ___AppIdVoice_3; }
	inline String_t** get_address_of_AppIdVoice_3() { return &___AppIdVoice_3; }
	inline void set_AppIdVoice_3(String_t* value)
	{
		___AppIdVoice_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdVoice_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_4() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppVersion_4)); }
	inline String_t* get_AppVersion_4() const { return ___AppVersion_4; }
	inline String_t** get_address_of_AppVersion_4() { return &___AppVersion_4; }
	inline void set_AppVersion_4(String_t* value)
	{
		___AppVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_UseNameServer_5() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___UseNameServer_5)); }
	inline bool get_UseNameServer_5() const { return ___UseNameServer_5; }
	inline bool* get_address_of_UseNameServer_5() { return &___UseNameServer_5; }
	inline void set_UseNameServer_5(bool value)
	{
		___UseNameServer_5 = value;
	}

	inline static int32_t get_offset_of_FixedRegion_6() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___FixedRegion_6)); }
	inline String_t* get_FixedRegion_6() const { return ___FixedRegion_6; }
	inline String_t** get_address_of_FixedRegion_6() { return &___FixedRegion_6; }
	inline void set_FixedRegion_6(String_t* value)
	{
		___FixedRegion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_6), (void*)value);
	}

	inline static int32_t get_offset_of_BestRegionSummaryFromStorage_7() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___BestRegionSummaryFromStorage_7)); }
	inline String_t* get_BestRegionSummaryFromStorage_7() const { return ___BestRegionSummaryFromStorage_7; }
	inline String_t** get_address_of_BestRegionSummaryFromStorage_7() { return &___BestRegionSummaryFromStorage_7; }
	inline void set_BestRegionSummaryFromStorage_7(String_t* value)
	{
		___BestRegionSummaryFromStorage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestRegionSummaryFromStorage_7), (void*)value);
	}

	inline static int32_t get_offset_of_Server_8() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Server_8)); }
	inline String_t* get_Server_8() const { return ___Server_8; }
	inline String_t** get_address_of_Server_8() { return &___Server_8; }
	inline void set_Server_8(String_t* value)
	{
		___Server_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_8), (void*)value);
	}

	inline static int32_t get_offset_of_Port_9() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Port_9)); }
	inline int32_t get_Port_9() const { return ___Port_9; }
	inline int32_t* get_address_of_Port_9() { return &___Port_9; }
	inline void set_Port_9(int32_t value)
	{
		___Port_9 = value;
	}

	inline static int32_t get_offset_of_ProxyServer_10() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___ProxyServer_10)); }
	inline String_t* get_ProxyServer_10() const { return ___ProxyServer_10; }
	inline String_t** get_address_of_ProxyServer_10() { return &___ProxyServer_10; }
	inline void set_ProxyServer_10(String_t* value)
	{
		___ProxyServer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServer_10), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_11() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Protocol_11)); }
	inline uint8_t get_Protocol_11() const { return ___Protocol_11; }
	inline uint8_t* get_address_of_Protocol_11() { return &___Protocol_11; }
	inline void set_Protocol_11(uint8_t value)
	{
		___Protocol_11 = value;
	}

	inline static int32_t get_offset_of_EnableProtocolFallback_12() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___EnableProtocolFallback_12)); }
	inline bool get_EnableProtocolFallback_12() const { return ___EnableProtocolFallback_12; }
	inline bool* get_address_of_EnableProtocolFallback_12() { return &___EnableProtocolFallback_12; }
	inline void set_EnableProtocolFallback_12(bool value)
	{
		___EnableProtocolFallback_12 = value;
	}

	inline static int32_t get_offset_of_AuthMode_13() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AuthMode_13)); }
	inline int32_t get_AuthMode_13() const { return ___AuthMode_13; }
	inline int32_t* get_address_of_AuthMode_13() { return &___AuthMode_13; }
	inline void set_AuthMode_13(int32_t value)
	{
		___AuthMode_13 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_14() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___EnableLobbyStatistics_14)); }
	inline bool get_EnableLobbyStatistics_14() const { return ___EnableLobbyStatistics_14; }
	inline bool* get_address_of_EnableLobbyStatistics_14() { return &___EnableLobbyStatistics_14; }
	inline void set_EnableLobbyStatistics_14(bool value)
	{
		___EnableLobbyStatistics_14 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_15() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___NetworkLogging_15)); }
	inline uint8_t get_NetworkLogging_15() const { return ___NetworkLogging_15; }
	inline uint8_t* get_address_of_NetworkLogging_15() { return &___NetworkLogging_15; }
	inline void set_NetworkLogging_15(uint8_t value)
	{
		___NetworkLogging_15 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC  : public RuntimeObject
{
public:

public:
};

struct PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields
{
public:
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___NetworkingClient_2;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_3;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::photonServerSettings
	ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * ___photonServerSettings_5;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_7;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_8;
	// System.Boolean Photon.Pun.PhotonNetwork::EnableCloseConnection
	bool ___EnableCloseConnection_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_11;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_12;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_13;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___offlineModeRoom_14;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_15;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_16;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_17;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_18;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_19;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_20;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___StartupStopwatch_21;
	// System.Single Photon.Pun.PhotonNetwork::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_22;
	// System.Boolean Photon.Pun.PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_24;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_25;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___PrefabsWithoutMagicCallback_26;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___SendInstantiateEvHashtable_27;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendInstantiateRaiseEventOptions_28;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___allowedReceivingGroups_29;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___blockedSendingGroups_30;
	// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::reusablePVHashset
	HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * ___reusablePVHashset_31;
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 * ___photonViewList_32;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipRequestEv_33;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipTransferedEv_34;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferFailedEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipTransferFailedEv_35;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_36;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_37;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_40;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_41;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * ___monoRPCMethodsCache_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___rpcShortcuts_43;
	// System.Boolean Photon.Pun.PhotonNetwork::RunRpcCoroutines
	bool ___RunRpcCoroutines_44;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ____AsyncLevelLoadingOperation_45;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_46;
	// System.Type Photon.Pun.PhotonNetwork::typePunRPC
	Type_t * ___typePunRPC_47;
	// System.Type Photon.Pun.PhotonNetwork::typePhotonMessageInfo
	Type_t * ___typePhotonMessageInfo_48;
	// System.Object Photon.Pun.PhotonNetwork::keyByteZero
	RuntimeObject * ___keyByteZero_49;
	// System.Object Photon.Pun.PhotonNetwork::keyByteOne
	RuntimeObject * ___keyByteOne_50;
	// System.Object Photon.Pun.PhotonNetwork::keyByteTwo
	RuntimeObject * ___keyByteTwo_51;
	// System.Object Photon.Pun.PhotonNetwork::keyByteThree
	RuntimeObject * ___keyByteThree_52;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFour
	RuntimeObject * ___keyByteFour_53;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFive
	RuntimeObject * ___keyByteFive_54;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSix
	RuntimeObject * ___keyByteSix_55;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSeven
	RuntimeObject * ___keyByteSeven_56;
	// System.Object Photon.Pun.PhotonNetwork::keyByteEight
	RuntimeObject * ___keyByteEight_57;
	// System.Object[] Photon.Pun.PhotonNetwork::emptyObjectArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyObjectArray_58;
	// System.Type[] Photon.Pun.PhotonNetwork::emptyTypeArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___emptyTypeArray_59;
	// System.Collections.Generic.List`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::foundPVs
	List_1_t22AB20B25E776225271DB850CE278C084A9985EF * ___foundPVs_60;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___removeFilter_61;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___ServerCleanDestroyEvent_62;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___ServerCleanOptions_63;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToAllOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToAllOptions_64;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToOthersOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToOthersOptions_65;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToSingleOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToSingleOptions_66;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___rpcFilterByViewId_67;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___OpCleanRpcBufferOptions_68;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___rpcEvent_69;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___RpcOptionsToAll_70;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_71;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___serializeStreamOut_72;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___serializeStreamIn_73;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___serializeRaiseEvOptions_74;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * ___serializeViewBatches_75;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ____cachedRegionHandler_80;

public:
	inline static int32_t get_offset_of_gameVersion_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___gameVersion_1)); }
	inline String_t* get_gameVersion_1() const { return ___gameVersion_1; }
	inline String_t** get_address_of_gameVersion_1() { return &___gameVersion_1; }
	inline void set_gameVersion_1(String_t* value)
	{
		___gameVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkingClient_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___NetworkingClient_2)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_NetworkingClient_2() const { return ___NetworkingClient_2; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_NetworkingClient_2() { return &___NetworkingClient_2; }
	inline void set_NetworkingClient_2(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___NetworkingClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkingClient_2), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___MAX_VIEW_IDS_3)); }
	inline int32_t get_MAX_VIEW_IDS_3() const { return ___MAX_VIEW_IDS_3; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_3() { return &___MAX_VIEW_IDS_3; }
	inline void set_MAX_VIEW_IDS_3(int32_t value)
	{
		___MAX_VIEW_IDS_3 = value;
	}

	inline static int32_t get_offset_of_photonServerSettings_5() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___photonServerSettings_5)); }
	inline ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * get_photonServerSettings_5() const { return ___photonServerSettings_5; }
	inline ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B ** get_address_of_photonServerSettings_5() { return &___photonServerSettings_5; }
	inline void set_photonServerSettings_5(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * value)
	{
		___photonServerSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonServerSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectMethod_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ConnectMethod_7)); }
	inline int32_t get_ConnectMethod_7() const { return ___ConnectMethod_7; }
	inline int32_t* get_address_of_ConnectMethod_7() { return &___ConnectMethod_7; }
	inline void set_ConnectMethod_7(int32_t value)
	{
		___ConnectMethod_7 = value;
	}

	inline static int32_t get_offset_of_LogLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___LogLevel_8)); }
	inline int32_t get_LogLevel_8() const { return ___LogLevel_8; }
	inline int32_t* get_address_of_LogLevel_8() { return &___LogLevel_8; }
	inline void set_LogLevel_8(int32_t value)
	{
		___LogLevel_8 = value;
	}

	inline static int32_t get_offset_of_EnableCloseConnection_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___EnableCloseConnection_9)); }
	inline bool get_EnableCloseConnection_9() const { return ___EnableCloseConnection_9; }
	inline bool* get_address_of_EnableCloseConnection_9() { return &___EnableCloseConnection_9; }
	inline void set_EnableCloseConnection_9(bool value)
	{
		___EnableCloseConnection_9 = value;
	}

	inline static int32_t get_offset_of_PrecisionForVectorSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForVectorSynchronization_10)); }
	inline float get_PrecisionForVectorSynchronization_10() const { return ___PrecisionForVectorSynchronization_10; }
	inline float* get_address_of_PrecisionForVectorSynchronization_10() { return &___PrecisionForVectorSynchronization_10; }
	inline void set_PrecisionForVectorSynchronization_10(float value)
	{
		___PrecisionForVectorSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_PrecisionForQuaternionSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForQuaternionSynchronization_11)); }
	inline float get_PrecisionForQuaternionSynchronization_11() const { return ___PrecisionForQuaternionSynchronization_11; }
	inline float* get_address_of_PrecisionForQuaternionSynchronization_11() { return &___PrecisionForQuaternionSynchronization_11; }
	inline void set_PrecisionForQuaternionSynchronization_11(float value)
	{
		___PrecisionForQuaternionSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_PrecisionForFloatSynchronization_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForFloatSynchronization_12)); }
	inline float get_PrecisionForFloatSynchronization_12() const { return ___PrecisionForFloatSynchronization_12; }
	inline float* get_address_of_PrecisionForFloatSynchronization_12() { return &___PrecisionForFloatSynchronization_12; }
	inline void set_PrecisionForFloatSynchronization_12(float value)
	{
		___PrecisionForFloatSynchronization_12 = value;
	}

	inline static int32_t get_offset_of_offlineMode_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___offlineMode_13)); }
	inline bool get_offlineMode_13() const { return ___offlineMode_13; }
	inline bool* get_address_of_offlineMode_13() { return &___offlineMode_13; }
	inline void set_offlineMode_13(bool value)
	{
		___offlineMode_13 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___offlineModeRoom_14)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_offlineModeRoom_14() const { return ___offlineModeRoom_14; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_offlineModeRoom_14() { return &___offlineModeRoom_14; }
	inline void set_offlineModeRoom_14(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___offlineModeRoom_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineModeRoom_14), (void*)value);
	}

	inline static int32_t get_offset_of_automaticallySyncScene_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___automaticallySyncScene_15)); }
	inline bool get_automaticallySyncScene_15() const { return ___automaticallySyncScene_15; }
	inline bool* get_address_of_automaticallySyncScene_15() { return &___automaticallySyncScene_15; }
	inline void set_automaticallySyncScene_15(bool value)
	{
		___automaticallySyncScene_15 = value;
	}

	inline static int32_t get_offset_of_sendFrequency_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___sendFrequency_16)); }
	inline int32_t get_sendFrequency_16() const { return ___sendFrequency_16; }
	inline int32_t* get_address_of_sendFrequency_16() { return &___sendFrequency_16; }
	inline void set_sendFrequency_16(int32_t value)
	{
		___sendFrequency_16 = value;
	}

	inline static int32_t get_offset_of_serializationFrequency_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializationFrequency_17)); }
	inline int32_t get_serializationFrequency_17() const { return ___serializationFrequency_17; }
	inline int32_t* get_address_of_serializationFrequency_17() { return &___serializationFrequency_17; }
	inline void set_serializationFrequency_17(int32_t value)
	{
		___serializationFrequency_17 = value;
	}

	inline static int32_t get_offset_of_isMessageQueueRunning_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___isMessageQueueRunning_18)); }
	inline bool get_isMessageQueueRunning_18() const { return ___isMessageQueueRunning_18; }
	inline bool* get_address_of_isMessageQueueRunning_18() { return &___isMessageQueueRunning_18; }
	inline void set_isMessageQueueRunning_18(bool value)
	{
		___isMessageQueueRunning_18 = value;
	}

	inline static int32_t get_offset_of_frametime_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___frametime_19)); }
	inline double get_frametime_19() const { return ___frametime_19; }
	inline double* get_address_of_frametime_19() { return &___frametime_19; }
	inline void set_frametime_19(double value)
	{
		___frametime_19 = value;
	}

	inline static int32_t get_offset_of_frame_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___frame_20)); }
	inline int32_t get_frame_20() const { return ___frame_20; }
	inline int32_t* get_address_of_frame_20() { return &___frame_20; }
	inline void set_frame_20(int32_t value)
	{
		___frame_20 = value;
	}

	inline static int32_t get_offset_of_StartupStopwatch_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___StartupStopwatch_21)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_StartupStopwatch_21() const { return ___StartupStopwatch_21; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_StartupStopwatch_21() { return &___StartupStopwatch_21; }
	inline void set_StartupStopwatch_21(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___StartupStopwatch_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartupStopwatch_21), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___MinimalTimeScaleToDispatchInFixedUpdate_22)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_22() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_22; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_22() { return &___MinimalTimeScaleToDispatchInFixedUpdate_22; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_22(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_22 = value;
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_23; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_23(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___lastUsedViewSubId_24)); }
	inline int32_t get_lastUsedViewSubId_24() const { return ___lastUsedViewSubId_24; }
	inline int32_t* get_address_of_lastUsedViewSubId_24() { return &___lastUsedViewSubId_24; }
	inline void set_lastUsedViewSubId_24(int32_t value)
	{
		___lastUsedViewSubId_24 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___lastUsedViewSubIdStatic_25)); }
	inline int32_t get_lastUsedViewSubIdStatic_25() const { return ___lastUsedViewSubIdStatic_25; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_25() { return &___lastUsedViewSubIdStatic_25; }
	inline void set_lastUsedViewSubIdStatic_25(int32_t value)
	{
		___lastUsedViewSubIdStatic_25 = value;
	}

	inline static int32_t get_offset_of_PrefabsWithoutMagicCallback_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrefabsWithoutMagicCallback_26)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_PrefabsWithoutMagicCallback_26() const { return ___PrefabsWithoutMagicCallback_26; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_PrefabsWithoutMagicCallback_26() { return &___PrefabsWithoutMagicCallback_26; }
	inline void set_PrefabsWithoutMagicCallback_26(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___PrefabsWithoutMagicCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabsWithoutMagicCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateEvHashtable_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendInstantiateEvHashtable_27)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_SendInstantiateEvHashtable_27() const { return ___SendInstantiateEvHashtable_27; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_SendInstantiateEvHashtable_27() { return &___SendInstantiateEvHashtable_27; }
	inline void set_SendInstantiateEvHashtable_27(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___SendInstantiateEvHashtable_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateEvHashtable_27), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateRaiseEventOptions_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendInstantiateRaiseEventOptions_28)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendInstantiateRaiseEventOptions_28() const { return ___SendInstantiateRaiseEventOptions_28; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendInstantiateRaiseEventOptions_28() { return &___SendInstantiateRaiseEventOptions_28; }
	inline void set_SendInstantiateRaiseEventOptions_28(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendInstantiateRaiseEventOptions_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateRaiseEventOptions_28), (void*)value);
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___allowedReceivingGroups_29)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_allowedReceivingGroups_29() const { return ___allowedReceivingGroups_29; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_allowedReceivingGroups_29() { return &___allowedReceivingGroups_29; }
	inline void set_allowedReceivingGroups_29(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___allowedReceivingGroups_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowedReceivingGroups_29), (void*)value);
	}

	inline static int32_t get_offset_of_blockedSendingGroups_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___blockedSendingGroups_30)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_blockedSendingGroups_30() const { return ___blockedSendingGroups_30; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_blockedSendingGroups_30() { return &___blockedSendingGroups_30; }
	inline void set_blockedSendingGroups_30(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___blockedSendingGroups_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockedSendingGroups_30), (void*)value);
	}

	inline static int32_t get_offset_of_reusablePVHashset_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___reusablePVHashset_31)); }
	inline HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * get_reusablePVHashset_31() const { return ___reusablePVHashset_31; }
	inline HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 ** get_address_of_reusablePVHashset_31() { return &___reusablePVHashset_31; }
	inline void set_reusablePVHashset_31(HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * value)
	{
		___reusablePVHashset_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusablePVHashset_31), (void*)value);
	}

	inline static int32_t get_offset_of_photonViewList_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___photonViewList_32)); }
	inline NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 * get_photonViewList_32() const { return ___photonViewList_32; }
	inline NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 ** get_address_of_photonViewList_32() { return &___photonViewList_32; }
	inline void set_photonViewList_32(NonAllocDictionary_2_tB56BBD9C21CA56D0E59BE303728BD417047C2F49 * value)
	{
		___photonViewList_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonViewList_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipRequestEv_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipRequestEv_33)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipRequestEv_33() const { return ___OnOwnershipRequestEv_33; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipRequestEv_33() { return &___OnOwnershipRequestEv_33; }
	inline void set_OnOwnershipRequestEv_33(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipRequestEv_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipRequestEv_33), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferedEv_34() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipTransferedEv_34)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipTransferedEv_34() const { return ___OnOwnershipTransferedEv_34; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipTransferedEv_34() { return &___OnOwnershipTransferedEv_34; }
	inline void set_OnOwnershipTransferedEv_34(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipTransferedEv_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferedEv_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferFailedEv_35() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipTransferFailedEv_35)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipTransferFailedEv_35() const { return ___OnOwnershipTransferFailedEv_35; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipTransferFailedEv_35() { return &___OnOwnershipTransferFailedEv_35; }
	inline void set_OnOwnershipTransferFailedEv_35(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipTransferFailedEv_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferFailedEv_35), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_36() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___currentLevelPrefix_36)); }
	inline uint8_t get_currentLevelPrefix_36() const { return ___currentLevelPrefix_36; }
	inline uint8_t* get_address_of_currentLevelPrefix_36() { return &___currentLevelPrefix_36; }
	inline void set_currentLevelPrefix_36(uint8_t value)
	{
		___currentLevelPrefix_36 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_37() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___loadingLevelAndPausedNetwork_37)); }
	inline bool get_loadingLevelAndPausedNetwork_37() const { return ___loadingLevelAndPausedNetwork_37; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_37() { return &___loadingLevelAndPausedNetwork_37; }
	inline void set_loadingLevelAndPausedNetwork_37(bool value)
	{
		___loadingLevelAndPausedNetwork_37 = value;
	}

	inline static int32_t get_offset_of_prefabPool_40() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___prefabPool_40)); }
	inline RuntimeObject* get_prefabPool_40() const { return ___prefabPool_40; }
	inline RuntimeObject** get_address_of_prefabPool_40() { return &___prefabPool_40; }
	inline void set_prefabPool_40(RuntimeObject* value)
	{
		___prefabPool_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPool_40), (void*)value);
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_41() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___UseRpcMonoBehaviourCache_41)); }
	inline bool get_UseRpcMonoBehaviourCache_41() const { return ___UseRpcMonoBehaviourCache_41; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_41() { return &___UseRpcMonoBehaviourCache_41; }
	inline void set_UseRpcMonoBehaviourCache_41(bool value)
	{
		___UseRpcMonoBehaviourCache_41 = value;
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_42() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___monoRPCMethodsCache_42)); }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * get_monoRPCMethodsCache_42() const { return ___monoRPCMethodsCache_42; }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C ** get_address_of_monoRPCMethodsCache_42() { return &___monoRPCMethodsCache_42; }
	inline void set_monoRPCMethodsCache_42(Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * value)
	{
		___monoRPCMethodsCache_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoRPCMethodsCache_42), (void*)value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_43() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcShortcuts_43)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_rpcShortcuts_43() const { return ___rpcShortcuts_43; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_rpcShortcuts_43() { return &___rpcShortcuts_43; }
	inline void set_rpcShortcuts_43(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___rpcShortcuts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcShortcuts_43), (void*)value);
	}

	inline static int32_t get_offset_of_RunRpcCoroutines_44() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___RunRpcCoroutines_44)); }
	inline bool get_RunRpcCoroutines_44() const { return ___RunRpcCoroutines_44; }
	inline bool* get_address_of_RunRpcCoroutines_44() { return &___RunRpcCoroutines_44; }
	inline void set_RunRpcCoroutines_44(bool value)
	{
		___RunRpcCoroutines_44 = value;
	}

	inline static int32_t get_offset_of__AsyncLevelLoadingOperation_45() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____AsyncLevelLoadingOperation_45)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get__AsyncLevelLoadingOperation_45() const { return ____AsyncLevelLoadingOperation_45; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of__AsyncLevelLoadingOperation_45() { return &____AsyncLevelLoadingOperation_45; }
	inline void set__AsyncLevelLoadingOperation_45(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		____AsyncLevelLoadingOperation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AsyncLevelLoadingOperation_45), (void*)value);
	}

	inline static int32_t get_offset_of__levelLoadingProgress_46() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____levelLoadingProgress_46)); }
	inline float get__levelLoadingProgress_46() const { return ____levelLoadingProgress_46; }
	inline float* get_address_of__levelLoadingProgress_46() { return &____levelLoadingProgress_46; }
	inline void set__levelLoadingProgress_46(float value)
	{
		____levelLoadingProgress_46 = value;
	}

	inline static int32_t get_offset_of_typePunRPC_47() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___typePunRPC_47)); }
	inline Type_t * get_typePunRPC_47() const { return ___typePunRPC_47; }
	inline Type_t ** get_address_of_typePunRPC_47() { return &___typePunRPC_47; }
	inline void set_typePunRPC_47(Type_t * value)
	{
		___typePunRPC_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePunRPC_47), (void*)value);
	}

	inline static int32_t get_offset_of_typePhotonMessageInfo_48() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___typePhotonMessageInfo_48)); }
	inline Type_t * get_typePhotonMessageInfo_48() const { return ___typePhotonMessageInfo_48; }
	inline Type_t ** get_address_of_typePhotonMessageInfo_48() { return &___typePhotonMessageInfo_48; }
	inline void set_typePhotonMessageInfo_48(Type_t * value)
	{
		___typePhotonMessageInfo_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePhotonMessageInfo_48), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteZero_49() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteZero_49)); }
	inline RuntimeObject * get_keyByteZero_49() const { return ___keyByteZero_49; }
	inline RuntimeObject ** get_address_of_keyByteZero_49() { return &___keyByteZero_49; }
	inline void set_keyByteZero_49(RuntimeObject * value)
	{
		___keyByteZero_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteZero_49), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteOne_50() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteOne_50)); }
	inline RuntimeObject * get_keyByteOne_50() const { return ___keyByteOne_50; }
	inline RuntimeObject ** get_address_of_keyByteOne_50() { return &___keyByteOne_50; }
	inline void set_keyByteOne_50(RuntimeObject * value)
	{
		___keyByteOne_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteOne_50), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteTwo_51() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteTwo_51)); }
	inline RuntimeObject * get_keyByteTwo_51() const { return ___keyByteTwo_51; }
	inline RuntimeObject ** get_address_of_keyByteTwo_51() { return &___keyByteTwo_51; }
	inline void set_keyByteTwo_51(RuntimeObject * value)
	{
		___keyByteTwo_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteTwo_51), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteThree_52() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteThree_52)); }
	inline RuntimeObject * get_keyByteThree_52() const { return ___keyByteThree_52; }
	inline RuntimeObject ** get_address_of_keyByteThree_52() { return &___keyByteThree_52; }
	inline void set_keyByteThree_52(RuntimeObject * value)
	{
		___keyByteThree_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteThree_52), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFour_53() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteFour_53)); }
	inline RuntimeObject * get_keyByteFour_53() const { return ___keyByteFour_53; }
	inline RuntimeObject ** get_address_of_keyByteFour_53() { return &___keyByteFour_53; }
	inline void set_keyByteFour_53(RuntimeObject * value)
	{
		___keyByteFour_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFour_53), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFive_54() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteFive_54)); }
	inline RuntimeObject * get_keyByteFive_54() const { return ___keyByteFive_54; }
	inline RuntimeObject ** get_address_of_keyByteFive_54() { return &___keyByteFive_54; }
	inline void set_keyByteFive_54(RuntimeObject * value)
	{
		___keyByteFive_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFive_54), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSix_55() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteSix_55)); }
	inline RuntimeObject * get_keyByteSix_55() const { return ___keyByteSix_55; }
	inline RuntimeObject ** get_address_of_keyByteSix_55() { return &___keyByteSix_55; }
	inline void set_keyByteSix_55(RuntimeObject * value)
	{
		___keyByteSix_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSix_55), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSeven_56() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteSeven_56)); }
	inline RuntimeObject * get_keyByteSeven_56() const { return ___keyByteSeven_56; }
	inline RuntimeObject ** get_address_of_keyByteSeven_56() { return &___keyByteSeven_56; }
	inline void set_keyByteSeven_56(RuntimeObject * value)
	{
		___keyByteSeven_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSeven_56), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteEight_57() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteEight_57)); }
	inline RuntimeObject * get_keyByteEight_57() const { return ___keyByteEight_57; }
	inline RuntimeObject ** get_address_of_keyByteEight_57() { return &___keyByteEight_57; }
	inline void set_keyByteEight_57(RuntimeObject * value)
	{
		___keyByteEight_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteEight_57), (void*)value);
	}

	inline static int32_t get_offset_of_emptyObjectArray_58() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___emptyObjectArray_58)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyObjectArray_58() const { return ___emptyObjectArray_58; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyObjectArray_58() { return &___emptyObjectArray_58; }
	inline void set_emptyObjectArray_58(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyObjectArray_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyObjectArray_58), (void*)value);
	}

	inline static int32_t get_offset_of_emptyTypeArray_59() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___emptyTypeArray_59)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_emptyTypeArray_59() const { return ___emptyTypeArray_59; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_emptyTypeArray_59() { return &___emptyTypeArray_59; }
	inline void set_emptyTypeArray_59(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___emptyTypeArray_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyTypeArray_59), (void*)value);
	}

	inline static int32_t get_offset_of_foundPVs_60() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___foundPVs_60)); }
	inline List_1_t22AB20B25E776225271DB850CE278C084A9985EF * get_foundPVs_60() const { return ___foundPVs_60; }
	inline List_1_t22AB20B25E776225271DB850CE278C084A9985EF ** get_address_of_foundPVs_60() { return &___foundPVs_60; }
	inline void set_foundPVs_60(List_1_t22AB20B25E776225271DB850CE278C084A9985EF * value)
	{
		___foundPVs_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundPVs_60), (void*)value);
	}

	inline static int32_t get_offset_of_removeFilter_61() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___removeFilter_61)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_removeFilter_61() const { return ___removeFilter_61; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_removeFilter_61() { return &___removeFilter_61; }
	inline void set_removeFilter_61(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___removeFilter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeFilter_61), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanDestroyEvent_62() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ServerCleanDestroyEvent_62)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_ServerCleanDestroyEvent_62() const { return ___ServerCleanDestroyEvent_62; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_ServerCleanDestroyEvent_62() { return &___ServerCleanDestroyEvent_62; }
	inline void set_ServerCleanDestroyEvent_62(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___ServerCleanDestroyEvent_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanDestroyEvent_62), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanOptions_63() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ServerCleanOptions_63)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_ServerCleanOptions_63() const { return ___ServerCleanOptions_63; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_ServerCleanOptions_63() { return &___ServerCleanOptions_63; }
	inline void set_ServerCleanOptions_63(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___ServerCleanOptions_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanOptions_63), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAllOptions_64() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToAllOptions_64)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToAllOptions_64() const { return ___SendToAllOptions_64; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToAllOptions_64() { return &___SendToAllOptions_64; }
	inline void set_SendToAllOptions_64(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToAllOptions_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAllOptions_64), (void*)value);
	}

	inline static int32_t get_offset_of_SendToOthersOptions_65() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToOthersOptions_65)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToOthersOptions_65() const { return ___SendToOthersOptions_65; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToOthersOptions_65() { return &___SendToOthersOptions_65; }
	inline void set_SendToOthersOptions_65(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToOthersOptions_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToOthersOptions_65), (void*)value);
	}

	inline static int32_t get_offset_of_SendToSingleOptions_66() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToSingleOptions_66)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToSingleOptions_66() const { return ___SendToSingleOptions_66; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToSingleOptions_66() { return &___SendToSingleOptions_66; }
	inline void set_SendToSingleOptions_66(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToSingleOptions_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToSingleOptions_66), (void*)value);
	}

	inline static int32_t get_offset_of_rpcFilterByViewId_67() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcFilterByViewId_67)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_rpcFilterByViewId_67() const { return ___rpcFilterByViewId_67; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_rpcFilterByViewId_67() { return &___rpcFilterByViewId_67; }
	inline void set_rpcFilterByViewId_67(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___rpcFilterByViewId_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcFilterByViewId_67), (void*)value);
	}

	inline static int32_t get_offset_of_OpCleanRpcBufferOptions_68() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OpCleanRpcBufferOptions_68)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_OpCleanRpcBufferOptions_68() const { return ___OpCleanRpcBufferOptions_68; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_OpCleanRpcBufferOptions_68() { return &___OpCleanRpcBufferOptions_68; }
	inline void set_OpCleanRpcBufferOptions_68(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___OpCleanRpcBufferOptions_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpCleanRpcBufferOptions_68), (void*)value);
	}

	inline static int32_t get_offset_of_rpcEvent_69() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcEvent_69)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_rpcEvent_69() const { return ___rpcEvent_69; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_rpcEvent_69() { return &___rpcEvent_69; }
	inline void set_rpcEvent_69(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___rpcEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcEvent_69), (void*)value);
	}

	inline static int32_t get_offset_of_RpcOptionsToAll_70() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___RpcOptionsToAll_70)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_RpcOptionsToAll_70() const { return ___RpcOptionsToAll_70; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_RpcOptionsToAll_70() { return &___RpcOptionsToAll_70; }
	inline void set_RpcOptionsToAll_70(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___RpcOptionsToAll_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcOptionsToAll_70), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_71() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ObjectsInOneUpdate_71)); }
	inline int32_t get_ObjectsInOneUpdate_71() const { return ___ObjectsInOneUpdate_71; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_71() { return &___ObjectsInOneUpdate_71; }
	inline void set_ObjectsInOneUpdate_71(int32_t value)
	{
		___ObjectsInOneUpdate_71 = value;
	}

	inline static int32_t get_offset_of_serializeStreamOut_72() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeStreamOut_72)); }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * get_serializeStreamOut_72() const { return ___serializeStreamOut_72; }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA ** get_address_of_serializeStreamOut_72() { return &___serializeStreamOut_72; }
	inline void set_serializeStreamOut_72(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * value)
	{
		___serializeStreamOut_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamOut_72), (void*)value);
	}

	inline static int32_t get_offset_of_serializeStreamIn_73() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeStreamIn_73)); }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * get_serializeStreamIn_73() const { return ___serializeStreamIn_73; }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA ** get_address_of_serializeStreamIn_73() { return &___serializeStreamIn_73; }
	inline void set_serializeStreamIn_73(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * value)
	{
		___serializeStreamIn_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamIn_73), (void*)value);
	}

	inline static int32_t get_offset_of_serializeRaiseEvOptions_74() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeRaiseEvOptions_74)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_serializeRaiseEvOptions_74() const { return ___serializeRaiseEvOptions_74; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_serializeRaiseEvOptions_74() { return &___serializeRaiseEvOptions_74; }
	inline void set_serializeRaiseEvOptions_74(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___serializeRaiseEvOptions_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeRaiseEvOptions_74), (void*)value);
	}

	inline static int32_t get_offset_of_serializeViewBatches_75() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeViewBatches_75)); }
	inline Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * get_serializeViewBatches_75() const { return ___serializeViewBatches_75; }
	inline Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 ** get_address_of_serializeViewBatches_75() { return &___serializeViewBatches_75; }
	inline void set_serializeViewBatches_75(Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * value)
	{
		___serializeViewBatches_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeViewBatches_75), (void*)value);
	}

	inline static int32_t get_offset_of__cachedRegionHandler_80() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____cachedRegionHandler_80)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get__cachedRegionHandler_80() const { return ____cachedRegionHandler_80; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of__cachedRegionHandler_80() { return &____cachedRegionHandler_80; }
	inline void set__cachedRegionHandler_80(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		____cachedRegionHandler_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedRegionHandler_80), (void*)value);
	}
};


// Photon.Pun.PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0  : public RuntimeObject
{
public:
	// System.Boolean Photon.Pun.PhotonTransformViewPositionModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// System.Boolean Photon.Pun.PhotonTransformViewPositionModel::TeleportEnabled
	bool ___TeleportEnabled_1;
	// System.Single Photon.Pun.PhotonTransformViewPositionModel::TeleportIfDistanceGreaterThan
	float ___TeleportIfDistanceGreaterThan_2;
	// Photon.Pun.PhotonTransformViewPositionModel/InterpolateOptions Photon.Pun.PhotonTransformViewPositionModel::InterpolateOption
	int32_t ___InterpolateOption_3;
	// System.Single Photon.Pun.PhotonTransformViewPositionModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed_4;
	// System.Single Photon.Pun.PhotonTransformViewPositionModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_5;
	// Photon.Pun.PhotonTransformViewPositionModel/ExtrapolateOptions Photon.Pun.PhotonTransformViewPositionModel::ExtrapolateOption
	int32_t ___ExtrapolateOption_6;
	// System.Single Photon.Pun.PhotonTransformViewPositionModel::ExtrapolateSpeed
	float ___ExtrapolateSpeed_7;
	// System.Boolean Photon.Pun.PhotonTransformViewPositionModel::ExtrapolateIncludingRoundTripTime
	bool ___ExtrapolateIncludingRoundTripTime_8;
	// System.Int32 Photon.Pun.PhotonTransformViewPositionModel::ExtrapolateNumberOfStoredPositions
	int32_t ___ExtrapolateNumberOfStoredPositions_9;

public:
	inline static int32_t get_offset_of_SynchronizeEnabled_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___SynchronizeEnabled_0)); }
	inline bool get_SynchronizeEnabled_0() const { return ___SynchronizeEnabled_0; }
	inline bool* get_address_of_SynchronizeEnabled_0() { return &___SynchronizeEnabled_0; }
	inline void set_SynchronizeEnabled_0(bool value)
	{
		___SynchronizeEnabled_0 = value;
	}

	inline static int32_t get_offset_of_TeleportEnabled_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___TeleportEnabled_1)); }
	inline bool get_TeleportEnabled_1() const { return ___TeleportEnabled_1; }
	inline bool* get_address_of_TeleportEnabled_1() { return &___TeleportEnabled_1; }
	inline void set_TeleportEnabled_1(bool value)
	{
		___TeleportEnabled_1 = value;
	}

	inline static int32_t get_offset_of_TeleportIfDistanceGreaterThan_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___TeleportIfDistanceGreaterThan_2)); }
	inline float get_TeleportIfDistanceGreaterThan_2() const { return ___TeleportIfDistanceGreaterThan_2; }
	inline float* get_address_of_TeleportIfDistanceGreaterThan_2() { return &___TeleportIfDistanceGreaterThan_2; }
	inline void set_TeleportIfDistanceGreaterThan_2(float value)
	{
		___TeleportIfDistanceGreaterThan_2 = value;
	}

	inline static int32_t get_offset_of_InterpolateOption_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___InterpolateOption_3)); }
	inline int32_t get_InterpolateOption_3() const { return ___InterpolateOption_3; }
	inline int32_t* get_address_of_InterpolateOption_3() { return &___InterpolateOption_3; }
	inline void set_InterpolateOption_3(int32_t value)
	{
		___InterpolateOption_3 = value;
	}

	inline static int32_t get_offset_of_InterpolateMoveTowardsSpeed_4() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___InterpolateMoveTowardsSpeed_4)); }
	inline float get_InterpolateMoveTowardsSpeed_4() const { return ___InterpolateMoveTowardsSpeed_4; }
	inline float* get_address_of_InterpolateMoveTowardsSpeed_4() { return &___InterpolateMoveTowardsSpeed_4; }
	inline void set_InterpolateMoveTowardsSpeed_4(float value)
	{
		___InterpolateMoveTowardsSpeed_4 = value;
	}

	inline static int32_t get_offset_of_InterpolateLerpSpeed_5() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___InterpolateLerpSpeed_5)); }
	inline float get_InterpolateLerpSpeed_5() const { return ___InterpolateLerpSpeed_5; }
	inline float* get_address_of_InterpolateLerpSpeed_5() { return &___InterpolateLerpSpeed_5; }
	inline void set_InterpolateLerpSpeed_5(float value)
	{
		___InterpolateLerpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateOption_6() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___ExtrapolateOption_6)); }
	inline int32_t get_ExtrapolateOption_6() const { return ___ExtrapolateOption_6; }
	inline int32_t* get_address_of_ExtrapolateOption_6() { return &___ExtrapolateOption_6; }
	inline void set_ExtrapolateOption_6(int32_t value)
	{
		___ExtrapolateOption_6 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateSpeed_7() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___ExtrapolateSpeed_7)); }
	inline float get_ExtrapolateSpeed_7() const { return ___ExtrapolateSpeed_7; }
	inline float* get_address_of_ExtrapolateSpeed_7() { return &___ExtrapolateSpeed_7; }
	inline void set_ExtrapolateSpeed_7(float value)
	{
		___ExtrapolateSpeed_7 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateIncludingRoundTripTime_8() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___ExtrapolateIncludingRoundTripTime_8)); }
	inline bool get_ExtrapolateIncludingRoundTripTime_8() const { return ___ExtrapolateIncludingRoundTripTime_8; }
	inline bool* get_address_of_ExtrapolateIncludingRoundTripTime_8() { return &___ExtrapolateIncludingRoundTripTime_8; }
	inline void set_ExtrapolateIncludingRoundTripTime_8(bool value)
	{
		___ExtrapolateIncludingRoundTripTime_8 = value;
	}

	inline static int32_t get_offset_of_ExtrapolateNumberOfStoredPositions_9() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0, ___ExtrapolateNumberOfStoredPositions_9)); }
	inline int32_t get_ExtrapolateNumberOfStoredPositions_9() const { return ___ExtrapolateNumberOfStoredPositions_9; }
	inline int32_t* get_address_of_ExtrapolateNumberOfStoredPositions_9() { return &___ExtrapolateNumberOfStoredPositions_9; }
	inline void set_ExtrapolateNumberOfStoredPositions_9(int32_t value)
	{
		___ExtrapolateNumberOfStoredPositions_9 = value;
	}
};


// Photon.Pun.PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773  : public RuntimeObject
{
public:
	// System.Boolean Photon.Pun.PhotonTransformViewRotationModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Photon.Pun.PhotonTransformViewRotationModel::InterpolateOption
	int32_t ___InterpolateOption_1;
	// System.Single Photon.Pun.PhotonTransformViewRotationModel::InterpolateRotateTowardsSpeed
	float ___InterpolateRotateTowardsSpeed_2;
	// System.Single Photon.Pun.PhotonTransformViewRotationModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_3;

public:
	inline static int32_t get_offset_of_SynchronizeEnabled_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773, ___SynchronizeEnabled_0)); }
	inline bool get_SynchronizeEnabled_0() const { return ___SynchronizeEnabled_0; }
	inline bool* get_address_of_SynchronizeEnabled_0() { return &___SynchronizeEnabled_0; }
	inline void set_SynchronizeEnabled_0(bool value)
	{
		___SynchronizeEnabled_0 = value;
	}

	inline static int32_t get_offset_of_InterpolateOption_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773, ___InterpolateOption_1)); }
	inline int32_t get_InterpolateOption_1() const { return ___InterpolateOption_1; }
	inline int32_t* get_address_of_InterpolateOption_1() { return &___InterpolateOption_1; }
	inline void set_InterpolateOption_1(int32_t value)
	{
		___InterpolateOption_1 = value;
	}

	inline static int32_t get_offset_of_InterpolateRotateTowardsSpeed_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773, ___InterpolateRotateTowardsSpeed_2)); }
	inline float get_InterpolateRotateTowardsSpeed_2() const { return ___InterpolateRotateTowardsSpeed_2; }
	inline float* get_address_of_InterpolateRotateTowardsSpeed_2() { return &___InterpolateRotateTowardsSpeed_2; }
	inline void set_InterpolateRotateTowardsSpeed_2(float value)
	{
		___InterpolateRotateTowardsSpeed_2 = value;
	}

	inline static int32_t get_offset_of_InterpolateLerpSpeed_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773, ___InterpolateLerpSpeed_3)); }
	inline float get_InterpolateLerpSpeed_3() const { return ___InterpolateLerpSpeed_3; }
	inline float* get_address_of_InterpolateLerpSpeed_3() { return &___InterpolateLerpSpeed_3; }
	inline void set_InterpolateLerpSpeed_3(float value)
	{
		___InterpolateLerpSpeed_3 = value;
	}
};


// Photon.Pun.PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51  : public RuntimeObject
{
public:
	// System.Boolean Photon.Pun.PhotonTransformViewScaleModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Photon.Pun.PhotonTransformViewScaleModel::InterpolateOption
	int32_t ___InterpolateOption_1;
	// System.Single Photon.Pun.PhotonTransformViewScaleModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed_2;
	// System.Single Photon.Pun.PhotonTransformViewScaleModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_3;

public:
	inline static int32_t get_offset_of_SynchronizeEnabled_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51, ___SynchronizeEnabled_0)); }
	inline bool get_SynchronizeEnabled_0() const { return ___SynchronizeEnabled_0; }
	inline bool* get_address_of_SynchronizeEnabled_0() { return &___SynchronizeEnabled_0; }
	inline void set_SynchronizeEnabled_0(bool value)
	{
		___SynchronizeEnabled_0 = value;
	}

	inline static int32_t get_offset_of_InterpolateOption_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51, ___InterpolateOption_1)); }
	inline int32_t get_InterpolateOption_1() const { return ___InterpolateOption_1; }
	inline int32_t* get_address_of_InterpolateOption_1() { return &___InterpolateOption_1; }
	inline void set_InterpolateOption_1(int32_t value)
	{
		___InterpolateOption_1 = value;
	}

	inline static int32_t get_offset_of_InterpolateMoveTowardsSpeed_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51, ___InterpolateMoveTowardsSpeed_2)); }
	inline float get_InterpolateMoveTowardsSpeed_2() const { return ___InterpolateMoveTowardsSpeed_2; }
	inline float* get_address_of_InterpolateMoveTowardsSpeed_2() { return &___InterpolateMoveTowardsSpeed_2; }
	inline void set_InterpolateMoveTowardsSpeed_2(float value)
	{
		___InterpolateMoveTowardsSpeed_2 = value;
	}

	inline static int32_t get_offset_of_InterpolateLerpSpeed_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51, ___InterpolateLerpSpeed_3)); }
	inline float get_InterpolateLerpSpeed_3() const { return ___InterpolateLerpSpeed_3; }
	inline float* get_address_of_InterpolateLerpSpeed_3() { return &___InterpolateLerpSpeed_3; }
	inline void set_InterpolateLerpSpeed_3(float value)
	{
		___InterpolateLerpSpeed_3 = value;
	}
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


// Photon.Pun.PhotonAnimatorView/SynchronizedLayer
struct SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6  : public RuntimeObject
{
public:
	// Photon.Pun.PhotonAnimatorView/SynchronizeType Photon.Pun.PhotonAnimatorView/SynchronizedLayer::SynchronizeType
	int32_t ___SynchronizeType_0;
	// System.Int32 Photon.Pun.PhotonAnimatorView/SynchronizedLayer::LayerIndex
	int32_t ___LayerIndex_1;

public:
	inline static int32_t get_offset_of_SynchronizeType_0() { return static_cast<int32_t>(offsetof(SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6, ___SynchronizeType_0)); }
	inline int32_t get_SynchronizeType_0() const { return ___SynchronizeType_0; }
	inline int32_t* get_address_of_SynchronizeType_0() { return &___SynchronizeType_0; }
	inline void set_SynchronizeType_0(int32_t value)
	{
		___SynchronizeType_0 = value;
	}

	inline static int32_t get_offset_of_LayerIndex_1() { return static_cast<int32_t>(offsetof(SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6, ___LayerIndex_1)); }
	inline int32_t get_LayerIndex_1() const { return ___LayerIndex_1; }
	inline int32_t* get_address_of_LayerIndex_1() { return &___LayerIndex_1; }
	inline void set_LayerIndex_1(int32_t value)
	{
		___LayerIndex_1 = value;
	}
};


// Photon.Pun.PhotonAnimatorView/SynchronizedParameter
struct SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06  : public RuntimeObject
{
public:
	// Photon.Pun.PhotonAnimatorView/ParameterType Photon.Pun.PhotonAnimatorView/SynchronizedParameter::Type
	int32_t ___Type_0;
	// Photon.Pun.PhotonAnimatorView/SynchronizeType Photon.Pun.PhotonAnimatorView/SynchronizedParameter::SynchronizeType
	int32_t ___SynchronizeType_1;
	// System.String Photon.Pun.PhotonAnimatorView/SynchronizedParameter::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_SynchronizeType_1() { return static_cast<int32_t>(offsetof(SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06, ___SynchronizeType_1)); }
	inline int32_t get_SynchronizeType_1() const { return ___SynchronizeType_1; }
	inline int32_t* get_address_of_SynchronizeType_1() { return &___SynchronizeType_1; }
	inline void set_SynchronizeType_1(int32_t value)
	{
		___SynchronizeType_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD  ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject * ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 * ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 * ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CClientTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CClientTypeU3Ek__BackingField_3() const { return ___U3CClientTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CClientTypeU3Ek__BackingField_3() { return &___U3CClientTypeU3Ek__BackingField_3; }
	inline void set_U3CClientTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CClientTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAuthValuesU3Ek__BackingField_4)); }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * get_U3CAuthValuesU3Ek__BackingField_4() const { return ___U3CAuthValuesU3Ek__BackingField_4; }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A ** get_address_of_U3CAuthValuesU3Ek__BackingField_4() { return &___U3CAuthValuesU3Ek__BackingField_4; }
	inline void set_U3CAuthValuesU3Ek__BackingField_4(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * value)
	{
		___U3CAuthValuesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___AuthMode_5)); }
	inline int32_t get_AuthMode_5() const { return ___AuthMode_5; }
	inline int32_t* get_address_of_AuthMode_5() { return &___AuthMode_5; }
	inline void set_AuthMode_5(int32_t value)
	{
		___AuthMode_5 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EncryptionMode_6)); }
	inline int32_t get_EncryptionMode_6() const { return ___EncryptionMode_6; }
	inline int32_t* get_address_of_EncryptionMode_6() { return &___EncryptionMode_6; }
	inline void set_EncryptionMode_6(int32_t value)
	{
		___EncryptionMode_6 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CExpectedProtocolU3Ek__BackingField_7)); }
	inline Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD  get_U3CExpectedProtocolU3Ek__BackingField_7() const { return ___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD * get_address_of_U3CExpectedProtocolU3Ek__BackingField_7() { return &___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_7(Nullable_1_tA2CF59DB88D910A0389A6CE31CAC759FC6E3E4CD  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_tokenCache_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___tokenCache_8)); }
	inline RuntimeObject * get_tokenCache_8() const { return ___tokenCache_8; }
	inline RuntimeObject ** get_address_of_tokenCache_8() { return &___tokenCache_8; }
	inline void set_tokenCache_8(RuntimeObject * value)
	{
		___tokenCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CIsUsingNameServerU3Ek__BackingField_9)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_9() const { return ___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return &___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_9(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerHost_10)); }
	inline String_t* get_NameServerHost_10() const { return ___NameServerHost_10; }
	inline String_t** get_address_of_NameServerHost_10() { return &___NameServerHost_10; }
	inline void set_NameServerHost_10(String_t* value)
	{
		___NameServerHost_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_ServerPortOverrides_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ServerPortOverrides_13)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_ServerPortOverrides_13() const { return ___ServerPortOverrides_13; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_ServerPortOverrides_13() { return &___ServerPortOverrides_13; }
	inline void set_ServerPortOverrides_13(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___ServerPortOverrides_13 = value;
	}

	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CEnableProtocolFallbackU3Ek__BackingField_14)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_14() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_14(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CMasterServerAddressU3Ek__BackingField_15)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_15() const { return ___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_15() { return &___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_15(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CGameServerAddressU3Ek__BackingField_16)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_16() const { return ___U3CGameServerAddressU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_16() { return &___U3CGameServerAddressU3Ek__BackingField_16; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_16(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CServerU3Ek__BackingField_17)); }
	inline int32_t get_U3CServerU3Ek__BackingField_17() const { return ___U3CServerU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_17() { return &___U3CServerU3Ek__BackingField_17; }
	inline void set_U3CServerU3Ek__BackingField_17(int32_t value)
	{
		___U3CServerU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_ProxyServerAddress_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ProxyServerAddress_18)); }
	inline String_t* get_ProxyServerAddress_18() const { return ___ProxyServerAddress_18; }
	inline String_t** get_address_of_ProxyServerAddress_18() { return &___ProxyServerAddress_18; }
	inline void set_ProxyServerAddress_18(String_t* value)
	{
		___ProxyServerAddress_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_18), (void*)value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___state_19)); }
	inline int32_t get_state_19() const { return ___state_19; }
	inline int32_t* get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(int32_t value)
	{
		___state_19 = value;
	}

	inline static int32_t get_offset_of_StateChanged_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___StateChanged_20)); }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * get_StateChanged_20() const { return ___StateChanged_20; }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 ** get_address_of_StateChanged_20() { return &___StateChanged_20; }
	inline void set_StateChanged_20(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * value)
	{
		___StateChanged_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_20), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EventReceived_21)); }
	inline Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 * get_EventReceived_21() const { return ___EventReceived_21; }
	inline Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 ** get_address_of_EventReceived_21() { return &___EventReceived_21; }
	inline void set_EventReceived_21(Action_1_t61231B053F1E40EB760E7E161322235AC46FD570 * value)
	{
		___EventReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_21), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___OpResponseReceived_22)); }
	inline Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 * get_OpResponseReceived_22() const { return ___OpResponseReceived_22; }
	inline Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 ** get_address_of_OpResponseReceived_22() { return &___OpResponseReceived_22; }
	inline void set_OpResponseReceived_22(Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25 * value)
	{
		___OpResponseReceived_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_22), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ConnectionCallbackTargets_23)); }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * get_ConnectionCallbackTargets_23() const { return ___ConnectionCallbackTargets_23; }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 ** get_address_of_ConnectionCallbackTargets_23() { return &___ConnectionCallbackTargets_23; }
	inline void set_ConnectionCallbackTargets_23(ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * value)
	{
		___ConnectionCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___MatchMakingCallbackTargets_24)); }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * get_MatchMakingCallbackTargets_24() const { return ___MatchMakingCallbackTargets_24; }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 ** get_address_of_MatchMakingCallbackTargets_24() { return &___MatchMakingCallbackTargets_24; }
	inline void set_MatchMakingCallbackTargets_24(MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * value)
	{
		___MatchMakingCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___InRoomCallbackTargets_25)); }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * get_InRoomCallbackTargets_25() const { return ___InRoomCallbackTargets_25; }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 ** get_address_of_InRoomCallbackTargets_25() { return &___InRoomCallbackTargets_25; }
	inline void set_InRoomCallbackTargets_25(InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * value)
	{
		___InRoomCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___LobbyCallbackTargets_26)); }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * get_LobbyCallbackTargets_26() const { return ___LobbyCallbackTargets_26; }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 ** get_address_of_LobbyCallbackTargets_26() { return &___LobbyCallbackTargets_26; }
	inline void set_LobbyCallbackTargets_26(LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * value)
	{
		___LobbyCallbackTargets_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_26), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___WebRpcCallbackTargets_27)); }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * get_WebRpcCallbackTargets_27() const { return ___WebRpcCallbackTargets_27; }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 ** get_address_of_WebRpcCallbackTargets_27() { return &___WebRpcCallbackTargets_27; }
	inline void set_WebRpcCallbackTargets_27(WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * value)
	{
		___WebRpcCallbackTargets_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_27), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ErrorInfoCallbackTargets_28)); }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * get_ErrorInfoCallbackTargets_28() const { return ___ErrorInfoCallbackTargets_28; }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 ** get_address_of_ErrorInfoCallbackTargets_28() { return &___ErrorInfoCallbackTargets_28; }
	inline void set_ErrorInfoCallbackTargets_28(ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * value)
	{
		___ErrorInfoCallbackTargets_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CDisconnectedCauseU3Ek__BackingField_29)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_29() const { return ___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return &___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_29(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentLobbyU3Ek__BackingField_30)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_U3CCurrentLobbyU3Ek__BackingField_30() const { return ___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_30() { return &___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_30(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EnableLobbyStatistics_31)); }
	inline bool get_EnableLobbyStatistics_31() const { return ___EnableLobbyStatistics_31; }
	inline bool* get_address_of_EnableLobbyStatistics_31() { return &___EnableLobbyStatistics_31; }
	inline void set_EnableLobbyStatistics_31(bool value)
	{
		___EnableLobbyStatistics_31 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lobbyStatistics_32)); }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * get_lobbyStatistics_32() const { return ___lobbyStatistics_32; }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 ** get_address_of_lobbyStatistics_32() { return &___lobbyStatistics_32; }
	inline void set_lobbyStatistics_32(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * value)
	{
		___lobbyStatistics_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLocalPlayerU3Ek__BackingField_33)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CLocalPlayerU3Ek__BackingField_33() const { return ___U3CLocalPlayerU3Ek__BackingField_33; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_33() { return &___U3CLocalPlayerU3Ek__BackingField_33; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_33(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentRoomU3Ek__BackingField_34)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CCurrentRoomU3Ek__BackingField_34() const { return ___U3CCurrentRoomU3Ek__BackingField_34; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_34() { return &___U3CCurrentRoomU3Ek__BackingField_34; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_34(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersOnMasterCountU3Ek__BackingField_35)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_35() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_35(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersInRoomsCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_36() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CRoomsCountU3Ek__BackingField_37)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_37() const { return ___U3CRoomsCountU3Ek__BackingField_37; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_37() { return &___U3CRoomsCountU3Ek__BackingField_37; }
	inline void set_U3CRoomsCountU3Ek__BackingField_37(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lastJoinType_38)); }
	inline int32_t get_lastJoinType_38() const { return ___lastJoinType_38; }
	inline int32_t* get_address_of_lastJoinType_38() { return &___lastJoinType_38; }
	inline void set_lastJoinType_38(int32_t value)
	{
		___lastJoinType_38 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___enterRoomParamsCache_39)); }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * get_enterRoomParamsCache_39() const { return ___enterRoomParamsCache_39; }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E ** get_address_of_enterRoomParamsCache_39() { return &___enterRoomParamsCache_39; }
	inline void set_enterRoomParamsCache_39(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * value)
	{
		___enterRoomParamsCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___failedRoomEntryOperation_40)); }
	inline OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * get_failedRoomEntryOperation_40() const { return ___failedRoomEntryOperation_40; }
	inline OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD ** get_address_of_failedRoomEntryOperation_40() { return &___failedRoomEntryOperation_40; }
	inline void set_failedRoomEntryOperation_40(OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * value)
	{
		___failedRoomEntryOperation_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_40), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___friendListRequested_42)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_friendListRequested_42() const { return ___friendListRequested_42; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_friendListRequested_42() { return &___friendListRequested_42; }
	inline void set_friendListRequested_42(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___friendListRequested_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCloudRegionU3Ek__BackingField_43)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_43() const { return ___U3CCloudRegionU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_43() { return &___U3CCloudRegionU3Ek__BackingField_43; }
	inline void set_U3CCloudRegionU3Ek__BackingField_43(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentClusterU3Ek__BackingField_44)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_44() const { return ___U3CCurrentClusterU3Ek__BackingField_44; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_44() { return &___U3CCurrentClusterU3Ek__BackingField_44; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_44(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___RegionHandler_45)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get_RegionHandler_45() const { return ___RegionHandler_45; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of_RegionHandler_45() { return &___RegionHandler_45; }
	inline void set_RegionHandler_45(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		___RegionHandler_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_45), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___bestRegionSummaryFromStorage_46)); }
	inline String_t* get_bestRegionSummaryFromStorage_46() const { return ___bestRegionSummaryFromStorage_46; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_46() { return &___bestRegionSummaryFromStorage_46; }
	inline void set_bestRegionSummaryFromStorage_46(String_t* value)
	{
		___bestRegionSummaryFromStorage_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_46), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___SummaryToCache_47)); }
	inline String_t* get_SummaryToCache_47() const { return ___SummaryToCache_47; }
	inline String_t** get_address_of_SummaryToCache_47() { return &___SummaryToCache_47; }
	inline void set_SummaryToCache_47(String_t* value)
	{
		___SummaryToCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_48() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___connectToBestRegion_48)); }
	inline bool get_connectToBestRegion_48() const { return ___connectToBestRegion_48; }
	inline bool* get_address_of_connectToBestRegion_48() { return &___connectToBestRegion_48; }
	inline void set_connectToBestRegion_48(bool value)
	{
		___connectToBestRegion_48 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_49() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargetChanges_49)); }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * get_callbackTargetChanges_49() const { return ___callbackTargetChanges_49; }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 ** get_address_of_callbackTargetChanges_49() { return &___callbackTargetChanges_49; }
	inline void set_callbackTargetChanges_49(Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * value)
	{
		___callbackTargetChanges_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_49), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargets_50)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get_callbackTargets_50() const { return ___callbackTargets_50; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of_callbackTargets_50() { return &___callbackTargets_50; }
	inline void set_callbackTargets_50(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		___callbackTargets_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_50), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortInAppSettings_51() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerPortInAppSettings_51)); }
	inline int32_t get_NameServerPortInAppSettings_51() const { return ___NameServerPortInAppSettings_51; }
	inline int32_t* get_address_of_NameServerPortInAppSettings_51() { return &___NameServerPortInAppSettings_51; }
	inline void set_NameServerPortInAppSettings_51(int32_t value)
	{
		___NameServerPortInAppSettings_51 = value;
	}
};

struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Photon.Pun.ServerSettings
struct ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___RpcList_10;

public:
	inline static int32_t get_offset_of_AppSettings_4() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___AppSettings_4)); }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * get_AppSettings_4() const { return ___AppSettings_4; }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 ** get_address_of_AppSettings_4() { return &___AppSettings_4; }
	inline void set_AppSettings_4(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * value)
	{
		___AppSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppSettings_4), (void*)value);
	}

	inline static int32_t get_offset_of_DevRegion_5() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___DevRegion_5)); }
	inline String_t* get_DevRegion_5() const { return ___DevRegion_5; }
	inline String_t** get_address_of_DevRegion_5() { return &___DevRegion_5; }
	inline void set_DevRegion_5(String_t* value)
	{
		___DevRegion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DevRegion_5), (void*)value);
	}

	inline static int32_t get_offset_of_PunLogging_6() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___PunLogging_6)); }
	inline int32_t get_PunLogging_6() const { return ___PunLogging_6; }
	inline int32_t* get_address_of_PunLogging_6() { return &___PunLogging_6; }
	inline void set_PunLogging_6(int32_t value)
	{
		___PunLogging_6 = value;
	}

	inline static int32_t get_offset_of_EnableSupportLogger_7() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___EnableSupportLogger_7)); }
	inline bool get_EnableSupportLogger_7() const { return ___EnableSupportLogger_7; }
	inline bool* get_address_of_EnableSupportLogger_7() { return &___EnableSupportLogger_7; }
	inline void set_EnableSupportLogger_7(bool value)
	{
		___EnableSupportLogger_7 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_8() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___RunInBackground_8)); }
	inline bool get_RunInBackground_8() const { return ___RunInBackground_8; }
	inline bool* get_address_of_RunInBackground_8() { return &___RunInBackground_8; }
	inline void set_RunInBackground_8(bool value)
	{
		___RunInBackground_8 = value;
	}

	inline static int32_t get_offset_of_StartInOfflineMode_9() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___StartInOfflineMode_9)); }
	inline bool get_StartInOfflineMode_9() const { return ___StartInOfflineMode_9; }
	inline bool* get_address_of_StartInOfflineMode_9() { return &___StartInOfflineMode_9; }
	inline void set_StartInOfflineMode_9(bool value)
	{
		___StartInOfflineMode_9 = value;
	}

	inline static int32_t get_offset_of_RpcList_10() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___RpcList_10)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_RpcList_10() const { return ___RpcList_10; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_RpcList_10() { return &___RpcList_10; }
	inline void set_RpcList_10(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___RpcList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcList_10), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___backgroundStopwatch_12;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAfterKeepAlive_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___DisconnectAfterKeepAlive_5)); }
	inline bool get_DisconnectAfterKeepAlive_5() const { return ___DisconnectAfterKeepAlive_5; }
	inline bool* get_address_of_DisconnectAfterKeepAlive_5() { return &___DisconnectAfterKeepAlive_5; }
	inline void set_DisconnectAfterKeepAlive_5(bool value)
	{
		___DisconnectAfterKeepAlive_5 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___KeepAliveInBackground_6)); }
	inline int32_t get_KeepAliveInBackground_6() const { return ___KeepAliveInBackground_6; }
	inline int32_t* get_address_of_KeepAliveInBackground_6() { return &___KeepAliveInBackground_6; }
	inline void set_KeepAliveInBackground_6(int32_t value)
	{
		___KeepAliveInBackground_6 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CCountSendAcksOnlyU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_7() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_7() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_7; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___ApplyDontDestroyOnLoad_8)); }
	inline bool get_ApplyDontDestroyOnLoad_8() const { return ___ApplyDontDestroyOnLoad_8; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_8() { return &___ApplyDontDestroyOnLoad_8; }
	inline void set_ApplyDontDestroyOnLoad_8(bool value)
	{
		___ApplyDontDestroyOnLoad_8 = value;
	}

	inline static int32_t get_offset_of_fallbackThreadId_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___fallbackThreadId_10)); }
	inline uint8_t get_fallbackThreadId_10() const { return ___fallbackThreadId_10; }
	inline uint8_t* get_address_of_fallbackThreadId_10() { return &___fallbackThreadId_10; }
	inline void set_fallbackThreadId_10(uint8_t value)
	{
		___fallbackThreadId_10 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___didSendAcks_11)); }
	inline bool get_didSendAcks_11() const { return ___didSendAcks_11; }
	inline bool* get_address_of_didSendAcks_11() { return &___didSendAcks_11; }
	inline void set_didSendAcks_11(bool value)
	{
		___didSendAcks_11 = value;
	}

	inline static int32_t get_offset_of_backgroundStopwatch_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___backgroundStopwatch_12)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_backgroundStopwatch_12() const { return ___backgroundStopwatch_12; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_backgroundStopwatch_12() { return &___backgroundStopwatch_12; }
	inline void set_backgroundStopwatch_12(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___backgroundStopwatch_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundStopwatch_12), (void*)value);
	}
};

struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;

public:
	inline static int32_t get_offset_of_AppQuits_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields, ___AppQuits_9)); }
	inline bool get_AppQuits_9() const { return ___AppQuits_9; }
	inline bool* get_address_of_AppQuits_9() { return &___AppQuits_9; }
	inline void set_AppQuits_9(bool value)
	{
		___AppQuits_9 = value;
	}
};


// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * ___OnControllerChangeCallbacks_31;

public:
	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Group_4)); }
	inline uint8_t get_Group_4() const { return ___Group_4; }
	inline uint8_t* get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(uint8_t value)
	{
		___Group_4 = value;
	}

	inline static int32_t get_offset_of_prefixField_5() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___prefixField_5)); }
	inline int32_t get_prefixField_5() const { return ___prefixField_5; }
	inline int32_t* get_address_of_prefixField_5() { return &___prefixField_5; }
	inline void set_prefixField_5(int32_t value)
	{
		___prefixField_5 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_6() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___instantiationDataField_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_6() const { return ___instantiationDataField_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_6() { return &___instantiationDataField_6; }
	inline void set_instantiationDataField_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_7() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataSent_7)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_lastOnSerializeDataSent_7() const { return ___lastOnSerializeDataSent_7; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_lastOnSerializeDataSent_7() { return &___lastOnSerializeDataSent_7; }
	inline void set_lastOnSerializeDataSent_7(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___lastOnSerializeDataSent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_7), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_8() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___syncValues_8)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_syncValues_8() const { return ___syncValues_8; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_syncValues_8() { return &___syncValues_8; }
	inline void set_syncValues_8(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___syncValues_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_9), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_10() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Synchronization_10)); }
	inline int32_t get_Synchronization_10() const { return ___Synchronization_10; }
	inline int32_t* get_address_of_Synchronization_10() { return &___Synchronization_10; }
	inline void set_Synchronization_10(int32_t value)
	{
		___Synchronization_10 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_11() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___mixedModeIsReliable_11)); }
	inline bool get_mixedModeIsReliable_11() const { return ___mixedModeIsReliable_11; }
	inline bool* get_address_of_mixedModeIsReliable_11() { return &___mixedModeIsReliable_11; }
	inline void set_mixedModeIsReliable_11(bool value)
	{
		___mixedModeIsReliable_11 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_12() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OwnershipTransfer_12)); }
	inline int32_t get_OwnershipTransfer_12() const { return ___OwnershipTransfer_12; }
	inline int32_t* get_address_of_OwnershipTransfer_12() { return &___OwnershipTransfer_12; }
	inline void set_OwnershipTransfer_12(int32_t value)
	{
		___OwnershipTransfer_12 = value;
	}

	inline static int32_t get_offset_of_observableSearch_13() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___observableSearch_13)); }
	inline int32_t get_observableSearch_13() const { return ___observableSearch_13; }
	inline int32_t* get_address_of_observableSearch_13() { return &___observableSearch_13; }
	inline void set_observableSearch_13(int32_t value)
	{
		___observableSearch_13 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_14() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ObservedComponents_14)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_14() const { return ___ObservedComponents_14; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_14() { return &___ObservedComponents_14; }
	inline void set_ObservedComponents_14(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_14), (void*)value);
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_15() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___RpcMonoBehaviours_15)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_15() const { return ___RpcMonoBehaviours_15; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_15() { return &___RpcMonoBehaviours_15; }
	inline void set_RpcMonoBehaviours_15(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsMineU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CIsMineU3Ek__BackingField_16)); }
	inline bool get_U3CIsMineU3Ek__BackingField_16() const { return ___U3CIsMineU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsMineU3Ek__BackingField_16() { return &___U3CIsMineU3Ek__BackingField_16; }
	inline void set_U3CIsMineU3Ek__BackingField_16(bool value)
	{
		___U3CIsMineU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CControllerU3Ek__BackingField_17)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CControllerU3Ek__BackingField_17() const { return ___U3CControllerU3Ek__BackingField_17; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CControllerU3Ek__BackingField_17() { return &___U3CControllerU3Ek__BackingField_17; }
	inline void set_U3CControllerU3Ek__BackingField_17(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CControllerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatorActorNrU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CCreatorActorNrU3Ek__BackingField_18)); }
	inline int32_t get_U3CCreatorActorNrU3Ek__BackingField_18() const { return ___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCreatorActorNrU3Ek__BackingField_18() { return &___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline void set_U3CCreatorActorNrU3Ek__BackingField_18(int32_t value)
	{
		___U3CCreatorActorNrU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAmOwnerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CAmOwnerU3Ek__BackingField_19)); }
	inline bool get_U3CAmOwnerU3Ek__BackingField_19() const { return ___U3CAmOwnerU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAmOwnerU3Ek__BackingField_19() { return &___U3CAmOwnerU3Ek__BackingField_19; }
	inline void set_U3CAmOwnerU3Ek__BackingField_19(bool value)
	{
		___U3CAmOwnerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3COwnerU3Ek__BackingField_20)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3COwnerU3Ek__BackingField_20() const { return ___U3COwnerU3Ek__BackingField_20; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3COwnerU3Ek__BackingField_20() { return &___U3COwnerU3Ek__BackingField_20; }
	inline void set_U3COwnerU3Ek__BackingField_20(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3COwnerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COwnerU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_ownerActorNr_21() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownerActorNr_21)); }
	inline int32_t get_ownerActorNr_21() const { return ___ownerActorNr_21; }
	inline int32_t* get_address_of_ownerActorNr_21() { return &___ownerActorNr_21; }
	inline void set_ownerActorNr_21(int32_t value)
	{
		___ownerActorNr_21 = value;
	}

	inline static int32_t get_offset_of_controllerActorNr_22() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controllerActorNr_22)); }
	inline int32_t get_controllerActorNr_22() const { return ___controllerActorNr_22; }
	inline int32_t* get_address_of_controllerActorNr_22() { return &___controllerActorNr_22; }
	inline void set_controllerActorNr_22(int32_t value)
	{
		___controllerActorNr_22 = value;
	}

	inline static int32_t get_offset_of_sceneViewId_23() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___sceneViewId_23)); }
	inline int32_t get_sceneViewId_23() const { return ___sceneViewId_23; }
	inline int32_t* get_address_of_sceneViewId_23() { return &___sceneViewId_23; }
	inline void set_sceneViewId_23(int32_t value)
	{
		___sceneViewId_23 = value;
	}

	inline static int32_t get_offset_of_viewIdField_24() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___viewIdField_24)); }
	inline int32_t get_viewIdField_24() const { return ___viewIdField_24; }
	inline int32_t* get_address_of_viewIdField_24() { return &___viewIdField_24; }
	inline void set_viewIdField_24(int32_t value)
	{
		___viewIdField_24 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_25() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___InstantiationId_25)); }
	inline int32_t get_InstantiationId_25() const { return ___InstantiationId_25; }
	inline int32_t* get_address_of_InstantiationId_25() { return &___InstantiationId_25; }
	inline void set_InstantiationId_25(int32_t value)
	{
		___InstantiationId_25 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_26() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___isRuntimeInstantiated_26)); }
	inline bool get_isRuntimeInstantiated_26() const { return ___isRuntimeInstantiated_26; }
	inline bool* get_address_of_isRuntimeInstantiated_26() { return &___isRuntimeInstantiated_26; }
	inline void set_isRuntimeInstantiated_26(bool value)
	{
		___isRuntimeInstantiated_26 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_27() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___removedFromLocalViewList_27)); }
	inline bool get_removedFromLocalViewList_27() const { return ___removedFromLocalViewList_27; }
	inline bool* get_address_of_removedFromLocalViewList_27() { return &___removedFromLocalViewList_27; }
	inline void set_removedFromLocalViewList_27(bool value)
	{
		___removedFromLocalViewList_27 = value;
	}

	inline static int32_t get_offset_of_CallbackChangeQueue_28() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___CallbackChangeQueue_28)); }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * get_CallbackChangeQueue_28() const { return ___CallbackChangeQueue_28; }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA ** get_address_of_CallbackChangeQueue_28() { return &___CallbackChangeQueue_28; }
	inline void set_CallbackChangeQueue_28(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * value)
	{
		___CallbackChangeQueue_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackChangeQueue_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreNetDestroyCallbacks_29() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnPreNetDestroyCallbacks_29)); }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * get_OnPreNetDestroyCallbacks_29() const { return ___OnPreNetDestroyCallbacks_29; }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** get_address_of_OnPreNetDestroyCallbacks_29() { return &___OnPreNetDestroyCallbacks_29; }
	inline void set_OnPreNetDestroyCallbacks_29(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * value)
	{
		___OnPreNetDestroyCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreNetDestroyCallbacks_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnerChangeCallbacks_30() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnOwnerChangeCallbacks_30)); }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * get_OnOwnerChangeCallbacks_30() const { return ___OnOwnerChangeCallbacks_30; }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** get_address_of_OnOwnerChangeCallbacks_30() { return &___OnOwnerChangeCallbacks_30; }
	inline void set_OnOwnerChangeCallbacks_30(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * value)
	{
		___OnOwnerChangeCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnerChangeCallbacks_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerChangeCallbacks_31() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnControllerChangeCallbacks_31)); }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * get_OnControllerChangeCallbacks_31() const { return ___OnControllerChangeCallbacks_31; }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** get_address_of_OnControllerChangeCallbacks_31() { return &___OnControllerChangeCallbacks_31; }
	inline void set_OnControllerChangeCallbacks_31(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * value)
	{
		___OnControllerChangeCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerChangeCallbacks_31), (void*)value);
	}
};


// Photon.Pun.PhotonRigidbodyView
struct PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// System.Single Photon.Pun.PhotonRigidbodyView::m_Distance
	float ___m_Distance_5;
	// System.Single Photon.Pun.PhotonRigidbodyView::m_Angle
	float ___m_Angle_6;
	// UnityEngine.Rigidbody Photon.Pun.PhotonRigidbodyView::m_Body
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Body_7;
	// UnityEngine.Vector3 Photon.Pun.PhotonRigidbodyView::m_NetworkPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NetworkPosition_8;
	// UnityEngine.Quaternion Photon.Pun.PhotonRigidbodyView::m_NetworkRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_NetworkRotation_9;
	// System.Boolean Photon.Pun.PhotonRigidbodyView::m_SynchronizeVelocity
	bool ___m_SynchronizeVelocity_10;
	// System.Boolean Photon.Pun.PhotonRigidbodyView::m_SynchronizeAngularVelocity
	bool ___m_SynchronizeAngularVelocity_11;
	// System.Boolean Photon.Pun.PhotonRigidbodyView::m_TeleportEnabled
	bool ___m_TeleportEnabled_12;
	// System.Single Photon.Pun.PhotonRigidbodyView::m_TeleportIfDistanceGreaterThan
	float ___m_TeleportIfDistanceGreaterThan_13;

public:
	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_Angle_6() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_Angle_6)); }
	inline float get_m_Angle_6() const { return ___m_Angle_6; }
	inline float* get_address_of_m_Angle_6() { return &___m_Angle_6; }
	inline void set_m_Angle_6(float value)
	{
		___m_Angle_6 = value;
	}

	inline static int32_t get_offset_of_m_Body_7() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_Body_7)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Body_7() const { return ___m_Body_7; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Body_7() { return &___m_Body_7; }
	inline void set_m_Body_7(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Body_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkPosition_8() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_NetworkPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NetworkPosition_8() const { return ___m_NetworkPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NetworkPosition_8() { return &___m_NetworkPosition_8; }
	inline void set_m_NetworkPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NetworkPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_NetworkRotation_9() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_NetworkRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_NetworkRotation_9() const { return ___m_NetworkRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_NetworkRotation_9() { return &___m_NetworkRotation_9; }
	inline void set_m_NetworkRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_NetworkRotation_9 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeVelocity_10() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_SynchronizeVelocity_10)); }
	inline bool get_m_SynchronizeVelocity_10() const { return ___m_SynchronizeVelocity_10; }
	inline bool* get_address_of_m_SynchronizeVelocity_10() { return &___m_SynchronizeVelocity_10; }
	inline void set_m_SynchronizeVelocity_10(bool value)
	{
		___m_SynchronizeVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeAngularVelocity_11() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_SynchronizeAngularVelocity_11)); }
	inline bool get_m_SynchronizeAngularVelocity_11() const { return ___m_SynchronizeAngularVelocity_11; }
	inline bool* get_address_of_m_SynchronizeAngularVelocity_11() { return &___m_SynchronizeAngularVelocity_11; }
	inline void set_m_SynchronizeAngularVelocity_11(bool value)
	{
		___m_SynchronizeAngularVelocity_11 = value;
	}

	inline static int32_t get_offset_of_m_TeleportEnabled_12() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_TeleportEnabled_12)); }
	inline bool get_m_TeleportEnabled_12() const { return ___m_TeleportEnabled_12; }
	inline bool* get_address_of_m_TeleportEnabled_12() { return &___m_TeleportEnabled_12; }
	inline void set_m_TeleportEnabled_12(bool value)
	{
		___m_TeleportEnabled_12 = value;
	}

	inline static int32_t get_offset_of_m_TeleportIfDistanceGreaterThan_13() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D, ___m_TeleportIfDistanceGreaterThan_13)); }
	inline float get_m_TeleportIfDistanceGreaterThan_13() const { return ___m_TeleportIfDistanceGreaterThan_13; }
	inline float* get_address_of_m_TeleportIfDistanceGreaterThan_13() { return &___m_TeleportIfDistanceGreaterThan_13; }
	inline void set_m_TeleportIfDistanceGreaterThan_13(float value)
	{
		___m_TeleportIfDistanceGreaterThan_13 = value;
	}
};


// Photon.Pun.PhotonTransformView
struct PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// System.Single Photon.Pun.PhotonTransformView::m_Distance
	float ___m_Distance_5;
	// System.Single Photon.Pun.PhotonTransformView::m_Angle
	float ___m_Angle_6;
	// UnityEngine.Vector3 Photon.Pun.PhotonTransformView::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_7;
	// UnityEngine.Vector3 Photon.Pun.PhotonTransformView::m_NetworkPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NetworkPosition_8;
	// UnityEngine.Vector3 Photon.Pun.PhotonTransformView::m_StoredPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StoredPosition_9;
	// UnityEngine.Quaternion Photon.Pun.PhotonTransformView::m_NetworkRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_NetworkRotation_10;
	// System.Boolean Photon.Pun.PhotonTransformView::m_SynchronizePosition
	bool ___m_SynchronizePosition_11;
	// System.Boolean Photon.Pun.PhotonTransformView::m_SynchronizeRotation
	bool ___m_SynchronizeRotation_12;
	// System.Boolean Photon.Pun.PhotonTransformView::m_SynchronizeScale
	bool ___m_SynchronizeScale_13;
	// System.Boolean Photon.Pun.PhotonTransformView::m_UseLocal
	bool ___m_UseLocal_14;
	// System.Boolean Photon.Pun.PhotonTransformView::m_firstTake
	bool ___m_firstTake_15;

public:
	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_Angle_6() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_Angle_6)); }
	inline float get_m_Angle_6() const { return ___m_Angle_6; }
	inline float* get_address_of_m_Angle_6() { return &___m_Angle_6; }
	inline void set_m_Angle_6(float value)
	{
		___m_Angle_6 = value;
	}

	inline static int32_t get_offset_of_m_Direction_7() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_Direction_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_7() const { return ___m_Direction_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_7() { return &___m_Direction_7; }
	inline void set_m_Direction_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_7 = value;
	}

	inline static int32_t get_offset_of_m_NetworkPosition_8() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_NetworkPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NetworkPosition_8() const { return ___m_NetworkPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NetworkPosition_8() { return &___m_NetworkPosition_8; }
	inline void set_m_NetworkPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NetworkPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_StoredPosition_9() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_StoredPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StoredPosition_9() const { return ___m_StoredPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StoredPosition_9() { return &___m_StoredPosition_9; }
	inline void set_m_StoredPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StoredPosition_9 = value;
	}

	inline static int32_t get_offset_of_m_NetworkRotation_10() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_NetworkRotation_10)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_NetworkRotation_10() const { return ___m_NetworkRotation_10; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_NetworkRotation_10() { return &___m_NetworkRotation_10; }
	inline void set_m_NetworkRotation_10(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_NetworkRotation_10 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizePosition_11() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_SynchronizePosition_11)); }
	inline bool get_m_SynchronizePosition_11() const { return ___m_SynchronizePosition_11; }
	inline bool* get_address_of_m_SynchronizePosition_11() { return &___m_SynchronizePosition_11; }
	inline void set_m_SynchronizePosition_11(bool value)
	{
		___m_SynchronizePosition_11 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeRotation_12() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_SynchronizeRotation_12)); }
	inline bool get_m_SynchronizeRotation_12() const { return ___m_SynchronizeRotation_12; }
	inline bool* get_address_of_m_SynchronizeRotation_12() { return &___m_SynchronizeRotation_12; }
	inline void set_m_SynchronizeRotation_12(bool value)
	{
		___m_SynchronizeRotation_12 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeScale_13() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_SynchronizeScale_13)); }
	inline bool get_m_SynchronizeScale_13() const { return ___m_SynchronizeScale_13; }
	inline bool* get_address_of_m_SynchronizeScale_13() { return &___m_SynchronizeScale_13; }
	inline void set_m_SynchronizeScale_13(bool value)
	{
		___m_SynchronizeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_UseLocal_14() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_UseLocal_14)); }
	inline bool get_m_UseLocal_14() const { return ___m_UseLocal_14; }
	inline bool* get_address_of_m_UseLocal_14() { return &___m_UseLocal_14; }
	inline void set_m_UseLocal_14(bool value)
	{
		___m_UseLocal_14 = value;
	}

	inline static int32_t get_offset_of_m_firstTake_15() { return static_cast<int32_t>(offsetof(PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD, ___m_firstTake_15)); }
	inline bool get_m_firstTake_15() const { return ___m_firstTake_15; }
	inline bool* get_address_of_m_firstTake_15() { return &___m_firstTake_15; }
	inline void set_m_firstTake_15(bool value)
	{
		___m_firstTake_15 = value;
	}
};


// Photon.Pun.PhotonTransformViewClassic
struct PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// Photon.Pun.PhotonTransformViewPositionModel Photon.Pun.PhotonTransformViewClassic::m_PositionModel
	PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * ___m_PositionModel_5;
	// Photon.Pun.PhotonTransformViewRotationModel Photon.Pun.PhotonTransformViewClassic::m_RotationModel
	PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * ___m_RotationModel_6;
	// Photon.Pun.PhotonTransformViewScaleModel Photon.Pun.PhotonTransformViewClassic::m_ScaleModel
	PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * ___m_ScaleModel_7;
	// Photon.Pun.PhotonTransformViewPositionControl Photon.Pun.PhotonTransformViewClassic::m_PositionControl
	PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * ___m_PositionControl_8;
	// Photon.Pun.PhotonTransformViewRotationControl Photon.Pun.PhotonTransformViewClassic::m_RotationControl
	PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * ___m_RotationControl_9;
	// Photon.Pun.PhotonTransformViewScaleControl Photon.Pun.PhotonTransformViewClassic::m_ScaleControl
	PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * ___m_ScaleControl_10;
	// Photon.Pun.PhotonView Photon.Pun.PhotonTransformViewClassic::m_PhotonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___m_PhotonView_11;
	// System.Boolean Photon.Pun.PhotonTransformViewClassic::m_ReceivedNetworkUpdate
	bool ___m_ReceivedNetworkUpdate_12;
	// System.Boolean Photon.Pun.PhotonTransformViewClassic::m_firstTake
	bool ___m_firstTake_13;

public:
	inline static int32_t get_offset_of_m_PositionModel_5() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_PositionModel_5)); }
	inline PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * get_m_PositionModel_5() const { return ___m_PositionModel_5; }
	inline PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 ** get_address_of_m_PositionModel_5() { return &___m_PositionModel_5; }
	inline void set_m_PositionModel_5(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * value)
	{
		___m_PositionModel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PositionModel_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RotationModel_6() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_RotationModel_6)); }
	inline PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * get_m_RotationModel_6() const { return ___m_RotationModel_6; }
	inline PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 ** get_address_of_m_RotationModel_6() { return &___m_RotationModel_6; }
	inline void set_m_RotationModel_6(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * value)
	{
		___m_RotationModel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RotationModel_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleModel_7() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_ScaleModel_7)); }
	inline PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * get_m_ScaleModel_7() const { return ___m_ScaleModel_7; }
	inline PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 ** get_address_of_m_ScaleModel_7() { return &___m_ScaleModel_7; }
	inline void set_m_ScaleModel_7(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * value)
	{
		___m_ScaleModel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleModel_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PositionControl_8() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_PositionControl_8)); }
	inline PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * get_m_PositionControl_8() const { return ___m_PositionControl_8; }
	inline PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 ** get_address_of_m_PositionControl_8() { return &___m_PositionControl_8; }
	inline void set_m_PositionControl_8(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * value)
	{
		___m_PositionControl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PositionControl_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RotationControl_9() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_RotationControl_9)); }
	inline PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * get_m_RotationControl_9() const { return ___m_RotationControl_9; }
	inline PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC ** get_address_of_m_RotationControl_9() { return &___m_RotationControl_9; }
	inline void set_m_RotationControl_9(PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * value)
	{
		___m_RotationControl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RotationControl_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleControl_10() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_ScaleControl_10)); }
	inline PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * get_m_ScaleControl_10() const { return ___m_ScaleControl_10; }
	inline PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 ** get_address_of_m_ScaleControl_10() { return &___m_ScaleControl_10; }
	inline void set_m_ScaleControl_10(PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * value)
	{
		___m_ScaleControl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleControl_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_PhotonView_11() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_PhotonView_11)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_m_PhotonView_11() const { return ___m_PhotonView_11; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_m_PhotonView_11() { return &___m_PhotonView_11; }
	inline void set_m_PhotonView_11(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___m_PhotonView_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhotonView_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedNetworkUpdate_12() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_ReceivedNetworkUpdate_12)); }
	inline bool get_m_ReceivedNetworkUpdate_12() const { return ___m_ReceivedNetworkUpdate_12; }
	inline bool* get_address_of_m_ReceivedNetworkUpdate_12() { return &___m_ReceivedNetworkUpdate_12; }
	inline void set_m_ReceivedNetworkUpdate_12(bool value)
	{
		___m_ReceivedNetworkUpdate_12 = value;
	}

	inline static int32_t get_offset_of_m_firstTake_13() { return static_cast<int32_t>(offsetof(PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2, ___m_firstTake_13)); }
	inline bool get_m_firstTake_13() const { return ___m_firstTake_13; }
	inline bool* get_address_of_m_firstTake_13() { return &___m_firstTake_13; }
	inline void set_m_firstTake_13(bool value)
	{
		___m_firstTake_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * m_Items[1];

public:
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Pun.PhotonView[]
struct PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * m_Items[1];

public:
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_gshared_inline (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_gshared (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.NestedComponentUtilities::GetNestedComponentsInChildren<System.Object,System.Object,System.Object>(UnityEngine.Transform,System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedComponentUtilities_GetNestedComponentsInChildren_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2C0AB98175C404C86958D10FAA820F238B8B1CB8_gshared (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, bool ___includeInactive1, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list2, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// T Photon.Pun.NestedComponentUtilities::GetParentComponent<System.Object>(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NestedComponentUtilities_GetParentComponent_TisRuntimeObject_m2E2A3763B0FEAC0F8FFB09FD58E7BEB479338879_gshared (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_gshared (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A_gshared (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::TryRegisterCallback<System.Object>(Photon.Pun.IPhotonViewCallback,System.Collections.Generic.List`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_TryRegisterCallback_TisRuntimeObject_mC38901AF31DE902B73CCDA2BFD75DF7973D935AB_gshared (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** ___list1, bool ___add2, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::RegisterCallback<System.Object>(T,System.Collections.Generic.List`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RegisterCallback_TisRuntimeObject_m0307F4D296FC9AB7A5A42BADBC3B228204EC336B_gshared (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject * ___obj0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** ___list1, bool ___add2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_gshared_inline (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C_gshared (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m1162B29A5E7F58C6D71090AE00D175818BC0B955_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C (MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonNetwork::get_SerializationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mD1A5B0DB2FD8861778CAA575E1D7B72E2AEF4024 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___from0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_m3024C151FEC9BB75735DE9B4BA64F16AA779C5D6 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonStream::get_IsWriting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonStream::SendNext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Object Photon.Pun.PhotonStream::ReceiveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Double Photon.Pun.PhotonNetwork::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PhotonNetwork_get_Time_mAF24ED87EF8E042306921EA7639F7AB83A8A0B5F (const RuntimeMethod* method);
// System.Double Photon.Pun.PhotonMessageInfo::get_SentServerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PhotonMessageInfo_get_SentServerTime_mE8D94BF3C4ECBC3C71DAD1EF8E82CF408DDC9B90 (PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617 (MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonStream::set_IsWriting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonStream_set_IsWriting_mED961CCA010FB7F4E757A91CA02754A254F9AF68_inline (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonStreamQueue::BeginWritePackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue_BeginWritePackage_mAB54947A606C8424B690FF19CA996A98DA6F8C81 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Photon.Pun.PhotonTransformViewPositionControl::.ctor(Photon.Pun.PhotonTransformViewPositionModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl__ctor_m7C6C92ACC411A60BD9923B0EC68429BE453E15B9 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * ___model0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewRotationControl::.ctor(Photon.Pun.PhotonTransformViewRotationModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewRotationControl__ctor_mE9ADC7CE386F7FC939DF8D242D3F971E89087374 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * ___model0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewScaleControl::.ctor(Photon.Pun.PhotonTransformViewScaleModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewScaleControl__ctor_m47708A68C7B7D1F7EAF0CDD31E7F59C7AB0C3AB9 (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * ___model0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_IsConnectedAndReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsConnectedAndReady_mED9E3E2A5BAF5B176DDA3962D4D5139AC18AFFB6 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewClassic::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_UpdatePosition_m30BF0D00189A9F28102B8D37852C16535BAFD6D4 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewClassic::UpdateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_UpdateRotation_m3AD37A2E04FBE3562645D3AA980551CAD6AA068D (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewClassic::UpdateScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_UpdateScale_m660FA7943CD56D34A4B6740A8919DC4ED15F521E (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_UpdatePosition_m4C26C075A90CE0B316EEC7272AE3FB66D7ECD923 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion Photon.Pun.PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  PhotonTransformViewRotationControl_GetRotation_mDBBEA8DE2BF7693D52AA3F20BEE3F830253EF163 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentRotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewScaleControl_GetScale_m1CE60B11E827A1EE4B068F68778B3D0BB978F5F7 (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentScale0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_SetSynchronizedValues_mA0CA206BEDEAE3E26D5C48546E91AE9DF0ED6C09 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___speed0, float ___turnSpeed1, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_OnPhotonSerializeView_m8599BB1A8AF46B2CE6CC8EE65C570AE2D657FE33 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewRotationControl_OnPhotonSerializeView_mFE00787DCBC77C95F463A2D417178174CD5189A7 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentRotation0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewScaleControl_OnPhotonSerializeView_m64C48CF498ACEB1A1A1A3C757B6CF0FB6302325D (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentScale0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonStream::get_IsReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonStream_get_IsReading_m85B1A69AFCE423D57E2410B40AB35B5D5D80FCA3 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::GetNetworkPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC_inline (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Photon.Pun.PhotonTransformViewRotationControl::GetNetworkRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  PhotonTransformViewRotationControl_GetNetworkRotation_m94B4F8BF1C0E94791CB69E46F053959EE05DA103_inline (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewScaleControl::GetNetworkScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewScaleControl_GetNetworkScale_m15B44EFCF04FF30AFAF5B6B47552B9ACF169A642_inline (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewPositionModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionModel__ctor_mCFE1C9A64D2C030A4964F496C21A6457B0FE0997 (PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewRotationModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewRotationModel__ctor_m15B05D097E500D1ABD3366B0D79A4368D3BD9517 (PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewScaleModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewScaleModel__ctor_m8EAB85EAD9E176692EFAC76AEB513BF0AEE517C6 (PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
inline void Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496 (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
inline int32_t Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F_gshared)(__this, method);
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_mE2556E953D7A6BF31D17385981696517EA739E47 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_mE7A84E00A2DAA44AD4D62BE17849297B3C5E1400 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonNetwork::GetPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_GetPing_m652D9083A9BB86B4EE0BE6711F21DFA9F98701FC (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_SerializeData_mEE9BDF26D9DFDBE71802012ABD5AD1E9FD588F12 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonTransformViewPositionControl::DeserializeData(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_DeserializeData_m28E33E0912A50E6FE759D54E26BF4DCAA4005CA7 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(!0)
inline void Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6 (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *, const RuntimeMethod*))Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonView::get_IsRoomView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsRoomView_m48B1DAC0C9B09C734CAFE8C5602ADFA166AD5FBB (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonView::get_CreatorActorNr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_CreatorActorNr_m6312986A9C95438FD19BE0E2F4691326F268F4B7_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.Player::get_IsInactive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Player_get_IsInactive_m39D157D63551D890BF0DE31851D925991E7C1F04_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_Owner(Photon.Realtime.Player)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_Owner_mFD38B4028080E585F4136724CA1C2E53722876AE_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method);
// Photon.Realtime.Player Photon.Pun.PhotonNetwork::get_LocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonNetwork_get_LocalPlayer_mEB99E4B987A50F8A69B6958461C6B96FD1AD35DB (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_AmOwner(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_AmOwner_mD3162EB8DCE079295BEC4165CAF15B08D1B8940F_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::UpdateCallbackLists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_UpdateCallbackLists_mEF3302FD4CFDAD9CF20A82394429082F477FF680 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>::get_Count()
inline int32_t List_1_get_Count_mAF56FC447CCC318A3617D6694D012E5E30A55963_inline (List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m2F4EC2E33EA9E8F8B98B70BAD778E0972F14BAF7_inline (List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Controller()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_Controller(Photon.Realtime.Player)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_Controller_mE1CDFEF96720EEA5EA0318900EF98EC6137D0982_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value0, const RuntimeMethod* method);
// Photon.Realtime.Player Photon.Pun.PhotonNetwork::get_MasterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonNetwork_get_MasterClient_m11DFFA0C18EDC84BBC3EE71AECABDC754EA40070 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_IsMine(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_IsMine_m47DB674D43E3261E57D32FAF67932BC32117FA45_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>::get_Count()
inline int32_t List_1_get_Count_m3F1CF5E813B2E139867498D5FB08ECA3AB7B6369_inline (List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m25C04EAF6788545CBBE782CA7AD706FE0EF437DA_inline (List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::LocalCleanPhotonView(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_LocalCleanPhotonView_m1074CAC6610B9C3833CC88EF0C84A3CBCB881B84 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___view0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_CreatorActorNr(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_CreatorActorNr_mAD781481D44AB501F858874E47F75B6959231A87_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_OwnerActorNr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_OwnerActorNr_m4487A3A6096567713A24B544DA5EEC6D6BA50497 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_ControllerActorNr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_ControllerActorNr_m33445ADF3FCA4E946E6743481971BBA133B4B45F (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::RebuildControllerCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RebuildControllerCache_mE60F1A3F0B658873A4FBE04D6FCD1B8D8D34D5D8 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___ownerHasChanged0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::RegisterPhotonView(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_RegisterPhotonView_m1773D4CB758F521C81C9109124E15261B4F192B6 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___netView0, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::set_ViewID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_ViewID_mECEA9C56A0C7584BA6C2F640EEDD9BA846062B68 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::FindObservables(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_FindObservables_m966D9464E79520040B1CD5C787A7B252F3EFB26A (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___force0, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonView::get_OwnerActorNr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>::get_Count()
inline int32_t List_1_get_Count_m08838414B0BD261A33CED7EDDD6AAB51E0E913ED_inline (List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mAA3B212DA3A139A11F2F07A465C4A25A79C87AA1_inline (List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::RequestOwnership(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_RequestOwnership_m7D76A6B95B54DCEDC062A6E2AD66FDF5B0DC083F (int32_t ___viewID0, int32_t ___fromOwner1, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::TransferOwnership(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_TransferOwnership_m01B6A48CF9F918B0397C3383FAB3950B3884AD33 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___newOwnerId0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonView::get_AmController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_AmController_mD3E940604651A5D0778312DA5AC2847922A81283 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::TransferOwnership(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_TransferOwnership_m615B724E5F7C20B969A4D69B109DDE6EED5048FC (int32_t ___viewID0, int32_t ___playerID1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
inline void List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
inline void List_1_Clear_mEA47488E23EE960D757A61DC0F4EC6839E269FC1 (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Photon.Pun.NestedComponentUtilities::GetNestedComponentsInChildren<UnityEngine.Component,Photon.Pun.IPunObservable,Photon.Pun.PhotonView>(UnityEngine.Transform,System.Boolean,System.Collections.Generic.List`1<T>)
inline void NestedComponentUtilities_GetNestedComponentsInChildren_TisComponent_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_TisIPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m5F2B95EC8ECAAAD16924C74C4A8C75D193B9EE17 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, bool ___includeInactive1, List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___list2, const RuntimeMethod* method)
{
	((  void (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, const RuntimeMethod*))NestedComponentUtilities_GetNestedComponentsInChildren_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2C0AB98175C404C86958D10FAA820F238B8B1CB8_gshared)(___t0, ___includeInactive1, ___list2, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
inline int32_t List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::SerializeComponent(UnityEngine.Component,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_SerializeComponent_mC47B07D87FF882262BFFF07BEB83CFB7691BFF8B (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::DeserializeComponent(UnityEngine.Component,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_DeserializeComponent_m52485E636485E5F2013F44ABCB0DD12D478A93F8 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.MonoBehaviour>()
inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* Component_GetComponents_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C85EAB4E088919032BFED41F1DB3370A05AD5E5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Void Photon.Pun.PhotonNetwork::RPC(Photon.Pun.PhotonView,System.String,Photon.Pun.RpcTarget,System.Boolean,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_RPC_mC4DD6C073C7EF0F644C56047EA9795F72E260F38 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___view0, String_t* ___methodName1, int32_t ___target2, bool ___encrypt3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters4, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::RPC(Photon.Pun.PhotonView,System.String,Photon.Realtime.Player,System.Boolean,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_RPC_mF7EBE6366BA48A329F82F65756FD049DF212C533 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___view0, String_t* ___methodName1, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___targetPlayer2, bool ___encrypt3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters4, const RuntimeMethod* method);
// T Photon.Pun.NestedComponentUtilities::GetParentComponent<Photon.Pun.PhotonView>(UnityEngine.Transform)
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))NestedComponentUtilities_GetParentComponent_TisRuntimeObject_m2E2A3763B0FEAC0F8FFB09FD58E7BEB479338879_gshared)(___t0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// Photon.Pun.PhotonView Photon.Pun.PhotonNetwork::GetPhotonView(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * PhotonNetwork_GetPhotonView_m9631E7401025883A80FF5361DDAD8EBEDC1EB2B3 (int32_t ___viewID0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView/CallbackTargetChange::.ctor(Photon.Pun.IPhotonViewCallback,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackTargetChange__ctor_m6FDF2FE1107B8DBF00575D8E3D56007196074762 (CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541 * __this, RuntimeObject* ___obj0, Type_t * ___type1, bool ___add2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::Enqueue(!0)
inline void Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907 (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA *, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541 , const RuntimeMethod*))Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::Dequeue()
inline CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method)
{
	return ((  CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  (*) (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA *, const RuntimeMethod*))Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A_gshared)(__this, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::TryRegisterCallback<Photon.Pun.IOnPhotonViewPreNetDestroy>(Photon.Pun.IPhotonViewCallback,System.Collections.Generic.List`1<T>&,System.Boolean)
inline void PhotonView_TryRegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_mCF7711B2CB14FCAA1BCF162CB17B1553D029A4BF (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** ___list1, bool ___add2, const RuntimeMethod* method)
{
	((  void (*) (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 *, RuntimeObject*, List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 **, bool, const RuntimeMethod*))PhotonView_TryRegisterCallback_TisRuntimeObject_mC38901AF31DE902B73CCDA2BFD75DF7973D935AB_gshared)(__this, ___obj0, ___list1, ___add2, method);
}
// System.Void Photon.Pun.PhotonView::TryRegisterCallback<Photon.Pun.IOnPhotonViewOwnerChange>(Photon.Pun.IPhotonViewCallback,System.Collections.Generic.List`1<T>&,System.Boolean)
inline void PhotonView_TryRegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_m250A4027A321D2E7A2B86D7E04E5811DB6053059 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** ___list1, bool ___add2, const RuntimeMethod* method)
{
	((  void (*) (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 *, RuntimeObject*, List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 **, bool, const RuntimeMethod*))PhotonView_TryRegisterCallback_TisRuntimeObject_mC38901AF31DE902B73CCDA2BFD75DF7973D935AB_gshared)(__this, ___obj0, ___list1, ___add2, method);
}
// System.Void Photon.Pun.PhotonView::TryRegisterCallback<Photon.Pun.IOnPhotonViewControllerChange>(Photon.Pun.IPhotonViewCallback,System.Collections.Generic.List`1<T>&,System.Boolean)
inline void PhotonView_TryRegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_mF198097DB842FB170E1E9D3930DA2BCF8BEB6C29 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** ___list1, bool ___add2, const RuntimeMethod* method)
{
	((  void (*) (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 *, RuntimeObject*, List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 **, bool, const RuntimeMethod*))PhotonView_TryRegisterCallback_TisRuntimeObject_mC38901AF31DE902B73CCDA2BFD75DF7973D935AB_gshared)(__this, ___obj0, ___list1, ___add2, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::RegisterCallback<Photon.Pun.IOnPhotonViewPreNetDestroy>(T,System.Collections.Generic.List`1<T>&,System.Boolean)
inline void PhotonView_RegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_m42297B4AA8E51284AAED7CC22243735EDBC30E12 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** ___list1, bool ___add2, const RuntimeMethod* method)
{
	((  void (*) (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 *, RuntimeObject*, List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 **, bool, const RuntimeMethod*))PhotonView_RegisterCallback_TisRuntimeObject_m0307F4D296FC9AB7A5A42BADBC3B228204EC336B_gshared)(__this, ___obj0, ___list1, ___add2, method);
}
// System.Void Photon.Pun.PhotonView::RegisterCallback<Photon.Pun.IOnPhotonViewOwnerChange>(T,System.Collections.Generic.List`1<T>&,System.Boolean)
inline void PhotonView_RegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_mF8F06E0C972F38B4835C27F19F6777608CD7F7F5 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** ___list1, bool ___add2, const RuntimeMethod* method)
{
	((  void (*) (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 *, RuntimeObject*, List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 **, bool, const RuntimeMethod*))PhotonView_RegisterCallback_TisRuntimeObject_m0307F4D296FC9AB7A5A42BADBC3B228204EC336B_gshared)(__this, ___obj0, ___list1, ___add2, method);
}
// System.Void Photon.Pun.PhotonView::RegisterCallback<Photon.Pun.IOnPhotonViewControllerChange>(T,System.Collections.Generic.List`1<T>&,System.Boolean)
inline void PhotonView_RegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_m09C04B40C83F5C451EF7EB90A1BC7C24236524F8 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** ___list1, bool ___add2, const RuntimeMethod* method)
{
	((  void (*) (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 *, RuntimeObject*, List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 **, bool, const RuntimeMethod*))PhotonView_RegisterCallback_TisRuntimeObject_m0307F4D296FC9AB7A5A42BADBC3B228204EC336B_gshared)(__this, ___obj0, ___list1, ___add2, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::get_Count()
inline int32_t Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_inline (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA *, const RuntimeMethod*))Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_gshared_inline)(__this, method);
}
// System.Int32 Photon.Pun.PhotonView::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_Prefix_m2F8F881E9D6D267410D0FCAEE50BDD9624D55E42 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>::.ctor()
inline void Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA *, const RuntimeMethod*))Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7C7CA1894B3C5CF900AEB582509C62BFD6FF4E81 (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * __this, MethodInfo_t * ___key0, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 *, MethodInfo_t *, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m38CD2B2F02C983F34F4A14B0057B38F2D9182B4B (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * __this, MethodInfo_t * ___key0, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 *, MethodInfo_t *, ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<Photon.Pun.PhotonView>(System.Boolean)
inline PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4* GameObject_GetComponentsInChildren_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m156C8F63ECC0F806B6325064808EAA5CC494EA8D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m1162B29A5E7F58C6D71090AE00D175818BC0B955_gshared)(__this, ___includeInactive0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>::.ctor()
inline void Dictionary_2__ctor_m4893CCEE7DDB83589BC49779ECC29131F5F77D23 (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.String Photon.Pun.PhotonNetwork::get_BestRegionSummaryInPreferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonNetwork_get_BestRegionSummaryInPreferences_mD7F4C70AFF793B5041E2AB8F89C0414F2D331D5B (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::set_BestRegionSummaryInPreferences(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_BestRegionSummaryInPreferences_mDF0030B4639AEDF898BF81FCD781B5BC0F43BA7F (String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.AppSettings::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppSettings_ToStringFull_mD6BB5063EC3F6EA378E7EF959D2823A3313A65B7 (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C79C5C3D85BA25B6FD6BF865640F0E60D3FEE9D (U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::NewSceneLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_NewSceneLoaded_m9BBBFC7E3A53FC10C83775B46268B46620E04B71 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBCECB9333F11AE03D402D83F0FC4610645152E74 (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonNetwork/RaiseEventBatch::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaiseEventBatch_GetHashCode_mD442ED8DC9C18436C651A727D569E903D377992B (RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork/RaiseEventBatch::Equals(Photon.Pun.PhotonNetwork/RaiseEventBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaiseEventBatch_Equals_m81C942F2A346FC76DDA983539E44259C835BA450 (RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * __this, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___other0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Boolean Photon.Pun.PhotonNetwork/SerializeViewBatch::Equals(Photon.Pun.PhotonNetwork/RaiseEventBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializeViewBatch_Equals_m6547A4F6947883FFDE23B9D7720447B6211E77DC (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___other0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
inline int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643 (float ___dot0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Pun.PhotonRigidbodyView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonRigidbodyView_Awake_mB75176019FE9F1AE3868BB8ECD9DE09B3C763056 (PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.m_Body = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_m_Body_7(L_0);
		// this.m_NetworkPosition = new Vector3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_m_NetworkPosition_8();
		il2cpp_codegen_initobj(L_1, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// this.m_NetworkRotation = new Quaternion();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = __this->get_address_of_m_NetworkRotation_9();
		il2cpp_codegen_initobj(L_2, sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonRigidbodyView::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonRigidbodyView_FixedUpdate_m39DE3DB44DFF4576B8BA3BA20BEA00B11D5FF5A7 (PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.photonView.IsMine)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0;
		L_0 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0075;
		}
	}
	{
		// this.m_Body.position = Vector3.MoveTowards(this.m_Body.position, this.m_NetworkPosition, this.m_Distance * (1.0f / PhotonNetwork.SerializationRate));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get_m_Body_7();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_m_Body_7();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_m_NetworkPosition_8();
		float L_6 = __this->get_m_Distance_5();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)((float)((float)(1.0f)/(float)((float)((float)L_7)))))), /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_set_position_mD1A5B0DB2FD8861778CAA575E1D7B72E2AEF4024(L_2, L_8, /*hidden argument*/NULL);
		// this.m_Body.rotation = Quaternion.RotateTowards(this.m_Body.rotation, this.m_NetworkRotation, this.m_Angle * (1.0f / PhotonNetwork.SerializationRate));
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = __this->get_m_Body_7();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = __this->get_m_Body_7();
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = __this->get_m_NetworkRotation_9();
		float L_13 = __this->get_m_Angle_6();
		int32_t L_14;
		L_14 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC(L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)(1.0f)/(float)((float)((float)L_14)))))), /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_set_rotation_m3024C151FEC9BB75735DE9B4BA64F16AA779C5D6(L_9, L_15, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonRigidbodyView::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonRigidbodyView_OnPhotonSerializeView_mB0B42B929E0452B342FDB073935C512C1E1B8D6B (PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (stream.IsWriting)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// stream.SendNext(this.m_Body.position);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_2 = ___stream0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_m_Body_7();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4;
		RuntimeObject * L_6 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_2, L_6, /*hidden argument*/NULL);
		// stream.SendNext(this.m_Body.rotation);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_7 = ___stream0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_m_Body_7();
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9;
		RuntimeObject * L_11 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_7, L_11, /*hidden argument*/NULL);
		// if (this.m_SynchronizeVelocity)
		bool L_12 = __this->get_m_SynchronizeVelocity_10();
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// stream.SendNext(this.m_Body.velocity);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_13 = ___stream0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_14 = __this->get_m_Body_7();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15;
		RuntimeObject * L_17 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_13, L_17, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// if (this.m_SynchronizeAngularVelocity)
		bool L_18 = __this->get_m_SynchronizeAngularVelocity_11();
		if (!L_18)
		{
			goto IL_01b1;
		}
	}
	{
		// stream.SendNext(this.m_Body.angularVelocity);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_19 = ___stream0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_20 = __this->get_m_Body_7();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = L_21;
		RuntimeObject * L_23 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_19, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// this.m_NetworkPosition = (Vector3)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_24 = ___stream0;
		NullCheck(L_24);
		RuntimeObject * L_25;
		L_25 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_24, /*hidden argument*/NULL);
		__this->set_m_NetworkPosition_8(((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_25, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))));
		// this.m_NetworkRotation = (Quaternion)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_26 = ___stream0;
		NullCheck(L_26);
		RuntimeObject * L_27;
		L_27 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_26, /*hidden argument*/NULL);
		__this->set_m_NetworkRotation_9(((*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)UnBox(L_27, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var)))));
		// if (this.m_TeleportEnabled)
		bool L_28 = __this->get_m_TeleportEnabled_12();
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		// if (Vector3.Distance(this.m_Body.position, this.m_NetworkPosition) > this.m_TeleportIfDistanceGreaterThan)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29 = __this->get_m_Body_7();
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_m_NetworkPosition_8();
		float L_32;
		L_32 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_30, L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_m_TeleportIfDistanceGreaterThan_13();
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_00cd;
		}
	}
	{
		// this.m_Body.position = this.m_NetworkPosition;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_34 = __this->get_m_Body_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get_m_NetworkPosition_8();
		NullCheck(L_34);
		Rigidbody_set_position_mD1A5B0DB2FD8861778CAA575E1D7B72E2AEF4024(L_34, L_35, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// if (this.m_SynchronizeVelocity || this.m_SynchronizeAngularVelocity)
		bool L_36 = __this->get_m_SynchronizeVelocity_10();
		if (L_36)
		{
			goto IL_00e0;
		}
	}
	{
		bool L_37 = __this->get_m_SynchronizeAngularVelocity_11();
		if (!L_37)
		{
			goto IL_01b1;
		}
	}

IL_00e0:
	{
		// float lag = Mathf.Abs((float)(PhotonNetwork.Time - info.SentServerTime));
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		double L_38;
		L_38 = PhotonNetwork_get_Time_mAF24ED87EF8E042306921EA7639F7AB83A8A0B5F(/*hidden argument*/NULL);
		double L_39;
		L_39 = PhotonMessageInfo_get_SentServerTime_mE8D94BF3C4ECBC3C71DAD1EF8E82CF408DDC9B90((PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786 *)(&___info1), /*hidden argument*/NULL);
		float L_40;
		L_40 = fabsf(((float)((float)((double)il2cpp_codegen_subtract((double)L_38, (double)L_39)))));
		V_0 = L_40;
		// if (this.m_SynchronizeVelocity)
		bool L_41 = __this->get_m_SynchronizeVelocity_10();
		if (!L_41)
		{
			goto IL_0150;
		}
	}
	{
		// this.m_Body.velocity = (Vector3)stream.ReceiveNext();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_42 = __this->get_m_Body_7();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_43 = ___stream0;
		NullCheck(L_43);
		RuntimeObject * L_44;
		L_44 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_42, ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_44, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// this.m_NetworkPosition += this.m_Body.velocity * lag;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = __this->get_m_NetworkPosition_8();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_46 = __this->get_m_Body_7();
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_46, /*hidden argument*/NULL);
		float L_48 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_47, L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_49, /*hidden argument*/NULL);
		__this->set_m_NetworkPosition_8(L_50);
		// this.m_Distance = Vector3.Distance(this.m_Body.position, this.m_NetworkPosition);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_51 = __this->get_m_Body_7();
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = __this->get_m_NetworkPosition_8();
		float L_54;
		L_54 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_52, L_53, /*hidden argument*/NULL);
		__this->set_m_Distance_5(L_54);
	}

IL_0150:
	{
		// if (this.m_SynchronizeAngularVelocity)
		bool L_55 = __this->get_m_SynchronizeAngularVelocity_11();
		if (!L_55)
		{
			goto IL_01b1;
		}
	}
	{
		// this.m_Body.angularVelocity = (Vector3)stream.ReceiveNext();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_56 = __this->get_m_Body_7();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_57 = ___stream0;
		NullCheck(L_57);
		RuntimeObject * L_58;
		L_58 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_57, /*hidden argument*/NULL);
		NullCheck(L_56);
		Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_56, ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_58, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// this.m_NetworkRotation = Quaternion.Euler(this.m_Body.angularVelocity * lag) * this.m_NetworkRotation;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_59 = __this->get_m_Body_7();
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF(L_59, /*hidden argument*/NULL);
		float L_61 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_60, L_61, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_63;
		L_63 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_62, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64 = __this->get_m_NetworkRotation_9();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_65;
		L_65 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_63, L_64, /*hidden argument*/NULL);
		__this->set_m_NetworkRotation_9(L_65);
		// this.m_Angle = Quaternion.Angle(this.m_Body.rotation, this.m_NetworkRotation);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_66 = __this->get_m_Body_7();
		NullCheck(L_66);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_67;
		L_67 = Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A(L_66, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_68 = __this->get_m_NetworkRotation_9();
		float L_69;
		L_69 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_67, L_68, /*hidden argument*/NULL);
		__this->set_m_Angle_6(L_69);
	}

IL_01b1:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonRigidbodyView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonRigidbodyView__ctor_m2B762B4FB55C62C667B8106C359AFDD277F707D8 (PhotonRigidbodyView_t776345E851609CB1AC50DA879D6EDDF4D882EC5D * __this, const RuntimeMethod* method)
{
	{
		// public bool m_SynchronizeVelocity = true;
		__this->set_m_SynchronizeVelocity_10((bool)1);
		// public float m_TeleportIfDistanceGreaterThan = 3.0f;
		__this->set_m_TeleportIfDistanceGreaterThan_13((3.0f));
		MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Pun.PhotonStream::get_IsWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsWriting { get; private set; }
		bool L_0 = __this->get_U3CIsWritingU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonStream::set_IsWriting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_set_IsWriting_mED961CCA010FB7F4E757A91CA02754A254F9AF68 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsWriting { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsWritingU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonStream::get_IsReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonStream_get_IsReading_m85B1A69AFCE423D57E2410B40AB35B5D5D80FCA3 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	{
		// get { return !this.IsWriting; }
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Photon.Pun.PhotonStream::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonStream_get_Count_mD2100DB35310E1B6E551CD201030D80205E0A3D1 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return this.IsWriting ? this.writeData.Count : this.readData.Length; }
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = __this->get_readData_1();
		NullCheck(L_1);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_writeData_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_2, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Photon.Pun.PhotonStream::.ctor(System.Boolean,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream__ctor_m3019E703CECB3B137A0A586BA96B32CBA90E980F (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, bool ___write0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___incomingData1, const RuntimeMethod* method)
{
	{
		// public PhotonStream(bool write, object[] incomingData)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.IsWriting = write;
		bool L_0 = ___write0;
		PhotonStream_set_IsWriting_mED961CCA010FB7F4E757A91CA02754A254F9AF68_inline(__this, L_0, /*hidden argument*/NULL);
		// if (!write && incomingData != null)
		bool L_1 = ___write0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___incomingData1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// this.readData = incomingData;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___incomingData1;
		__this->set_readData_1(L_3);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::SetReadStream(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_SetReadStream_m17BC4B085D1E5E834AC5BBEA256170C7622AEB01 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___incomingData0, int32_t ___pos1, const RuntimeMethod* method)
{
	{
		// this.readData = incomingData;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___incomingData0;
		__this->set_readData_1(L_0);
		// this.currentItem = pos;
		int32_t L_1 = ___pos1;
		__this->set_currentItem_2(L_1);
		// this.IsWriting = false;
		PhotonStream_set_IsWriting_mED961CCA010FB7F4E757A91CA02754A254F9AF68_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::SetWriteStream(System.Collections.Generic.List`1<System.Object>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_SetWriteStream_m543E5AB19D8FAF0B61766D9EE27E3D55C3F0BAB0 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___newWriteData0, int32_t ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (pos != newWriteData.Count)
		int32_t L_0 = ___pos1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___newWriteData0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_1, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new Exception("SetWriteStream failed, because count does not match position value. pos: "+ pos + " newWriteData.Count:" + newWriteData.Count);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___pos1), /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = ___newWriteData0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_4, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var)));
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A01D96F3CB63CD7CCDB665F7DCA7398B7AA98AF)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral04EF2E53B34AB4888397326C0503A46726384E88)), L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonStream_SetWriteStream_m543E5AB19D8FAF0B61766D9EE27E3D55C3F0BAB0_RuntimeMethod_var)));
	}

IL_0033:
	{
		// this.writeData = newWriteData;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = ___newWriteData0;
		__this->set_writeData_0(L_9);
		// this.currentItem = pos;
		int32_t L_10 = ___pos1;
		__this->set_currentItem_2(L_10);
		// this.IsWriting = true;
		PhotonStream_set_IsWriting_mED961CCA010FB7F4E757A91CA02754A254F9AF68_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonStream::GetWriteStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * PhotonStream_GetWriteStream_m37960C98A18B27CB9442040A8B45BD2FA90EDDFE (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	{
		// return this.writeData;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_writeData_0();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonStream::ResetWriteStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_ResetWriteStream_mF0DBDEEEAE7EDC08C0189CE3F819E8272C6F916A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.writeData.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_writeData_0();
		NullCheck(L_0);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_0, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Object Photon.Pun.PhotonStream::ReceiveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral994505630F9AE7D1BD057B7329595DF5BE06232E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Error: you cannot read this stream that you are writing!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral994505630F9AE7D1BD057B7329595DF5BE06232E, /*hidden argument*/NULL);
		// return null;
		return NULL;
	}

IL_0014:
	{
		// object obj = this.readData[this.currentItem];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = __this->get_readData_1();
		int32_t L_2 = __this->get_currentItem_2();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// this.currentItem++;
		int32_t L_5 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// return obj;
		return L_4;
	}
}
// System.Object Photon.Pun.PhotonStream::PeekNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PhotonStream_PeekNext_m6A2592DDB7E3ED60BE123AA8F5D13340ED67AE9F (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral994505630F9AE7D1BD057B7329595DF5BE06232E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("Error: you cannot read this stream that you are writing!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral994505630F9AE7D1BD057B7329595DF5BE06232E, /*hidden argument*/NULL);
		// return null;
		return NULL;
	}

IL_0014:
	{
		// object obj = this.readData[this.currentItem];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = __this->get_readData_1();
		int32_t L_2 = __this->get_currentItem_2();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// return obj;
		return L_4;
	}
}
// System.Void Photon.Pun.PhotonStream::SendNext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA42C46D2FE209A52C134EB8FC71D8844840788);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Error: you cannot write/send to this stream that you are reading!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralBDA42C46D2FE209A52C134EB8FC71D8844840788, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// this.writeData.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_2, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.PhotonStream::CopyToListAndClear(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonStream_CopyToListAndClear_m4BC00556BF659FA69EFC8638D6D5831C866CF4D6 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.IsWriting) return false;
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (!this.IsWriting) return false;
		return (bool)0;
	}

IL_000a:
	{
		// target.AddRange(this.writeData);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___target0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_writeData_0();
		NullCheck(L_1);
		List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9(L_1, L_2, /*hidden argument*/List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var);
		// this.writeData.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = __this->get_writeData_0();
		NullCheck(L_3);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_3, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Object[] Photon.Pun.PhotonStream::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* PhotonStream_ToArray_m3D66469C5D1483688AA45B81D0193408398346BA (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.IsWriting ? this.writeData.ToArray() : this.readData;
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = __this->get_readData_1();
		return L_1;
	}

IL_000f:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_writeData_0();
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D(L_2, /*hidden argument*/List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_mFF334CFF038195A6114B1E3C9DA0A2271F7B8A7A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, bool* ___myBool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// this.writeData.Add(myBool);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		bool* L_2 = ___myBool0;
		int32_t L_3 = *((uint8_t*)L_2);
		bool L_4 = ((bool)L_3);
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001b:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_004d;
		}
	}
	{
		// myBool = (bool) this.readData[this.currentItem];
		bool* L_8 = ___myBool0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*((int8_t*)L_8) = (int8_t)((*(bool*)((bool*)UnBox(L_12, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_m51DFE527459F91F898C8AA7D65978C1DBB926F14 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, int32_t* ___myInt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// this.writeData.Add(myInt);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		int32_t* L_2 = ___myInt0;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001b:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_004d;
		}
	}
	{
		// myInt = (int) this.readData[this.currentItem];
		int32_t* L_8 = ___myInt0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*((int32_t*)L_8) = (int32_t)((*(int32_t*)((int32_t*)UnBox(L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_mA891A2D93B4812F59AA5D2F95CACA7438A1F4FE6 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, String_t** ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// this.writeData.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		String_t** L_2 = ___value0;
		String_t* L_3 = *((String_t**)L_2);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_3, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_0016:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = __this->get_readData_1();
		NullCheck(L_4);
		int32_t L_5 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		// value = (string) this.readData[this.currentItem];
		String_t** L_6 = ___value0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = __this->get_readData_1();
		int32_t L_8 = __this->get_currentItem_2();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		*((RuntimeObject **)L_6) = (RuntimeObject *)((String_t*)CastclassSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)((String_t*)CastclassSealed((RuntimeObject*)L_10, String_t_il2cpp_TypeInfo_var)));
		// this.currentItem++;
		int32_t L_11 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_mBADE9F77CC18EDFA6DD9230C803BE860A2F06155 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, Il2CppChar* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// this.writeData.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		Il2CppChar* L_2 = ___value0;
		int32_t L_3 = *((uint16_t*)L_2);
		Il2CppChar L_4 = ((Il2CppChar)L_3);
		RuntimeObject * L_5 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001b:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_004d;
		}
	}
	{
		// value = (char) this.readData[this.currentItem];
		Il2CppChar* L_8 = ___value0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*((int16_t*)L_8) = (int16_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_12, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_mD732B6210192D1D7B2E0FE410E543E6BA59E617D (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, int16_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// this.writeData.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		int16_t* L_2 = ___value0;
		int32_t L_3 = *((int16_t*)L_2);
		int16_t L_4 = ((int16_t)L_3);
		RuntimeObject * L_5 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001b:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_004d;
		}
	}
	{
		// value = (short) this.readData[this.currentItem];
		int16_t* L_8 = ___value0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*((int16_t*)L_8) = (int16_t)((*(int16_t*)((int16_t*)UnBox(L_12, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_m3F700E78B54EF224DF23B773280A3C87D8F36BA1 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, float* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// this.writeData.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		float* L_2 = ___obj0;
		float L_3 = *((float*)L_2);
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001b:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_004d;
		}
	}
	{
		// obj = (float) this.readData[this.currentItem];
		float* L_8 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*((float*)L_8) = (float)((*(float*)((float*)UnBox(L_12, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(Photon.Realtime.Player&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_mB1D1B10577A5C19DD893753C7623C32F2997FB0C (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tC6DFC22DFF5978489C4CFA025695FEC556610214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// this.writeData.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** L_2 = ___obj0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_3 = *((Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 **)L_2);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_3, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_0016:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = __this->get_readData_1();
		NullCheck(L_4);
		int32_t L_5 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) <= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		// obj = (Player) this.readData[this.currentItem];
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** L_6 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = __this->get_readData_1();
		int32_t L_8 = __this->get_currentItem_2();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		*((RuntimeObject **)L_6) = (RuntimeObject *)((Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)CastclassClass((RuntimeObject*)L_10, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)((Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)CastclassClass((RuntimeObject*)L_10, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214_il2cpp_TypeInfo_var)));
		// this.currentItem++;
		int32_t L_11 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_m48175CB7AD614D7B8995C44778D41D7612BED013 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// this.writeData.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___obj0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001f:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		// obj = (Vector3) this.readData[this.currentItem];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8 = ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_12, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_mEB74181DA1F6E8F4CA4DCE31556EB13C0EB8FF8C (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// this.writeData.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = ___obj0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001f:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		// obj = (Vector2) this.readData[this.currentItem];
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_8 = ((*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)UnBox(L_12, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStream::Serialize(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_Serialize_m115BFCF462354ABAD15D34CBD544C93FF4291F07 (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.IsWriting)
		bool L_0;
		L_0 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// this.writeData.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_writeData_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = ___obj0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = L_3;
		RuntimeObject * L_5 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}

IL_001f:
	{
		// if (this.readData.Length > this.currentItem)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = __this->get_readData_1();
		NullCheck(L_6);
		int32_t L_7 = __this->get_currentItem_2();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) <= ((int32_t)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		// obj = (Quaternion) this.readData[this.currentItem];
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_8 = ___obj0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = __this->get_readData_1();
		int32_t L_10 = __this->get_currentItem_2();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_8 = ((*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)UnBox(L_12, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var))));
		// this.currentItem++;
		int32_t L_13 = __this->get_currentItem_2();
		__this->set_currentItem_2(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_0055:
	{
		// }
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
// System.Void Photon.Pun.PhotonStreamQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue__ctor_mE0BB2C50F7909A2E50A52E2F68CA055E5FAEBB16 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, int32_t ___sampleRate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int m_ObjectsPerSample = -1;
		__this->set_m_ObjectsPerSample_2((-1));
		// private float m_LastSampleTime = -Mathf.Infinity;
		__this->set_m_LastSampleTime_3((-std::numeric_limits<float>::infinity()));
		// private int m_LastFrameCount = -1;
		__this->set_m_LastFrameCount_4((-1));
		// private int m_NextObjectIndex = -1;
		__this->set_m_NextObjectIndex_5((-1));
		// private List<object> m_Objects = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		__this->set_m_Objects_6(L_0);
		// public PhotonStreamQueue(int sampleRate)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.m_SampleRate = sampleRate;
		int32_t L_1 = ___sampleRate0;
		__this->set_m_SampleRate_0(L_1);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStreamQueue::BeginWritePackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue_BeginWritePackage_mAB54947A606C8424B690FF19CA996A98DA6F8C81 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral221D22859907A7D55C94586400E95F005CC96F1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral976614BB1A772FCE8B23338F35FB810C0EE9E157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F5042D76FEF4BD560574FCDEB92AA1C24CF87E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7691A467FFEFADC572E6C24DC3FD2081027B99B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Time.realtimeSinceStartup < this.m_LastSampleTime + 1f / this.m_SampleRate)
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_1 = __this->get_m_LastSampleTime_3();
		int32_t L_2 = __this->get_m_SampleRate_0();
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_add((float)L_1, (float)((float)((float)(1.0f)/(float)((float)((float)L_2))))))))))
		{
			goto IL_0023;
		}
	}
	{
		// this.m_IsWriting = false;
		__this->set_m_IsWriting_7((bool)0);
		// return;
		return;
	}

IL_0023:
	{
		// if (this.m_SampleCount == 1)
		int32_t L_3 = __this->get_m_SampleCount_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// this.m_ObjectsPerSample = this.m_Objects.Count;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = __this->get_m_Objects_6();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_4, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		__this->set_m_ObjectsPerSample_2(L_5);
		// }
		goto IL_00f4;
	}

IL_0042:
	{
		// else if (this.m_SampleCount > 1)
		int32_t L_6 = __this->get_m_SampleCount_1();
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_00f4;
		}
	}
	{
		// if (this.m_Objects.Count / this.m_SampleCount != this.m_ObjectsPerSample)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = __this->get_m_Objects_6();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_7, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_9 = __this->get_m_SampleCount_1();
		int32_t L_10 = __this->get_m_ObjectsPerSample_2();
		if ((((int32_t)((int32_t)((int32_t)L_8/(int32_t)L_9))) == ((int32_t)L_10)))
		{
			goto IL_00f4;
		}
	}
	{
		// Debug.LogWarning("The number of objects sent via a PhotonStreamQueue has to be the same each frame");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral976614BB1A772FCE8B23338F35FB810C0EE9E157, /*hidden argument*/NULL);
		// Debug.LogWarning("Objects in List: " + this.m_Objects.Count + " / Sample Count: " + this.m_SampleCount + " = " + this.m_Objects.Count / this.m_SampleCount + " != " + this.m_ObjectsPerSample);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralF7691A467FFEFADC572E6C24DC3FD2081027B99B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF7691A467FFEFADC572E6C24DC3FD2081027B99B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = __this->get_m_Objects_6();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_14, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral221D22859907A7D55C94586400E95F005CC96F1D);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral221D22859907A7D55C94586400E95F005CC96F1D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		int32_t* L_19 = __this->get_address_of_m_SampleCount_1();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_23 = __this->get_m_Objects_6();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_23, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_25 = __this->get_m_SampleCount_1();
		V_0 = ((int32_t)((int32_t)L_24/(int32_t)L_25));
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_22;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralB2F5042D76FEF4BD560574FCDEB92AA1C24CF87E);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB2F5042D76FEF4BD560574FCDEB92AA1C24CF87E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		int32_t* L_29 = __this->get_address_of_m_ObjectsPerSample_2();
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_28, /*hidden argument*/NULL);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_31, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// this.m_IsWriting = true;
		__this->set_m_IsWriting_7((bool)1);
		// this.m_SampleCount++;
		int32_t L_32 = __this->get_m_SampleCount_1();
		__this->set_m_SampleCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
		// this.m_LastSampleTime = Time.realtimeSinceStartup;
		float L_33;
		L_33 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_m_LastSampleTime_3(L_33);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStreamQueue::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue_Reset_mE68C674FD933433441F7B6761DD0295DB66D3F7F (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.m_SampleCount = 0;
		__this->set_m_SampleCount_1(0);
		// this.m_ObjectsPerSample = -1;
		__this->set_m_ObjectsPerSample_2((-1));
		// this.m_LastSampleTime = -Mathf.Infinity;
		__this->set_m_LastSampleTime_3((-std::numeric_limits<float>::infinity()));
		// this.m_LastFrameCount = -1;
		__this->set_m_LastFrameCount_4((-1));
		// this.m_Objects.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_m_Objects_6();
		NullCheck(L_0);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_0, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStreamQueue::SendNext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue_SendNext_mD411FF3E7FF4051D856D759AB7F1720FC518E998 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.frameCount != this.m_LastFrameCount)
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_LastFrameCount_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		// this.BeginWritePackage();
		PhotonStreamQueue_BeginWritePackage_mAB54947A606C8424B690FF19CA996A98DA6F8C81(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// this.m_LastFrameCount = Time.frameCount;
		int32_t L_2;
		L_2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_m_LastFrameCount_4(L_2);
		// if (this.m_IsWriting == false)
		bool L_3 = __this->get_m_IsWriting_7();
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		return;
	}

IL_0027:
	{
		// this.m_Objects.Add(obj);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = __this->get_m_Objects_6();
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_4);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_4, L_5, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.PhotonStreamQueue::HasQueuedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonStreamQueue_HasQueuedObjects_m484A7DC4BD643DADE0F13F215F2B4D46BCEB97E2 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, const RuntimeMethod* method)
{
	{
		// return this.m_NextObjectIndex != -1;
		int32_t L_0 = __this->get_m_NextObjectIndex_5();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object Photon.Pun.PhotonStreamQueue::ReceiveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PhotonStreamQueue_ReceiveNext_m3DFBA0EABC6C149C1C8B458F8B1FD5485440AC56 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (this.m_NextObjectIndex == -1)
		int32_t L_0 = __this->get_m_NextObjectIndex_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_000b:
	{
		// if (this.m_NextObjectIndex >= this.m_Objects.Count)
		int32_t L_1 = __this->get_m_NextObjectIndex_5();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_m_Objects_6();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_2, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		// this.m_NextObjectIndex -= this.m_ObjectsPerSample;
		int32_t L_4 = __this->get_m_NextObjectIndex_5();
		int32_t L_5 = __this->get_m_ObjectsPerSample_2();
		__this->set_m_NextObjectIndex_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)));
	}

IL_0031:
	{
		// return this.m_Objects[this.m_NextObjectIndex++];
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = __this->get_m_Objects_6();
		int32_t L_7 = __this->get_m_NextObjectIndex_5();
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->set_m_NextObjectIndex_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_10;
		L_10 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_6, L_9, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Photon.Pun.PhotonStreamQueue::Serialize(Photon.Pun.PhotonStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue_Serialize_m9014849027A974A59040B4224DF514ED0A424124 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (this.m_Objects.Count > 0 && this.m_ObjectsPerSample < 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_m_Objects_6();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = __this->get_m_ObjectsPerSample_2();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// this.m_ObjectsPerSample = this.m_Objects.Count;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = __this->get_m_Objects_6();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_3, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		__this->set_m_ObjectsPerSample_2(L_4);
	}

IL_0028:
	{
		// stream.SendNext(this.m_SampleCount);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_5 = ___stream0;
		int32_t L_6 = __this->get_m_SampleCount_1();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_5, L_8, /*hidden argument*/NULL);
		// stream.SendNext(this.m_ObjectsPerSample);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_9 = ___stream0;
		int32_t L_10 = __this->get_m_ObjectsPerSample_2();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_9, L_12, /*hidden argument*/NULL);
		// for (int i = 0; i < this.m_Objects.Count; ++i)
		V_0 = 0;
		goto IL_0064;
	}

IL_004e:
	{
		// stream.SendNext(this.m_Objects[i]);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_13 = ___stream0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = __this->get_m_Objects_6();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		RuntimeObject * L_16;
		L_16 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_13);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_13, L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < this.m_Objects.Count; ++i)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < this.m_Objects.Count; ++i)
		int32_t L_18 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_19 = __this->get_m_Objects_6();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_19, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_004e;
		}
	}
	{
		// this.m_Objects.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_21 = __this->get_m_Objects_6();
		NullCheck(L_21);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_21, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// this.m_SampleCount = 0;
		__this->set_m_SampleCount_1(0);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonStreamQueue::Deserialize(Photon.Pun.PhotonStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStreamQueue_Deserialize_mAD8F33EE426F90E169853568C1B1BEA4F71A9294 (PhotonStreamQueue_t6DF9AAF174871F26A644C87157F8C8B5DAD25816 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.m_Objects.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_m_Objects_6();
		NullCheck(L_0);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_0, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// this.m_SampleCount = (int) stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_1 = ___stream0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_1, /*hidden argument*/NULL);
		__this->set_m_SampleCount_1(((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		// this.m_ObjectsPerSample = (int) stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_3 = ___stream0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_3, /*hidden argument*/NULL);
		__this->set_m_ObjectsPerSample_2(((*(int32_t*)((int32_t*)UnBox(L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		// for (int i = 0; i < this.m_SampleCount * this.m_ObjectsPerSample; ++i)
		V_0 = 0;
		goto IL_0046;
	}

IL_0031:
	{
		// this.m_Objects.Add(stream.ReceiveNext());
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get_m_Objects_6();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_6 = ___stream0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_5, L_7, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// for (int i = 0; i < this.m_SampleCount * this.m_ObjectsPerSample; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < this.m_SampleCount * this.m_ObjectsPerSample; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_m_SampleCount_1();
		int32_t L_11 = __this->get_m_ObjectsPerSample_2();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)))))
		{
			goto IL_0031;
		}
	}
	{
		// if (this.m_Objects.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = __this->get_m_Objects_6();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_12, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// this.m_NextObjectIndex = 0;
		__this->set_m_NextObjectIndex_5(0);
		// }
		return;
	}

IL_006c:
	{
		// this.m_NextObjectIndex = -1;
		__this->set_m_NextObjectIndex_5((-1));
		// }
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
// System.Void Photon.Pun.PhotonTransformView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformView_Awake_mCF2159BF4DB7227AA182D4A77017DC06EF1A47EF (PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD * __this, const RuntimeMethod* method)
{
	{
		// m_StoredPosition = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_m_StoredPosition_9(L_1);
		// m_NetworkPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_NetworkPosition_8(L_2);
		// m_NetworkRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_m_NetworkRotation_10(L_3);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformView::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformView_Reset_m7F5F60F7ECDDC2AC56C94AF4F726FE4015D27557 (PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD * __this, const RuntimeMethod* method)
{
	{
		// m_UseLocal = true;
		__this->set_m_UseLocal_14((bool)1);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformView::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformView_OnEnable_m0B32033869DD0029C33FE9B2D0E92A4E41F4F11D (PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD * __this, const RuntimeMethod* method)
{
	{
		// m_firstTake = true;
		__this->set_m_firstTake_15((bool)1);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformView_Update_mBBE9558CA7F1F44417C9372149814FE5E3851E26 (PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// var tr = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (!this.photonView.IsMine)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_1;
		L_1 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00c8;
		}
	}
	{
		// if (m_UseLocal)
		bool L_3 = __this->get_m_UseLocal_14();
		if (!L_3)
		{
			goto IL_0074;
		}
	}
	{
		// tr.localPosition = Vector3.MoveTowards(tr.localPosition, this.m_NetworkPosition, this.m_Distance  * Time.deltaTime * PhotonNetwork.SerializationRate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_m_NetworkPosition_8();
		float L_8 = __this->get_m_Distance_5();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_6, L_7, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)((float)L_10)))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_4, L_11, /*hidden argument*/NULL);
		// tr.localRotation = Quaternion.RotateTowards(tr.localRotation, this.m_NetworkRotation, this.m_Angle * Time.deltaTime * PhotonNetwork.SerializationRate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_0;
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_m_NetworkRotation_10();
		float L_16 = __this->get_m_Angle_6();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		int32_t L_18;
		L_18 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC(L_14, L_15, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)((float)((float)L_18)))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_12, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// tr.position = Vector3.MoveTowards(tr.position, this.m_NetworkPosition, this.m_Distance * Time.deltaTime * PhotonNetwork.SerializationRate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_0;
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_m_NetworkPosition_8();
		float L_24 = __this->get_m_Distance_5();
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_22, L_23, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), (float)((float)((float)L_26)))), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_27, /*hidden argument*/NULL);
		// tr.rotation = Quaternion.RotateTowards(tr.rotation, this.m_NetworkRotation, this.m_Angle * Time.deltaTime *  PhotonNetwork.SerializationRate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_0;
		NullCheck(L_29);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_29, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = __this->get_m_NetworkRotation_10();
		float L_32 = __this->get_m_Angle_6();
		float L_33;
		L_33 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		int32_t L_34;
		L_34 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC(L_30, L_31, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)((float)((float)L_34)))), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_28, L_35, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformView::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformView_OnPhotonSerializeView_m27A2F5566289E4D9C58A47DAEE337F53102879D8 (PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		// var tr = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (stream.IsWriting)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_1 = ___stream0;
		NullCheck(L_1);
		bool L_2;
		L_2 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0102;
		}
	}
	{
		// if (this.m_SynchronizePosition)
		bool L_3 = __this->get_m_SynchronizePosition_11();
		if (!L_3)
		{
			goto IL_00b1;
		}
	}
	{
		// if (m_UseLocal)
		bool L_4 = __this->get_m_UseLocal_14();
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		// this.m_Direction = tr.localPosition - this.m_StoredPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_m_StoredPosition_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_Direction_7(L_8);
		// this.m_StoredPosition = tr.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_0;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		__this->set_m_StoredPosition_9(L_10);
		// stream.SendNext(tr.localPosition);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_11 = ___stream0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_0;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13;
		RuntimeObject * L_15 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_11, L_15, /*hidden argument*/NULL);
		// stream.SendNext(this.m_Direction);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_16 = ___stream0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_m_Direction_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17;
		RuntimeObject * L_19 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_16, L_19, /*hidden argument*/NULL);
		// }
		goto IL_00b1;
	}

IL_006c:
	{
		// this.m_Direction = tr.position - this.m_StoredPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_0;
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_m_StoredPosition_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_21, L_22, /*hidden argument*/NULL);
		__this->set_m_Direction_7(L_23);
		// this.m_StoredPosition = tr.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = V_0;
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		__this->set_m_StoredPosition_9(L_25);
		// stream.SendNext(tr.position);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_26 = ___stream0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_0;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28;
		RuntimeObject * L_30 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_26, L_30, /*hidden argument*/NULL);
		// stream.SendNext(this.m_Direction);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_31 = ___stream0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_m_Direction_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = L_32;
		RuntimeObject * L_34 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_31, L_34, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// if (this.m_SynchronizeRotation)
		bool L_35 = __this->get_m_SynchronizeRotation_12();
		if (!L_35)
		{
			goto IL_00e5;
		}
	}
	{
		// if (m_UseLocal)
		bool L_36 = __this->get_m_UseLocal_14();
		if (!L_36)
		{
			goto IL_00d4;
		}
	}
	{
		// stream.SendNext(tr.localRotation);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_37 = ___stream0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = V_0;
		NullCheck(L_38);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_38, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40 = L_39;
		RuntimeObject * L_41 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_37);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_37, L_41, /*hidden argument*/NULL);
		// }
		goto IL_00e5;
	}

IL_00d4:
	{
		// stream.SendNext(tr.rotation);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_42 = ___stream0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = V_0;
		NullCheck(L_43);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_44;
		L_44 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_43, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45 = L_44;
		RuntimeObject * L_46 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_42);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_42, L_46, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		// if (this.m_SynchronizeScale)
		bool L_47 = __this->get_m_SynchronizeScale_13();
		if (!L_47)
		{
			goto IL_0282;
		}
	}
	{
		// stream.SendNext(tr.localScale);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_48 = ___stream0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = V_0;
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = L_50;
		RuntimeObject * L_52 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_48);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_48, L_52, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0102:
	{
		// if (this.m_SynchronizePosition)
		bool L_53 = __this->get_m_SynchronizePosition_11();
		if (!L_53)
		{
			goto IL_01cf;
		}
	}
	{
		// this.m_NetworkPosition = (Vector3)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_54 = ___stream0;
		NullCheck(L_54);
		RuntimeObject * L_55;
		L_55 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_54, /*hidden argument*/NULL);
		__this->set_m_NetworkPosition_8(((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_55, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))));
		// this.m_Direction = (Vector3)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_56 = ___stream0;
		NullCheck(L_56);
		RuntimeObject * L_57;
		L_57 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_56, /*hidden argument*/NULL);
		__this->set_m_Direction_7(((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_57, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))));
		// if (m_firstTake)
		bool L_58 = __this->get_m_firstTake_15();
		if (!L_58)
		{
			goto IL_0166;
		}
	}
	{
		// if (m_UseLocal)
		bool L_59 = __this->get_m_UseLocal_14();
		if (!L_59)
		{
			goto IL_014d;
		}
	}
	{
		// tr.localPosition = this.m_NetworkPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = __this->get_m_NetworkPosition_8();
		NullCheck(L_60);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_60, L_61, /*hidden argument*/NULL);
		goto IL_0159;
	}

IL_014d:
	{
		// tr.position = this.m_NetworkPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = __this->get_m_NetworkPosition_8();
		NullCheck(L_62);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_62, L_63, /*hidden argument*/NULL);
	}

IL_0159:
	{
		// this.m_Distance = 0f;
		__this->set_m_Distance_5((0.0f));
		// }
		goto IL_01cf;
	}

IL_0166:
	{
		// float lag = Mathf.Abs((float)(PhotonNetwork.Time - info.SentServerTime));
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		double L_64;
		L_64 = PhotonNetwork_get_Time_mAF24ED87EF8E042306921EA7639F7AB83A8A0B5F(/*hidden argument*/NULL);
		double L_65;
		L_65 = PhotonMessageInfo_get_SentServerTime_mE8D94BF3C4ECBC3C71DAD1EF8E82CF408DDC9B90((PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786 *)(&___info1), /*hidden argument*/NULL);
		float L_66;
		L_66 = fabsf(((float)((float)((double)il2cpp_codegen_subtract((double)L_64, (double)L_65)))));
		V_1 = L_66;
		// this.m_NetworkPosition += this.m_Direction * lag;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = __this->get_m_NetworkPosition_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = __this->get_m_Direction_7();
		float L_69 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_68, L_69, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_67, L_70, /*hidden argument*/NULL);
		__this->set_m_NetworkPosition_8(L_71);
		// if (m_UseLocal)
		bool L_72 = __this->get_m_UseLocal_14();
		if (!L_72)
		{
			goto IL_01b8;
		}
	}
	{
		// this.m_Distance = Vector3.Distance(tr.localPosition, this.m_NetworkPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = V_0;
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = __this->get_m_NetworkPosition_8();
		float L_76;
		L_76 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_74, L_75, /*hidden argument*/NULL);
		__this->set_m_Distance_5(L_76);
		// }
		goto IL_01cf;
	}

IL_01b8:
	{
		// this.m_Distance = Vector3.Distance(tr.position, this.m_NetworkPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77 = V_0;
		NullCheck(L_77);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_77, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = __this->get_m_NetworkPosition_8();
		float L_80;
		L_80 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_78, L_79, /*hidden argument*/NULL);
		__this->set_m_Distance_5(L_80);
	}

IL_01cf:
	{
		// if (this.m_SynchronizeRotation)
		bool L_81 = __this->get_m_SynchronizeRotation_12();
		if (!L_81)
		{
			goto IL_025a;
		}
	}
	{
		// this.m_NetworkRotation = (Quaternion)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_82 = ___stream0;
		NullCheck(L_82);
		RuntimeObject * L_83;
		L_83 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_82, /*hidden argument*/NULL);
		__this->set_m_NetworkRotation_10(((*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)UnBox(L_83, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var)))));
		// if (m_firstTake)
		bool L_84 = __this->get_m_firstTake_15();
		if (!L_84)
		{
			goto IL_0222;
		}
	}
	{
		// this.m_Angle = 0f;
		__this->set_m_Angle_6((0.0f));
		// if (m_UseLocal)
		bool L_85 = __this->get_m_UseLocal_14();
		if (!L_85)
		{
			goto IL_0214;
		}
	}
	{
		// tr.localRotation = this.m_NetworkRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87 = __this->get_m_NetworkRotation_10();
		NullCheck(L_86);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_86, L_87, /*hidden argument*/NULL);
		// }
		goto IL_025a;
	}

IL_0214:
	{
		// tr.rotation = this.m_NetworkRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_89 = __this->get_m_NetworkRotation_10();
		NullCheck(L_88);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_88, L_89, /*hidden argument*/NULL);
		// }
		goto IL_025a;
	}

IL_0222:
	{
		// if (m_UseLocal)
		bool L_90 = __this->get_m_UseLocal_14();
		if (!L_90)
		{
			goto IL_0243;
		}
	}
	{
		// this.m_Angle = Quaternion.Angle(tr.localRotation, this.m_NetworkRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91 = V_0;
		NullCheck(L_91);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_92;
		L_92 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_91, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_93 = __this->get_m_NetworkRotation_10();
		float L_94;
		L_94 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_92, L_93, /*hidden argument*/NULL);
		__this->set_m_Angle_6(L_94);
		// }
		goto IL_025a;
	}

IL_0243:
	{
		// this.m_Angle = Quaternion.Angle(tr.rotation, this.m_NetworkRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95 = V_0;
		NullCheck(L_95);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_96;
		L_96 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_95, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_97 = __this->get_m_NetworkRotation_10();
		float L_98;
		L_98 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_96, L_97, /*hidden argument*/NULL);
		__this->set_m_Angle_6(L_98);
	}

IL_025a:
	{
		// if (this.m_SynchronizeScale)
		bool L_99 = __this->get_m_SynchronizeScale_13();
		if (!L_99)
		{
			goto IL_0273;
		}
	}
	{
		// tr.localScale = (Vector3)stream.ReceiveNext();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_100 = V_0;
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_101 = ___stream0;
		NullCheck(L_101);
		RuntimeObject * L_102;
		L_102 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_100, ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_102, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_0273:
	{
		// if (m_firstTake)
		bool L_103 = __this->get_m_firstTake_15();
		if (!L_103)
		{
			goto IL_0282;
		}
	}
	{
		// m_firstTake = false;
		__this->set_m_firstTake_15((bool)0);
	}

IL_0282:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformView__ctor_m9E6A01DD19CB9D07A57084C6D7AED2C793911068 (PhotonTransformView_tE8FA2900F624BFFD0711A624CB5169FF330EA8AD * __this, const RuntimeMethod* method)
{
	{
		// public bool m_SynchronizePosition = true;
		__this->set_m_SynchronizePosition_11((bool)1);
		// public bool m_SynchronizeRotation = true;
		__this->set_m_SynchronizeRotation_12((bool)1);
		MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.PhotonTransformViewClassic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_Awake_mC6C8F9ED51BD33F77B328708869AD1056ED21FC2 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.m_PhotonView = GetComponent<PhotonView>();
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0;
		L_0 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(__this, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		__this->set_m_PhotonView_11(L_0);
		// this.m_PositionControl = new PhotonTransformViewPositionControl(this.m_PositionModel);
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_1 = __this->get_m_PositionModel_5();
		PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * L_2 = (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 *)il2cpp_codegen_object_new(PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985_il2cpp_TypeInfo_var);
		PhotonTransformViewPositionControl__ctor_m7C6C92ACC411A60BD9923B0EC68429BE453E15B9(L_2, L_1, /*hidden argument*/NULL);
		__this->set_m_PositionControl_8(L_2);
		// this.m_RotationControl = new PhotonTransformViewRotationControl(this.m_RotationModel);
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_3 = __this->get_m_RotationModel_6();
		PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * L_4 = (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC *)il2cpp_codegen_object_new(PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC_il2cpp_TypeInfo_var);
		PhotonTransformViewRotationControl__ctor_mE9ADC7CE386F7FC939DF8D242D3F971E89087374(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_RotationControl_9(L_4);
		// this.m_ScaleControl = new PhotonTransformViewScaleControl(this.m_ScaleModel);
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_5 = __this->get_m_ScaleModel_7();
		PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * L_6 = (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 *)il2cpp_codegen_object_new(PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90_il2cpp_TypeInfo_var);
		PhotonTransformViewScaleControl__ctor_m47708A68C7B7D1F7EAF0CDD31E7F59C7AB0C3AB9(L_6, L_5, /*hidden argument*/NULL);
		__this->set_m_ScaleControl_10(L_6);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_OnEnable_mCB54CEC250B854CDDB294B54365B41D8F2C47285 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	{
		// m_firstTake = true;
		__this->set_m_firstTake_13((bool)1);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_Update_m27D244023811DC89A7C2313BA9541AD7FB4289F1 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.m_PhotonView == null || this.m_PhotonView.IsMine == true || PhotonNetwork.IsConnectedAndReady == false)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0 = __this->get_m_PhotonView_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_2 = __this->get_m_PhotonView_11();
		NullCheck(L_2);
		bool L_3;
		L_3 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = PhotonNetwork_get_IsConnectedAndReady_mED9E3E2A5BAF5B176DDA3962D4D5139AC18AFFB6(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// this.UpdatePosition();
		PhotonTransformViewClassic_UpdatePosition_m30BF0D00189A9F28102B8D37852C16535BAFD6D4(__this, /*hidden argument*/NULL);
		// this.UpdateRotation();
		PhotonTransformViewClassic_UpdateRotation_m3AD37A2E04FBE3562645D3AA980551CAD6AA068D(__this, /*hidden argument*/NULL);
		// this.UpdateScale();
		PhotonTransformViewClassic_UpdateScale_m660FA7943CD56D34A4B6740A8919DC4ED15F521E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_UpdatePosition_m30BF0D00189A9F28102B8D37852C16535BAFD6D4 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	{
		// if (this.m_PositionModel.SynchronizeEnabled == false || this.m_ReceivedNetworkUpdate == false)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_0 = __this->get_m_PositionModel_5();
		NullCheck(L_0);
		bool L_1 = L_0->get_SynchronizeEnabled_0();
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->get_m_ReceivedNetworkUpdate_12();
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// transform.localPosition = this.m_PositionControl.UpdatePosition(transform.localPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * L_4 = __this->get_m_PositionControl_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = PhotonTransformViewPositionControl_UpdatePosition_m4C26C075A90CE0B316EEC7272AE3FB66D7ECD923(L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_3, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::UpdateRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_UpdateRotation_m3AD37A2E04FBE3562645D3AA980551CAD6AA068D (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	{
		// if (this.m_RotationModel.SynchronizeEnabled == false || this.m_ReceivedNetworkUpdate == false)
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_0 = __this->get_m_RotationModel_6();
		NullCheck(L_0);
		bool L_1 = L_0->get_SynchronizeEnabled_0();
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->get_m_ReceivedNetworkUpdate_12();
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// transform.localRotation = this.m_RotationControl.GetRotation(transform.localRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * L_4 = __this->get_m_RotationControl_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = PhotonTransformViewRotationControl_GetRotation_mDBBEA8DE2BF7693D52AA3F20BEE3F830253EF163(L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_3, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::UpdateScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_UpdateScale_m660FA7943CD56D34A4B6740A8919DC4ED15F521E (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	{
		// if (this.m_ScaleModel.SynchronizeEnabled == false || this.m_ReceivedNetworkUpdate == false)
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_0 = __this->get_m_ScaleModel_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_SynchronizeEnabled_0();
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->get_m_ReceivedNetworkUpdate_12();
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// transform.localScale = this.m_ScaleControl.GetScale(transform.localScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * L_4 = __this->get_m_ScaleControl_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = PhotonTransformViewScaleControl_GetScale_m1CE60B11E827A1EE4B068F68778B3D0BB978F5F7(L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_3, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_SetSynchronizedValues_m33C26AA09EDE8A8755CC9A61263BAAB179705E77 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___speed0, float ___turnSpeed1, const RuntimeMethod* method)
{
	{
		// this.m_PositionControl.SetSynchronizedValues(speed, turnSpeed);
		PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * L_0 = __this->get_m_PositionControl_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___speed0;
		float L_2 = ___turnSpeed1;
		NullCheck(L_0);
		PhotonTransformViewPositionControl_SetSynchronizedValues_mA0CA206BEDEAE3E26D5C48546E91AE9DF0ED6C09(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic_OnPhotonSerializeView_m8AF91B214DF2C04D1A5AF23E5152BD59A1C94AA6 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	{
		// this.m_PositionControl.OnPhotonSerializeView(transform.localPosition, stream, info);
		PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * L_0 = __this->get_m_PositionControl_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_3 = ___stream0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_4 = ___info1;
		NullCheck(L_0);
		PhotonTransformViewPositionControl_OnPhotonSerializeView_m8599BB1A8AF46B2CE6CC8EE65C570AE2D657FE33(L_0, L_2, L_3, L_4, /*hidden argument*/NULL);
		// this.m_RotationControl.OnPhotonSerializeView(transform.localRotation, stream, info);
		PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * L_5 = __this->get_m_RotationControl_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_6, /*hidden argument*/NULL);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_8 = ___stream0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_9 = ___info1;
		NullCheck(L_5);
		PhotonTransformViewRotationControl_OnPhotonSerializeView_mFE00787DCBC77C95F463A2D417178174CD5189A7(L_5, L_7, L_8, L_9, /*hidden argument*/NULL);
		// this.m_ScaleControl.OnPhotonSerializeView(transform.localScale, stream, info);
		PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * L_10 = __this->get_m_ScaleControl_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_13 = ___stream0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_14 = ___info1;
		NullCheck(L_10);
		PhotonTransformViewScaleControl_OnPhotonSerializeView_m64C48CF498ACEB1A1A1A3C757B6CF0FB6302325D(L_10, L_12, L_13, L_14, /*hidden argument*/NULL);
		// if (stream.IsReading == true)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_15 = ___stream0;
		NullCheck(L_15);
		bool L_16;
		L_16 = PhotonStream_get_IsReading_m85B1A69AFCE423D57E2410B40AB35B5D5D80FCA3(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00cf;
		}
	}
	{
		// this.m_ReceivedNetworkUpdate = true;
		__this->set_m_ReceivedNetworkUpdate_12((bool)1);
		// if (m_firstTake)
		bool L_17 = __this->get_m_firstTake_13();
		if (!L_17)
		{
			goto IL_00cf;
		}
	}
	{
		// m_firstTake = false;
		__this->set_m_firstTake_13((bool)0);
		// if (this.m_PositionModel.SynchronizeEnabled)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_18 = __this->get_m_PositionModel_5();
		NullCheck(L_18);
		bool L_19 = L_18->get_SynchronizeEnabled_0();
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		// this.transform.localPosition = this.m_PositionControl.GetNetworkPosition();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * L_21 = __this->get_m_PositionControl_8();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_20, L_22, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// if (this.m_RotationModel.SynchronizeEnabled)
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_23 = __this->get_m_RotationModel_6();
		NullCheck(L_23);
		bool L_24 = L_23->get_SynchronizeEnabled_0();
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		// this.transform.localRotation = this.m_RotationControl.GetNetworkRotation();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * L_26 = __this->get_m_RotationControl_9();
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = PhotonTransformViewRotationControl_GetNetworkRotation_m94B4F8BF1C0E94791CB69E46F053959EE05DA103_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_25, L_27, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// if (this.m_ScaleModel.SynchronizeEnabled)
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_28 = __this->get_m_ScaleModel_7();
		NullCheck(L_28);
		bool L_29 = L_28->get_SynchronizeEnabled_0();
		if (!L_29)
		{
			goto IL_00cf;
		}
	}
	{
		// this.transform.localScale = this.m_ScaleControl.GetNetworkScale();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * L_31 = __this->get_m_ScaleControl_10();
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = PhotonTransformViewScaleControl_GetNetworkScale_m15B44EFCF04FF30AFAF5B6B47552B9ACF169A642_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewClassic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewClassic__ctor_m1E9DACFF3D4DDB40C86F650D74CFADD168140118 (PhotonTransformViewClassic_t01B4CF46F1B02A4657C59D9535CB784EECB4C6E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PhotonTransformViewPositionModel m_PositionModel = new PhotonTransformViewPositionModel();
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_0 = (PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 *)il2cpp_codegen_object_new(PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0_il2cpp_TypeInfo_var);
		PhotonTransformViewPositionModel__ctor_mCFE1C9A64D2C030A4964F496C21A6457B0FE0997(L_0, /*hidden argument*/NULL);
		__this->set_m_PositionModel_5(L_0);
		// public PhotonTransformViewRotationModel m_RotationModel = new PhotonTransformViewRotationModel();
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_1 = (PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 *)il2cpp_codegen_object_new(PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773_il2cpp_TypeInfo_var);
		PhotonTransformViewRotationModel__ctor_m15B05D097E500D1ABD3366B0D79A4368D3BD9517(L_1, /*hidden argument*/NULL);
		__this->set_m_RotationModel_6(L_1);
		// public PhotonTransformViewScaleModel m_ScaleModel = new PhotonTransformViewScaleModel();
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_2 = (PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 *)il2cpp_codegen_object_new(PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51_il2cpp_TypeInfo_var);
		PhotonTransformViewScaleModel__ctor_m8EAB85EAD9E176692EFAC76AEB513BF0AEE517C6(L_2, /*hidden argument*/NULL);
		__this->set_m_ScaleModel_7(L_2);
		MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.PhotonTransformViewPositionControl::.ctor(Photon.Pun.PhotonTransformViewPositionModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl__ctor_m7C6C92ACC411A60BD9923B0EC68429BE453E15B9 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * ___model0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 m_SynchronizedSpeed = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_SynchronizedSpeed_3(L_0);
		// Queue<Vector3> m_OldNetworkPositions = new Queue<Vector3>();
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_1 = (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 *)il2cpp_codegen_object_new(Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496(L_1, /*hidden argument*/Queue_1__ctor_m41D7AF1A43E57A5072BD2C2869D168B78812A496_RuntimeMethod_var);
		__this->set_m_OldNetworkPositions_6(L_1);
		// bool m_UpdatedPositionAfterOnSerialize = true;
		__this->set_m_UpdatedPositionAfterOnSerialize_7((bool)1);
		// public PhotonTransformViewPositionControl(PhotonTransformViewPositionModel model)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Model = model;
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_2 = ___model0;
		__this->set_m_Model_0(L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_mE7A84E00A2DAA44AD4D62BE17849297B3C5E1400 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 oldPosition = m_NetworkPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NetworkPosition_5();
		V_0 = L_0;
		// if (m_OldNetworkPositions.Count > 0)
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_1 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_1, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// oldPosition = m_OldNetworkPositions.Peek();
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_3 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F(L_3, /*hidden argument*/Queue_1_Peek_mD436BE184A57AA31D415E605808E768534AA0F3F_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0021:
	{
		// return oldPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
// System.Void Photon.Pun.PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_SetSynchronizedValues_mA0CA206BEDEAE3E26D5C48546E91AE9DF0ED6C09 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___speed0, float ___turnSpeed1, const RuntimeMethod* method)
{
	{
		// m_SynchronizedSpeed = speed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___speed0;
		__this->set_m_SynchronizedSpeed_3(L_0);
		// m_SynchronizedTurnSpeed = turnSpeed;
		float L_1 = ___turnSpeed1;
		__this->set_m_SynchronizedTurnSpeed_4(L_1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_UpdatePosition_m4C26C075A90CE0B316EEC7272AE3FB66D7ECD923 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// Vector3 targetPosition = GetNetworkPosition() + GetExtrapolatedPositionOffset();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_mE2556E953D7A6BF31D17385981696517EA739E47(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// switch (m_Model.InterpolateOption)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_3 = __this->get_m_Model_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_InterpolateOption_3();
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_00be;
			}
			case 4:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_003d:
	{
		// if (m_UpdatedPositionAfterOnSerialize == false)
		bool L_6 = __this->get_m_UpdatedPositionAfterOnSerialize_7();
		if (L_6)
		{
			goto IL_010b;
		}
	}
	{
		// currentPosition = targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		___currentPosition0 = L_7;
		// m_UpdatedPositionAfterOnSerialize = true;
		__this->set_m_UpdatedPositionAfterOnSerialize_7((bool)1);
		// break;
		goto IL_010b;
	}

IL_0057:
	{
		// currentPosition = Vector3.MoveTowards(currentPosition, targetPosition, Time.deltaTime * m_Model.InterpolateMoveTowardsSpeed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___currentPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_11 = __this->get_m_Model_0();
		NullCheck(L_11);
		float L_12 = L_11->get_InterpolateMoveTowardsSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_8, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_12)), /*hidden argument*/NULL);
		___currentPosition0 = L_13;
		// break;
		goto IL_010b;
	}

IL_0076:
	{
		// if (m_OldNetworkPositions.Count == 0)
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_14 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_14, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_010b;
		}
	}
	{
		// float estimatedSpeed = (Vector3.Distance(m_NetworkPosition, GetOldestStoredNetworkPosition()) / m_OldNetworkPositions.Count) * PhotonNetwork.SerializationRate;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_m_NetworkPosition_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_mE7A84E00A2DAA44AD4D62BE17849297B3C5E1400(__this, /*hidden argument*/NULL);
		float L_18;
		L_18 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_17, /*hidden argument*/NULL);
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_19 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_19, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_18/(float)((float)((float)L_20)))), (float)((float)((float)L_21))));
		// currentPosition = Vector3.MoveTowards(currentPosition, targetPosition, Time.deltaTime * estimatedSpeed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = ___currentPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		float L_24;
		L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_25 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_22, L_23, ((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)), /*hidden argument*/NULL);
		___currentPosition0 = L_26;
		// break;
		goto IL_010b;
	}

IL_00be:
	{
		// if (m_SynchronizedSpeed.magnitude == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_m_SynchronizedSpeed_3();
		float L_28;
		L_28 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_27, /*hidden argument*/NULL);
		if ((!(((float)L_28) == ((float)(0.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		// currentPosition = targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		___currentPosition0 = L_29;
		// }
		goto IL_010b;
	}

IL_00d5:
	{
		// currentPosition = Vector3.MoveTowards(currentPosition, targetPosition, Time.deltaTime * m_SynchronizedSpeed.magnitude);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = ___currentPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_0;
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_33 = __this->get_address_of_m_SynchronizedSpeed_3();
		float L_34;
		L_34 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_30, L_31, ((float)il2cpp_codegen_multiply((float)L_32, (float)L_34)), /*hidden argument*/NULL);
		___currentPosition0 = L_35;
		// break;
		goto IL_010b;
	}

IL_00f1:
	{
		// currentPosition = Vector3.Lerp(currentPosition, targetPosition, Time.deltaTime * m_Model.InterpolateLerpSpeed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = ___currentPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_0;
		float L_38;
		L_38 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_39 = __this->get_m_Model_0();
		NullCheck(L_39);
		float L_40 = L_39->get_InterpolateLerpSpeed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_36, L_37, ((float)il2cpp_codegen_multiply((float)L_38, (float)L_40)), /*hidden argument*/NULL);
		___currentPosition0 = L_41;
	}

IL_010b:
	{
		// if (m_Model.TeleportEnabled == true)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_42 = __this->get_m_Model_0();
		NullCheck(L_42);
		bool L_43 = L_42->get_TeleportEnabled_1();
		if (!L_43)
		{
			goto IL_0139;
		}
	}
	{
		// if (Vector3.Distance(currentPosition, GetNetworkPosition()) > m_Model.TeleportIfDistanceGreaterThan)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = ___currentPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC_inline(__this, /*hidden argument*/NULL);
		float L_46;
		L_46 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_44, L_45, /*hidden argument*/NULL);
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_47 = __this->get_m_Model_0();
		NullCheck(L_47);
		float L_48 = L_47->get_TeleportIfDistanceGreaterThan_2();
		if ((!(((float)L_46) > ((float)L_48))))
		{
			goto IL_0139;
		}
	}
	{
		// currentPosition = GetNetworkPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC_inline(__this, /*hidden argument*/NULL);
		___currentPosition0 = L_49;
	}

IL_0139:
	{
		// return currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = ___currentPosition0;
		return L_50;
	}
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::GetNetworkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method)
{
	{
		// return m_NetworkPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NetworkPosition_5();
		return L_0;
	}
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_mE2556E953D7A6BF31D17385981696517EA739E47 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float timePassed = (float)(PhotonNetwork.Time - m_LastSerializeTime);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = PhotonNetwork_get_Time_mAF24ED87EF8E042306921EA7639F7AB83A8A0B5F(/*hidden argument*/NULL);
		double L_1 = __this->get_m_LastSerializeTime_2();
		V_0 = ((float)((float)((double)il2cpp_codegen_subtract((double)L_0, (double)L_1))));
		// if (m_Model.ExtrapolateIncludingRoundTripTime == true)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_2 = __this->get_m_Model_0();
		NullCheck(L_2);
		bool L_3 = L_2->get_ExtrapolateIncludingRoundTripTime_8();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// timePassed += (float)PhotonNetwork.GetPing() / 1000f;
		float L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = PhotonNetwork_GetPing_m652D9083A9BB86B4EE0BE6711F21DFA9F98701FC(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_4, (float)((float)((float)((float)((float)L_5))/(float)(1000.0f)))));
	}

IL_002a:
	{
		// Vector3 extrapolatePosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_6;
		// switch (m_Model.ExtrapolateOption)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_7 = __this->get_m_Model_0();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_ExtrapolateOption_6();
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0055:
	{
		// Quaternion turnRotation = Quaternion.Euler(0, m_SynchronizedTurnSpeed * timePassed, 0);
		float L_10 = __this->get_m_SynchronizedTurnSpeed_4();
		float L_11 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (0.0f), /*hidden argument*/NULL);
		// extrapolatePosition = turnRotation * (m_SynchronizedSpeed * timePassed);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_m_SynchronizedSpeed_3();
		float L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_12, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// break;
		goto IL_00d5;
	}

IL_0080:
	{
		// Vector3 moveDirection = (m_NetworkPosition - GetOldestStoredNetworkPosition()).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_m_NetworkPosition_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_mE7A84E00A2DAA44AD4D62BE17849297B3C5E1400(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		// extrapolatePosition = moveDirection * m_Model.ExtrapolateSpeed * timePassed;
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_21 = __this->get_m_Model_0();
		NullCheck(L_21);
		float L_22 = L_21->get_ExtrapolateSpeed_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_22, /*hidden argument*/NULL);
		float L_24 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// break;
		goto IL_00d5;
	}

IL_00b2:
	{
		// Vector3 moveDelta = (m_NetworkPosition - GetOldestStoredNetworkPosition()) * PhotonNetwork.SerializationRate;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_m_NetworkPosition_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_mE7A84E00A2DAA44AD4D62BE17849297B3C5E1400(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_26, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = PhotonNetwork_get_SerializationRate_m9234D68776EA4F781AC52FC65B8F40F0EC79D646(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, ((float)((float)L_29)), /*hidden argument*/NULL);
		// extrapolatePosition = moveDelta * timePassed;
		float L_31 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		V_1 = L_32;
	}

IL_00d5:
	{
		// return extrapolatePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_1;
		return L_33;
	}
}
// System.Void Photon.Pun.PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_OnPhotonSerializeView_m8599BB1A8AF46B2CE6CC8EE65C570AE2D657FE33 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Model.SynchronizeEnabled == false)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_0 = __this->get_m_Model_0();
		NullCheck(L_0);
		bool L_1 = L_0->get_SynchronizeEnabled_0();
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (stream.IsWriting == true)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_2 = ___stream1;
		NullCheck(L_2);
		bool L_3;
		L_3 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// SerializeData(currentPosition, stream, info);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___currentPosition0;
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_5 = ___stream1;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_6 = ___info2;
		PhotonTransformViewPositionControl_SerializeData_mEE9BDF26D9DFDBE71802012ABD5AD1E9FD588F12(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		goto IL_0029;
	}

IL_0021:
	{
		// DeserializeData(stream, info);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_7 = ___stream1;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_8 = ___info2;
		PhotonTransformViewPositionControl_DeserializeData_m28E33E0912A50E6FE759D54E26BF4DCAA4005CA7(__this, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// m_LastSerializeTime = PhotonNetwork.Time;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = PhotonNetwork_get_Time_mAF24ED87EF8E042306921EA7639F7AB83A8A0B5F(/*hidden argument*/NULL);
		__this->set_m_LastSerializeTime_2(L_9);
		// m_UpdatedPositionAfterOnSerialize = false;
		__this->set_m_UpdatedPositionAfterOnSerialize_7((bool)0);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_SerializeData_mEE9BDF26D9DFDBE71802012ABD5AD1E9FD588F12 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPosition0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stream.SendNext(currentPosition);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_0 = ___stream1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___currentPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1;
		RuntimeObject * L_3 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_0, L_3, /*hidden argument*/NULL);
		// m_NetworkPosition = currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___currentPosition0;
		__this->set_m_NetworkPosition_5(L_4);
		// if (m_Model.ExtrapolateOption == PhotonTransformViewPositionModel.ExtrapolateOptions.SynchronizeValues ||
		//     m_Model.InterpolateOption == PhotonTransformViewPositionModel.InterpolateOptions.SynchronizeValues)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_5 = __this->get_m_Model_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_ExtrapolateOption_6();
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_7 = __this->get_m_Model_0();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_InterpolateOption_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0051;
		}
	}

IL_002f:
	{
		// stream.SendNext(m_SynchronizedSpeed);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_9 = ___stream1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_m_SynchronizedSpeed_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10;
		RuntimeObject * L_12 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_9, L_12, /*hidden argument*/NULL);
		// stream.SendNext(m_SynchronizedTurnSpeed);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_13 = ___stream1;
		float L_14 = __this->get_m_SynchronizedTurnSpeed_4();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonTransformViewPositionControl::DeserializeData(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionControl_DeserializeData_m28E33E0912A50E6FE759D54E26BF4DCAA4005CA7 (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 readPosition = (Vector3)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_0 = ___stream0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_0, /*hidden argument*/NULL);
		V_0 = ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))));
		// if (m_Model.ExtrapolateOption == PhotonTransformViewPositionModel.ExtrapolateOptions.SynchronizeValues ||
		//     m_Model.InterpolateOption == PhotonTransformViewPositionModel.InterpolateOptions.SynchronizeValues)
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_2 = __this->get_m_Model_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ExtrapolateOption_6();
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_4 = __this->get_m_Model_0();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_InterpolateOption_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_004a;
		}
	}

IL_0028:
	{
		// m_SynchronizedSpeed = (Vector3)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_6 = ___stream0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_6, /*hidden argument*/NULL);
		__this->set_m_SynchronizedSpeed_3(((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_7, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))));
		// m_SynchronizedTurnSpeed = (float)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_8 = ___stream0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_8, /*hidden argument*/NULL);
		__this->set_m_SynchronizedTurnSpeed_4(((*(float*)((float*)UnBox(L_9, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
	}

IL_004a:
	{
		// if (m_OldNetworkPositions.Count == 0)
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_10 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_10, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_005e;
		}
	}
	{
		// m_NetworkPosition = readPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		__this->set_m_NetworkPosition_5(L_12);
	}

IL_005e:
	{
		// m_OldNetworkPositions.Enqueue(m_NetworkPosition);
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_13 = __this->get_m_OldNetworkPositions_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_m_NetworkPosition_5();
		NullCheck(L_13);
		Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6(L_13, L_14, /*hidden argument*/Queue_1_Enqueue_mB80EE35896E61B4758A0629185757B32222E26F6_RuntimeMethod_var);
		// m_NetworkPosition = readPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		__this->set_m_NetworkPosition_5(L_15);
		goto IL_0084;
	}

IL_0078:
	{
		// m_OldNetworkPositions.Dequeue();
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_16 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD(L_16, /*hidden argument*/Queue_1_Dequeue_mDCD7105ED14EBCEFC63E55E5FE43B805AE2E31FD_RuntimeMethod_var);
	}

IL_0084:
	{
		// while (m_OldNetworkPositions.Count > m_Model.ExtrapolateNumberOfStoredPositions)
		Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * L_18 = __this->get_m_OldNetworkPositions_6();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_inline(L_18, /*hidden argument*/Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_RuntimeMethod_var);
		PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * L_20 = __this->get_m_Model_0();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_ExtrapolateNumberOfStoredPositions_9();
		if ((((int32_t)L_19) > ((int32_t)L_21)))
		{
			goto IL_0078;
		}
	}
	{
		// }
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
// System.Void Photon.Pun.PhotonTransformViewPositionModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewPositionModel__ctor_mCFE1C9A64D2C030A4964F496C21A6457B0FE0997 (PhotonTransformViewPositionModel_t6F3E16A8B0ADC3B32A184E9111AFF3D04D1542B0 * __this, const RuntimeMethod* method)
{
	{
		// public bool TeleportEnabled = true;
		__this->set_TeleportEnabled_1((bool)1);
		// public float TeleportIfDistanceGreaterThan = 3f;
		__this->set_TeleportIfDistanceGreaterThan_2((3.0f));
		// public InterpolateOptions InterpolateOption = InterpolateOptions.EstimatedSpeed;
		__this->set_InterpolateOption_3(2);
		// public float InterpolateMoveTowardsSpeed = 1f;
		__this->set_InterpolateMoveTowardsSpeed_4((1.0f));
		// public float InterpolateLerpSpeed = 1f;
		__this->set_InterpolateLerpSpeed_5((1.0f));
		// public float ExtrapolateSpeed = 1f;
		__this->set_ExtrapolateSpeed_7((1.0f));
		// public bool ExtrapolateIncludingRoundTripTime = true;
		__this->set_ExtrapolateIncludingRoundTripTime_8((bool)1);
		// public int ExtrapolateNumberOfStoredPositions = 1;
		__this->set_ExtrapolateNumberOfStoredPositions_9(1);
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
// System.Void Photon.Pun.PhotonTransformViewRotationControl::.ctor(Photon.Pun.PhotonTransformViewRotationModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewRotationControl__ctor_mE9ADC7CE386F7FC939DF8D242D3F971E89087374 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * ___model0, const RuntimeMethod* method)
{
	{
		// public PhotonTransformViewRotationControl(PhotonTransformViewRotationModel model)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Model = model;
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_0 = ___model0;
		__this->set_m_Model_0(L_0);
		// }
		return;
	}
}
// UnityEngine.Quaternion Photon.Pun.PhotonTransformViewRotationControl::GetNetworkRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  PhotonTransformViewRotationControl_GetNetworkRotation_m94B4F8BF1C0E94791CB69E46F053959EE05DA103 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, const RuntimeMethod* method)
{
	{
		// return m_NetworkRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_NetworkRotation_1();
		return L_0;
	}
}
// UnityEngine.Quaternion Photon.Pun.PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  PhotonTransformViewRotationControl_GetRotation_mDBBEA8DE2BF7693D52AA3F20BEE3F830253EF163 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentRotation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (m_Model.InterpolateOption)
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_0 = __this->get_m_Model_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_InterpolateOption_1();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0043;
			}
		}
	}

IL_001e:
	{
		// return m_NetworkRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = __this->get_m_NetworkRotation_1();
		return L_3;
	}

IL_0025:
	{
		// return Quaternion.RotateTowards(currentRotation, m_NetworkRotation, m_Model.InterpolateRotateTowardsSpeed * Time.deltaTime);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___currentRotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = __this->get_m_NetworkRotation_1();
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_6 = __this->get_m_Model_0();
		NullCheck(L_6);
		float L_7 = L_6->get_InterpolateRotateTowardsSpeed_2();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_RotateTowards_mE536473CFE4F8C16245C57C467B95882BE8CF5DC(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		return L_9;
	}

IL_0043:
	{
		// return Quaternion.Lerp(currentRotation, m_NetworkRotation, m_Model.InterpolateLerpSpeed * Time.deltaTime);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = ___currentRotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = __this->get_m_NetworkRotation_1();
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_12 = __this->get_m_Model_0();
		NullCheck(L_12);
		float L_13 = L_12->get_InterpolateLerpSpeed_3();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_10, L_11, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Photon.Pun.PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewRotationControl_OnPhotonSerializeView_mFE00787DCBC77C95F463A2D417178174CD5189A7 (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentRotation0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Model.SynchronizeEnabled == false)
		PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * L_0 = __this->get_m_Model_0();
		NullCheck(L_0);
		bool L_1 = L_0->get_SynchronizeEnabled_0();
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (stream.IsWriting == true)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_2 = ___stream1;
		NullCheck(L_2);
		bool L_3;
		L_3 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// stream.SendNext(currentRotation);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_4 = ___stream1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = ___currentRotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = L_5;
		RuntimeObject * L_7 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_4, L_7, /*hidden argument*/NULL);
		// m_NetworkRotation = currentRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = ___currentRotation0;
		__this->set_m_NetworkRotation_1(L_8);
		// }
		return;
	}

IL_002a:
	{
		// m_NetworkRotation = (Quaternion)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_9 = ___stream1;
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_9, /*hidden argument*/NULL);
		__this->set_m_NetworkRotation_1(((*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)UnBox(L_10, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var)))));
		// }
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
// System.Void Photon.Pun.PhotonTransformViewRotationModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewRotationModel__ctor_m15B05D097E500D1ABD3366B0D79A4368D3BD9517 (PhotonTransformViewRotationModel_t69D205FD8B84BBB4EB20FF35453FD3F87AD48773 * __this, const RuntimeMethod* method)
{
	{
		// public InterpolateOptions InterpolateOption = InterpolateOptions.RotateTowards;
		__this->set_InterpolateOption_1(1);
		// public float InterpolateRotateTowardsSpeed = 180;
		__this->set_InterpolateRotateTowardsSpeed_2((180.0f));
		// public float InterpolateLerpSpeed = 5;
		__this->set_InterpolateLerpSpeed_3((5.0f));
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
// System.Void Photon.Pun.PhotonTransformViewScaleControl::.ctor(Photon.Pun.PhotonTransformViewScaleModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewScaleControl__ctor_m47708A68C7B7D1F7EAF0CDD31E7F59C7AB0C3AB9 (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * ___model0, const RuntimeMethod* method)
{
	{
		// Vector3 m_NetworkScale = Vector3.one;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		__this->set_m_NetworkScale_1(L_0);
		// public PhotonTransformViewScaleControl(PhotonTransformViewScaleModel model)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Model = model;
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_1 = ___model0;
		__this->set_m_Model_0(L_1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewScaleControl::GetNetworkScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewScaleControl_GetNetworkScale_m15B44EFCF04FF30AFAF5B6B47552B9ACF169A642 (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, const RuntimeMethod* method)
{
	{
		// return m_NetworkScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NetworkScale_1();
		return L_0;
	}
}
// UnityEngine.Vector3 Photon.Pun.PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewScaleControl_GetScale_m1CE60B11E827A1EE4B068F68778B3D0BB978F5F7 (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentScale0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (m_Model.InterpolateOption)
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_0 = __this->get_m_Model_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_InterpolateOption_1();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0043;
			}
		}
	}

IL_001e:
	{
		// return m_NetworkScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_m_NetworkScale_1();
		return L_3;
	}

IL_0025:
	{
		// return Vector3.MoveTowards(currentScale, m_NetworkScale, m_Model.InterpolateMoveTowardsSpeed * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___currentScale0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_m_NetworkScale_1();
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_6 = __this->get_m_Model_0();
		NullCheck(L_6);
		float L_7 = L_6->get_InterpolateMoveTowardsSpeed_2();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_4, L_5, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		return L_9;
	}

IL_0043:
	{
		// return Vector3.Lerp(currentScale, m_NetworkScale, m_Model.InterpolateLerpSpeed * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___currentScale0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_m_NetworkScale_1();
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_12 = __this->get_m_Model_0();
		NullCheck(L_12);
		float L_13 = L_12->get_InterpolateLerpSpeed_3();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_10, L_11, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Photon.Pun.PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewScaleControl_OnPhotonSerializeView_m64C48CF498ACEB1A1A1A3C757B6CF0FB6302325D (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentScale0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Model.SynchronizeEnabled == false)
		PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * L_0 = __this->get_m_Model_0();
		NullCheck(L_0);
		bool L_1 = L_0->get_SynchronizeEnabled_0();
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (stream.IsWriting == true)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_2 = ___stream1;
		NullCheck(L_2);
		bool L_3;
		L_3 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// stream.SendNext(currentScale);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_4 = ___stream1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___currentScale0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5;
		RuntimeObject * L_7 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_4, L_7, /*hidden argument*/NULL);
		// m_NetworkScale = currentScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___currentScale0;
		__this->set_m_NetworkScale_1(L_8);
		// }
		return;
	}

IL_002a:
	{
		// m_NetworkScale = (Vector3)stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_9 = ___stream1;
		NullCheck(L_9);
		RuntimeObject * L_10;
		L_10 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_9, /*hidden argument*/NULL);
		__this->set_m_NetworkScale_1(((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))));
		// }
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
// System.Void Photon.Pun.PhotonTransformViewScaleModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonTransformViewScaleModel__ctor_m8EAB85EAD9E176692EFAC76AEB513BF0AEE517C6 (PhotonTransformViewScaleModel_t5391E96BC9691FC241DF677A0972DB9B46F94E51 * __this, const RuntimeMethod* method)
{
	{
		// public float InterpolateMoveTowardsSpeed = 1f;
		__this->set_InterpolateMoveTowardsSpeed_2((1.0f));
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
// System.Int32 Photon.Pun.PhotonView::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_Prefix_m2F8F881E9D6D267410D0FCAEE50BDD9624D55E42 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.prefixField == -1 && PhotonNetwork.NetworkingClient != null)
		int32_t L_0 = __this->get_prefixField_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// this.prefixField = PhotonNetwork.currentLevelPrefix;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		uint8_t L_2 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_currentLevelPrefix_36();
		__this->set_prefixField_5(L_2);
	}

IL_001b:
	{
		// return this.prefixField;
		int32_t L_3 = __this->get_prefixField_5();
		return L_3;
	}
}
// System.Void Photon.Pun.PhotonView::set_Prefix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_Prefix_m7C24BC844EC043E60B5F99EAC71FBED4BCD46CFF (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { this.prefixField = value; }
		int32_t L_0 = ___value0;
		__this->set_prefixField_5(L_0);
		// set { this.prefixField = value; }
		return;
	}
}
// System.Object[] Photon.Pun.PhotonView::get_InstantiationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* PhotonView_get_InstantiationData_m45D06ABDF11E5CF9082F4B0E6715FBE228686E04 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.instantiationDataField; }
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get_instantiationDataField_6();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_InstantiationData(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_InstantiationData_m895DF09DA0BE17A39FF8883E13856B7A12D81DC5 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___value0, const RuntimeMethod* method)
{
	{
		// protected internal set { this.instantiationDataField = value; }
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___value0;
		__this->set_instantiationDataField_6(L_0);
		// protected internal set { this.instantiationDataField = value; }
		return;
	}
}
// System.Boolean Photon.Pun.PhotonView::get_IsSceneView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsSceneView_m488B97CE627F770B4F60823527C51C18DE995CF6 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.IsRoomView; }
		bool L_0;
		L_0 = PhotonView_get_IsRoomView_m48B1DAC0C9B09C734CAFE8C5602ADFA166AD5FBB(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Photon.Pun.PhotonView::get_IsRoomView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsRoomView_m48B1DAC0C9B09C734CAFE8C5602ADFA166AD5FBB (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.CreatorActorNr == 0; }
		int32_t L_0;
		L_0 = PhotonView_get_CreatorActorNr_m6312986A9C95438FD19BE0E2F4691326F268F4B7_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Photon.Pun.PhotonView::get_IsOwnerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsOwnerActive_m2E804F91880F14CE8AAEBFD5E6558FBBE0F7B67A (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.Owner != null && !this.Owner.IsInactive; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0;
		L_0 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1;
		L_1 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Player_get_IsInactive_m39D157D63551D890BF0DE31851D925991E7C1F04_inline(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->get_U3CIsMineU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_IsMine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_IsMine_m47DB674D43E3261E57D32FAF67932BC32117FA45 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsMineU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonView::get_AmController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_AmController_mD3E940604651A5D0778312DA5AC2847922A81283 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.IsMine; }
		bool L_0;
		L_0 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public Player Controller { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3CControllerU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_Controller(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_Controller_mE1CDFEF96720EEA5EA0318900EF98EC6137D0982 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value0, const RuntimeMethod* method)
{
	{
		// public Player Controller { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 Photon.Pun.PhotonView::get_CreatorActorNr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_CreatorActorNr_m6312986A9C95438FD19BE0E2F4691326F268F4B7 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public int CreatorActorNr { get; private set; }
		int32_t L_0 = __this->get_U3CCreatorActorNrU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_CreatorActorNr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_CreatorActorNr_mAD781481D44AB501F858874E47F75B6959231A87 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CreatorActorNr { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCreatorActorNrU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonView::get_AmOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_AmOwner_m67C76F95A540958AE814D15B043E53A536BC0F88 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public bool AmOwner { get; private set; }
		bool L_0 = __this->get_U3CAmOwnerU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_AmOwner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_AmOwner_mD3162EB8DCE079295BEC4165CAF15B08D1B8940F (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AmOwner { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAmOwnerU3Ek__BackingField_19(L_0);
		return;
	}
}
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public Player Owner { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3COwnerU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_Owner(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_Owner_mFD38B4028080E585F4136724CA1C2E53722876AE (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value0, const RuntimeMethod* method)
{
	{
		// public Player Owner { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___value0;
		__this->set_U3COwnerU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Int32 Photon.Pun.PhotonView::get_OwnerActorNr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.ownerActorNr; }
		int32_t L_0 = __this->get_ownerActorNr_21();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_OwnerActorNr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_OwnerActorNr_m4487A3A6096567713A24B544DA5EEC6D6BA50497 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF56FC447CCC318A3617D6694D012E5E30A55963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2F4EC2E33EA9E8F8B98B70BAD778E0972F14BAF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B5_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B4_0 = NULL;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B6_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B6_1 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B8_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B9_1 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B11_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B12_1 = NULL;
	{
		// if (value != 0 && this.ownerActorNr == value)
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = __this->get_ownerActorNr_21();
		int32_t L_2 = ___value0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// Player prevOwner = this.Owner;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_3;
		L_3 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// this.Owner = PhotonNetwork.CurrentRoom == null ? null : PhotonNetwork.CurrentRoom.GetPlayer(value, true);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_4;
		L_4 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		G_B4_0 = __this;
		if (!L_4)
		{
			G_B5_0 = __this;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_5;
		L_5 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		int32_t L_6 = ___value0;
		NullCheck(L_5);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_7;
		L_7 = VirtFuncInvoker2< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, L_5, L_6, (bool)1);
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = ((Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_002b:
	{
		NullCheck(G_B6_1);
		PhotonView_set_Owner_mFD38B4028080E585F4136724CA1C2E53722876AE_inline(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// this.ownerActorNr = this.Owner != null ? this.Owner.ActorNumber : value;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_8;
		L_8 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		G_B7_0 = __this;
		if (L_8)
		{
			G_B8_0 = __this;
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = ___value0;
		G_B9_0 = L_9;
		G_B9_1 = G_B7_0;
		goto IL_0047;
	}

IL_003c:
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_10;
		L_10 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_10, /*hidden argument*/NULL);
		G_B9_0 = L_11;
		G_B9_1 = G_B8_0;
	}

IL_0047:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_ownerActorNr_21(G_B9_0);
		// this.AmOwner = PhotonNetwork.LocalPlayer != null && this.ownerActorNr == PhotonNetwork.LocalPlayer.ActorNumber;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_12;
		L_12 = PhotonNetwork_get_LocalPlayer_mEB99E4B987A50F8A69B6958461C6B96FD1AD35DB(/*hidden argument*/NULL);
		G_B10_0 = __this;
		if (!L_12)
		{
			G_B11_0 = __this;
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = __this->get_ownerActorNr_21();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_14;
		L_14 = PhotonNetwork_get_LocalPlayer_mEB99E4B987A50F8A69B6958461C6B96FD1AD35DB(/*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_14, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0);
		G_B12_1 = G_B10_0;
		goto IL_0069;
	}

IL_0068:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_0069:
	{
		NullCheck(G_B12_1);
		PhotonView_set_AmOwner_mD3162EB8DCE079295BEC4165CAF15B08D1B8940F_inline(G_B12_1, (bool)G_B12_0, /*hidden argument*/NULL);
		// this.UpdateCallbackLists();
		PhotonView_UpdateCallbackLists_mEF3302FD4CFDAD9CF20A82394429082F477FF680(__this, /*hidden argument*/NULL);
		// if (!ReferenceEquals(this.OnOwnerChangeCallbacks, null))
		List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * L_16 = __this->get_OnOwnerChangeCallbacks_30();
		if (!L_16)
		{
			goto IL_00ac;
		}
	}
	{
		// for (int i = 0, cnt = this.OnOwnerChangeCallbacks.Count; i < cnt; ++i)
		V_1 = 0;
		// for (int i = 0, cnt = this.OnOwnerChangeCallbacks.Count; i < cnt; ++i)
		List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * L_17 = __this->get_OnOwnerChangeCallbacks_30();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mAF56FC447CCC318A3617D6694D012E5E30A55963_inline(L_17, /*hidden argument*/List_1_get_Count_mAF56FC447CCC318A3617D6694D012E5E30A55963_RuntimeMethod_var);
		V_2 = L_18;
		goto IL_00a8;
	}

IL_008c:
	{
		// this.OnOwnerChangeCallbacks[i].OnOwnerChange(this.Owner, prevOwner);
		List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * L_19 = __this->get_OnOwnerChangeCallbacks_30();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = List_1_get_Item_m2F4EC2E33EA9E8F8B98B70BAD778E0972F14BAF7_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m2F4EC2E33EA9E8F8B98B70BAD778E0972F14BAF7_RuntimeMethod_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_22;
		L_22 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_23 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker2< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * >::Invoke(0 /* System.Void Photon.Pun.IOnPhotonViewOwnerChange::OnOwnerChange(Photon.Realtime.Player,Photon.Realtime.Player) */, IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		// for (int i = 0, cnt = this.OnOwnerChangeCallbacks.Count; i < cnt; ++i)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a8:
	{
		// for (int i = 0, cnt = this.OnOwnerChangeCallbacks.Count; i < cnt; ++i)
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_008c;
		}
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Pun.PhotonView::get_ControllerActorNr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_ControllerActorNr_m5FE7455025ACCF27EFA3EAB0455052A038C49976 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.controllerActorNr; }
		int32_t L_0 = __this->get_controllerActorNr_22();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_ControllerActorNr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_ControllerActorNr_m33445ADF3FCA4E946E6743481971BBA133B4B45F (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3F1CF5E813B2E139867498D5FB08ECA3AB7B6369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m25C04EAF6788545CBBE782CA7AD706FE0EF437DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B2_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B1_0 = NULL;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B3_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B3_1 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B8_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B9_1 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B11_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B12_1 = NULL;
	{
		// Player prevController = this.Controller;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0;
		L_0 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// this.Controller = PhotonNetwork.CurrentRoom == null ? null : PhotonNetwork.CurrentRoom.GetPlayer(value, true);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_2;
		L_2 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_4;
		L_4 = VirtFuncInvoker2< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, L_2, L_3, (bool)1);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = ((Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		PhotonView_set_Controller_mE1CDFEF96720EEA5EA0318900EF98EC6137D0982_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (this.Controller != null && this.Controller.IsInactive)
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5;
		L_5 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_6;
		L_6 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = Player_get_IsInactive_m39D157D63551D890BF0DE31851D925991E7C1F04_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// this.Controller = PhotonNetwork.MasterClient;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_8;
		L_8 = PhotonNetwork_get_MasterClient_m11DFFA0C18EDC84BBC3EE71AECABDC754EA40070(/*hidden argument*/NULL);
		PhotonView_set_Controller_mE1CDFEF96720EEA5EA0318900EF98EC6137D0982_inline(__this, L_8, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// this.controllerActorNr = this.Controller != null ? this.Controller.ActorNumber : value;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_9;
		L_9 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		G_B7_0 = __this;
		if (L_9)
		{
			G_B8_0 = __this;
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = ___value0;
		G_B9_0 = L_10;
		G_B9_1 = G_B7_0;
		goto IL_005a;
	}

IL_004f:
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_11;
		L_11 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_11, /*hidden argument*/NULL);
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
	}

IL_005a:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_controllerActorNr_22(G_B9_0);
		// this.IsMine = PhotonNetwork.LocalPlayer != null && this.controllerActorNr == PhotonNetwork.LocalPlayer.ActorNumber;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_13;
		L_13 = PhotonNetwork_get_LocalPlayer_mEB99E4B987A50F8A69B6958461C6B96FD1AD35DB(/*hidden argument*/NULL);
		G_B10_0 = __this;
		if (!L_13)
		{
			G_B11_0 = __this;
			goto IL_007b;
		}
	}
	{
		int32_t L_14 = __this->get_controllerActorNr_22();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_15;
		L_15 = PhotonNetwork_get_LocalPlayer_mEB99E4B987A50F8A69B6958461C6B96FD1AD35DB(/*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_15, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
		G_B12_1 = G_B10_0;
		goto IL_007c;
	}

IL_007b:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_007c:
	{
		NullCheck(G_B12_1);
		PhotonView_set_IsMine_m47DB674D43E3261E57D32FAF67932BC32117FA45_inline(G_B12_1, (bool)G_B12_0, /*hidden argument*/NULL);
		// if (!ReferenceEquals(this.Controller, prevController))
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_17;
		L_17 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_18 = V_0;
		if ((((RuntimeObject*)(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)L_17) == ((RuntimeObject*)(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)L_18)))
		{
			goto IL_00c8;
		}
	}
	{
		// this.UpdateCallbackLists();
		PhotonView_UpdateCallbackLists_mEF3302FD4CFDAD9CF20A82394429082F477FF680(__this, /*hidden argument*/NULL);
		// if (!ReferenceEquals(this.OnControllerChangeCallbacks, null))
		List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * L_19 = __this->get_OnControllerChangeCallbacks_31();
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		// for (int i = 0, cnt = this.OnControllerChangeCallbacks.Count; i < cnt; ++i)
		V_1 = 0;
		// for (int i = 0, cnt = this.OnControllerChangeCallbacks.Count; i < cnt; ++i)
		List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * L_20 = __this->get_OnControllerChangeCallbacks_31();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m3F1CF5E813B2E139867498D5FB08ECA3AB7B6369_inline(L_20, /*hidden argument*/List_1_get_Count_m3F1CF5E813B2E139867498D5FB08ECA3AB7B6369_RuntimeMethod_var);
		V_2 = L_21;
		goto IL_00c4;
	}

IL_00a8:
	{
		// this.OnControllerChangeCallbacks[i].OnControllerChange(this.Controller, prevController);
		List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * L_22 = __this->get_OnControllerChangeCallbacks_31();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = List_1_get_Item_m25C04EAF6788545CBBE782CA7AD706FE0EF437DA_inline(L_22, L_23, /*hidden argument*/List_1_get_Item_m25C04EAF6788545CBBE782CA7AD706FE0EF437DA_RuntimeMethod_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_25;
		L_25 = PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_26 = V_0;
		NullCheck(L_24);
		InterfaceActionInvoker2< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * >::Invoke(0 /* System.Void Photon.Pun.IOnPhotonViewControllerChange::OnControllerChange(Photon.Realtime.Player,Photon.Realtime.Player) */, IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_il2cpp_TypeInfo_var, L_24, L_25, L_26);
		// for (int i = 0, cnt = this.OnControllerChangeCallbacks.Count; i < cnt; ++i)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00c4:
	{
		// for (int i = 0, cnt = this.OnControllerChangeCallbacks.Count; i < cnt; ++i)
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_00a8;
		}
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// return this.viewIdField;
		int32_t L_0 = __this->get_viewIdField_24();
		return L_0;
	}
}
// System.Void Photon.Pun.PhotonView::set_ViewID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_set_ViewID_mECEA9C56A0C7584BA6C2F640EEDD9BA846062B68 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267766853FBB5579C928C15FAF19A370C711D10B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != 0 && this.viewIdField != 0)
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = __this->get_viewIdField_24();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogWarning("Changing a ViewID while it's in use is not possible (except setting it to 0 (not being used). Current ViewID: " + this.viewIdField);
		int32_t* L_2 = __this->get_address_of_viewIdField_24();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral267766853FBB5579C928C15FAF19A370C711D10B, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0026:
	{
		// if (value == 0 && this.viewIdField != 0)
		int32_t L_5 = ___value0;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->get_viewIdField_24();
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// PhotonNetwork.LocalCleanPhotonView(this);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = PhotonNetwork_LocalCleanPhotonView_m1074CAC6610B9C3833CC88EF0C84A3CBCB881B84(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// this.viewIdField = value;
		int32_t L_8 = ___value0;
		__this->set_viewIdField_24(L_8);
		// this.CreatorActorNr = value / PhotonNetwork.MAX_VIEW_IDS;   // the creator can be derived from the viewId. this is also the initial owner and creator.
		int32_t L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_10 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_MAX_VIEW_IDS_3();
		PhotonView_set_CreatorActorNr_mAD781481D44AB501F858874E47F75B6959231A87_inline(__this, ((int32_t)((int32_t)L_9/(int32_t)L_10)), /*hidden argument*/NULL);
		// this.OwnerActorNr = this.CreatorActorNr;
		int32_t L_11;
		L_11 = PhotonView_get_CreatorActorNr_m6312986A9C95438FD19BE0E2F4691326F268F4B7_inline(__this, /*hidden argument*/NULL);
		PhotonView_set_OwnerActorNr_m4487A3A6096567713A24B544DA5EEC6D6BA50497(__this, L_11, /*hidden argument*/NULL);
		// this.ControllerActorNr = this.CreatorActorNr;
		int32_t L_12;
		L_12 = PhotonView_get_CreatorActorNr_m6312986A9C95438FD19BE0E2F4691326F268F4B7_inline(__this, /*hidden argument*/NULL);
		PhotonView_set_ControllerActorNr_m33445ADF3FCA4E946E6743481971BBA133B4B45F(__this, L_12, /*hidden argument*/NULL);
		// this.RebuildControllerCache();
		PhotonView_RebuildControllerCache_mE60F1A3F0B658873A4FBE04D6FCD1B8D8D34D5D8(__this, (bool)0, /*hidden argument*/NULL);
		// if (value != 0)
		int32_t L_13 = ___value0;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// PhotonNetwork.RegisterPhotonView(this);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_RegisterPhotonView_m1773D4CB758F521C81C9109124E15261B4F192B6(__this, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_Awake_m637DBF00966F02B8BF0DA61E7E89F691C3BC0658 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// if (this.ViewID != 0)
		int32_t L_0;
		L_0 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (this.sceneViewId != 0)
		int32_t L_1 = __this->get_sceneViewId_23();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// this.ViewID = this.sceneViewId;
		int32_t L_2 = __this->get_sceneViewId_23();
		PhotonView_set_ViewID_mECEA9C56A0C7584BA6C2F640EEDD9BA846062B68(__this, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// this.FindObservables();
		PhotonView_FindObservables_m966D9464E79520040B1CD5C787A7B252F3EFB26A(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::ResetPhotonView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_ResetPhotonView_m622840817989149FDDC8FFD67EA37C9705AE4506 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___resetOwner0, const RuntimeMethod* method)
{
	{
		// this.lastOnSerializeDataSent = null;
		__this->set_lastOnSerializeDataSent_7((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RebuildControllerCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RebuildControllerCache_mE60F1A3F0B658873A4FBE04D6FCD1B8D8D34D5D8 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___ownerHasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * V_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B6_0 = NULL;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * G_B7_1 = NULL;
	{
		// if (this.controllerActorNr == 0 || this.OwnerActorNr == 0 || this.Owner == null || this.Owner.IsInactive)
		int32_t L_0 = __this->get_controllerActorNr_22();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1;
		L_1 = PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_2;
		L_2 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_3;
		L_3 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = Player_get_IsInactive_m39D157D63551D890BF0DE31851D925991E7C1F04_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}

IL_0025:
	{
		// var masterclient = PhotonNetwork.MasterClient;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5;
		L_5 = PhotonNetwork_get_MasterClient_m11DFFA0C18EDC84BBC3EE71AECABDC754EA40070(/*hidden argument*/NULL);
		V_0 = L_5;
		// this.ControllerActorNr = masterclient == null ? -1 : masterclient.ActorNumber;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_6 = V_0;
		G_B5_0 = __this;
		if (!L_6)
		{
			G_B6_0 = __this;
			goto IL_0037;
		}
	}
	{
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_7, /*hidden argument*/NULL);
		G_B7_0 = L_8;
		G_B7_1 = G_B5_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = (-1);
		G_B7_1 = G_B6_0;
	}

IL_0038:
	{
		NullCheck(G_B7_1);
		PhotonView_set_ControllerActorNr_m33445ADF3FCA4E946E6743481971BBA133B4B45F(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003e:
	{
		// this.ControllerActorNr = this.OwnerActorNr;
		int32_t L_9;
		L_9 = PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856_inline(__this, /*hidden argument*/NULL);
		PhotonView_set_ControllerActorNr_m33445ADF3FCA4E946E6743481971BBA133B4B45F(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::OnPreNetDestroy(Photon.Pun.PhotonView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_OnPreNetDestroy_m1383F6369BEBB7CB91C31FF6A8F9CC8C1551388E (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___rootView0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m08838414B0BD261A33CED7EDDD6AAB51E0E913ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAA3B212DA3A139A11F2F07A465C4A25A79C87AA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// UpdateCallbackLists();
		PhotonView_UpdateCallbackLists_mEF3302FD4CFDAD9CF20A82394429082F477FF680(__this, /*hidden argument*/NULL);
		// if (!ReferenceEquals(OnPreNetDestroyCallbacks, null))
		List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * L_0 = __this->get_OnPreNetDestroyCallbacks_29();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// for (int i = 0, cnt = OnPreNetDestroyCallbacks.Count; i < cnt; ++i)
		V_0 = 0;
		// for (int i = 0, cnt = OnPreNetDestroyCallbacks.Count; i < cnt; ++i)
		List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * L_1 = __this->get_OnPreNetDestroyCallbacks_29();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m08838414B0BD261A33CED7EDDD6AAB51E0E913ED_inline(L_1, /*hidden argument*/List_1_get_Count_m08838414B0BD261A33CED7EDDD6AAB51E0E913ED_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_0034;
	}

IL_001e:
	{
		// OnPreNetDestroyCallbacks[i].OnPreNetDestroy(rootView);
		List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * L_3 = __this->get_OnPreNetDestroyCallbacks_29();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_mAA3B212DA3A139A11F2F07A465C4A25A79C87AA1_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mAA3B212DA3A139A11F2F07A465C4A25A79C87AA1_RuntimeMethod_var);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_6 = ___rootView0;
		NullCheck(L_5);
		InterfaceActionInvoker1< PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * >::Invoke(0 /* System.Void Photon.Pun.IOnPhotonViewPreNetDestroy::OnPreNetDestroy(Photon.Pun.PhotonView) */, IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_il2cpp_TypeInfo_var, L_5, L_6);
		// for (int i = 0, cnt = OnPreNetDestroyCallbacks.Count; i < cnt; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0, cnt = OnPreNetDestroyCallbacks.Count; i < cnt; ++i)
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001e;
		}
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_OnDestroy_m737F1EDBBFF9C59B7DF221DBE58C3FAC511A614D (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40442D03F3081D2D675CC161C5FBF890936F62BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA6C011A05F1C4122FD6AAD721B36B5B12F1D8E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.removedFromLocalViewList)
		bool L_0 = __this->get_removedFromLocalViewList_27();
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		// bool wasInList = PhotonNetwork.LocalCleanPhotonView(this);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_LocalCleanPhotonView_m1074CAC6610B9C3833CC88EF0C84A3CBCB881B84(__this, /*hidden argument*/NULL);
		// if (wasInList && this.InstantiationId > 0 && !PhotonHandler.AppQuits && PhotonNetwork.LogLevel >= PunLogLevel.Informational)
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_2 = __this->get_InstantiationId_25();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		bool L_3 = ((ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_il2cpp_TypeInfo_var))->get_AppQuits_9();
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_LogLevel_8();
		if ((((int32_t)L_4) < ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		// Debug.Log("PUN-instantiated '" + this.gameObject.name + "' got destroyed by engine. This is OK when loading levels. Otherwise use: PhotonNetwork.Destroy().");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralAA6C011A05F1C4122FD6AAD721B36B5B12F1D8E9, L_6, _stringLiteral40442D03F3081D2D675CC161C5FBF890936F62BA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RequestOwnership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RequestOwnership_m7BC36EAA9766F321AC8430B893E588DDEB35250D (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61B38F8322180B98477583BE94BD63E60722777);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE6A3CDB1BC44401E80F9B9EC923AA20842409EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OwnershipTransfer != OwnershipOption.Fixed)
		int32_t L_0 = __this->get_OwnershipTransfer_12();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// PhotonNetwork.RequestOwnership(this.ViewID, this.ownerActorNr);
		int32_t L_1;
		L_1 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_ownerActorNr_21();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_RequestOwnership_m7D76A6B95B54DCEDC062A6E2AD66FDF5B0DC083F(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// if (PhotonNetwork.LogLevel >= PunLogLevel.Informational)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_LogLevel_8();
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		// Debug.LogWarning("Attempting to RequestOwnership of GameObject '" + name + "' viewId: " + ViewID +
		//     ", but PhotonView.OwnershipTransfer is set to Fixed.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD61B38F8322180B98477583BE94BD63E60722777);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD61B38F8322180B98477583BE94BD63E60722777);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral029F39055118406B2B10C8EFE242178369516105);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		int32_t L_10;
		L_10 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralFE6A3CDB1BC44401E80F9B9EC923AA20842409EF);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFE6A3CDB1BC44401E80F9B9EC923AA20842409EF);
		String_t* L_13;
		L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_13, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::TransferOwnership(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_TransferOwnership_mEB55DDAA1B560379501604A140BE9B7A74374B55 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newOwner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90C0BB8415FC2EEFB6C5883A8B54921411008D18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (newOwner != null)
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___newOwner0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// TransferOwnership(newOwner.ActorNumber);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___newOwner0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_1, /*hidden argument*/NULL);
		PhotonView_TransferOwnership_m01B6A48CF9F918B0397C3383FAB3950B3884AD33(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		// if (PhotonNetwork.LogLevel >= PunLogLevel.Informational)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_LogLevel_8();
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		//  Debug.LogWarning("Attempting to TransferOwnership of GameObject '" + name + "' viewId: " + ViewID +
		// ", but provided Player newOwner is null.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral029F39055118406B2B10C8EFE242178369516105);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		int32_t L_10;
		L_10 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral90C0BB8415FC2EEFB6C5883A8B54921411008D18);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral90C0BB8415FC2EEFB6C5883A8B54921411008D18);
		String_t* L_13;
		L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_13, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::TransferOwnership(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_TransferOwnership_m01B6A48CF9F918B0397C3383FAB3950B3884AD33 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___newOwnerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7479B031BCFD873A0953EABEDF49BB0FD5447A55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3989BF3B9829EAB75FE39A2179D5DEE8EF95162);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OwnershipTransfer == OwnershipOption.Takeover || (OwnershipTransfer == OwnershipOption.Request && this.AmController))
		int32_t L_0 = __this->get_OwnershipTransfer_12();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = __this->get_OwnershipTransfer_12();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PhotonView_get_AmController_mD3E940604651A5D0778312DA5AC2847922A81283(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}

IL_001a:
	{
		// PhotonNetwork.TransferOwnership(this.ViewID, newOwnerId);
		int32_t L_3;
		L_3 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___newOwnerId0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_TransferOwnership_m615B724E5F7C20B969A4D69B109DDE6EED5048FC(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// if (PhotonNetwork.LogLevel >= PunLogLevel.Informational)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_5 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_LogLevel_8();
		if ((((int32_t)L_5) < ((int32_t)1)))
		{
			goto IL_00c8;
		}
	}
	{
		// if (OwnershipTransfer == OwnershipOption.Fixed)
		int32_t L_6 = __this->get_OwnershipTransfer_12();
		if (L_6)
		{
			goto IL_007d;
		}
	}
	{
		// Debug.LogWarning("Attempting to TransferOwnership of GameObject '" + name + "' viewId: " + ViewID +
		//     " without the authority to do so. TransferOwnership is not allowed if PhotonView.OwnershipTransfer is set to Fixed.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral029F39055118406B2B10C8EFE242178369516105);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		int32_t L_13;
		L_13 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral7479B031BCFD873A0953EABEDF49BB0FD5447A55);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7479B031BCFD873A0953EABEDF49BB0FD5447A55);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_16, /*hidden argument*/NULL);
		return;
	}

IL_007d:
	{
		// else if (OwnershipTransfer == OwnershipOption.Request)
		int32_t L_17 = __this->get_OwnershipTransfer_12();
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_00c8;
		}
	}
	{
		// Debug.LogWarning("Attempting to TransferOwnership of GameObject '" + name + "' viewId: " + ViewID +
		//    " without the authority to do so. PhotonView.OwnershipTransfer is set to Request, so only the controller of this object can TransferOwnership.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA65FC6B92C83C37A270AB886C0323A5D36522D41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral029F39055118406B2B10C8EFE242178369516105);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral029F39055118406B2B10C8EFE242178369516105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		int32_t L_24;
		L_24 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_23;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralE3989BF3B9829EAB75FE39A2179D5DEE8EF95162);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE3989BF3B9829EAB75FE39A2179D5DEE8EF95162);
		String_t* L_27;
		L_27 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_27, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::FindObservables(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_FindObservables_m966D9464E79520040B1CD5C787A7B252F3EFB26A (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___force0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mEA47488E23EE960D757A61DC0F4EC6839E269FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedComponentUtilities_GetNestedComponentsInChildren_TisComponent_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_TisIPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m5F2B95EC8ECAAAD16924C74C4A8C75D193B9EE17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B8_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B9_1 = NULL;
	{
		// if (!force && this.observableSearch == ObservableSearch.Manual)
		bool L_0 = ___force0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = __this->get_observableSearch_13();
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// if (this.ObservedComponents == null)
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_2 = __this->get_ObservedComponents_14();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// this.ObservedComponents = new List<Component>();
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_3 = (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *)il2cpp_codegen_object_new(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_il2cpp_TypeInfo_var);
		List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C(L_3, /*hidden argument*/List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C_RuntimeMethod_var);
		__this->set_ObservedComponents_14(L_3);
		// }
		goto IL_002c;
	}

IL_0021:
	{
		// this.ObservedComponents.Clear();
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_4 = __this->get_ObservedComponents_14();
		NullCheck(L_4);
		List_1_Clear_mEA47488E23EE960D757A61DC0F4EC6839E269FC1(L_4, /*hidden argument*/List_1_Clear_mEA47488E23EE960D757A61DC0F4EC6839E269FC1_RuntimeMethod_var);
	}

IL_002c:
	{
		// this.transform.GetNestedComponentsInChildren<Component, IPunObservable, PhotonView>(force || this.observableSearch == ObservableSearch.AutoFindAll, this.ObservedComponents);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		bool L_6 = ___force0;
		G_B7_0 = L_5;
		if (L_6)
		{
			G_B8_0 = L_5;
			goto IL_0040;
		}
	}
	{
		int32_t L_7 = __this->get_observableSearch_13();
		G_B9_0 = ((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0041:
	{
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_8 = __this->get_ObservedComponents_14();
		IL2CPP_RUNTIME_CLASS_INIT(NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var);
		NestedComponentUtilities_GetNestedComponentsInChildren_TisComponent_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_TisIPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m5F2B95EC8ECAAAD16924C74C4A8C75D193B9EE17(G_B9_1, (bool)G_B9_0, L_8, /*hidden argument*/NestedComponentUtilities_GetNestedComponentsInChildren_TisComponent_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_TisIPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m5F2B95EC8ECAAAD16924C74C4A8C75D193B9EE17_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::SerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_SerializeView_m2A2A1364635489CE4F388DC53953DC9FE2D957A0 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (this.ObservedComponents != null && this.ObservedComponents.Count > 0)
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_0 = __this->get_ObservedComponents_14();
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_1 = __this->get_ObservedComponents_14();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline(L_1, /*hidden argument*/List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		// for (int i = 0; i < this.ObservedComponents.Count; ++i)
		V_0 = 0;
		goto IL_0046;
	}

IL_001a:
	{
		// var component = this.ObservedComponents[i];
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_3 = __this->get_ObservedComponents_14();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_5;
		L_5 = List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		// if (component != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// SerializeComponent(this.ObservedComponents[i], stream, info);
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_7 = __this->get_ObservedComponents_14();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_9;
		L_9 = List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_10 = ___stream0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_11 = ___info1;
		PhotonView_SerializeComponent_mC47B07D87FF882262BFFF07BEB83CFB7691BFF8B(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// for (int i = 0; i < this.ObservedComponents.Count; ++i)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < this.ObservedComponents.Count; ++i)
		int32_t L_13 = V_0;
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_14 = __this->get_ObservedComponents_14();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline(L_14, /*hidden argument*/List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::DeserializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_DeserializeView_mD521644FAF8477EE55560DA56D12843BFFE89D4B (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * V_1 = NULL;
	{
		// if (this.ObservedComponents != null && this.ObservedComponents.Count > 0)
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_0 = __this->get_ObservedComponents_14();
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_1 = __this->get_ObservedComponents_14();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline(L_1, /*hidden argument*/List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		// for (int i = 0; i < this.ObservedComponents.Count; ++i)
		V_0 = 0;
		goto IL_003d;
	}

IL_001a:
	{
		// var component = this.ObservedComponents[i];
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_3 = __this->get_ObservedComponents_14();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_5;
		L_5 = List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		V_1 = L_5;
		// if (component != null)
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// DeserializeComponent(component, stream, info);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_8 = V_1;
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_9 = ___stream0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_10 = ___info1;
		PhotonView_DeserializeComponent_m52485E636485E5F2013F44ABCB0DD12D478A93F8(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// for (int i = 0; i < this.ObservedComponents.Count; ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < this.ObservedComponents.Count; ++i)
		int32_t L_12 = V_0;
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_13 = __this->get_ObservedComponents_14();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline(L_13, /*hidden argument*/List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::DeserializeComponent(UnityEngine.Component,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_DeserializeComponent_m52485E636485E5F2013F44ABCB0DD12D478A93F8 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Type_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	Type_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	{
		// IPunObservable observable = component as IPunObservable;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___component0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var));
		// if (observable != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// observable.OnPhotonSerializeView(stream, info);
		RuntimeObject* L_2 = V_0;
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_3 = ___stream1;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_4 = ___info2;
		NullCheck(L_2);
		InterfaceActionInvoker2< PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA *, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  >::Invoke(0 /* System.Void Photon.Pun.IPunObservable::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo) */, IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}

IL_0013:
	{
		// Debug.LogError("Observed scripts have to implement IPunObservable. " + component + " does not. It is Type: " + component.GetType(), component.gameObject);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_5 = ___component0;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = _stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = _stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5;
			goto IL_0020;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_1;
	}

IL_0025:
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_8 = ___component0;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_8, /*hidden argument*/NULL);
		Type_t * L_10 = L_9;
		G_B6_0 = L_10;
		G_B6_1 = _stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21;
		G_B6_2 = G_B5_0;
		G_B6_3 = G_B5_1;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = _stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21;
			G_B7_2 = G_B5_0;
			G_B7_3 = G_B5_1;
			goto IL_0037;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_003c;
	}

IL_0037:
	{
		NullCheck(G_B7_0);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_003c:
	{
		String_t* L_12;
		L_12 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B8_3, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13 = ___component0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_12, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::SerializeComponent(UnityEngine.Component,Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_SerializeComponent_mC47B07D87FF882262BFFF07BEB83CFB7691BFF8B (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream1, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Type_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	Type_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	{
		// IPunObservable observable = component as IPunObservable;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___component0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var));
		// if (observable != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// observable.OnPhotonSerializeView(stream, info);
		RuntimeObject* L_2 = V_0;
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_3 = ___stream1;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_4 = ___info2;
		NullCheck(L_2);
		InterfaceActionInvoker2< PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA *, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  >::Invoke(0 /* System.Void Photon.Pun.IPunObservable::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo) */, IPunObservable_t43A254432541E5DAECADAD614469DC4A8A375E33_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}

IL_0013:
	{
		// Debug.LogError("Observed scripts have to implement IPunObservable. " + component + " does not. It is Type: " + component.GetType(), component.gameObject);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_5 = ___component0;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = _stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = _stringLiteral9ED31DF88B8E86707C3DB70F0618D69402154AD5;
			goto IL_0020;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_1;
	}

IL_0025:
	{
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_8 = ___component0;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_8, /*hidden argument*/NULL);
		Type_t * L_10 = L_9;
		G_B6_0 = L_10;
		G_B6_1 = _stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21;
		G_B6_2 = G_B5_0;
		G_B6_3 = G_B5_1;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = _stringLiteral269A7569A74E51BEAAB78A51E035D95FA0F20E21;
			G_B7_2 = G_B5_0;
			G_B7_3 = G_B5_1;
			goto IL_0037;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_003c;
	}

IL_0037:
	{
		NullCheck(G_B7_0);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_003c:
	{
		String_t* L_12;
		L_12 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B8_3, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13 = ___component0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_12, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RefreshRpcMonoBehaviourCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RefreshRpcMonoBehaviourCache_mFD4700C7968D969576803F9FC7B65DD721D04925 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C85EAB4E088919032BFED41F1DB3370A05AD5E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.RpcMonoBehaviours = this.GetComponents<MonoBehaviour>();
		MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* L_0;
		L_0 = Component_GetComponents_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C85EAB4E088919032BFED41F1DB3370A05AD5E5(__this, /*hidden argument*/Component_GetComponents_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m6C85EAB4E088919032BFED41F1DB3370A05AD5E5_RuntimeMethod_var);
		__this->set_RpcMonoBehaviours_15(L_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Pun.RpcTarget,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_m97CDF5E617695D4656A00DBD7015B05D2DC9E8C6 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.RPC(this, methodName, target, false, parameters);
		String_t* L_0 = ___methodName0;
		int32_t L_1 = ___target1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___parameters2;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_RPC_mC4DD6C073C7EF0F644C56047EA9795F72E260F38(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RpcSecure(System.String,Photon.Pun.RpcTarget,System.Boolean,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RpcSecure_m617DEA46251BAAA0E8EAFC94AC443AF4DBD910A9 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, String_t* ___methodName0, int32_t ___target1, bool ___encrypt2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.RPC(this, methodName, target, encrypt, parameters);
		String_t* L_0 = ___methodName0;
		int32_t L_1 = ___target1;
		bool L_2 = ___encrypt2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___parameters3;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_RPC_mC4DD6C073C7EF0F644C56047EA9795F72E260F38(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Realtime.Player,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_mEF3BDC753F512BA2B4E2A6CDC724BFCBF5621C61 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, String_t* ___methodName0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___targetPlayer1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.RPC(this, methodName, targetPlayer, false, parameters);
		String_t* L_0 = ___methodName0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___targetPlayer1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___parameters2;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_RPC_mF7EBE6366BA48A329F82F65756FD049DF212C533(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RpcSecure(System.String,Photon.Realtime.Player,System.Boolean,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RpcSecure_m39FEA3E626404C2BF586D8777831B2FD79C27E14 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, String_t* ___methodName0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___targetPlayer1, bool ___encrypt2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.RPC(this, methodName, targetPlayer, encrypt, parameters);
		String_t* L_0 = ___methodName0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___targetPlayer1;
		bool L_2 = ___encrypt2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___parameters3;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_RPC_mF7EBE6366BA48A329F82F65756FD049DF212C533(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Photon.Pun.PhotonView Photon.Pun.PhotonView::Get(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * PhotonView_Get_mC3362DA9919B8982269B055A0D27D7D4895BC3A2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return component.transform.GetParentComponent<PhotonView>();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___component0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_2;
		L_2 = NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F(L_1, /*hidden argument*/NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F_RuntimeMethod_var);
		return L_2;
	}
}
// Photon.Pun.PhotonView Photon.Pun.PhotonView::Get(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * PhotonView_Get_m89F1F371C3052C840529B53ED2283DC1DFE8D07C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObj.transform.GetParentComponent<PhotonView>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___gameObj0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NestedComponentUtilities_tDC3C1467CC9C4A5BD4DB3304E8B27A85E0FD38C1_il2cpp_TypeInfo_var);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_2;
		L_2 = NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F(L_1, /*hidden argument*/NestedComponentUtilities_GetParentComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mE3C75C4197E9BADFED28644466A2A837A067340F_RuntimeMethod_var);
		return L_2;
	}
}
// Photon.Pun.PhotonView Photon.Pun.PhotonView::Find(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * PhotonView_Find_mB5E0B27030057D2FC8FA9FAF5A08BB6AE2A9D2C1 (int32_t ___viewID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PhotonNetwork.GetPhotonView(viewID);
		int32_t L_0 = ___viewID0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_1;
		L_1 = PhotonNetwork_GetPhotonView_m9631E7401025883A80FF5361DDAD8EBEDC1EB2B3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Pun.PhotonView::AddCallbackTarget(Photon.Pun.IPhotonViewCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_AddCallbackTarget_mE49926158D7B9CC61C10CA3F91377A1C1292E854 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CallbackChangeQueue.Enqueue(new CallbackTargetChange(obj, null, true));
		Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * L_0 = __this->get_CallbackChangeQueue_28();
		RuntimeObject* L_1 = ___obj0;
		CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  L_2;
		memset((&L_2), 0, sizeof(L_2));
		CallbackTargetChange__ctor_m6FDF2FE1107B8DBF00575D8E3D56007196074762((&L_2), L_1, (Type_t *)NULL, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907(L_0, L_2, /*hidden argument*/Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::RemoveCallbackTarget(Photon.Pun.IPhotonViewCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RemoveCallbackTarget_m8FF1E52C9599E573F8E6D418A7E192B81C9F4116 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CallbackChangeQueue.Enqueue(new CallbackTargetChange(obj, null, false));
		Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * L_0 = __this->get_CallbackChangeQueue_28();
		RuntimeObject* L_1 = ___obj0;
		CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  L_2;
		memset((&L_2), 0, sizeof(L_2));
		CallbackTargetChange__ctor_m6FDF2FE1107B8DBF00575D8E3D56007196074762((&L_2), L_1, (Type_t *)NULL, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907(L_0, L_2, /*hidden argument*/Queue_1_Enqueue_m161D7168FA0B86227BF30F26DFCA3184BD6BA907_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonView::UpdateCallbackLists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_UpdateCallbackLists_mEF3302FD4CFDAD9CF20A82394429082F477FF680 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonView_RegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_m09C04B40C83F5C451EF7EB90A1BC7C24236524F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonView_RegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_mF8F06E0C972F38B4835C27F19F6777608CD7F7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonView_RegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_m42297B4AA8E51284AAED7CC22243735EDBC30E12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonView_TryRegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_mF198097DB842FB170E1E9D3930DA2BCF8BEB6C29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonView_TryRegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_m250A4027A321D2E7A2B86D7E04E5811DB6053059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonView_TryRegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_mCF7711B2CB14FCAA1BCF162CB17B1553D029A4BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	{
		goto IL_00cc;
	}

IL_0005:
	{
		// var item = CallbackChangeQueue.Dequeue();
		Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * L_0 = __this->get_CallbackChangeQueue_28();
		NullCheck(L_0);
		CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  L_1;
		L_1 = Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A(L_0, /*hidden argument*/Queue_1_Dequeue_m9E72B2E83931CEAF88768E83579E3E54EEFCBD6A_RuntimeMethod_var);
		// var obj = item.obj;
		CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  L_2 = L_1;
		RuntimeObject* L_3 = L_2.get_obj_0();
		V_0 = L_3;
		// var type = item.type;
		CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541  L_4 = L_2;
		Type_t * L_5 = L_4.get_type_1();
		V_1 = L_5;
		// var add = item.add;
		bool L_6 = L_4.get_add_2();
		V_2 = L_6;
		// if (type == null)
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// TryRegisterCallback(obj, ref OnPreNetDestroyCallbacks, add);
		RuntimeObject* L_9 = V_0;
		List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** L_10 = __this->get_address_of_OnPreNetDestroyCallbacks_29();
		bool L_11 = V_2;
		PhotonView_TryRegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_mCF7711B2CB14FCAA1BCF162CB17B1553D029A4BF(__this, L_9, (List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 **)L_10, L_11, /*hidden argument*/PhotonView_TryRegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_mCF7711B2CB14FCAA1BCF162CB17B1553D029A4BF_RuntimeMethod_var);
		// TryRegisterCallback(obj, ref OnOwnerChangeCallbacks, add);
		RuntimeObject* L_12 = V_0;
		List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** L_13 = __this->get_address_of_OnOwnerChangeCallbacks_30();
		bool L_14 = V_2;
		PhotonView_TryRegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_m250A4027A321D2E7A2B86D7E04E5811DB6053059(__this, L_12, (List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 **)L_13, L_14, /*hidden argument*/PhotonView_TryRegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_m250A4027A321D2E7A2B86D7E04E5811DB6053059_RuntimeMethod_var);
		// TryRegisterCallback(obj, ref OnControllerChangeCallbacks, add);
		RuntimeObject* L_15 = V_0;
		List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** L_16 = __this->get_address_of_OnControllerChangeCallbacks_31();
		bool L_17 = V_2;
		PhotonView_TryRegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_mF198097DB842FB170E1E9D3930DA2BCF8BEB6C29(__this, L_15, (List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 **)L_16, L_17, /*hidden argument*/PhotonView_TryRegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_mF198097DB842FB170E1E9D3930DA2BCF8BEB6C29_RuntimeMethod_var);
		// }
		goto IL_00cc;
	}

IL_0059:
	{
		// else if (type == typeof(IOnPhotonViewPreNetDestroy))
		Type_t * L_18 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0080;
		}
	}
	{
		// RegisterCallback(obj as IOnPhotonViewPreNetDestroy, ref OnPreNetDestroyCallbacks, add);
		RuntimeObject* L_22 = V_0;
		List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** L_23 = __this->get_address_of_OnPreNetDestroyCallbacks_29();
		bool L_24 = V_2;
		PhotonView_RegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_m42297B4AA8E51284AAED7CC22243735EDBC30E12(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_il2cpp_TypeInfo_var)), (List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 **)L_23, L_24, /*hidden argument*/PhotonView_RegisterCallback_TisIOnPhotonViewPreNetDestroy_tE4B6BD6DD54CD80D94FBD6C7B9E6DF2514ED3551_m42297B4AA8E51284AAED7CC22243735EDBC30E12_RuntimeMethod_var);
		goto IL_00cc;
	}

IL_0080:
	{
		// else if (type == typeof(IOnPhotonViewOwnerChange))
		Type_t * L_25 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_25, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		// RegisterCallback(obj as IOnPhotonViewOwnerChange, ref OnOwnerChangeCallbacks, add);
		RuntimeObject* L_29 = V_0;
		List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** L_30 = __this->get_address_of_OnOwnerChangeCallbacks_30();
		bool L_31 = V_2;
		PhotonView_RegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_mF8F06E0C972F38B4835C27F19F6777608CD7F7F5(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_29, IOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_il2cpp_TypeInfo_var)), (List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 **)L_30, L_31, /*hidden argument*/PhotonView_RegisterCallback_TisIOnPhotonViewOwnerChange_t848A3518B6EF35B594C273D88FD30AA29331899C_mF8F06E0C972F38B4835C27F19F6777608CD7F7F5_RuntimeMethod_var);
		goto IL_00cc;
	}

IL_00a7:
	{
		// else if (type == typeof(IOnPhotonViewControllerChange))
		Type_t * L_32 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		bool L_35;
		L_35 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_32, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00cc;
		}
	}
	{
		// RegisterCallback(obj as IOnPhotonViewControllerChange, ref OnControllerChangeCallbacks, add);
		RuntimeObject* L_36 = V_0;
		List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** L_37 = __this->get_address_of_OnControllerChangeCallbacks_31();
		bool L_38 = V_2;
		PhotonView_RegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_m09C04B40C83F5C451EF7EB90A1BC7C24236524F8(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_il2cpp_TypeInfo_var)), (List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 **)L_37, L_38, /*hidden argument*/PhotonView_RegisterCallback_TisIOnPhotonViewControllerChange_t0D720D2331819575596653AC45B66EC95DC183A0_m09C04B40C83F5C451EF7EB90A1BC7C24236524F8_RuntimeMethod_var);
	}

IL_00cc:
	{
		// while (CallbackChangeQueue.Count > 0)
		Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * L_39 = __this->get_CallbackChangeQueue_28();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_inline(L_39, /*hidden argument*/Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_RuntimeMethod_var);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.String Photon.Pun.PhotonView::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonView_ToString_m563A2E6382E06FFCAED055F6CFD19E973FC25B53 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363D8D2D063A7F9FD9F54E87F29501D9B1F387A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3990101931EBAF0679A4910CB044959A62ADF5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0CEA048C6DA7000ED56729D2EEA422BD42D1DD5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B8_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B7_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B9_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	{
		// return string.Format("View {0}{3} on {1} {2}", this.ViewID, (this.gameObject != null) ? this.gameObject.name : "GO==null", (this.IsRoomView) ? "(scene)" : string.Empty, this.Prefix > 0 ? "lvl" + this.Prefix : "");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteral363D8D2D063A7F9FD9F54E87F29501D9B1F387A5;
		if (L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteral363D8D2D063A7F9FD9F54E87F29501D9B1F387A5;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = _stringLiteralF0CEA048C6DA7000ED56729D2EEA422BD42D1DD5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_003b;
	}

IL_0030:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_003b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = G_B3_3;
		bool L_11;
		L_11 = PhotonView_get_IsRoomView_m48B1DAC0C9B09C734CAFE8C5602ADFA166AD5FBB(__this, /*hidden argument*/NULL);
		G_B4_0 = 2;
		G_B4_1 = L_10;
		G_B4_2 = L_10;
		G_B4_3 = G_B3_4;
		if (L_11)
		{
			G_B5_0 = 2;
			G_B5_1 = L_10;
			G_B5_2 = L_10;
			G_B5_3 = G_B3_4;
			goto IL_004d;
		}
	}
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B6_0 = _stringLiteralA3990101931EBAF0679A4910CB044959A62ADF5E;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0052:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = G_B6_3;
		int32_t L_14;
		L_14 = PhotonView_get_Prefix_m2F8F881E9D6D267410D0FCAEE50BDD9624D55E42(__this, /*hidden argument*/NULL);
		G_B7_0 = 3;
		G_B7_1 = L_13;
		G_B7_2 = L_13;
		G_B7_3 = G_B6_4;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			G_B8_0 = 3;
			G_B8_1 = L_13;
			G_B8_2 = L_13;
			G_B8_3 = G_B6_4;
			goto IL_0065;
		}
	}
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_007d;
	}

IL_0065:
	{
		int32_t L_15;
		L_15 = PhotonView_get_Prefix_m2F8F881E9D6D267410D0FCAEE50BDD9624D55E42(__this, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5D52F5774B3A4F2D746121366BB3C1351E903792, L_16, /*hidden argument*/NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_007d:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (RuntimeObject *)G_B9_0);
		String_t* L_18;
		L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B9_4, G_B9_3, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Photon.Pun.PhotonView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView__ctor_mD1577C3F4D927F18589CCECE9800CD8152987CAB (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int prefixField = -1;
		__this->set_prefixField_5((-1));
		// public ViewSynchronization Synchronization = ViewSynchronization.UnreliableOnChange;
		__this->set_Synchronization_10(3);
		// private Queue<CallbackTargetChange> CallbackChangeQueue = new Queue<CallbackTargetChange>();
		Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * L_0 = (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA *)il2cpp_codegen_object_new(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA_il2cpp_TypeInfo_var);
		Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C(L_0, /*hidden argument*/Queue_1__ctor_m944B21DD1A1E09228A2C45DCCF78803FA267E04C_RuntimeMethod_var);
		__this->set_CallbackChangeQueue_28(L_0);
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
// System.Void Photon.Pun.PunEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunEvent__ctor_mEE9A018459FB2727F6CEA0915B7153BBC74D41AA (PunEvent_tAE1CA55F9A4C7F7349222A2B7F5F817D33CF0A0D * __this, const RuntimeMethod* method)
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
// System.Reflection.ParameterInfo[] Photon.Pun.PunExtensions::GetCachedParemeters(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* PunExtensions_GetCachedParemeters_m03B80B2329F0866EB5F6FD09D759C841EFCD9F5C (MethodInfo_t * ___mo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7C7CA1894B3C5CF900AEB582509C62BFD6FF4E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m38CD2B2F02C983F34F4A14B0057B38F2D9182B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	{
		// bool cached = ParametersOfMethods.TryGetValue(mo, out result);
		IL2CPP_RUNTIME_CLASS_INIT(PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var);
		Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * L_0 = ((PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_StaticFields*)il2cpp_codegen_static_fields_for(PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var))->get_ParametersOfMethods_0();
		MethodInfo_t * L_1 = ___mo0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7C7CA1894B3C5CF900AEB582509C62BFD6FF4E81(L_0, L_1, (ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7C7CA1894B3C5CF900AEB582509C62BFD6FF4E81_RuntimeMethod_var);
		// if (!cached)
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// result = mo.GetParameters();
		MethodInfo_t * L_3 = ___mo0;
		NullCheck(L_3);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_0 = L_4;
		// ParametersOfMethods[mo] = result;
		IL2CPP_RUNTIME_CLASS_INIT(PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var);
		Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * L_5 = ((PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_StaticFields*)il2cpp_codegen_static_fields_for(PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var))->get_ParametersOfMethods_0();
		MethodInfo_t * L_6 = ___mo0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_7 = V_0;
		NullCheck(L_5);
		Dictionary_2_set_Item_m38CD2B2F02C983F34F4A14B0057B38F2D9182B4B(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m38CD2B2F02C983F34F4A14B0057B38F2D9182B4B_RuntimeMethod_var);
	}

IL_0022:
	{
		// return result;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_8 = V_0;
		return L_8;
	}
}
// Photon.Pun.PhotonView[] Photon.Pun.PunExtensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4* PunExtensions_GetPhotonViewsInChildren_m39CCA27BE4E1FA0E63969D935C16A523029CD748 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m156C8F63ECC0F806B6325064808EAA5CC494EA8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return go.GetComponentsInChildren<PhotonView>(true) as PhotonView[];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		NullCheck(L_0);
		PhotonViewU5BU5D_t04F5DE36631406E7A805A3A3D88CD2577F712AE4* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m156C8F63ECC0F806B6325064808EAA5CC494EA8D(L_0, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m156C8F63ECC0F806B6325064808EAA5CC494EA8D_RuntimeMethod_var);
		return L_1;
	}
}
// Photon.Pun.PhotonView Photon.Pun.PunExtensions::GetPhotonView(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * PunExtensions_GetPhotonView_m4CF5F2F8A1BD8046995FF41970EE2704FE7EFAAE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return go.GetComponent<PhotonView>() as PhotonView;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		NullCheck(L_0);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_1;
		L_1 = GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10(L_0, /*hidden argument*/GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Photon.Pun.PunExtensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunExtensions_AlmostEquals_mF2C6B20F267ED0039155A2BF6A1001EFC24D1622 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___second1, float ___sqrMagnitudePrecision2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (target - second).sqrMagnitude < sqrMagnitudePrecision; // TODO: inline vector methods to optimize?
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___target0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___second1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_4 = ___sqrMagnitudePrecision2;
		return (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
	}
}
// System.Boolean Photon.Pun.PunExtensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunExtensions_AlmostEquals_mE2EDD3C0A61739D81E88DC96143FB8CDD75C5E16 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___second1, float ___sqrMagnitudePrecision2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (target - second).sqrMagnitude < sqrMagnitudePrecision; // TODO: inline vector methods to optimize?
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___target0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___second1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = ___sqrMagnitudePrecision2;
		return (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
	}
}
// System.Boolean Photon.Pun.PunExtensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunExtensions_AlmostEquals_m4D0DAB4B7932B9A35108000E88108FAC4A47B8C0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___target0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___second1, float ___maxAngle2, const RuntimeMethod* method)
{
	{
		// return Quaternion.Angle(target, second) < maxAngle;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___target0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___second1;
		float L_2;
		L_2 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = ___maxAngle2;
		return (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Photon.Pun.PunExtensions::AlmostEquals(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunExtensions_AlmostEquals_mCF0848EB67246A23803429C6D8D15EBA47F913AB (float ___target0, float ___second1, float ___floatDiff2, const RuntimeMethod* method)
{
	{
		// return Mathf.Abs(target - second) < floatDiff;
		float L_0 = ___target0;
		float L_1 = ___second1;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_3 = ___floatDiff2;
		return (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Photon.Pun.PunExtensions::CheckIsAssignableFrom(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunExtensions_CheckIsAssignableFrom_m898C253BB0C2365F344858531B1F7D114199305F (Type_t * ___to0, Type_t * ___from1, const RuntimeMethod* method)
{
	{
		// return to.IsAssignableFrom(from);
		Type_t * L_0 = ___to0;
		Type_t * L_1 = ___from1;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Photon.Pun.PunExtensions::CheckIsInterface(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunExtensions_CheckIsInterface_mC53C2646AE54AA6E2FF0BE06FB94475F01FCDB78 (Type_t * ___to0, const RuntimeMethod* method)
{
	{
		// return to.IsInterface;
		Type_t * L_0 = ___to0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Pun.PunExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunExtensions__cctor_mE1A47F8E1A2F545A906D063BB57E8FAAD50D3781 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4893CCEE7DDB83589BC49779ECC29131F5F77D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<MethodInfo, ParameterInfo[]> ParametersOfMethods = new Dictionary<MethodInfo, ParameterInfo[]>();
		Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 * L_0 = (Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410 *)il2cpp_codegen_object_new(Dictionary_2_t466FDDD7825C29349667510C870B985EA637D410_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4893CCEE7DDB83589BC49779ECC29131F5F77D23(L_0, /*hidden argument*/Dictionary_2__ctor_m4893CCEE7DDB83589BC49779ECC29131F5F77D23_RuntimeMethod_var);
		((PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_StaticFields*)il2cpp_codegen_static_fields_for(PunExtensions_tCE902E6C8C1A7A6667132F14343F99C03C1C2499_il2cpp_TypeInfo_var))->set_ParametersOfMethods_0(L_0);
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
// System.Void Photon.Pun.PunRPC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunRPC__ctor_mB04301E5CA11F695DE1AFF36983947C58D1B74E6 (PunRPC_t31AB169F10D003D1468E0A99182ABAA68F5254CC * __this, const RuntimeMethod* method)
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
// System.String Photon.Pun.SceneManagerHelper::get_ActiveSceneName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneManagerHelper_get_ActiveSceneName_m07552766F052EABAB34AE40AE91F2D72F58F682E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Scene s = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		// return s.name;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Photon.Pun.SceneManagerHelper::get_ActiveSceneBuildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManagerHelper_get_ActiveSceneBuildIndex_m1AA27E5F506724ED13401567166BB3A9C989B5FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SceneManager.GetActiveScene().buildIndex; }
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Pun.SceneManagerHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerHelper__ctor_mA5ED2B9170897D32094F20F752EBA07C275AFF63 (SceneManagerHelper_t481F5559B1FE84E2917976A4D6A2DF713184203B * __this, const RuntimeMethod* method)
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
// System.Void Photon.Pun.ServerSettings::UseCloud(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSettings_UseCloud_m5E8B2497586E38C2B438AABE34E6B5651278859D (ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * __this, String_t* ___cloudAppid0, String_t* ___code1, const RuntimeMethod* method)
{
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * G_B2_0 = NULL;
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * G_B3_1 = NULL;
	{
		// this.AppSettings.AppIdRealtime = cloudAppid;
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_0 = __this->get_AppSettings_4();
		String_t* L_1 = ___cloudAppid0;
		NullCheck(L_0);
		L_0->set_AppIdRealtime_0(L_1);
		// this.AppSettings.Server = null;
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_2 = __this->get_AppSettings_4();
		NullCheck(L_2);
		L_2->set_Server_8((String_t*)NULL);
		// this.AppSettings.FixedRegion = string.IsNullOrEmpty(code) ? null : code;
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_3 = __this->get_AppSettings_4();
		String_t* L_4 = ___code1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		G_B1_0 = L_3;
		if (L_5)
		{
			G_B2_0 = L_3;
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___code1;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_FixedRegion_6(G_B3_0);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.ServerSettings::IsAppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServerSettings_IsAppId_mC0938957DB02BE8E0EBD73B776427120278CCE46 (String_t* ___val0, const RuntimeMethod* method)
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// new Guid(val);
		String_t* L_0 = ___val0;
		Guid_t  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66((&L_1), L_0, /*hidden argument*/NULL);
		// }
		goto IL_000e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Object)
		// catch
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0010;
	} // end catch (depth: 1)

IL_000e:
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String Photon.Pun.ServerSettings::get_BestRegionSummaryInPreferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerSettings_get_BestRegionSummaryInPreferences_mCC0B31437E5BDED0541D7D810A678A8928E30191 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return PhotonNetwork.BestRegionSummaryInPreferences; }
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = PhotonNetwork_get_BestRegionSummaryInPreferences_mD7F4C70AFF793B5041E2AB8F89C0414F2D331D5B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Photon.Pun.ServerSettings::ResetBestRegionCodeInPreferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSettings_ResetBestRegionCodeInPreferences_mBB4C752844BE894C52E35D72FF390DBC84EDCA4F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.BestRegionSummaryInPreferences = null;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_set_BestRegionSummaryInPreferences_mDF0030B4639AEDF898BF81FCD781B5BC0F43BA7F((String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Pun.ServerSettings::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServerSettings_ToString_m44D611FDF0CF8601586DF780DE07AEEEFDF0931E (ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51520DAD70E6903017CE7E9D2CA1FEFB8DADDE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "ServerSettings: " + this.AppSettings.ToStringFull();
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_0 = __this->get_AppSettings_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = AppSettings_ToStringFull_mD6BB5063EC3F6EA378E7EF959D2823A3313A65B7(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE51520DAD70E6903017CE7E9D2CA1FEFB8DADDE6, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Photon.Pun.ServerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSettings__ctor_m814F00299E77F85433221A10B385F6BAD185099A (ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool RunInBackground = true;
		__this->set_RunInBackground_8((bool)1);
		// public List<string> RpcList = new List<string>();   // set by scripts and or via Inspector
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_RpcList_10(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.PhotonAnimatorView/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m05B15BD8CD1AD112CBDA81CE29E3EC3A421E50B5 (U3CU3Ec__DisplayClass18_0_t2BF79E6CABC573790AB84BBDA3A679FF86BA6CCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonAnimatorView/<>c__DisplayClass18_0::<DoesLayerSynchronizeTypeExist>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CDoesLayerSynchronizeTypeExistU3Eb__0_m48D4245BFE6709613155A91C5E9699AF726C859D (U3CU3Ec__DisplayClass18_0_t2BF79E6CABC573790AB84BBDA3A679FF86BA6CCE * __this, SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * ___item0, const RuntimeMethod* method)
{
	{
		// return this.m_SynchronizeLayers.FindIndex(item => item.LayerIndex == layerIndex) != -1;
		SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LayerIndex_1();
		int32_t L_2 = __this->get_layerIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Photon.Pun.PhotonAnimatorView/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m6C6720D2A9A865E5BE02589C42D528F7BCE1B752 (U3CU3Ec__DisplayClass19_0_t59710B7E3F5BED5FE0960F7D47878CB15E255155 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonAnimatorView/<>c__DisplayClass19_0::<DoesParameterSynchronizeTypeExist>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CDoesParameterSynchronizeTypeExistU3Eb__0_mFCC8DD477618048EABF993414BAA0C70D403C263 (U3CU3Ec__DisplayClass19_0_t59710B7E3F5BED5FE0960F7D47878CB15E255155 * __this, SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * ___item0, const RuntimeMethod* method)
{
	{
		// return this.m_SynchronizeParameters.FindIndex(item => item.Name == name) != -1;
		SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Photon.Pun.PhotonAnimatorView/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m969D77946CFA9A7A29A4F23375814C32B5332291 (U3CU3Ec__DisplayClass22_0_t68DE6186BF5229AFCD259905E1B67D810F6DC1D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonAnimatorView/<>c__DisplayClass22_0::<GetLayerSynchronizeType>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass22_0_U3CGetLayerSynchronizeTypeU3Eb__0_m6F65BBA1C20E87266632297EC193D1CC3A0F002E (U3CU3Ec__DisplayClass22_0_t68DE6186BF5229AFCD259905E1B67D810F6DC1D1 * __this, SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeLayers.FindIndex(item => item.LayerIndex == layerIndex);
		SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LayerIndex_1();
		int32_t L_2 = __this->get_layerIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Photon.Pun.PhotonAnimatorView/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m81B96533EB058052A0229AD4FE1A3C8D976F4685 (U3CU3Ec__DisplayClass23_0_t2B422A17087D506C711916877E31AEFC8070EF9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonAnimatorView/<>c__DisplayClass23_0::<GetParameterSynchronizeType>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3CGetParameterSynchronizeTypeU3Eb__0_m66FB2B4AB88259A5FA451008A8A5FDC46998D93F (U3CU3Ec__DisplayClass23_0_t2B422A17087D506C711916877E31AEFC8070EF9B * __this, SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeParameters.FindIndex(item => item.Name == name);
		SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mEDE08D0C80A957804DDCE99A54AEBE495203433A (U3CU3Ec__DisplayClass24_0_tD53F6678436C7A81CC78286FCB9862889F7B9CEA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0::<SetLayerSynchronized>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CSetLayerSynchronizedU3Eb__0_m3D72866B5BE7662521064371186EA0BCC59E112E (U3CU3Ec__DisplayClass24_0_tD53F6678436C7A81CC78286FCB9862889F7B9CEA * __this, SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeLayers.FindIndex(item => item.LayerIndex == layerIndex);
		SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LayerIndex_1();
		int32_t L_2 = __this->get_layerIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Photon.Pun.PhotonAnimatorView/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m4391E103836699CEF882E68A5187F6BEC3B81344 (U3CU3Ec__DisplayClass25_0_tC5B3C81890FB1C625592B75652EA3D763F65C7B7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Pun.PhotonAnimatorView/<>c__DisplayClass25_0::<SetParameterSynchronized>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CSetParameterSynchronizedU3Eb__0_mD220D1D3686D9F5D9EDDA96ABD68C99DCC8DC9AA (U3CU3Ec__DisplayClass25_0_tC5B3C81890FB1C625592B75652EA3D763F65C7B7 * __this, SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeParameters.FindIndex(item => item.Name == name);
		SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Photon.Pun.PhotonAnimatorView/SynchronizedLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizedLayer__ctor_m80BC3600C394D7768FFE13A13FD414CEF2200578 (SynchronizedLayer_t47B4417C8B785446A586678FAE3A094BDB2F22F6 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Pun.PhotonAnimatorView/SynchronizedParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizedParameter__ctor_m12E48616E9E1E65717ECBDA7686562C6E11747F8 (SynchronizedParameter_t7A153738944F6B3146B400A98A7934A09125BC06 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Pun.PhotonHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mED6D1F4249215D0D7D2C91C4CA2D0B6C7413F099 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * L_0 = (U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 *)il2cpp_codegen_object_new(U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7C79C5C3D85BA25B6FD6BF865640F0E60D3FEE9D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Pun.PhotonHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C79C5C3D85BA25B6FD6BF865640F0E60D3FEE9D (U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Pun.PhotonHandler/<>c::<Start>b__13_0(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__13_0_mF6CFBB3B5307F9C595A1645FC65DA4B162E8428D (U3CU3Ec_tC50354DE39A852A0F280FFD45451AA7F5BA0CEC1 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___loadingMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.NewSceneLoaded();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_NewSceneLoaded_m9BBBFC7E3A53FC10C83775B46268B46620E04B71(/*hidden argument*/NULL);
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
// System.Void Photon.Pun.PhotonNetwork/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m09411C613BF2A602A4D117E670F4672495145BE8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * L_0 = (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 *)il2cpp_codegen_object_new(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBCECB9333F11AE03D402D83F0FC4610645152E74(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Pun.PhotonNetwork/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBCECB9333F11AE03D402D83F0FC4610645152E74 (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Photon.Pun.PhotonNetwork/<>c::<get_PlayerList>b__47_0(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_PlayerListU3Eb__47_0_mF109058DEBA1AAD5AEED406B659F38AA01A4FC98 (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___x0, const RuntimeMethod* method)
{
	{
		// return room.Players.Values.OrderBy((x) => x.ActorNumber).ToArray();
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Photon.Pun.PhotonNetwork/<>c::<get_PlayerListOthers>b__49_0(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_PlayerListOthersU3Eb__49_0_m476164E024D0D919C9ABF1A235E2CF51000808BA (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___x0, const RuntimeMethod* method)
{
	{
		// return room.Players.Values.OrderBy((x) => x.ActorNumber).Where(x => !x.IsLocal).ToArray();
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Pun.PhotonNetwork/<>c::<get_PlayerListOthers>b__49_1(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_PlayerListOthersU3Eb__49_1_m7725B84F4FE19BA18DB2879239DC5D91869D01E3 (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___x0, const RuntimeMethod* method)
{
	{
		// return room.Players.Values.OrderBy((x) => x.ActorNumber).Where(x => !x.IsLocal).ToArray();
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = L_0->get_IsLocal_2();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Photon.Pun.PhotonNetwork/<>c::<CallbacksToString>b__217_0(Photon.Realtime.IConnectionCallbacks)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCallbacksToStringU3Eb__217_0_m373E5FF7EF6851EA784E2C1C3AA0421D0A3D269F (U3CU3Ec_tA9C9F51CA452DF38A8E1E7985AD37145ECA0C5B8 * __this, RuntimeObject* ___m0, const RuntimeMethod* method)
{
	{
		// var x = NetworkingClient.ConnectionCallbackTargets.Select(m => m.ToString()).ToArray();
		RuntimeObject* L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// Conversion methods for marshalling of: Photon.Pun.PhotonNetwork/RaiseEventBatch
IL2CPP_EXTERN_C void RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshal_pinvoke(const RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7& unmarshaled, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_pinvoke& marshaled)
{
	marshaled.___Group_0 = unmarshaled.get_Group_0();
	marshaled.___Reliable_1 = static_cast<int32_t>(unmarshaled.get_Reliable_1());
}
IL2CPP_EXTERN_C void RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshal_pinvoke_back(const RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_pinvoke& marshaled, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7& unmarshaled)
{
	uint8_t unmarshaled_Group_temp_0 = 0x0;
	unmarshaled_Group_temp_0 = marshaled.___Group_0;
	unmarshaled.set_Group_0(unmarshaled_Group_temp_0);
	bool unmarshaled_Reliable_temp_1 = false;
	unmarshaled_Reliable_temp_1 = static_cast<bool>(marshaled.___Reliable_1);
	unmarshaled.set_Reliable_1(unmarshaled_Reliable_temp_1);
}
// Conversion method for clean up from marshalling of: Photon.Pun.PhotonNetwork/RaiseEventBatch
IL2CPP_EXTERN_C void RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshal_pinvoke_cleanup(RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Photon.Pun.PhotonNetwork/RaiseEventBatch
IL2CPP_EXTERN_C void RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshal_com(const RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7& unmarshaled, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_com& marshaled)
{
	marshaled.___Group_0 = unmarshaled.get_Group_0();
	marshaled.___Reliable_1 = static_cast<int32_t>(unmarshaled.get_Reliable_1());
}
IL2CPP_EXTERN_C void RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshal_com_back(const RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_com& marshaled, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7& unmarshaled)
{
	uint8_t unmarshaled_Group_temp_0 = 0x0;
	unmarshaled_Group_temp_0 = marshaled.___Group_0;
	unmarshaled.set_Group_0(unmarshaled_Group_temp_0);
	bool unmarshaled_Reliable_temp_1 = false;
	unmarshaled_Reliable_temp_1 = static_cast<bool>(marshaled.___Reliable_1);
	unmarshaled.set_Reliable_1(unmarshaled_Reliable_temp_1);
}
// Conversion method for clean up from marshalling of: Photon.Pun.PhotonNetwork/RaiseEventBatch
IL2CPP_EXTERN_C void RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshal_com_cleanup(RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7_marshaled_com& marshaled)
{
}
// System.Int32 Photon.Pun.PhotonNetwork/RaiseEventBatch::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaiseEventBatch_GetHashCode_mD442ED8DC9C18436C651A727D569E903D377992B (RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * __this, const RuntimeMethod* method)
{
	uint8_t G_B2_0 = 0x0;
	uint8_t G_B1_0 = 0x0;
	int32_t G_B3_0 = 0;
	uint8_t G_B3_1 = 0x0;
	{
		// return (this.Group << 1) + (this.Reliable ? 1 : 0);
		uint8_t L_0 = __this->get_Group_0();
		bool L_1 = __this->get_Reliable_1();
		G_B1_0 = ((uint8_t)(((int32_t)((int32_t)L_0<<(int32_t)1))));
		if (L_1)
		{
			G_B2_0 = ((uint8_t)(((int32_t)((int32_t)L_0<<(int32_t)1))));
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
	}
}
IL2CPP_EXTERN_C  int32_t RaiseEventBatch_GetHashCode_mD442ED8DC9C18436C651A727D569E903D377992B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * _thisAdjusted = reinterpret_cast<RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RaiseEventBatch_GetHashCode_mD442ED8DC9C18436C651A727D569E903D377992B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Photon.Pun.PhotonNetwork/RaiseEventBatch::Equals(Photon.Pun.PhotonNetwork/RaiseEventBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaiseEventBatch_Equals_m81C942F2A346FC76DDA983539E44259C835BA450 (RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * __this, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___other0, const RuntimeMethod* method)
{
	{
		// return this.Reliable == other.Reliable && this.Group == other.Group;
		bool L_0 = __this->get_Reliable_1();
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_1 = ___other0;
		bool L_2 = L_1.get_Reliable_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint8_t L_3 = __this->get_Group_0();
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_4 = ___other0;
		uint8_t L_5 = L_4.get_Group_0();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RaiseEventBatch_Equals_m81C942F2A346FC76DDA983539E44259C835BA450_AdjustorThunk (RuntimeObject * __this, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * _thisAdjusted = reinterpret_cast<RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = RaiseEventBatch_Equals_m81C942F2A346FC76DDA983539E44259C835BA450(_thisAdjusted, ___other0, method);
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
// System.Void Photon.Pun.PhotonNetwork/SerializeViewBatch::.ctor(Photon.Pun.PhotonNetwork/RaiseEventBatch,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeViewBatch__ctor_mC1ABC95EE1FC4E248826753746E56DE3CA1AAEC8 (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___batch0, int32_t ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// private int defaultSize = PhotonNetwork.ObjectsInOneUpdate;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_ObjectsInOneUpdate_71();
		__this->set_defaultSize_2(L_0);
		// public SerializeViewBatch(RaiseEventBatch batch, int offset)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Batch = batch;
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_1 = ___batch0;
		__this->set_Batch_0(L_1);
		// this.ObjectUpdates = new List<object>(this.defaultSize);
		int32_t L_2 = __this->get_defaultSize_2();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538(L_3, L_2, /*hidden argument*/List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_RuntimeMethod_var);
		__this->set_ObjectUpdates_1(L_3);
		// this.offset = offset;
		int32_t L_4 = ___offset1;
		__this->set_offset_3(L_4);
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		V_0 = 0;
		goto IL_0044;
	}

IL_0034:
	{
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get_ObjectUpdates_1();
		NullCheck(L_5);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_5, NULL, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0044:
	{
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		int32_t L_7 = V_0;
		int32_t L_8 = ___offset1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Photon.Pun.PhotonNetwork/SerializeViewBatch::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializeViewBatch_GetHashCode_m0905AB3E19F543DA5F61CE41B4BE48F255C09A80 (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, const RuntimeMethod* method)
{
	uint8_t G_B2_0 = 0x0;
	uint8_t G_B1_0 = 0x0;
	int32_t G_B3_0 = 0;
	uint8_t G_B3_1 = 0x0;
	{
		// return (this.Batch.Group << 1) + (this.Batch.Reliable ? 1 : 0);
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * L_0 = __this->get_address_of_Batch_0();
		uint8_t L_1 = L_0->get_Group_0();
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * L_2 = __this->get_address_of_Batch_0();
		bool L_3 = L_2->get_Reliable_1();
		G_B1_0 = ((uint8_t)(((int32_t)((int32_t)L_1<<(int32_t)1))));
		if (L_3)
		{
			G_B2_0 = ((uint8_t)(((int32_t)((int32_t)L_1<<(int32_t)1))));
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
	}
}
// System.Boolean Photon.Pun.PhotonNetwork/SerializeViewBatch::Equals(Photon.Pun.PhotonNetwork/SerializeViewBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializeViewBatch_Equals_m66036C2945FDFC123AF34A5BD72F18785D988511 (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * ___other0, const RuntimeMethod* method)
{
	{
		// return this.Equals(other.Batch);
		SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * L_0 = ___other0;
		NullCheck(L_0);
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_1 = L_0->get_Batch_0();
		bool L_2;
		L_2 = SerializeViewBatch_Equals_m6547A4F6947883FFDE23B9D7720447B6211E77DC(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Pun.PhotonNetwork/SerializeViewBatch::Equals(Photon.Pun.PhotonNetwork/RaiseEventBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializeViewBatch_Equals_m6547A4F6947883FFDE23B9D7720447B6211E77DC (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  ___other0, const RuntimeMethod* method)
{
	{
		// return this.Batch.Reliable == other.Reliable && this.Batch.Group == other.Group;
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * L_0 = __this->get_address_of_Batch_0();
		bool L_1 = L_0->get_Reliable_1();
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_2 = ___other0;
		bool L_3 = L_2.get_Reliable_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 * L_4 = __this->get_address_of_Batch_0();
		uint8_t L_5 = L_4->get_Group_0();
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_6 = ___other0;
		uint8_t L_7 = L_6.get_Group_0();
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Pun.PhotonNetwork/SerializeViewBatch::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializeViewBatch_Equals_m8A489B2BBAF8DB1430ECD2AC0013E142FB799EDC (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * V_0 = NULL;
	RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SerializeViewBatch other = obj as SerializeViewBatch;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 *)IsInstClass((RuntimeObject*)L_0, SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59_il2cpp_TypeInfo_var));
		// return other != null && this.Batch.Equals(other.Batch);
		SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_2 = __this->get_Batch_0();
		V_1 = L_2;
		SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * L_3 = V_0;
		NullCheck(L_3);
		RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7  L_4 = L_3->get_Batch_0();
		bool L_5;
		L_5 = RaiseEventBatch_Equals_m81C942F2A346FC76DDA983539E44259C835BA450((RaiseEventBatch_tDA995679F8A8500F4058A88215BE8D4CCB13DBF7 *)(&V_1), L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Void Photon.Pun.PhotonNetwork/SerializeViewBatch::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeViewBatch_Clear_m50852C4B3D8EE6D93EA0F4B696A26455A08C0812 (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.ObjectUpdates.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_ObjectUpdates_1();
		NullCheck(L_0);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_0, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		V_0 = 0;
		goto IL_001f;
	}

IL_000f:
	{
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_ObjectUpdates_1();
		NullCheck(L_1);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_1, NULL, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_001f:
	{
		// for (int i = 0; i < offset; i++) this.ObjectUpdates.Add(null);
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_offset_3();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.PhotonNetwork/SerializeViewBatch::Add(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeViewBatch_Add_m5C1663B0B977328EB6C3B058EFBCC1AC009A87A4 (SerializeViewBatch_t246D5A932623EBB6DED41E122FA282306EC6EF59 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___viewData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.ObjectUpdates.Count >= this.ObjectUpdates.Capacity)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_ObjectUpdates_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_ObjectUpdates_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC(L_2, /*hidden argument*/List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("Can't add. Size exceeded.");
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral04BD814D8D663E1D5903A490670AF1CF5F5DD3B7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializeViewBatch_Add_m5C1663B0B977328EB6C3B058EFBCC1AC009A87A4_RuntimeMethod_var)));
	}

IL_0023:
	{
		// this.ObjectUpdates.Add(viewData);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get_ObjectUpdates_1();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = ___viewData0;
		NullCheck(L_5);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_5, L_6, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// }
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
// Conversion methods for marshalling of: Photon.Pun.PhotonView/CallbackTargetChange
IL2CPP_EXTERN_C void CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshal_pinvoke(const CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541& unmarshaled, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_pinvoke& marshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'CallbackTargetChange': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL);
}
IL2CPP_EXTERN_C void CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshal_pinvoke_back(const CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_pinvoke& marshaled, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541& unmarshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'CallbackTargetChange': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Photon.Pun.PhotonView/CallbackTargetChange
IL2CPP_EXTERN_C void CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshal_pinvoke_cleanup(CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Photon.Pun.PhotonView/CallbackTargetChange
IL2CPP_EXTERN_C void CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshal_com(const CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541& unmarshaled, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_com& marshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'CallbackTargetChange': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL);
}
IL2CPP_EXTERN_C void CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshal_com_back(const CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_com& marshaled, CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541& unmarshaled)
{
	Exception_t* ___obj_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'obj' of type 'CallbackTargetChange': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___obj_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Photon.Pun.PhotonView/CallbackTargetChange
IL2CPP_EXTERN_C void CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshal_com_cleanup(CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541_marshaled_com& marshaled)
{
}
// System.Void Photon.Pun.PhotonView/CallbackTargetChange::.ctor(Photon.Pun.IPhotonViewCallback,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackTargetChange__ctor_m6FDF2FE1107B8DBF00575D8E3D56007196074762 (CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541 * __this, RuntimeObject* ___obj0, Type_t * ___type1, bool ___add2, const RuntimeMethod* method)
{
	{
		// this.obj = obj;
		RuntimeObject* L_0 = ___obj0;
		__this->set_obj_0(L_0);
		// this.type = type;
		Type_t * L_1 = ___type1;
		__this->set_type_1(L_1);
		// this.add = add;
		bool L_2 = ___add2;
		__this->set_add_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CallbackTargetChange__ctor_m6FDF2FE1107B8DBF00575D8E3D56007196074762_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___obj0, Type_t * ___type1, bool ___add2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541 * _thisAdjusted = reinterpret_cast<CallbackTargetChange_t9FED64056A43472F706BF1888C7713F35A2D1541 *>(__this + _offset);
	CallbackTargetChange__ctor_m6FDF2FE1107B8DBF00575D8E3D56007196074762(_thisAdjusted, ___obj0, ___type1, ___add2, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->get_U3CIsMineU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsWriting { get; private set; }
		bool L_0 = __this->get_U3CIsWritingU3Ek__BackingField_3();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonStream_set_IsWriting_mED961CCA010FB7F4E757A91CA02754A254F9AF68_inline (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsWriting { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsWritingU3Ek__BackingField_3(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewPositionControl_GetNetworkPosition_m284DBAAF7AC96FA62E035506277EC3D47F5AC4DC_inline (PhotonTransformViewPositionControl_tFC0BB78BB59F05F2385D0FA7B11D36D7A1B6B985 * __this, const RuntimeMethod* method)
{
	{
		// return m_NetworkPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NetworkPosition_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  PhotonTransformViewRotationControl_GetNetworkRotation_m94B4F8BF1C0E94791CB69E46F053959EE05DA103_inline (PhotonTransformViewRotationControl_tC9507F24C32268F8AD2D877F62F41AF75BB6EEEC * __this, const RuntimeMethod* method)
{
	{
		// return m_NetworkRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_NetworkRotation_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PhotonTransformViewScaleControl_GetNetworkScale_m15B44EFCF04FF30AFAF5B6B47552B9ACF169A642_inline (PhotonTransformViewScaleControl_t42C08A700A8AAA5D7DA1C174751FEACB8B1F0E90 * __this, const RuntimeMethod* method)
{
	{
		// return m_NetworkScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NetworkScale_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_CreatorActorNr_m6312986A9C95438FD19BE0E2F4691326F268F4B7_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public int CreatorActorNr { get; private set; }
		int32_t L_0 = __this->get_U3CCreatorActorNrU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public Player Owner { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3COwnerU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Player_get_IsInactive_m39D157D63551D890BF0DE31851D925991E7C1F04_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInactive { get; protected internal set; }
		bool L_0 = __this->get_U3CIsInactiveU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_Owner_mFD38B4028080E585F4136724CA1C2E53722876AE_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value0, const RuntimeMethod* method)
{
	{
		// public Player Owner { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___value0;
		__this->set_U3COwnerU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.actorNumber; }
		int32_t L_0 = __this->get_actorNumber_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_AmOwner_mD3162EB8DCE079295BEC4165CAF15B08D1B8940F_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AmOwner { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CAmOwnerU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Controller_m8EF22392161BAF2B8276C46599BC8F64904589C1_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public Player Controller { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3CControllerU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_Controller_mE1CDFEF96720EEA5EA0318900EF98EC6137D0982_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value0, const RuntimeMethod* method)
{
	{
		// public Player Controller { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_IsMine_m47DB674D43E3261E57D32FAF67932BC32117FA45_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsMineU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonView_set_CreatorActorNr_mAD781481D44AB501F858874E47F75B6959231A87_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int CreatorActorNr { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCreatorActorNrU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// return this.viewIdField;
		int32_t L_0 = __this->get_viewIdField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.ownerActorNr; }
		int32_t L_0 = __this->get_ownerActorNr_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m023DE9824E4700C0324D9C11906B19B6C8FE0BDC_gshared_inline (Queue_1_t5188391B01A63F115F118A244BCE06C2C818D8B4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m76B78918D9BB3DCFD5A93004BCA36CFBFE77CCD6_gshared_inline (Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
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
