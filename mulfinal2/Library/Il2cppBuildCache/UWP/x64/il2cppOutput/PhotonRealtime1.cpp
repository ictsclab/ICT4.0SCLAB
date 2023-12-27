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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t61231B053F1E40EB760E7E161322235AC46FD570;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t6E8AE5BBBAE0ED32307F2883690F6E9E6D98AF25;
// System.Action`1<ExitGames.Client.Photon.ParameterDictionary>
struct Action_1_tE5582D4DC608A7FD8A7A2C339D9D2CB0E1B68718;
// System.Action`1<Photon.Realtime.Region>
struct Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5;
// System.Comparison`1<Photon.Realtime.Region>
struct Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`1<ExitGames.Client.Photon.ParameterDictionary>
struct Func_1_t972CF63254E74B2876D85A785D120860208D5560;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Realtime.Player>
struct KeyCollection_t0EA4FEB9ABEF045A10A95AC75F8679F5E8AE2113;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C;
// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t1D673277C302265BA143A7DD99DD859AF26CD431;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_tE0D061AFBD3512CEAAEF389602C1648821ADFC8C;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_tFF9526B5F79416765882A99F02C06F237631B787;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Realtime.Player>
struct ValueCollection_tB1D381CB2B9FFAFA947CD2DE6E3BE83EAFBFEE27;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Realtime.Player>[]
struct EntryU5BU5D_tA87471823F6412DDEA130AD9B1808436E95B6D7D;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982;
// Photon.Realtime.IInRoomCallbacks[]
struct IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4;
// Photon.Realtime.IWebRpcCallback[]
struct IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t742D4B76141EAB4626FDEBDA253B131A1BAE312E;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t146839F02C6023508DCE8313CF2DD0CD44C9C5BC;
// Photon.Realtime.IWebRpcCallback
struct IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28;
// Photon.Realtime.PhotonPing
struct PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Photon.Realtime.Region
struct Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0;
// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53;
// Photon.Realtime.RegionPinger
struct RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889;
// Photon.Realtime.RoomOptions
struct RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t629BA84F0883AAC25A96E268EE380E76751EF15C;
// Photon.Realtime.SupportLogger
struct SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5;
// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Photon.Realtime.WebFlags
struct WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2;
// Photon.Realtime.LoadBalancingClient/CallbackTargetChange
struct CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012;
// Photon.Realtime.LoadBalancingClient/EncryptionDataParameters
struct EncryptionDataParameters_tDF3DEF142EEA07FAC06E2DED344CB06BB9A07981;
// Photon.Realtime.LoadBalancingPeer/<>c
struct U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0;
// Photon.Realtime.RegionHandler/<>c
struct U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87;
// Photon.Realtime.RegionHandler/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tFB13EA639951321A04EC72EAEAB8DD2223576BB7;
// Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17
struct U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874;

IL2CPP_EXTERN_C RuntimeClass* AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01551127791BB14934414B8428B67FD51B390033;
IL2CPP_EXTERN_C String_t* _stringLiteral081781674D5A6E9A22CD7256891AB0178B984F8B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
IL2CPP_EXTERN_C String_t* _stringLiteral111D994A41187DCF854E2098345172E28925CD36;
IL2CPP_EXTERN_C String_t* _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral271CB9743B301F4C7123339F6C43C77525F17510;
IL2CPP_EXTERN_C String_t* _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
IL2CPP_EXTERN_C String_t* _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418;
IL2CPP_EXTERN_C String_t* _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00;
IL2CPP_EXTERN_C String_t* _stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78;
IL2CPP_EXTERN_C String_t* _stringLiteral38011452171D5D98758667404D6F17F5AF329293;
IL2CPP_EXTERN_C String_t* _stringLiteral39B336DD36B50FB46EDCCA9BA800A47C91B64279;
IL2CPP_EXTERN_C String_t* _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194;
IL2CPP_EXTERN_C String_t* _stringLiteral455DE8D137F50C17707B3E37FA74BEBEE69B1EAD;
IL2CPP_EXTERN_C String_t* _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
IL2CPP_EXTERN_C String_t* _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1;
IL2CPP_EXTERN_C String_t* _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56;
IL2CPP_EXTERN_C String_t* _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
IL2CPP_EXTERN_C String_t* _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B;
IL2CPP_EXTERN_C String_t* _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
IL2CPP_EXTERN_C String_t* _stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03;
IL2CPP_EXTERN_C String_t* _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
IL2CPP_EXTERN_C String_t* _stringLiteral72B7AAEA9F105BC899930B342A7753298A5FCFB2;
IL2CPP_EXTERN_C String_t* _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5B274AC719B863CB0A2DA066BD69F873B190F6;
IL2CPP_EXTERN_C String_t* _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B;
IL2CPP_EXTERN_C String_t* _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
IL2CPP_EXTERN_C String_t* _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6;
IL2CPP_EXTERN_C String_t* _stringLiteral9A237664FCA59B03D60331058EF83BB83DB96F01;
IL2CPP_EXTERN_C String_t* _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
IL2CPP_EXTERN_C String_t* _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746;
IL2CPP_EXTERN_C String_t* _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCADE992351A796143F5F5164E100121E1080BF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E5192EBC7274833C57CDADEBF297584EA1559B;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
IL2CPP_EXTERN_C String_t* _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076;
IL2CPP_EXTERN_C String_t* _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5EBBC2A06520776FEB61E60D39288257C2B21CAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5B30EAC7849BFA06D84BA702A294CFE6294AA0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDD07DD29A313814DB347A27C63F186F838A3CCB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m509E785E52A1C3861A9831F55E46B4095C2B2D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE97A130FBBB78E3A6808613FF6EECAA42EF30AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m24787D672A337A4370033965C61983244CAEDCC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegionPingCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_mBA94391F874118785ECA17F7AFFF4D0E7C7EE0A8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA87471823F6412DDEA130AD9B1808436E95B6D7D* ___entries_1;
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
	KeyCollection_t0EA4FEB9ABEF045A10A95AC75F8679F5E8AE2113 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB1D381CB2B9FFAFA947CD2DE6E3BE83EAFBFEE27 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___entries_1)); }
	inline EntryU5BU5D_tA87471823F6412DDEA130AD9B1808436E95B6D7D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA87471823F6412DDEA130AD9B1808436E95B6D7D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA87471823F6412DDEA130AD9B1808436E95B6D7D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___keys_7)); }
	inline KeyCollection_t0EA4FEB9ABEF045A10A95AC75F8679F5E8AE2113 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0EA4FEB9ABEF045A10A95AC75F8679F5E8AE2113 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0EA4FEB9ABEF045A10A95AC75F8679F5E8AE2113 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ___values_8)); }
	inline ValueCollection_tB1D381CB2B9FFAFA947CD2DE6E3BE83EAFBFEE27 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB1D381CB2B9FFAFA947CD2DE6E3BE83EAFBFEE27 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB1D381CB2B9FFAFA947CD2DE6E3BE83EAFBFEE27 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
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
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____items_1)); }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* get__items_1() const { return ____items_1; }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C_StaticFields, ____emptyArray_5)); }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IInRoomCallbacks>
struct List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A, ____items_1)); }
	inline IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4* get__items_1() const { return ____items_1; }
	inline IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A_StaticFields, ____emptyArray_5)); }
	inline IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IInRoomCallbacksU5BU5D_tFBF0709A03C17B9678D9348FF592289D16A3A8F4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____items_1)); }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* get__items_1() const { return ____items_1; }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_StaticFields, ____emptyArray_5)); }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____items_1)); }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* get__items_1() const { return ____items_1; }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694_StaticFields, ____emptyArray_5)); }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* value)
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


// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____items_1)); }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* get__items_1() const { return ____items_1; }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70_StaticFields, ____emptyArray_5)); }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Photon.Realtime.ErrorInfo
struct ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80, ___Info_0)); }
	inline String_t* get_Info_0() const { return ___Info_0; }
	inline String_t** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(String_t* value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD, ___Parameters_3)); }
	inline ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * get_Parameters_3() const { return ___Parameters_3; }
	inline ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_tE0D061AFBD3512CEAAEF389602C1648821ADFC8C * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_t629BA84F0883AAC25A96E268EE380E76751EF15C * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1, ___paramDict_0)); }
	inline NonAllocDictionary_2_tE0D061AFBD3512CEAAEF389602C1648821ADFC8C * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_tE0D061AFBD3512CEAAEF389602C1648821ADFC8C ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_tE0D061AFBD3512CEAAEF389602C1648821ADFC8C * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1, ___wrapperPools_1)); }
	inline StructWrapperPools_t629BA84F0883AAC25A96E268EE380E76751EF15C * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_t629BA84F0883AAC25A96E268EE380E76751EF15C ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_t629BA84F0883AAC25A96E268EE380E76751EF15C * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// Photon.Realtime.PhotonPing
struct PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean Photon.Realtime.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean Photon.Realtime.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 Photon.Realtime.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] Photon.Realtime.PhotonPing::PingBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PingBytes_4;
	// System.Byte Photon.Realtime.PhotonPing::PingId
	uint8_t ___PingId_5;

public:
	inline static int32_t get_offset_of_DebugString_0() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___DebugString_0)); }
	inline String_t* get_DebugString_0() const { return ___DebugString_0; }
	inline String_t** get_address_of_DebugString_0() { return &___DebugString_0; }
	inline void set_DebugString_0(String_t* value)
	{
		___DebugString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugString_0), (void*)value);
	}

	inline static int32_t get_offset_of_Successful_1() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___Successful_1)); }
	inline bool get_Successful_1() const { return ___Successful_1; }
	inline bool* get_address_of_Successful_1() { return &___Successful_1; }
	inline void set_Successful_1(bool value)
	{
		___Successful_1 = value;
	}

	inline static int32_t get_offset_of_GotResult_2() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___GotResult_2)); }
	inline bool get_GotResult_2() const { return ___GotResult_2; }
	inline bool* get_address_of_GotResult_2() { return &___GotResult_2; }
	inline void set_GotResult_2(bool value)
	{
		___GotResult_2 = value;
	}

	inline static int32_t get_offset_of_PingLength_3() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___PingLength_3)); }
	inline int32_t get_PingLength_3() const { return ___PingLength_3; }
	inline int32_t* get_address_of_PingLength_3() { return &___PingLength_3; }
	inline void set_PingLength_3(int32_t value)
	{
		___PingLength_3 = value;
	}

	inline static int32_t get_offset_of_PingBytes_4() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___PingBytes_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PingBytes_4() const { return ___PingBytes_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PingBytes_4() { return &___PingBytes_4; }
	inline void set_PingBytes_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PingBytes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingBytes_4), (void*)value);
	}

	inline static int32_t get_offset_of_PingId_5() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___PingId_5)); }
	inline uint8_t get_PingId_5() const { return ___PingId_5; }
	inline uint8_t* get_address_of_PingId_5() { return &___PingId_5; }
	inline void set_PingId_5(uint8_t value)
	{
		___PingId_5 = value;
	}
};

struct PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D_StaticFields
{
public:
	// System.Random Photon.Realtime.PhotonPing::RandomIdProvider
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___RandomIdProvider_6;

public:
	inline static int32_t get_offset_of_RandomIdProvider_6() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D_StaticFields, ___RandomIdProvider_6)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_RandomIdProvider_6() const { return ___RandomIdProvider_6; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_RandomIdProvider_6() { return &___RandomIdProvider_6; }
	inline void set_RandomIdProvider_6(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___RandomIdProvider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomIdProvider_6), (void*)value);
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


// Photon.Realtime.Region
struct Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCodeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClusterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CClusterU3Ek__BackingField_1)); }
	inline String_t* get_U3CClusterU3Ek__BackingField_1() const { return ___U3CClusterU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CClusterU3Ek__BackingField_1() { return &___U3CClusterU3Ek__BackingField_1; }
	inline void set_U3CClusterU3Ek__BackingField_1(String_t* value)
	{
		___U3CClusterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClusterU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHostAndPortU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CHostAndPortU3Ek__BackingField_2)); }
	inline String_t* get_U3CHostAndPortU3Ek__BackingField_2() const { return ___U3CHostAndPortU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CHostAndPortU3Ek__BackingField_2() { return &___U3CHostAndPortU3Ek__BackingField_2; }
	inline void set_U3CHostAndPortU3Ek__BackingField_2(String_t* value)
	{
		___U3CHostAndPortU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHostAndPortU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CPingU3Ek__BackingField_3)); }
	inline int32_t get_U3CPingU3Ek__BackingField_3() const { return ___U3CPingU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CPingU3Ek__BackingField_3() { return &___U3CPingU3Ek__BackingField_3; }
	inline void set_U3CPingU3Ek__BackingField_3(int32_t value)
	{
		___U3CPingU3Ek__BackingField_3 = value;
	}
};


// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F * ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 * ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;

public:
	inline static int32_t get_offset_of_U3CEnabledRegionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___U3CEnabledRegionsU3Ek__BackingField_1)); }
	inline List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F * get_U3CEnabledRegionsU3Ek__BackingField_1() const { return ___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F ** get_address_of_U3CEnabledRegionsU3Ek__BackingField_1() { return &___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline void set_U3CEnabledRegionsU3Ek__BackingField_1(List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F * value)
	{
		___U3CEnabledRegionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledRegionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableRegionCodes_2() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___availableRegionCodes_2)); }
	inline String_t* get_availableRegionCodes_2() const { return ___availableRegionCodes_2; }
	inline String_t** get_address_of_availableRegionCodes_2() { return &___availableRegionCodes_2; }
	inline void set_availableRegionCodes_2(String_t* value)
	{
		___availableRegionCodes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableRegionCodes_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionCache_3() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___bestRegionCache_3)); }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * get_bestRegionCache_3() const { return ___bestRegionCache_3; }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 ** get_address_of_bestRegionCache_3() { return &___bestRegionCache_3; }
	inline void set_bestRegionCache_3(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * value)
	{
		___bestRegionCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionCache_3), (void*)value);
	}

	inline static int32_t get_offset_of_pingerList_4() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___pingerList_4)); }
	inline List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 * get_pingerList_4() const { return ___pingerList_4; }
	inline List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 ** get_address_of_pingerList_4() { return &___pingerList_4; }
	inline void set_pingerList_4(List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 * value)
	{
		___pingerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCall_5() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___onCompleteCall_5)); }
	inline Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * get_onCompleteCall_5() const { return ___onCompleteCall_5; }
	inline Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 ** get_address_of_onCompleteCall_5() { return &___onCompleteCall_5; }
	inline void set_onCompleteCall_5(Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * value)
	{
		___onCompleteCall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCall_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousPing_6() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___previousPing_6)); }
	inline int32_t get_previousPing_6() const { return ___previousPing_6; }
	inline int32_t* get_address_of_previousPing_6() { return &___previousPing_6; }
	inline void set_previousPing_6(int32_t value)
	{
		___previousPing_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPingingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___U3CIsPingingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPingingU3Ek__BackingField_7() const { return ___U3CIsPingingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPingingU3Ek__BackingField_7() { return &___U3CIsPingingU3Ek__BackingField_7; }
	inline void set_U3CIsPingingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPingingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_previousSummaryProvided_8() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___previousSummaryProvided_8)); }
	inline String_t* get_previousSummaryProvided_8() const { return ___previousSummaryProvided_8; }
	inline String_t** get_address_of_previousSummaryProvided_8() { return &___previousSummaryProvided_8; }
	inline void set_previousSummaryProvided_8(String_t* value)
	{
		___previousSummaryProvided_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousSummaryProvided_8), (void*)value);
	}
};

struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53_StaticFields
{
public:
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t * ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_9;

public:
	inline static int32_t get_offset_of_PingImplementation_0() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53_StaticFields, ___PingImplementation_0)); }
	inline Type_t * get_PingImplementation_0() const { return ___PingImplementation_0; }
	inline Type_t ** get_address_of_PingImplementation_0() { return &___PingImplementation_0; }
	inline void set_PingImplementation_0(Type_t * value)
	{
		___PingImplementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_0), (void*)value);
	}

	inline static int32_t get_offset_of_PortToPingOverride_9() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53_StaticFields, ___PortToPingOverride_9)); }
	inline uint16_t get_PortToPingOverride_9() const { return ___PortToPingOverride_9; }
	inline uint16_t* get_address_of_PortToPingOverride_9() { return &___PortToPingOverride_9; }
	inline void set_PortToPingOverride_9(uint16_t value)
	{
		___PortToPingOverride_9 = value;
	}
};


// Photon.Realtime.RegionPinger
struct RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139  : public RuntimeObject
{
public:
	// Photon.Realtime.Region Photon.Realtime.RegionPinger::region
	Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___region_3;
	// System.String Photon.Realtime.RegionPinger::regionAddress
	String_t* ___regionAddress_4;
	// System.Int32 Photon.Realtime.RegionPinger::CurrentAttempt
	int32_t ___CurrentAttempt_5;
	// System.Boolean Photon.Realtime.RegionPinger::<Done>k__BackingField
	bool ___U3CDoneU3Ek__BackingField_6;
	// System.Action`1<Photon.Realtime.Region> Photon.Realtime.RegionPinger::onDoneCall
	Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * ___onDoneCall_7;
	// Photon.Realtime.PhotonPing Photon.Realtime.RegionPinger::ping
	PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * ___ping_8;
	// System.Collections.Generic.List`1<System.Int32> Photon.Realtime.RegionPinger::rttResults
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___rttResults_9;

public:
	inline static int32_t get_offset_of_region_3() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___region_3)); }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * get_region_3() const { return ___region_3; }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 ** get_address_of_region_3() { return &___region_3; }
	inline void set_region_3(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * value)
	{
		___region_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_3), (void*)value);
	}

	inline static int32_t get_offset_of_regionAddress_4() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___regionAddress_4)); }
	inline String_t* get_regionAddress_4() const { return ___regionAddress_4; }
	inline String_t** get_address_of_regionAddress_4() { return &___regionAddress_4; }
	inline void set_regionAddress_4(String_t* value)
	{
		___regionAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentAttempt_5() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___CurrentAttempt_5)); }
	inline int32_t get_CurrentAttempt_5() const { return ___CurrentAttempt_5; }
	inline int32_t* get_address_of_CurrentAttempt_5() { return &___CurrentAttempt_5; }
	inline void set_CurrentAttempt_5(int32_t value)
	{
		___CurrentAttempt_5 = value;
	}

	inline static int32_t get_offset_of_U3CDoneU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___U3CDoneU3Ek__BackingField_6)); }
	inline bool get_U3CDoneU3Ek__BackingField_6() const { return ___U3CDoneU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CDoneU3Ek__BackingField_6() { return &___U3CDoneU3Ek__BackingField_6; }
	inline void set_U3CDoneU3Ek__BackingField_6(bool value)
	{
		___U3CDoneU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_onDoneCall_7() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___onDoneCall_7)); }
	inline Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * get_onDoneCall_7() const { return ___onDoneCall_7; }
	inline Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 ** get_address_of_onDoneCall_7() { return &___onDoneCall_7; }
	inline void set_onDoneCall_7(Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * value)
	{
		___onDoneCall_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDoneCall_7), (void*)value);
	}

	inline static int32_t get_offset_of_ping_8() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___ping_8)); }
	inline PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * get_ping_8() const { return ___ping_8; }
	inline PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D ** get_address_of_ping_8() { return &___ping_8; }
	inline void set_ping_8(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * value)
	{
		___ping_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ping_8), (void*)value);
	}

	inline static int32_t get_offset_of_rttResults_9() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___rttResults_9)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_rttResults_9() const { return ___rttResults_9; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_rttResults_9() { return &___rttResults_9; }
	inline void set_rttResults_9(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___rttResults_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rttResults_9), (void*)value);
	}
};

struct RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields
{
public:
	// System.Int32 Photon.Realtime.RegionPinger::Attempts
	int32_t ___Attempts_0;
	// System.Int32 Photon.Realtime.RegionPinger::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_1;
	// System.Int32 Photon.Realtime.RegionPinger::PingWhenFailed
	int32_t ___PingWhenFailed_2;

public:
	inline static int32_t get_offset_of_Attempts_0() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___Attempts_0)); }
	inline int32_t get_Attempts_0() const { return ___Attempts_0; }
	inline int32_t* get_address_of_Attempts_0() { return &___Attempts_0; }
	inline void set_Attempts_0(int32_t value)
	{
		___Attempts_0 = value;
	}

	inline static int32_t get_offset_of_MaxMilliseconsPerPing_1() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___MaxMilliseconsPerPing_1)); }
	inline int32_t get_MaxMilliseconsPerPing_1() const { return ___MaxMilliseconsPerPing_1; }
	inline int32_t* get_address_of_MaxMilliseconsPerPing_1() { return &___MaxMilliseconsPerPing_1; }
	inline void set_MaxMilliseconsPerPing_1(int32_t value)
	{
		___MaxMilliseconsPerPing_1 = value;
	}

	inline static int32_t get_offset_of_PingWhenFailed_2() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___PingWhenFailed_2)); }
	inline int32_t get_PingWhenFailed_2() const { return ___PingWhenFailed_2; }
	inline int32_t* get_address_of_PingWhenFailed_2() { return &___PingWhenFailed_2; }
	inline void set_PingWhenFailed_2(int32_t value)
	{
		___PingWhenFailed_2 = value;
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


// Photon.Realtime.RoomOptions
struct RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___CustomRoomProperties_6)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___Plugins_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CSuppressPlayerInfoU3Ek__BackingField_10)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_10() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_10(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CPublishUserIdU3Ek__BackingField_11)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_11() const { return ___U3CPublishUserIdU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_11() { return &___U3CPublishUserIdU3Ek__BackingField_11; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_11(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CDeleteNullPropertiesU3Ek__BackingField_12)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_12() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_12(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_13() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___broadcastPropsChangeToAll_13)); }
	inline bool get_broadcastPropsChangeToAll_13() const { return ___broadcastPropsChangeToAll_13; }
	inline bool* get_address_of_broadcastPropsChangeToAll_13() { return &___broadcastPropsChangeToAll_13; }
	inline void set_broadcastPropsChangeToAll_13(bool value)
	{
		___broadcastPropsChangeToAll_13 = value;
	}
};


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

// Photon.Realtime.WebFlags
struct WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F  : public RuntimeObject
{
public:
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;

public:
	inline static int32_t get_offset_of_WebhookFlags_1() { return static_cast<int32_t>(offsetof(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F, ___WebhookFlags_1)); }
	inline uint8_t get_WebhookFlags_1() const { return ___WebhookFlags_1; }
	inline uint8_t* get_address_of_WebhookFlags_1() { return &___WebhookFlags_1; }
	inline void set_WebhookFlags_1(uint8_t value)
	{
		___WebhookFlags_1 = value;
	}
};

struct WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_StaticFields
{
public:
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_StaticFields, ___Default_0)); }
	inline WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * get_Default_0() const { return ___Default_0; }
	inline WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CResultCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CResultCodeU3Ek__BackingField_1() const { return ___U3CResultCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CResultCodeU3Ek__BackingField_1() { return &___U3CResultCodeU3Ek__BackingField_1; }
	inline void set_U3CResultCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CResultCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}
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

// Photon.Realtime.LoadBalancingClient/CallbackTargetChange
struct CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012  : public RuntimeObject
{
public:
	// System.Object Photon.Realtime.LoadBalancingClient/CallbackTargetChange::Target
	RuntimeObject * ___Target_0;
	// System.Boolean Photon.Realtime.LoadBalancingClient/CallbackTargetChange::AddTarget
	bool ___AddTarget_1;

public:
	inline static int32_t get_offset_of_Target_0() { return static_cast<int32_t>(offsetof(CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012, ___Target_0)); }
	inline RuntimeObject * get_Target_0() const { return ___Target_0; }
	inline RuntimeObject ** get_address_of_Target_0() { return &___Target_0; }
	inline void set_Target_0(RuntimeObject * value)
	{
		___Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_AddTarget_1() { return static_cast<int32_t>(offsetof(CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012, ___AddTarget_1)); }
	inline bool get_AddTarget_1() const { return ___AddTarget_1; }
	inline bool* get_address_of_AddTarget_1() { return &___AddTarget_1; }
	inline void set_AddTarget_1(bool value)
	{
		___AddTarget_1 = value;
	}
};


// Photon.Realtime.LoadBalancingClient/EncryptionDataParameters
struct EncryptionDataParameters_tDF3DEF142EEA07FAC06E2DED344CB06BB9A07981  : public RuntimeObject
{
public:

public:
};


// Photon.Realtime.LoadBalancingPeer/<>c
struct U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields
{
public:
	// Photon.Realtime.LoadBalancingPeer/<>c Photon.Realtime.LoadBalancingPeer/<>c::<>9
	U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * ___U3CU3E9_0;
	// System.Func`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer/<>c::<>9__4_0
	Func_1_t972CF63254E74B2876D85A785D120860208D5560 * ___U3CU3E9__4_0_1;
	// System.Action`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer/<>c::<>9__4_1
	Action_1_tE5582D4DC608A7FD8A7A2C339D9D2CB0E1B68718 * ___U3CU3E9__4_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t972CF63254E74B2876D85A785D120860208D5560 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t972CF63254E74B2876D85A785D120860208D5560 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t972CF63254E74B2876D85A785D120860208D5560 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields, ___U3CU3E9__4_1_2)); }
	inline Action_1_tE5582D4DC608A7FD8A7A2C339D9D2CB0E1B68718 * get_U3CU3E9__4_1_2() const { return ___U3CU3E9__4_1_2; }
	inline Action_1_tE5582D4DC608A7FD8A7A2C339D9D2CB0E1B68718 ** get_address_of_U3CU3E9__4_1_2() { return &___U3CU3E9__4_1_2; }
	inline void set_U3CU3E9__4_1_2(Action_1_tE5582D4DC608A7FD8A7A2C339D9D2CB0E1B68718 * value)
	{
		___U3CU3E9__4_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_2), (void*)value);
	}
};


// Photon.Realtime.RegionHandler/<>c
struct U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields
{
public:
	// Photon.Realtime.RegionHandler/<>c Photon.Realtime.RegionHandler/<>c::<>9
	U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * ___U3CU3E9_0;
	// System.Comparison`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler/<>c::<>9__8_0
	Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// Photon.Realtime.RegionHandler/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tFB13EA639951321A04EC72EAEAB8DD2223576BB7  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::prevBestRegionCode
	String_t* ___prevBestRegionCode_0;

public:
	inline static int32_t get_offset_of_prevBestRegionCode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tFB13EA639951321A04EC72EAEAB8DD2223576BB7, ___prevBestRegionCode_0)); }
	inline String_t* get_prevBestRegionCode_0() const { return ___prevBestRegionCode_0; }
	inline String_t** get_address_of_prevBestRegionCode_0() { return &___prevBestRegionCode_0; }
	inline void set_prevBestRegionCode_0(String_t* value)
	{
		___prevBestRegionCode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevBestRegionCode_0), (void*)value);
	}
};


// Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17
struct U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874  : public RuntimeObject
{
public:
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Realtime.RegionPinger Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<>4__this
	RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * ___U3CU3E4__this_2;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<rttSum>5__2
	int32_t ___U3CrttSumU3E5__2_3;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<replyCount>5__3
	int32_t ___U3CreplyCountU3E5__3_4;
	// System.Diagnostics.Stopwatch Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<sw>5__4
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CswU3E5__4_5;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<i>5__5
	int32_t ___U3CiU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CU3E4__this_2)); }
	inline RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CrttSumU3E5__2_3)); }
	inline int32_t get_U3CrttSumU3E5__2_3() const { return ___U3CrttSumU3E5__2_3; }
	inline int32_t* get_address_of_U3CrttSumU3E5__2_3() { return &___U3CrttSumU3E5__2_3; }
	inline void set_U3CrttSumU3E5__2_3(int32_t value)
	{
		___U3CrttSumU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CreplyCountU3E5__3_4)); }
	inline int32_t get_U3CreplyCountU3E5__3_4() const { return ___U3CreplyCountU3E5__3_4; }
	inline int32_t* get_address_of_U3CreplyCountU3E5__3_4() { return &___U3CreplyCountU3E5__3_4; }
	inline void set_U3CreplyCountU3E5__3_4(int32_t value)
	{
		___U3CreplyCountU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CswU3E5__4_5)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CswU3E5__4_5() const { return ___U3CswU3E5__4_5; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CswU3E5__4_5() { return &___U3CswU3E5__4_5; }
	inline void set_U3CswU3E5__4_5(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CswU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CswU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CiU3E5__5_6)); }
	inline int32_t get_U3CiU3E5__5_6() const { return ___U3CiU3E5__5_6; }
	inline int32_t* get_address_of_U3CiU3E5__5_6() { return &___U3CiU3E5__5_6; }
	inline void set_U3CiU3E5__5_6(int32_t value)
	{
		___U3CiU3E5__5_6 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>
struct Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___list_0)); }
	inline List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * get_list_0() const { return ___list_0; }
	inline List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF  : public Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D
{
public:

public:
};

struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_StaticFields
{
public:
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___boxedByte_14;

public:
	inline static int32_t get_offset_of_boxedByte_14() { return static_cast<int32_t>(offsetof(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_StaticFields, ___boxedByte_14)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_boxedByte_14() const { return ___boxedByte_14; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_boxedByte_14() { return &___boxedByte_14; }
	inline void set_boxedByte_14(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___boxedByte_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxedByte_14), (void*)value);
	}
};


// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0  : public List_1_t0E8580C8E1F9347E0A7E0B4B807B0139BF9F888A
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.InRoomCallbacksContainer::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0, ___client_6)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96  : public List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.WebRpcCallbacksContainer::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96, ___client_6)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13
struct __StaticArrayInitTypeSizeU3D13_tA9848F816D9E2A753B1091F23CD30644AD588555 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_tA9848F816D9E2A753B1091F23CD30644AD588555__padding[13];
	};

public:
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


// Photon.Realtime.CustomAuthenticationType
struct CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB 
{
public:
	// System.Byte Photon.Realtime.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB, ___value___2)); }
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


// Photon.Realtime.LobbyType
struct LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1 
{
public:
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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

// Photon.Realtime.RoomOptionBit
struct RoomOptionBit_t4B91659A383133AF2F839CC3A78CABAC7E0B9489 
{
public:
	// System.Int32 Photon.Realtime.RoomOptionBit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomOptionBit_t4B91659A383133AF2F839CC3A78CABAC7E0B9489, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
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


// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_t0C0A29B5F0DDB261C86E7ABC58E50B4388A8B52B 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t0C0A29B5F0DDB261C86E7ABC58E50B4388A8B52B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// ExitGames.Client.Photon.TargetFrameworks
struct TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2, ___value___2)); }
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


// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A  : public RuntimeObject
{
public:
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_16;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 * ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_28;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_38;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_44;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_45;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * ___U3CTrafficStatsIncomingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_49;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_50;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_51;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 * ___peerBase_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::payloadEncryptorType
	Type_t * ___payloadEncryptorType_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_UseInitV3_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___UseInitV3_16)); }
	inline bool get_UseInitV3_16() const { return ___UseInitV3_16; }
	inline bool* get_address_of_UseInitV3_16() { return &___UseInitV3_16; }
	inline void set_UseInitV3_16(bool value)
	{
		___UseInitV3_16 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CSerializationProtocolTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_17() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_17() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_17; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SocketImplementationConfig_18)); }
	inline Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * get_SocketImplementationConfig_18() const { return ___SocketImplementationConfig_18; }
	inline Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F ** get_address_of_SocketImplementationConfig_18() { return &___SocketImplementationConfig_18; }
	inline void set_SocketImplementationConfig_18(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * value)
	{
		___SocketImplementationConfig_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CSocketImplementationU3Ek__BackingField_19)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_19() const { return ___U3CSocketImplementationU3Ek__BackingField_19; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_19() { return &___U3CSocketImplementationU3Ek__BackingField_19; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_19(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___DebugOut_20)); }
	inline uint8_t get_DebugOut_20() const { return ___DebugOut_20; }
	inline uint8_t* get_address_of_DebugOut_20() { return &___DebugOut_20; }
	inline void set_DebugOut_20(uint8_t value)
	{
		___DebugOut_20 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CListenerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_21() const { return ___U3CListenerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_21() { return &___U3CListenerU3Ek__BackingField_21; }
	inline void set_U3CListenerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___OnDisconnectMessage_22)); }
	inline Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 * get_OnDisconnectMessage_22() const { return ___OnDisconnectMessage_22; }
	inline Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 ** get_address_of_OnDisconnectMessage_22() { return &___OnDisconnectMessage_22; }
	inline void set_OnDisconnectMessage_22(Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3 * value)
	{
		___OnDisconnectMessage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_22), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___reuseEventInstance_23)); }
	inline bool get_reuseEventInstance_23() const { return ___reuseEventInstance_23; }
	inline bool* get_address_of_reuseEventInstance_23() { return &___reuseEventInstance_23; }
	inline void set_reuseEventInstance_23(bool value)
	{
		___reuseEventInstance_23 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___useByteArraySlicePoolForEvents_24)); }
	inline bool get_useByteArraySlicePoolForEvents_24() const { return ___useByteArraySlicePoolForEvents_24; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_24() { return &___useByteArraySlicePoolForEvents_24; }
	inline void set_useByteArraySlicePoolForEvents_24(bool value)
	{
		___useByteArraySlicePoolForEvents_24 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___wrapIncomingStructs_25)); }
	inline bool get_wrapIncomingStructs_25() const { return ___wrapIncomingStructs_25; }
	inline bool* get_address_of_wrapIncomingStructs_25() { return &___wrapIncomingStructs_25; }
	inline void set_wrapIncomingStructs_25(bool value)
	{
		___wrapIncomingStructs_25 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SendInCreationOrder_26)); }
	inline bool get_SendInCreationOrder_26() const { return ___SendInCreationOrder_26; }
	inline bool* get_address_of_SendInCreationOrder_26() { return &___SendInCreationOrder_26; }
	inline void set_SendInCreationOrder_26(bool value)
	{
		___SendInCreationOrder_26 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitResends_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SequenceDeltaLimitResends_27)); }
	inline int32_t get_SequenceDeltaLimitResends_27() const { return ___SequenceDeltaLimitResends_27; }
	inline int32_t* get_address_of_SequenceDeltaLimitResends_27() { return &___SequenceDeltaLimitResends_27; }
	inline void set_SequenceDeltaLimitResends_27(int32_t value)
	{
		___SequenceDeltaLimitResends_27 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitSends_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SequenceDeltaLimitSends_28)); }
	inline int32_t get_SequenceDeltaLimitSends_28() const { return ___SequenceDeltaLimitSends_28; }
	inline int32_t* get_address_of_SequenceDeltaLimitSends_28() { return &___SequenceDeltaLimitSends_28; }
	inline void set_SequenceDeltaLimitSends_28(int32_t value)
	{
		___SequenceDeltaLimitSends_28 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___TrafficRecorder_29)); }
	inline RuntimeObject* get_TrafficRecorder_29() const { return ___TrafficRecorder_29; }
	inline RuntimeObject** get_address_of_TrafficRecorder_29() { return &___TrafficRecorder_29; }
	inline void set_TrafficRecorder_29(RuntimeObject* value)
	{
		___TrafficRecorder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CEnableServerTracingU3Ek__BackingField_30)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_30() const { return ___U3CEnableServerTracingU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_30() { return &___U3CEnableServerTracingU3Ek__BackingField_30; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_30(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___quickResendAttempts_31)); }
	inline uint8_t get_quickResendAttempts_31() const { return ___quickResendAttempts_31; }
	inline uint8_t* get_address_of_quickResendAttempts_31() { return &___quickResendAttempts_31; }
	inline void set_quickResendAttempts_31(uint8_t value)
	{
		___quickResendAttempts_31 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___ChannelCount_32)); }
	inline uint8_t get_ChannelCount_32() const { return ___ChannelCount_32; }
	inline uint8_t* get_address_of_ChannelCount_32() { return &___ChannelCount_32; }
	inline void set_ChannelCount_32(uint8_t value)
	{
		___ChannelCount_32 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___EnableEncryptedFlag_33)); }
	inline bool get_EnableEncryptedFlag_33() const { return ___EnableEncryptedFlag_33; }
	inline bool* get_address_of_EnableEncryptedFlag_33() { return &___EnableEncryptedFlag_33; }
	inline void set_EnableEncryptedFlag_33(bool value)
	{
		___EnableEncryptedFlag_33 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___crcEnabled_34)); }
	inline bool get_crcEnabled_34() const { return ___crcEnabled_34; }
	inline bool* get_address_of_crcEnabled_34() { return &___crcEnabled_34; }
	inline void set_crcEnabled_34(bool value)
	{
		___crcEnabled_34 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SentCountAllowance_35)); }
	inline int32_t get_SentCountAllowance_35() const { return ___SentCountAllowance_35; }
	inline int32_t* get_address_of_SentCountAllowance_35() { return &___SentCountAllowance_35; }
	inline void set_SentCountAllowance_35(int32_t value)
	{
		___SentCountAllowance_35 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___InitialResendTimeMax_36)); }
	inline int32_t get_InitialResendTimeMax_36() const { return ___InitialResendTimeMax_36; }
	inline int32_t* get_address_of_InitialResendTimeMax_36() { return &___InitialResendTimeMax_36; }
	inline void set_InitialResendTimeMax_36(int32_t value)
	{
		___InitialResendTimeMax_36 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___TimePingInterval_37)); }
	inline int32_t get_TimePingInterval_37() const { return ___TimePingInterval_37; }
	inline int32_t* get_address_of_TimePingInterval_37() { return &___TimePingInterval_37; }
	inline void set_TimePingInterval_37(int32_t value)
	{
		___TimePingInterval_37 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___disconnectTimeout_38)); }
	inline int32_t get_disconnectTimeout_38() const { return ___disconnectTimeout_38; }
	inline int32_t* get_address_of_disconnectTimeout_38() { return &___disconnectTimeout_38; }
	inline void set_disconnectTimeout_38(int32_t value)
	{
		___disconnectTimeout_38 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTransportProtocolU3Ek__BackingField_39)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_39() const { return ___U3CTransportProtocolU3Ek__BackingField_39; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_39() { return &___U3CTransportProtocolU3Ek__BackingField_39; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_39(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_mtu_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___mtu_41)); }
	inline int32_t get_mtu_41() const { return ___mtu_41; }
	inline int32_t* get_address_of_mtu_41() { return &___mtu_41; }
	inline void set_mtu_41(int32_t value)
	{
		___mtu_41 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CIsSendingOnlyAcksU3Ek__BackingField_42)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_42() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_42() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_42; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_42(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___RandomizeSequenceNumbers_44)); }
	inline bool get_RandomizeSequenceNumbers_44() const { return ___RandomizeSequenceNumbers_44; }
	inline bool* get_address_of_RandomizeSequenceNumbers_44() { return &___RandomizeSequenceNumbers_44; }
	inline void set_RandomizeSequenceNumbers_44(bool value)
	{
		___RandomizeSequenceNumbers_44 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___RandomizedSequenceNumbers_45)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_45() const { return ___RandomizedSequenceNumbers_45; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_45() { return &___RandomizedSequenceNumbers_45; }
	inline void set_RandomizedSequenceNumbers_45(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_45), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___GcmDatagramEncryption_46)); }
	inline bool get_GcmDatagramEncryption_46() const { return ___GcmDatagramEncryption_46; }
	inline bool* get_address_of_GcmDatagramEncryption_46() { return &___GcmDatagramEncryption_46; }
	inline void set_GcmDatagramEncryption_46(bool value)
	{
		___GcmDatagramEncryption_46 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTrafficStatsIncomingU3Ek__BackingField_47)); }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * get_U3CTrafficStatsIncomingU3Ek__BackingField_47() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_47; }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_47() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_47; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_47(TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTrafficStatsOutgoingU3Ek__BackingField_48)); }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_48() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_48; }
	inline TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_48() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_48(TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CTrafficStatsGameLevelU3Ek__BackingField_49)); }
	inline TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_49() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_49; }
	inline TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_49() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_49; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_49(TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_50() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___trafficStatsStopwatch_50)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_50() const { return ___trafficStatsStopwatch_50; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_50() { return &___trafficStatsStopwatch_50; }
	inline void set_trafficStatsStopwatch_50(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_50), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_51() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___trafficStatsEnabled_51)); }
	inline bool get_trafficStatsEnabled_51() const { return ___trafficStatsEnabled_51; }
	inline bool* get_address_of_trafficStatsEnabled_51() { return &___trafficStatsEnabled_51; }
	inline void set_trafficStatsEnabled_51(bool value)
	{
		___trafficStatsEnabled_51 = value;
	}

	inline static int32_t get_offset_of_peerBase_52() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___peerBase_52)); }
	inline PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 * get_peerBase_52() const { return ___peerBase_52; }
	inline PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 ** get_address_of_peerBase_52() { return &___peerBase_52; }
	inline void set_peerBase_52(PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989 * value)
	{
		___peerBase_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_52), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_53() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___SendOutgoingLockObject_53)); }
	inline RuntimeObject * get_SendOutgoingLockObject_53() const { return ___SendOutgoingLockObject_53; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_53() { return &___SendOutgoingLockObject_53; }
	inline void set_SendOutgoingLockObject_53(RuntimeObject * value)
	{
		___SendOutgoingLockObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_54() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___DispatchLockObject_54)); }
	inline RuntimeObject * get_DispatchLockObject_54() const { return ___DispatchLockObject_54; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_54() { return &___DispatchLockObject_54; }
	inline void set_DispatchLockObject_54(RuntimeObject * value)
	{
		___DispatchLockObject_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_54), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_55() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___EnqueueLock_55)); }
	inline RuntimeObject * get_EnqueueLock_55() const { return ___EnqueueLock_55; }
	inline RuntimeObject ** get_address_of_EnqueueLock_55() { return &___EnqueueLock_55; }
	inline void set_EnqueueLock_55(RuntimeObject * value)
	{
		___EnqueueLock_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_55), (void*)value);
	}

	inline static int32_t get_offset_of_payloadEncryptorType_56() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___payloadEncryptorType_56)); }
	inline Type_t * get_payloadEncryptorType_56() const { return ___payloadEncryptorType_56; }
	inline Type_t ** get_address_of_payloadEncryptorType_56() { return &___payloadEncryptorType_56; }
	inline void set_payloadEncryptorType_56(Type_t * value)
	{
		___payloadEncryptorType_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payloadEncryptorType_56), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_57() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___PayloadEncryptionSecret_57)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_57() const { return ___PayloadEncryptionSecret_57; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_57() { return &___PayloadEncryptionSecret_57; }
	inline void set_PayloadEncryptionSecret_57(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_57), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_58() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___encryptorType_58)); }
	inline Type_t * get_encryptorType_58() const { return ___encryptorType_58; }
	inline Type_t ** get_address_of_encryptorType_58() { return &___encryptorType_58; }
	inline void set_encryptorType_58(Type_t * value)
	{
		___encryptorType_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_58), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_59() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___Encryptor_59)); }
	inline RuntimeObject* get_Encryptor_59() const { return ___Encryptor_59; }
	inline RuntimeObject** get_address_of_Encryptor_59() { return &___Encryptor_59; }
	inline void set_Encryptor_59(RuntimeObject* value)
	{
		___Encryptor_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CCountDiscardedU3Ek__BackingField_60)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_60() const { return ___U3CCountDiscardedU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_60() { return &___U3CCountDiscardedU3Ek__BackingField_60; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_60(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28, ___U3CDeltaUnreliableNumberU3Ek__BackingField_61)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_61() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_61(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_61 = value;
	}
};

struct PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeSocketLibAvailable
	bool ___NativeSocketLibAvailable_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativePayloadEncryptionLibAvailable
	bool ___NativePayloadEncryptionLibAvailable_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeDatagramEncryptionLibAvailable
	bool ___NativeDatagramEncryptionLibAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_43;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_NativeSocketLibAvailable_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NativeSocketLibAvailable_13)); }
	inline bool get_NativeSocketLibAvailable_13() const { return ___NativeSocketLibAvailable_13; }
	inline bool* get_address_of_NativeSocketLibAvailable_13() { return &___NativeSocketLibAvailable_13; }
	inline void set_NativeSocketLibAvailable_13(bool value)
	{
		___NativeSocketLibAvailable_13 = value;
	}

	inline static int32_t get_offset_of_NativePayloadEncryptionLibAvailable_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NativePayloadEncryptionLibAvailable_14)); }
	inline bool get_NativePayloadEncryptionLibAvailable_14() const { return ___NativePayloadEncryptionLibAvailable_14; }
	inline bool* get_address_of_NativePayloadEncryptionLibAvailable_14() { return &___NativePayloadEncryptionLibAvailable_14; }
	inline void set_NativePayloadEncryptionLibAvailable_14(bool value)
	{
		___NativePayloadEncryptionLibAvailable_14 = value;
	}

	inline static int32_t get_offset_of_NativeDatagramEncryptionLibAvailable_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___NativeDatagramEncryptionLibAvailable_15)); }
	inline bool get_NativeDatagramEncryptionLibAvailable_15() const { return ___NativeDatagramEncryptionLibAvailable_15; }
	inline bool* get_address_of_NativeDatagramEncryptionLibAvailable_15() { return &___NativeDatagramEncryptionLibAvailable_15; }
	inline void set_NativeDatagramEncryptionLibAvailable_15(bool value)
	{
		___NativeDatagramEncryptionLibAvailable_15 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___OutgoingStreamBufferSize_40)); }
	inline int32_t get_OutgoingStreamBufferSize_40() const { return ___OutgoingStreamBufferSize_40; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_40() { return &___OutgoingStreamBufferSize_40; }
	inline void set_OutgoingStreamBufferSize_40(int32_t value)
	{
		___OutgoingStreamBufferSize_40 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_StaticFields, ___AsyncKeyExchange_43)); }
	inline bool get_AsyncKeyExchange_43() const { return ___AsyncKeyExchange_43; }
	inline bool* get_address_of_AsyncKeyExchange_43() { return &___AsyncKeyExchange_43; }
	inline void set_AsyncKeyExchange_43(bool value)
	{
		___AsyncKeyExchange_43 = value;
	}
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


// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_StaticFields
{
public:
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_StaticFields, ___Default_2)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_2), (void*)value);
	}
};


// System.Action`1<Photon.Realtime.Region>
struct Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752  : public MulticastDelegate_t
{
public:

public:
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


// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4  : public PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28
{
public:
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 * ___paramDictionaryPool_62;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_62() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4, ___paramDictionaryPool_62)); }
	inline Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 * get_paramDictionaryPool_62() const { return ___paramDictionaryPool_62; }
	inline Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 ** get_address_of_paramDictionaryPool_62() { return &___paramDictionaryPool_62; }
	inline void set_paramDictionaryPool_62(Pool_1_tFA2B3BCC7C00F5CD0D5A4212F07DB7662CC292A0 * value)
	{
		___paramDictionaryPool_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_62), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6  : public TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5
{
public:
	// System.Int32 Photon.Realtime.TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 Photon.Realtime.TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Photon.Realtime.SupportLogger
struct SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_5;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___startStopwatch_6;
	// System.Boolean Photon.Realtime.SupportLogger::initialOnApplicationPauseSkipped
	bool ___initialOnApplicationPauseSkipped_7;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_9;

public:
	inline static int32_t get_offset_of_LogTrafficStats_4() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___LogTrafficStats_4)); }
	inline bool get_LogTrafficStats_4() const { return ___LogTrafficStats_4; }
	inline bool* get_address_of_LogTrafficStats_4() { return &___LogTrafficStats_4; }
	inline void set_LogTrafficStats_4(bool value)
	{
		___LogTrafficStats_4 = value;
	}

	inline static int32_t get_offset_of_client_5() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___client_5)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_5() const { return ___client_5; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_5() { return &___client_5; }
	inline void set_client_5(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_5), (void*)value);
	}

	inline static int32_t get_offset_of_startStopwatch_6() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___startStopwatch_6)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_startStopwatch_6() const { return ___startStopwatch_6; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_startStopwatch_6() { return &___startStopwatch_6; }
	inline void set_startStopwatch_6(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___startStopwatch_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startStopwatch_6), (void*)value);
	}

	inline static int32_t get_offset_of_initialOnApplicationPauseSkipped_7() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___initialOnApplicationPauseSkipped_7)); }
	inline bool get_initialOnApplicationPauseSkipped_7() const { return ___initialOnApplicationPauseSkipped_7; }
	inline bool* get_address_of_initialOnApplicationPauseSkipped_7() { return &___initialOnApplicationPauseSkipped_7; }
	inline void set_initialOnApplicationPauseSkipped_7(bool value)
	{
		___initialOnApplicationPauseSkipped_7 = value;
	}

	inline static int32_t get_offset_of_pingMax_8() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___pingMax_8)); }
	inline int32_t get_pingMax_8() const { return ___pingMax_8; }
	inline int32_t* get_address_of_pingMax_8() { return &___pingMax_8; }
	inline void set_pingMax_8(int32_t value)
	{
		___pingMax_8 = value;
	}

	inline static int32_t get_offset_of_pingMin_9() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___pingMin_9)); }
	inline int32_t get_pingMin_9() const { return ___pingMin_9; }
	inline int32_t* get_address_of_pingMin_9() { return &___pingMin_9; }
	inline void set_pingMin_9(int32_t value)
	{
		___pingMin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::get_LoadBalancingClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273 (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::Add(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, uint8_t ___k0, RuntimeObject * ___v1, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___gameProperties0, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___expectedProperties1, WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * ___webFlags2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::get_Count()
inline int32_t Dictionary_2_get_Count_mE97A130FBBB78E3A6808613FF6EECAA42EF30AD9 (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *, const RuntimeMethod*))Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared)(__this, method);
}
// System.Boolean Photon.Realtime.LoadBalancingClient::OpSetPropertyOfRoom(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpSetPropertyOfRoom_mFAF6C9C61B7D06F90426805522BA1A4D5AAA6197 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, uint8_t ___propCode0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::.ctor()
inline void Dictionary_2__ctor_m509E785E52A1C3861A9831F55E46B4095C2B2D1A (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_mF119EAAB1E42345D651B74A57EE59911B03310B4 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, String_t* ___roomName0, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___roomProperties1, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_m5EC778AE095E58AFA3A9D52F267F85A65A732E0E_inline (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_mFDA9D97177BC7D1DF5A742640881012C1C22BEF4_inline (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_BroadcastPropertiesChangeToAll(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_m713CA7B925BE579DE672122E90F710AC20C0FCB6_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_SuppressRoomEvents(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m9DA2FAD43288E82D574C683A771B07AF5CEC1748_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m754DBACBDFA2A9B6C54FD4CF3B6F1BFAB3B5CBA9_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_PublishUserId(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m06E6C6526F77CD919006270A70E57CCA86AD0994_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_DeleteNullProperties(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_m315E369F1958F04D18024D1A004E86C29C591523_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_mC1BFBAAD6F4C4273DEA09F82C963A4612BD921E6 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesToCache0, const RuntimeMethod* method);
// System.Void Photon.Realtime.InRoomCallbacksContainer::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomCallbacksContainer_OnMasterClientSwitched_m5C0C3207DD755226FA3A19CA395B28933548EBA0 (InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newMasterClient0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// ExitGames.Client.Photon.Hashtable Photon.Realtime.Extensions::StripToStringKeys(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * Extensions_StripToStringKeys_m36BD4964AFCC64C04996097EB1EDF7287FCCCB8C (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___original0, const RuntimeMethod* method);
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_Merge_m30D0B2F3322E82BAAA1958DD88BC7301DCFFB3D5 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::StripKeysWithNullValues(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_StripKeysWithNullValues_m9D8A495B729965C8AB15FB81082073CDB945B686 (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___original0, const RuntimeMethod* method);
// System.Void Photon.Realtime.InRoomCallbacksContainer::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomCallbacksContainer_OnRoomPropertiesUpdate_m9DB98BC962D45E9BB5C650A1BC29C389AD5F502A (InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesThatChanged0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::set_Item(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_set_Item_mEA3D2A4747586E66DF70E1DE0F14BDEA0AA76A5E (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::Remove(!0)
inline bool Dictionary_2_Remove_m5B30EAC7849BFA06D84BA702A294CFE6294AA0C5 (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Photon.Realtime.Player::set_RoomReference(Photon.Realtime.Room)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_RoomReference_m0181097B3E0D62C1802A2AD808240BF7378D9577_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Room::get_MasterClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_m8C3C4A530CB248B2233AE6B4B077E3A513F13A98_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5EBBC2A06520776FEB61E60D39288257C2B21CAE (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m24787D672A337A4370033965C61983244CAEDCC9 (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * __this, int32_t ___key0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *, int32_t, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDD07DD29A313814DB347A27C63F186F838A3CCB6 (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * __this, int32_t ___key0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *, int32_t, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.String[] Photon.Realtime.Room::get_ExpectedUsers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.Room::SetExpectedUsers(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetExpectedUsers_mB3F6396ECAEBAF34286A6752AB64DAB1C1773EC2 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___newExpectedUsers0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___oldExpectedUsers1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mCED335A05CBA1CE408F28FCD02110B7F8BDBC0E3 (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, int32_t ___x0, const RuntimeMethod* method);
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mEDD8EA093DF8DC8D1D8B0DBED09A2DA2EFCF364E (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9 (RuntimeObject* ___origin0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.Hashtable::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4 (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7 (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_MergeStringKeys_mE39680404E703BD165F84EF78D7E08A2DF203105 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_m01EE49F15436A959BFD296AA9984404ECA25D369 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF16F409FFF0E613D334D999BF6EAA126F090F154 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_mFF619F21AB932F0393D15181428B1446665435BC (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_m4BE806CA6663FD85775A0737E6025652517FABC6 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_mEF2B0877FD0A622995A7CB042CB501C5E2ABA888 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, bool ___all0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_Version_m0C4F07C539524A3EB5D9A04F835CB7ACDA9CDB56 (const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_m1D425EDAA1A9BC1D4DA44C291C097FC607A8BCA6_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_m8523275C4DFFEE75877514FF4022A2EF2C2D944E (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mF05C38D7A0CBE9ADFFBF74C829A1E98373E635BE_inline (AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_mEAAC1128043EFDF01A2E2C7BED3B420F211305A3 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_m340A40F8C31A54CCBFF4123A14615C55052DA56F (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_mD1B46D4482C3ACA4FF443A604882198C628BAC82 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m08A780475DA96A78E6D982816DB4002A149BB1AA_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mD9AFE8CC8BDB6F3E900504F4C916E759DB6FF1E5 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Int16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_m8CF4F76507EFEA86FE5984D7572DC66E44C20022 (int16_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_inline (List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54 (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_m364837F07C4F1083993B5DE05D3896D7D3D85798 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::.ctor()
inline void List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::UpdateCallbackTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_UpdateCallbackTargets_mB089FFBCC8CA2649A2C41B037602FB6C339DA0FC (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::GetEnumerator()
inline Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45 (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  (*) (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_inline (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::MoveNext()
inline bool Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::Dispose()
inline void Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135 (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740 (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mDB4BACD77D0D06675D2DF03185990CEC7219B720 (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingPeer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6BD4A6F45A41995976A87A9D0C893E2023C8DFAA (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.ParameterDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDictionary__ctor_m18836EBCD343BFA6A9145E8125D5015619B5E057 (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.ParameterDictionary::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDictionary_Clear_m592657E657F382537FBD38F087897B909ECD146C (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.RegionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7622690FDCA0B2F9AF7DCCF7567474C5AA7A1E6 (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Region::get_Ping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Region::set_Ping(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RegionPinger::set_Done(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m24F52F5A80F1DBCE7FB49D542884D7D9060EB565_inline (RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Min(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Min_mF7108B5155FD1BC3BBD32511DCD8A0385EEEED9E (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Action`1<Photon.Realtime.Region>::Invoke(!0)
inline void Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675 (Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * __this, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 *, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::get_LoadBalancingClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_U3CLoadBalancingClientU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_LoadBalancingClient(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_LoadBalancingClient_mB992F691DD20071D4DCFCD4B1C75DDC6E5DEC08F (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___value0, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = ___value0;
		__this->set_U3CLoadBalancingClientU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_name_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_Name_m64226046ECBDC5FA971D898927C334A6B5CC89A5 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// this.name = value;
		String_t* L_0 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_name_9(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsOffline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsOffline_mEC1F44A8B7A31D12F3C7D979A62FB16EBB09B591 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return isOffline;
		bool L_0 = __this->get_isOffline_14();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_IsOffline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOffline_mD5D4262269B87EDA4B843F8675EA98F17FF56C93 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// isOffline = value;
		bool L_0 = ___value0;
		__this->set_isOffline_14(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsOpen_m73F5FA9634ACBC624CA606012DABEAF5D141C73C (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.isOpen;
		bool L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isOpen_6();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOpen_mE080FA9EF98A4CC9619FF11D1BC34EBC58934DBE (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.isOpen)
		bool L_0 = ___value0;
		bool L_1 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isOpen_6();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.IsOpen, value } });
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3;
		L_3 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_4 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_4, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_5 = L_4;
		bool L_6 = ___value0;
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_5, (uint8_t)((int32_t)253), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_9;
		L_9 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_3, L_5, (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)NULL, (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)NULL, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// this.isOpen = value;
		bool L_10 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_isOpen_6(L_10);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsVisible_m66006F2873B3F9F9C515ACC47A74A083BD304821 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.isVisible;
		bool L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isVisible_7();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsVisible_m510A9E032614BC912B2B6BD3CEA0617241883972 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.isVisible)
		bool L_0 = ___value0;
		bool L_1 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isVisible_7();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.IsVisible, value } });
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3;
		L_3 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_4 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_4, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_5 = L_4;
		bool L_6 = ___value0;
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_5, (uint8_t)((int32_t)254), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_9;
		L_9 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_3, L_5, (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)NULL, (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)NULL, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// this.isVisible = value;
		bool L_10 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_isVisible_7(L_10);
		// }
		return;
	}
}
// System.Byte Photon.Realtime.Room::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_MaxPlayers_m993971760C8EFD49F8B2DC7A897E58550C5A616A (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_maxPlayers_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_MaxPlayers(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_MaxPlayers_mF27B42C23C349C9038845BAE66B77832CD3F50AA (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.maxPlayers)
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_maxPlayers_2();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.MaxPlayers, value } });
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3;
		L_3 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_4 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_4, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_5 = L_4;
		uint8_t L_6 = ___value0;
		uint8_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_5, (uint8_t)((int32_t)255), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_9;
		L_9 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_3, L_5, (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)NULL, (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)NULL, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// this.maxPlayers = value;
		uint8_t L_10 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_maxPlayers_2(L_10);
		// }
		return;
	}
}
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mEDD8EA093DF8DC8D1D8B0DBED09A2DA2EFCF364E (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE97A130FBBB78E3A6808613FF6EECAA42EF30AD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.Players == null)
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0;
		L_0 = Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return (uint8_t)0;
	}

IL_000a:
	{
		// return (byte)this.Players.Count;
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_1;
		L_1 = Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_mE97A130FBBB78E3A6808613FF6EECAA42EF30AD9(L_1, /*hidden argument*/Dictionary_2_get_Count_mE97A130FBBB78E3A6808613FF6EECAA42EF30AD9_RuntimeMethod_var);
		return (uint8_t)((int32_t)((uint8_t)L_2));
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.players;
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0 = __this->get_players_15();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_Players(System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_Players_m87720ECC963CDB0FEDC94375C28BA271813B8556 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * ___value0, const RuntimeMethod* method)
{
	{
		// this.players = value;
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0 = ___value0;
		__this->set_players_15(L_0);
		// }
		return;
	}
}
// System.String[] Photon.Realtime.Room::get_ExpectedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_expectedUsers_5();
		return L_0;
	}
}
// System.Int32 Photon.Realtime.Room::get_PlayerTtl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_PlayerTtl_m4CF7BF303EDC9C49B7C0144C0CE6F78FE0AC1562 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.playerTtl; }
		int32_t L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_playerTtl_4();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_PlayerTtl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PlayerTtl_mE321157E2D3EA904309C33083DFDB3807F0FB7A9 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.playerTtl)
		int32_t L_0 = ___value0;
		int32_t L_1 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_playerTtl_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertyOfRoom(GamePropertyKey.PlayerTtl, value);  // TODO: implement Offline Mode
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3;
		L_3 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		bool L_7;
		L_7 = LoadBalancingClient_OpSetPropertyOfRoom_mFAF6C9C61B7D06F90426805522BA1A4D5AAA6197(L_3, (uint8_t)((int32_t)246), L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// this.playerTtl = value;
		int32_t L_8 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_playerTtl_4(L_8);
		// }
		return;
	}
}
// System.Int32 Photon.Realtime.Room::get_EmptyRoomTtl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_EmptyRoomTtl_mADC5E5F446598CA88045EC84BBFC20C00BE586A0 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.emptyRoomTtl; }
		int32_t L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_emptyRoomTtl_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_EmptyRoomTtl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_EmptyRoomTtl_m4AFCE0B5A83B63E4C773047BACA155AF734EC328 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.emptyRoomTtl)
		int32_t L_0 = ___value0;
		int32_t L_1 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_emptyRoomTtl_3();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertyOfRoom(GamePropertyKey.EmptyRoomTtl, value);  // TODO: implement Offline Mode
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3;
		L_3 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		bool L_7;
		L_7 = LoadBalancingClient_OpSetPropertyOfRoom_mFAF6C9C61B7D06F90426805522BA1A4D5AAA6197(L_3, (uint8_t)((int32_t)245), L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// this.emptyRoomTtl = value;
		int32_t L_8 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_emptyRoomTtl_3(L_8);
		// }
		return;
	}
}
// System.Int32 Photon.Realtime.Room::get_MasterClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_m8C3C4A530CB248B2233AE6B4B077E3A513F13A98 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public int MasterClientId { get { return this.masterClientId; } }
		int32_t L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_masterClientId_10();
		return L_0;
	}
}
// System.String[] Photon.Realtime.Room::get_PropertiesListedInLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Room_get_PropertiesListedInLobby_mF51299A8C7055A117319924F73C623D782B9DA2E (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.propertiesListedInLobby;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_propertiesListedInLobby_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_PropertiesListedInLobby(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PropertiesListedInLobby_mEF3EDC665C9284D75F00449C6509E53B71B9E395 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// this.propertiesListedInLobby = value;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_propertiesListedInLobby_11(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_AutoCleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_AutoCleanUp_mB42C71BE0CB3C96B5ADB8EF0504611B91DF87EF8 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.autoCleanUp;
		bool L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_autoCleanUp_8();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.Room::get_BroadcastPropertiesChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_BroadcastPropertiesChangeToAll_m4B7FA72C87C7CC054A6850A13D6B94E7C98607B3 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = __this->get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_BroadcastPropertiesChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_m713CA7B925BE579DE672122E90F710AC20C0FCB6 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_SuppressRoomEvents_m67A72242D46E3F650674960E2F074E0689173721 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m9DA2FAD43288E82D574C683A771B07AF5CEC1748 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_SuppressPlayerInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_SuppressPlayerInfo_m97C336FD4C96D6E0DA5D1FCFE3835B5971CE0D13 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = __this->get_U3CSuppressPlayerInfoU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m754DBACBDFA2A9B6C54FD4CF3B6F1BFAB3B5CBA9 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_PublishUserId_m1336BE536E3B64281094AE8BE706A2A855A55AB9 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m06E6C6526F77CD919006270A70E57CCA86AD0994 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_DeleteNullProperties_m358FB88E9F28F7EED098B5DF820CED0F0C10DBB3 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_m315E369F1958F04D18024D1A004E86C29C591523 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void Photon.Realtime.Room::.ctor(System.String,Photon.Realtime.RoomOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m2B5BE1A8907CFBF8FD70FCE915F38D7F98457F7A (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, String_t* ___roomName0, RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * ___options1, bool ___isOffline2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m509E785E52A1C3861A9831F55E46B4095C2B2D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B1_1 = NULL;
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B3_2 = NULL;
	{
		// private Dictionary<int, Player> players = new Dictionary<int, Player>();
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0 = (Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B *)il2cpp_codegen_object_new(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m509E785E52A1C3861A9831F55E46B4095C2B2D1A(L_0, /*hidden argument*/Dictionary_2__ctor_m509E785E52A1C3861A9831F55E46B4095C2B2D1A_RuntimeMethod_var);
		__this->set_players_15(L_0);
		// public Room(string roomName, RoomOptions options, bool isOffline = false) : base(roomName, options != null ? options.CustomRoomProperties : null)
		String_t* L_1 = ___roomName0;
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_2 = ___options1;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0013:
	{
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_3 = ___options1;
		NullCheck(L_3);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_4 = L_3->get_CustomRoomProperties_6();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		RoomInfo__ctor_mF119EAAB1E42345D651B74A57EE59911B03310B4(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (options != null)
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_5 = ___options1;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// this.isVisible = options.IsVisible;
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_6 = ___options1;
		NullCheck(L_6);
		bool L_7;
		L_7 = RoomOptions_get_IsVisible_m5EC778AE095E58AFA3A9D52F267F85A65A732E0E_inline(L_6, /*hidden argument*/NULL);
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_isVisible_7(L_7);
		// this.isOpen = options.IsOpen;
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_8 = ___options1;
		NullCheck(L_8);
		bool L_9;
		L_9 = RoomOptions_get_IsOpen_mFDA9D97177BC7D1DF5A742640881012C1C22BEF4_inline(L_8, /*hidden argument*/NULL);
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_isOpen_6(L_9);
		// this.maxPlayers = options.MaxPlayers;
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_10 = ___options1;
		NullCheck(L_10);
		uint8_t L_11 = L_10->get_MaxPlayers_2();
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_maxPlayers_2(L_11);
		// this.propertiesListedInLobby = options.CustomRoomPropertiesForLobby;
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_12 = ___options1;
		NullCheck(L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12->get_CustomRoomPropertiesForLobby_7();
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_propertiesListedInLobby_11(L_13);
	}

IL_0051:
	{
		// this.isOffline = isOffline;
		bool L_14 = ___isOffline2;
		__this->set_isOffline_14(L_14);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::InternalCacheRoomFlags(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_InternalCacheRoomFlags_mF32E426E264F5B11FFCD3C67D1CAC11C03A234AC (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, int32_t ___roomFlags0, const RuntimeMethod* method)
{
	{
		// this.BroadcastPropertiesChangeToAll = (roomFlags & (int)RoomOptionBit.BroadcastPropsChangeToAll) != 0;
		int32_t L_0 = ___roomFlags0;
		Room_set_BroadcastPropertiesChangeToAll_m713CA7B925BE579DE672122E90F710AC20C0FCB6_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.SuppressRoomEvents = (roomFlags & (int)RoomOptionBit.SuppressRoomEvents) != 0;
		int32_t L_1 = ___roomFlags0;
		Room_set_SuppressRoomEvents_m9DA2FAD43288E82D574C683A771B07AF5CEC1748_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.SuppressPlayerInfo = (roomFlags & (int)RoomOptionBit.SuppressPlayerInfo) != 0;
		int32_t L_2 = ___roomFlags0;
		Room_set_SuppressPlayerInfo_m754DBACBDFA2A9B6C54FD4CF3B6F1BFAB3B5CBA9_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.PublishUserId = (roomFlags & (int)RoomOptionBit.PublishUserId) != 0;
		int32_t L_3 = ___roomFlags0;
		Room_set_PublishUserId_m06E6C6526F77CD919006270A70E57CCA86AD0994_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.DeleteNullProperties = (roomFlags & (int)RoomOptionBit.DeleteNullProps) != 0;
		int32_t L_4 = ___roomFlags0;
		Room_set_DeleteNullProperties_m315E369F1958F04D18024D1A004E86C29C591523_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.autoCleanUp = (roomFlags & (int)RoomOptionBit.DeleteCacheOnLeave) != 0;
		int32_t L_5 = ___roomFlags0;
		((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->set_autoCleanUp_8((bool)((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0));
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_InternalCacheProperties_m1864D0911EA84EC5BB10167AFC3F0E38659F25FD (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesToCache0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int oldMasterId = this.masterClientId;
		int32_t L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_masterClientId_10();
		V_0 = L_0;
		// base.InternalCacheProperties(propertiesToCache);    // important: updating the properties fields has no way to do callbacks on change
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = ___propertiesToCache0;
		RoomInfo_InternalCacheProperties_mC1BFBAAD6F4C4273DEA09F82C963A4612BD921E6(__this, L_1, /*hidden argument*/NULL);
		// if (oldMasterId != 0 && this.masterClientId != oldMasterId)
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_masterClientId_10();
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		// this.LoadBalancingClient.InRoomCallbackTargets.OnMasterClientSwitched(this.GetPlayer(this.masterClientId));
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5;
		L_5 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * L_6 = L_5->get_InRoomCallbackTargets_25();
		int32_t L_7 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_masterClientId_10();
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_8;
		L_8 = VirtFuncInvoker2< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, __this, L_7, (bool)0);
		NullCheck(L_6);
		InRoomCallbacksContainer_OnMasterClientSwitched_m5C0C3207DD755226FA3A19CA395B28933548EBA0(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetCustomProperties_m78B3FF97907CB36E70ADAB10FC272DA4CCEF8492 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesToSet0, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___expectedProperties1, WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * ___webFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * V_0 = NULL;
	{
		// if (propertiesToSet == null || propertiesToSet.Count == 0)
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_0 = ___propertiesToSet0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = ___propertiesToSet0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// Hashtable customProps = propertiesToSet.StripToStringKeys() as Hashtable;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_3 = ___propertiesToSet0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_4;
		L_4 = Extensions_StripToStringKeys_m36BD4964AFCC64C04996097EB1EDF7287FCCCB8C(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (this.isOffline)
		bool L_5 = __this->get_isOffline_14();
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// if (customProps.Count == 0)
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_6, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// this.CustomProperties.Merge(customProps);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_8;
		L_8 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		Extensions_Merge_m30D0B2F3322E82BAAA1958DD88BC7301DCFFB3D5(L_8, L_9, /*hidden argument*/NULL);
		// this.CustomProperties.StripKeysWithNullValues();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_10;
		L_10 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA_inline(__this, /*hidden argument*/NULL);
		Extensions_StripKeysWithNullValues_m9D8A495B729965C8AB15FB81082073CDB945B686(L_10, /*hidden argument*/NULL);
		// this.LoadBalancingClient.InRoomCallbackTargets.OnRoomPropertiesUpdate(propertiesToSet);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_11;
		L_11 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * L_12 = L_11->get_InRoomCallbackTargets_25();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_13 = ___propertiesToSet0;
		NullCheck(L_12);
		InRoomCallbacksContainer_OnRoomPropertiesUpdate_m9DB98BC962D45E9BB5C650A1BC29C389AD5F502A(L_12, L_13, /*hidden argument*/NULL);
		// }
		goto IL_005f;
	}

IL_0050:
	{
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(customProps, expectedProperties, webFlags);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_14;
		L_14 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_15 = V_0;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_16 = ___expectedProperties1;
		WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * L_17 = ___webFlags2;
		NullCheck(L_14);
		bool L_18;
		L_18 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_005f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Photon.Realtime.Room::SetPropertiesListedInLobby(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetPropertiesListedInLobby_mECA3C6A3278E05E8214A36ACF297D3A4E3B12881 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___lobbyProps0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * V_0 = NULL;
	{
		// if (this.isOffline)
		bool L_0 = __this->get_isOffline_14();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// Hashtable customProps = new Hashtable();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// customProps[GamePropertyKey.PropsListedInLobby] = lobbyProps;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___lobbyProps0;
		NullCheck(L_2);
		Hashtable_set_Item_mEA3D2A4747586E66DF70E1DE0F14BDEA0AA76A5E(L_2, (uint8_t)((int32_t)250), (RuntimeObject *)(RuntimeObject *)L_3, /*hidden argument*/NULL);
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(customProps);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_4;
		L_4 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_4, L_5, (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)NULL, (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)NULL, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Photon.Realtime.Room::RemovePlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_RemovePlayer_m0361DD1210BF18D24FB285BBD633C371605A2CCF (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5B30EAC7849BFA06D84BA702A294CFE6294AA0C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Players.Remove(player.ActorNumber);
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0;
		L_0 = Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_Remove_m5B30EAC7849BFA06D84BA702A294CFE6294AA0C5(L_0, L_2, /*hidden argument*/Dictionary_2_Remove_m5B30EAC7849BFA06D84BA702A294CFE6294AA0C5_RuntimeMethod_var);
		// player.RoomReference = null;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_4 = ___player0;
		NullCheck(L_4);
		Player_set_RoomReference_m0181097B3E0D62C1802A2AD808240BF7378D9577_inline(L_4, (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::RemovePlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_RemovePlayer_m844F888EFD666B69958E65F2E3337C508EB1D808 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		// this.RemovePlayer(this.GetPlayer(id));
		int32_t L_0 = ___id0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1;
		L_1 = VirtFuncInvoker2< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, __this, L_0, (bool)0);
		VirtActionInvoker1< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * >::Invoke(6 /* System.Void Photon.Realtime.Room::RemovePlayer(Photon.Realtime.Player) */, __this, L_1);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::SetMasterClient(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetMasterClient_mE4231CB8758141BE9088DB4D964398BA54B879B7 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___masterClientPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * V_0 = NULL;
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * V_1 = NULL;
	{
		// if (this.isOffline)
		bool L_0 = __this->get_isOffline_14();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// Hashtable newProps = new Hashtable() { { GamePropertyKey.MasterClientId, masterClientPlayer.ActorNumber } };
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_1, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_2 = L_1;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_3 = ___masterClientPlayer0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_2, (uint8_t)((int32_t)248), L_6, /*hidden argument*/NULL);
		V_0 = L_2;
		// Hashtable prevProps = new Hashtable() { { GamePropertyKey.MasterClientId, this.MasterClientId } };
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_7 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_7, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_8 = L_7;
		int32_t L_9;
		L_9 = Room_get_MasterClientId_m8C3C4A530CB248B2233AE6B4B077E3A513F13A98_inline(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_8, (uint8_t)((int32_t)248), L_11, /*hidden argument*/NULL);
		V_1 = L_8;
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(newProps, prevProps);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_12;
		L_12 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_13 = V_0;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_14 = V_1;
		NullCheck(L_12);
		bool L_15;
		L_15 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_12, L_13, L_14, (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean Photon.Realtime.Room::AddPlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_AddPlayer_m284234D68C02DB7A00428C63D986E76845D10BB6 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5EBBC2A06520776FEB61E60D39288257C2B21CAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.Players.ContainsKey(player.ActorNumber))
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0;
		L_0 = Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5EBBC2A06520776FEB61E60D39288257C2B21CAE(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m5EBBC2A06520776FEB61E60D39288257C2B21CAE_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// this.StorePlayer(player);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_4 = ___player0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5;
		L_5 = VirtFuncInvoker1< Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * >::Invoke(9 /* Photon.Realtime.Player Photon.Realtime.Room::StorePlayer(Photon.Realtime.Player) */, __this, L_4);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}
}
// Photon.Realtime.Player Photon.Realtime.Room::StorePlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * Room_StorePlayer_m1FD358BBA00FD31BA422CCDFDF706FCD46629999 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m24787D672A337A4370033965C61983244CAEDCC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Players[player.ActorNumber] = player;
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0;
		L_0 = Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3_inline(L_1, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_3 = ___player0;
		NullCheck(L_0);
		Dictionary_2_set_Item_m24787D672A337A4370033965C61983244CAEDCC9(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_set_Item_m24787D672A337A4370033965C61983244CAEDCC9_RuntimeMethod_var);
		// player.RoomReference = this;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_4 = ___player0;
		NullCheck(L_4);
		Player_set_RoomReference_m0181097B3E0D62C1802A2AD808240BF7378D9577_inline(L_4, __this, /*hidden argument*/NULL);
		// return player;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5 = ___player0;
		return L_5;
	}
}
// Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * Room_GetPlayer_mB51C279780982484C43FA4D3ACBFE64CA6254396 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, int32_t ___id0, bool ___findMaster1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDD07DD29A313814DB347A27C63F186F838A3CCB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// int idToFind = (findMaster && id == 0) ? this.MasterClientId : id;
		bool L_0 = ___findMaster1;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___id0;
		if (!L_1)
		{
			goto IL_0009;
		}
	}

IL_0006:
	{
		int32_t L_2 = ___id0;
		G_B4_0 = L_2;
		goto IL_000f;
	}

IL_0009:
	{
		int32_t L_3;
		L_3 = Room_get_MasterClientId_m8C3C4A530CB248B2233AE6B4B077E3A513F13A98_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_3;
	}

IL_000f:
	{
		V_0 = G_B4_0;
		// Player result = null;
		V_1 = (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 *)NULL;
		// this.Players.TryGetValue(idToFind, out result);
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_4;
		L_4 = Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mDD07DD29A313814DB347A27C63F186F838A3CCB6(L_4, L_5, (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mDD07DD29A313814DB347A27C63F186F838A3CCB6_RuntimeMethod_var);
		// return result;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Photon.Realtime.Room::ClearExpectedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_ClearExpectedUsers_m2B988167CFE7CA0CBCF229BC8C9E48473EA6F6FF (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.ExpectedUsers == null || this.ExpectedUsers.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// return this.SetExpectedUsers(new string[0], this.ExpectedUsers);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E_inline(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Room_SetExpectedUsers_mB3F6396ECAEBAF34286A6752AB64DAB1C1773EC2(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Realtime.Room::SetExpectedUsers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetExpectedUsers_mF4FCBF5D67B2EE9A4D3483095F7FD920175D766F (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___newExpectedUsers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455DE8D137F50C17707B3E37FA74BEBEE69B1EAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newExpectedUsers == null || newExpectedUsers.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___newExpectedUsers0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___newExpectedUsers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001a;
		}
	}

IL_0007:
	{
		// this.LoadBalancingClient.DebugReturn(DebugLevel.ERROR, "newExpectedUsers array is null or empty, call Room.ClearExpectedUsers() instead if this is what you want.");
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2;
		L_2 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< uint8_t, String_t* >::Invoke(14 /* System.Void Photon.Realtime.LoadBalancingClient::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, L_2, 1, _stringLiteral455DE8D137F50C17707B3E37FA74BEBEE69B1EAD);
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// return this.SetExpectedUsers(newExpectedUsers, this.ExpectedUsers);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___newExpectedUsers0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E_inline(__this, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Room_SetExpectedUsers_mB3F6396ECAEBAF34286A6752AB64DAB1C1773EC2(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Photon.Realtime.Room::SetExpectedUsers(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetExpectedUsers_mB3F6396ECAEBAF34286A6752AB64DAB1C1773EC2 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___newExpectedUsers0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___oldExpectedUsers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * V_0 = NULL;
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * V_1 = NULL;
	{
		// if (this.isOffline)
		bool L_0 = __this->get_isOffline_14();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// Hashtable gameProperties = new Hashtable(1);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mCED335A05CBA1CE408F28FCD02110B7F8BDBC0E3(L_1, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		// gameProperties.Add(GamePropertyKey.ExpectedUsers, newExpectedUsers);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___newExpectedUsers0;
		NullCheck(L_2);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_2, (uint8_t)((int32_t)247), (RuntimeObject *)(RuntimeObject *)L_3, /*hidden argument*/NULL);
		// Hashtable expectedProperties = null;
		V_1 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)NULL;
		// if (oldExpectedUsers != null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___oldExpectedUsers1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// expectedProperties = new Hashtable(1);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_5 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mCED335A05CBA1CE408F28FCD02110B7F8BDBC0E3(L_5, 1, /*hidden argument*/NULL);
		V_1 = L_5;
		// expectedProperties.Add(GamePropertyKey.ExpectedUsers, oldExpectedUsers);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_6 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___oldExpectedUsers1;
		NullCheck(L_6);
		Hashtable_Add_m7200ACF1F114F1CADA5B97D0246F5C90FABD2A8E(L_6, (uint8_t)((int32_t)247), (RuntimeObject *)(RuntimeObject *)L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(gameProperties, expectedProperties);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_8;
		L_8 = Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline(__this, /*hidden argument*/NULL);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_9 = V_0;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_10 = V_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = LoadBalancingClient_OpSetPropertiesOfRoom_m3AD007FDAF9FA262CB8A8CAA4F46C2A95A2FB1FD(L_8, L_9, L_10, (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)NULL, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.String Photon.Realtime.Room::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToString_mFACB93950B95E6712BE42AD73A9B51A00404068B (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F);
		s_Il2CppMethodInitialized = true;
	}
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
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		bool L_4 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = G_B3_3;
		bool L_6 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = G_B6_3;
		uint8_t L_8 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		uint8_t L_12;
		L_12 = Room_get_PlayerCount_mEDD8EA093DF8DC8D1D8B0DBED09A2DA2EFCF364E(__this, /*hidden argument*/NULL);
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Photon.Realtime.Room::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToStringFull_m7FD12B561352ACBA9195672B7A533A2E5D97D72F (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		s_Il2CppMethodInitialized = true;
	}
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
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.CustomProperties.ToStringFull());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		bool L_4 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = G_B3_3;
		bool L_6 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = G_B6_3;
		uint8_t L_8 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		uint8_t L_12;
		L_12 = Room_get_PlayerCount_mEDD8EA093DF8DC8D1D8B0DBED09A2DA2EFCF364E(__this, /*hidden argument*/NULL);
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_16;
		L_16 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		String_t* L_18;
		L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, L_15, /*hidden argument*/NULL);
		return L_18;
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
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.customProperties;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_0 = __this->get_customProperties_1();
		return L_0;
	}
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_m52B64E26C3521D3B78192503FC133F2C1AD96F01 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = __this->get_maxPlayers_2();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsOpen_mF317DBC6BE46C1491920633B71A8C644729F0004 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.isOpen;
		bool L_0 = __this->get_isOpen_6();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsVisible_mA177125A5A11191BD753D4B21E00746683B331C6 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.isVisible;
		bool L_0 = __this->get_isVisible_7();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_mF119EAAB1E42345D651B74A57EE59911B03310B4 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, String_t* ___roomName0, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___roomProperties1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable customProperties = new Hashtable();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_0 = (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF *)il2cpp_codegen_object_new(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD8B4A81E0F5E9C9E67C2E43922A410B1DD4FE273(L_0, /*hidden argument*/NULL);
		__this->set_customProperties_1(L_0);
		// protected bool isOpen = true;
		__this->set_isOpen_6((bool)1);
		// protected bool isVisible = true;
		__this->set_isVisible_7((bool)1);
		// protected bool autoCleanUp = true;
		__this->set_autoCleanUp_8((bool)1);
		// protected internal RoomInfo(string roomName, Hashtable roomProperties)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.InternalCacheProperties(roomProperties);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = ___roomProperties1;
		VirtActionInvoker1< Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * >::Invoke(4 /* System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable) */, __this, L_1);
		// this.name = roomName;
		String_t* L_2 = ___roomName0;
		__this->set_name_9(L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_Equals_mAD4C9AA88316F973B8C85B4177FAE2B2877F5C7A (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * V_0 = NULL;
	{
		// RoomInfo otherRoomInfo = other as RoomInfo;
		RuntimeObject * L_0 = ___other0;
		V_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)IsInstClass((RuntimeObject*)L_0, RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889_il2cpp_TypeInfo_var));
		// return (otherRoomInfo != null && this.Name.Equals(otherRoomInfo.name));
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline(__this, /*hidden argument*/NULL);
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_9();
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_GetHashCode_mA9A3460B7D46E7CC7F8A8B564639570D3E56939E (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.name.GetHashCode();
		String_t* L_0 = __this->get_name_9();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Photon.Realtime.RoomInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToString_m8B4FBCB74C162EA6ECE798CF7F7A12F187C1568C (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F);
		s_Il2CppMethodInitialized = true;
	}
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
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Photon.Realtime.RoomInfo::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToStringFull_mA8130A49AE90D0E6F339135E590AF6BF238DA941 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		s_Il2CppMethodInitialized = true;
	}
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
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.customProperties.ToStringFull());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_16 = __this->get_customProperties_1();
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		String_t* L_18;
		L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, L_15, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_mC1BFBAAD6F4C4273DEA09F82C963A4612BD921E6 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesToCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (propertiesToCache == null || propertiesToCache.Count == 0 || this.customProperties.Equals(propertiesToCache))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_3 = __this->get_customProperties_1();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.Removed))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_6 = ___propertiesToCache0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_6, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// this.RemovedFromList = (bool)propertiesToCache[GamePropertyKey.Removed];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_8 = ___propertiesToCache0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_8, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		__this->set_RemovedFromList_0(((*(bool*)((bool*)UnBox(L_9, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		// if (this.RemovedFromList)
		bool L_10 = __this->get_RemovedFromList_0();
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MaxPlayers))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_11 = ___propertiesToCache0;
		NullCheck(L_11);
		bool L_12;
		L_12 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_11, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// this.maxPlayers = (byte)propertiesToCache[GamePropertyKey.MaxPlayers];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_13 = ___propertiesToCache0;
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_13, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		__this->set_maxPlayers_2(((*(uint8_t*)((uint8_t*)UnBox(L_14, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
	}

IL_0069:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsOpen))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_15 = ___propertiesToCache0;
		NullCheck(L_15);
		bool L_16;
		L_16 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_15, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		// this.isOpen = (bool)propertiesToCache[GamePropertyKey.IsOpen];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_17 = ___propertiesToCache0;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_17, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		__this->set_isOpen_6(((*(bool*)((bool*)UnBox(L_18, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_008c:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsVisible))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_19 = ___propertiesToCache0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_19, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		// this.isVisible = (bool)propertiesToCache[GamePropertyKey.IsVisible];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_21 = ___propertiesToCache0;
		NullCheck(L_21);
		RuntimeObject * L_22;
		L_22 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_21, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		__this->set_isVisible_7(((*(bool*)((bool*)UnBox(L_22, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_00af:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PlayerCount))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_23 = ___propertiesToCache0;
		NullCheck(L_23);
		bool L_24;
		L_24 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_23, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// this.PlayerCount = (int)((byte)propertiesToCache[GamePropertyKey.PlayerCount]);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_25 = ___propertiesToCache0;
		NullCheck(L_25);
		RuntimeObject * L_26;
		L_26 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_25, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_26, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.CleanupCacheOnLeave))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_27 = ___propertiesToCache0;
		NullCheck(L_27);
		bool L_28;
		L_28 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_27, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f5;
		}
	}
	{
		// this.autoCleanUp = (bool)propertiesToCache[GamePropertyKey.CleanupCacheOnLeave];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_29 = ___propertiesToCache0;
		NullCheck(L_29);
		RuntimeObject * L_30;
		L_30 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_29, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		__this->set_autoCleanUp_8(((*(bool*)((bool*)UnBox(L_30, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_00f5:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MasterClientId))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_31 = ___propertiesToCache0;
		NullCheck(L_31);
		bool L_32;
		L_32 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_31, (uint8_t)((int32_t)248), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0118;
		}
	}
	{
		// this.masterClientId = (int)propertiesToCache[GamePropertyKey.MasterClientId];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_33 = ___propertiesToCache0;
		NullCheck(L_33);
		RuntimeObject * L_34;
		L_34 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_33, (uint8_t)((int32_t)248), /*hidden argument*/NULL);
		__this->set_masterClientId_10(((*(int32_t*)((int32_t*)UnBox(L_34, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0118:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PropsListedInLobby))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_35 = ___propertiesToCache0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_35, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_013b;
		}
	}
	{
		// this.propertiesListedInLobby = propertiesToCache[GamePropertyKey.PropsListedInLobby] as string[];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_37 = ___propertiesToCache0;
		NullCheck(L_37);
		RuntimeObject * L_38;
		L_38 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_37, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		__this->set_propertiesListedInLobby_11(((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_38, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)));
	}

IL_013b:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.ExpectedUsers))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_39 = ___propertiesToCache0;
		NullCheck(L_39);
		bool L_40;
		L_40 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_39, (uint8_t)((int32_t)247), /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_015e;
		}
	}
	{
		// this.expectedUsers = (string[])propertiesToCache[GamePropertyKey.ExpectedUsers];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_41 = ___propertiesToCache0;
		NullCheck(L_41);
		RuntimeObject * L_42;
		L_42 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_41, (uint8_t)((int32_t)247), /*hidden argument*/NULL);
		__this->set_expectedUsers_5(((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_42, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)));
	}

IL_015e:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.EmptyRoomTtl))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_43 = ___propertiesToCache0;
		NullCheck(L_43);
		bool L_44;
		L_44 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_43, (uint8_t)((int32_t)245), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0181;
		}
	}
	{
		// this.emptyRoomTtl = (int)propertiesToCache[GamePropertyKey.EmptyRoomTtl];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_45 = ___propertiesToCache0;
		NullCheck(L_45);
		RuntimeObject * L_46;
		L_46 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_45, (uint8_t)((int32_t)245), /*hidden argument*/NULL);
		__this->set_emptyRoomTtl_3(((*(int32_t*)((int32_t*)UnBox(L_46, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0181:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.PlayerTtl))
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_47 = ___propertiesToCache0;
		NullCheck(L_47);
		bool L_48;
		L_48 = Hashtable_ContainsKey_m2C45C1B65B4BA841280287B7F4A18234B47AC4D4(L_47, (uint8_t)((int32_t)246), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a4;
		}
	}
	{
		// this.playerTtl = (int)propertiesToCache[GamePropertyKey.PlayerTtl];
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_49 = ___propertiesToCache0;
		NullCheck(L_49);
		RuntimeObject * L_50;
		L_50 = Hashtable_get_Item_mDFD8841382F2364778F4F5E465AFA79AC4ECB8C7(L_49, (uint8_t)((int32_t)246), /*hidden argument*/NULL);
		__this->set_playerTtl_4(((*(int32_t*)((int32_t*)UnBox(L_50, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_01a4:
	{
		// this.customProperties.MergeStringKeys(propertiesToCache);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_51 = __this->get_customProperties_1();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_52 = ___propertiesToCache0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_mE39680404E703BD165F84EF78D7E08A2DF203105(L_51, L_52, /*hidden argument*/NULL);
		// this.customProperties.StripKeysWithNullValues();
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_53 = __this->get_customProperties_1();
		Extensions_StripKeysWithNullValues_m9D8A495B729965C8AB15FB81082073CDB945B686(L_53, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_m5EC778AE095E58AFA3A9D52F267F85A65A732E0E (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_mC0A95ADCF711835B0C695844D5BF19226EF0DCA6 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___value0;
		__this->set_isVisible_0(L_0);
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_mFDA9D97177BC7D1DF5A742640881012C1C22BEF4 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsOpen_m76BB29F06F0FF60D50ECA66D59D89354BFDD8F5B (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = ___value0;
		__this->set_isOpen_1(L_0);
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_CleanupCacheOnLeave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_CleanupCacheOnLeave_m255DA67481E9203BC0CE7788D08C4109C4115CE8 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = __this->get_cleanupCacheOnLeave_5();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_CleanupCacheOnLeave(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_CleanupCacheOnLeave_m420AE587984BE3EC583E008D6DF285FD8A708D33 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeave_5(L_0);
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressRoomEvents_m66C9A3354316E353ED247DC10DBBDED034083D4E (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressRoomEvents_m995E9F193F30D7FF990FDBB438722601386DECA5 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressPlayerInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressPlayerInfo_m4563DF29678C32315C7A69003B540A2FCA8556B9 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; set; }
		bool L_0 = __this->get_U3CSuppressPlayerInfoU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressPlayerInfo_mB9312CD3F4520F120F4C8624F5ECB956376E9A4E (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_PublishUserId_mB7BFB7CC3946C51C8C840DD6452E5847F5860AB4 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_mE998E9DDB1E13BF5ED8CCF07F1D70799B1750667 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_DeleteNullProperties_m65FEEFEAE5169DE4D06DB868F53D866CD9FE5F6F (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_DeleteNullProperties_m08FCFFEC2C8F9BC20366282F619B29D1EC629C69 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_BroadcastPropsChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_BroadcastPropsChangeToAll_mD870A3DDCDBDC2250B182724ECA674DFDBB34DBA (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = __this->get_broadcastPropsChangeToAll_13();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_BroadcastPropsChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_BroadcastPropsChangeToAll_m9EBC9B0F976F57FC954AD24E529A8AB075105B6B (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = ___value0;
		__this->set_broadcastPropsChangeToAll_13(L_0);
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		return;
	}
}
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isVisible = true;
		__this->set_isVisible_0((bool)1);
		// private bool isOpen = true;
		__this->set_isOpen_1((bool)1);
		// private bool cleanupCacheOnLeave = true;
		__this->set_cleanupCacheOnLeave_5((bool)1);
		// public string[] CustomRoomPropertiesForLobby = new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_CustomRoomPropertiesForLobby_7(L_0);
		// private bool broadcastPropsChangeToAll = true;
		__this->set_broadcastPropsChangeToAll_13((bool)1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * SupportLogger_get_Client_m1CC6DAAAC1C8298BD6D6DE2B8B1A96013941C3EB (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.client; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_5();
		return L_0;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_mFF619F21AB932F0393D15181428B1446665435BC (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___value0, const RuntimeMethod* method)
{
	{
		// if (this.client != value)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_5();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = ___value0;
		if ((((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_0) == ((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2 = __this->get_client_5();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3 = __this->get_client_5();
		NullCheck(L_3);
		LoadBalancingClient_RemoveCallbackTarget_m01EE49F15436A959BFD296AA9984404ECA25D369(L_3, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// this.client = value;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_4 = ___value0;
		__this->set_client_5(L_4);
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_5();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = __this->get_client_5();
		NullCheck(L_6);
		LoadBalancingClient_AddCallbackTarget_mF16F409FFF0E613D334D999BF6EAA126F090F154(L_6, __this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_mA500C841AF1CE588565C2B21BFB4D720B811483F (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.LogBasics();
		SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0(__this, /*hidden argument*/NULL);
		// if (this.startStopwatch == null)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_startStopwatch_6();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_1, /*hidden argument*/NULL);
		__this->set_startStopwatch_6(L_1);
		// this.startStopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_2 = __this->get_startStopwatch_6();
		NullCheck(L_2);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDestroy_m5AB26EE44EAA48E395EFEF1BD81FCE474E1DD92C (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	{
		// this.Client = null; // will remove this SupportLogger as callback target
		SupportLogger_set_Client_mFF619F21AB932F0393D15181428B1446665435BC(__this, (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m9F4B4E7C83B3084F6DB3CD9E5AC1B87F816B86DC (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	RuntimeObject * G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	{
		// if (!this.initialOnApplicationPauseSkipped)
		bool L_0 = __this->get_initialOnApplicationPauseSkipped_7();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// this.initialOnApplicationPauseSkipped = true;
		__this->set_initialOnApplicationPauseSkipped_7((bool)1);
		// return;
		return;
	}

IL_0010:
	{
		// Debug.Log(string.Format("{0} SupportLogger OnApplicationPause({1}). Client: {2}.", this.GetFormattedTimestamp(), pause, this.client == null ? "null" : this.client.State.ToString()));
		String_t* L_1;
		L_1 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		bool L_2 = ___pause0;
		bool L_3 = L_2;
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_5();
		G_B3_0 = L_4;
		G_B3_1 = L_1;
		G_B3_2 = _stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78;
		if (!L_5)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_1;
			G_B4_2 = _stringLiteral364A88210A85FAC1C4DEFDD902B8419D61C4EC78;
			goto IL_0044;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = __this->get_client_5();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_0 = *(int32_t*)UnBox(L_8);
		G_B5_0 = L_9;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0049;
	}

IL_0044:
	{
		G_B5_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0049:
	{
		String_t* L_10;
		L_10 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(G_B5_3, G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_mD48621E599EF3B5FD1603ED763A71B1A7512E598 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, (10.0f), (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, (0.5f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B336DD36B50FB46EDCCA9BA800A47C91B64279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.startStopwatch == null)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_startStopwatch_6();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_1, /*hidden argument*/NULL);
		__this->set_startStopwatch_6(L_1);
		// this.startStopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_2 = __this->get_startStopwatch_6();
		NullCheck(L_2);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// TimeSpan span = this.startStopwatch.Elapsed;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_startStopwatch_6();
		NullCheck(L_3);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_4;
		L_4 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (span.Minutes > 0)
		int32_t L_5;
		L_5 = TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// return string.Format("[{0}:{1}.{1}]", span.Minutes, span.Seconds, span.Milliseconds);
		int32_t L_6;
		L_6 = TimeSpan_get_Minutes_mF5A78108FEB64953C298CEC19637378380881202((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9;
		L_9 = TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral39B336DD36B50FB46EDCCA9BA800A47C91B64279, L_8, L_11, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0063:
	{
		// return string.Format("[{0}.{1}]", span.Seconds, span.Milliseconds);
		int32_t L_16;
		L_16 = TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19;
		L_19 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F, L_18, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_m70D4240C8A119A9F6A260E068D85D146DFFD6380 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_5();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = __this->get_client_5();
		NullCheck(L_1);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_2;
		L_2 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PhotonPeer_get_RoundTripTime_m4BE806CA6663FD85775A0737E6025652517FABC6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (currentRtt > this.pingMax)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_pingMax_8();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_6 = V_0;
		__this->set_pingMax_8(L_6);
	}

IL_0029:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_pingMin_9();
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_9 = V_0;
		__this->set_pingMin_9(L_9);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5B274AC719B863CB0A2DA066BD69F873B190F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_5();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = __this->get_client_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline(L_1, /*hidden argument*/NULL);
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
		// if (this.LogTrafficStats)
		bool L_3 = __this->get_LogTrafficStats_4();
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		// Debug.Log(string.Format("{0} SupportLogger {1} Ping min/max: {2}/{3}", this.GetFormattedTimestamp() , this.client.LoadBalancingPeer.VitalStatsToString(false) , this.pingMin , this.pingMax));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		String_t* L_6;
		L_6 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_8 = __this->get_client_5();
		NullCheck(L_8);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_9;
		L_9 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = PhotonPeer_VitalStatsToString_mEF2B0877FD0A622995A7CB042CB501C5E2ABA888(L_9, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = __this->get_pingMin_9();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		int32_t L_16 = __this->get_pingMax_8();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		String_t* L_19;
		L_19 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral8E5B274AC719B863CB0A2DA066BD69F873B190F6, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A237664FCA59B03D60331058EF83BB83DB96F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCADE992351A796143F5F5164E100121E1080BF4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9E5192EBC7274833C57CDADEBF297584EA1559B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B11_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	StringBuilder_t * G_B11_4 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B10_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	StringBuilder_t * G_B10_4 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B12_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B12_3 = NULL;
	String_t* G_B12_4 = NULL;
	StringBuilder_t * G_B12_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_5();
		if (!L_0)
		{
			goto IL_0267;
		}
	}
	{
		// List<string> buildProperties = new List<string>(10);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B(L_1, ((int32_t)10), /*hidden argument*/List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		V_0 = L_1;
		// buildProperties.Add(Application.unityVersion);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = V_0;
		String_t* L_3;
		L_3 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, L_3, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add(Application.platform.ToString());
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = V_0;
		int32_t L_5;
		L_5 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_3 = L_5;
		RuntimeObject * L_6 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_3 = *(int32_t*)UnBox(L_6);
		NullCheck(L_4);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_4, L_7, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add("ENABLE_IL2CPP");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = V_0;
		NullCheck(L_8);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_8, _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add("NET_4_6");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_9, _stringLiteralD9E5192EBC7274833C57CDADEBF297584EA1559B, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		// string appIdShort = string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8 ? this.client.AppId : string.Concat(this.client.AppId.Substring(0, 8), "***");
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_11 = __this->get_client_5();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_14 = __this->get_client_5();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_17 = __this->get_client_5();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_18, 0, 8, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_19, _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, /*hidden argument*/NULL);
		G_B5_0 = L_20;
		goto IL_00a1;
	}

IL_0096:
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_21 = __this->get_client_5();
		NullCheck(L_21);
		String_t* L_22;
		L_22 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_21, /*hidden argument*/NULL);
		G_B5_0 = L_22;
	}

IL_00a1:
	{
		V_2 = G_B5_0;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t * L_23 = V_1;
		String_t* L_24;
		L_24 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_23, _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746, L_24, /*hidden argument*/NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" Client: v{2} ({4}) Build: {3} ", appIdShort, this.client.AppVersion, PhotonPeer.Version, string.Join(", ", buildProperties.ToArray()), this.client.LoadBalancingPeer.TargetFramework);
		StringBuilder_t * L_26 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
		String_t* L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_28;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_31 = __this->get_client_5();
		NullCheck(L_31);
		String_t* L_32;
		L_32 = LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_30;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = PhotonPeer_get_Version_m0C4F07C539524A3EB5D9A04F835CB7ACDA9CDB56(/*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_34);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_33;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_36 = V_0;
		NullCheck(L_36);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37;
		L_37 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_36, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		String_t* L_38;
		L_38 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_38);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_35;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_40 = __this->get_client_5();
		NullCheck(L_40);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_41;
		L_41 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_41)->get_TargetFramework_8();
		int32_t L_43 = L_42;
		RuntimeObject * L_44 = Box(TargetFrameworks_t592010E4B1A63EFA572B176E0FD4AFFF7EFE9CF2_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_44);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_44);
		NullCheck(L_26);
		StringBuilder_t * L_45;
		L_45 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_26, _stringLiteral9A237664FCA59B03D60331058EF83BB83DB96F01, L_39, /*hidden argument*/NULL);
		// if (this.client != null && this.client.LoadBalancingPeer != null && this.client.LoadBalancingPeer.SocketImplementation != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_46 = __this->get_client_5();
		if (!L_46)
		{
			goto IL_0159;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_47 = __this->get_client_5();
		NullCheck(L_47);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_48;
		L_48 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0159;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_49 = __this->get_client_5();
		NullCheck(L_49);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_50;
		L_50 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Type_t * L_51;
		L_51 = PhotonPeer_get_SocketImplementation_m1D425EDAA1A9BC1D4DA44C291C097FC607A8BCA6_inline(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_51, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0159;
		}
	}
	{
		// sb.AppendFormat("Socket: {0} ", this.client.LoadBalancingPeer.SocketImplementation.Name);
		StringBuilder_t * L_53 = V_1;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_54 = __this->get_client_5();
		NullCheck(L_54);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_55;
		L_55 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		Type_t * L_56;
		L_56 = PhotonPeer_get_SocketImplementation_m1D425EDAA1A9BC1D4DA44C291C097FC607A8BCA6_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_56);
		NullCheck(L_53);
		StringBuilder_t * L_58;
		L_58 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_53, _stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418, L_57, /*hidden argument*/NULL);
	}

IL_0159:
	{
		// sb.AppendFormat("UserId: \"{0}\" AuthType: {1} AuthMode: {2} {3} ", this.client.UserId, (this.client.AuthValues != null) ? this.client.AuthValues.AuthType.ToString() : "N/A", this.client.AuthMode, this.client.EncryptionMode);
		StringBuilder_t * L_59 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_60;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_62 = __this->get_client_5();
		NullCheck(L_62);
		String_t* L_63;
		L_63 = LoadBalancingClient_get_UserId_m8523275C4DFFEE75877514FF4022A2EF2C2D944E(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_63);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = L_61;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_65 = __this->get_client_5();
		NullCheck(L_65);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_66;
		L_66 = LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline(L_65, /*hidden argument*/NULL);
		G_B10_0 = 1;
		G_B10_1 = L_64;
		G_B10_2 = L_64;
		G_B10_3 = _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
		G_B10_4 = L_59;
		if (L_66)
		{
			G_B11_0 = 1;
			G_B11_1 = L_64;
			G_B11_2 = L_64;
			G_B11_3 = _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
			G_B11_4 = L_59;
			goto IL_0189;
		}
	}
	{
		G_B12_0 = _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_01a8;
	}

IL_0189:
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_67 = __this->get_client_5();
		NullCheck(L_67);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_68;
		L_68 = LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		uint8_t L_69;
		L_69 = AuthenticationValues_get_AuthType_mF05C38D7A0CBE9ADFFBF74C829A1E98373E635BE_inline(L_68, /*hidden argument*/NULL);
		V_4 = L_69;
		RuntimeObject * L_70 = Box(CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		V_4 = *(uint8_t*)UnBox(L_70);
		G_B12_0 = L_71;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_01a8:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (RuntimeObject *)G_B12_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = G_B12_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_73 = __this->get_client_5();
		NullCheck(L_73);
		int32_t L_74 = L_73->get_AuthMode_5();
		int32_t L_75 = L_74;
		RuntimeObject * L_76 = Box(AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_76);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_76);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_77 = L_72;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_78 = __this->get_client_5();
		NullCheck(L_78);
		int32_t L_79 = L_78->get_EncryptionMode_6();
		int32_t L_80 = L_79;
		RuntimeObject * L_81 = Box(EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_81);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_81);
		NullCheck(G_B12_5);
		StringBuilder_t * L_82;
		L_82 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(G_B12_5, G_B12_4, L_77, /*hidden argument*/NULL);
		// sb.AppendFormat("State: {0} ", this.client.State);
		StringBuilder_t * L_83 = V_1;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_84 = __this->get_client_5();
		NullCheck(L_84);
		int32_t L_85;
		L_85 = LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline(L_84, /*hidden argument*/NULL);
		int32_t L_86 = L_85;
		RuntimeObject * L_87 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, &L_86);
		NullCheck(L_83);
		StringBuilder_t * L_88;
		L_88 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_83, _stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03, L_87, /*hidden argument*/NULL);
		// sb.AppendFormat("PeerID: {0} ", this.client.LoadBalancingPeer.PeerID);
		StringBuilder_t * L_89 = V_1;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_90 = __this->get_client_5();
		NullCheck(L_90);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_91;
		L_91 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_92;
		L_92 = PhotonPeer_get_PeerID_mEAAC1128043EFDF01A2E2C7BED3B420F211305A3(L_91, /*hidden argument*/NULL);
		NullCheck(L_89);
		StringBuilder_t * L_93;
		L_93 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_89, _stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56, L_92, /*hidden argument*/NULL);
		// sb.AppendFormat("NameServer: {0} Current Server: {1} IP: {2} Region: {3} ", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion);
		StringBuilder_t * L_94 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_96 = L_95;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_97 = __this->get_client_5();
		NullCheck(L_97);
		String_t* L_98 = L_97->get_NameServerHost_10();
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_98);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_99 = L_96;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_100 = __this->get_client_5();
		NullCheck(L_100);
		String_t* L_101;
		L_101 = LoadBalancingClient_get_CurrentServerAddress_m340A40F8C31A54CCBFF4123A14615C55052DA56F(L_100, /*hidden argument*/NULL);
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_101);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_102 = L_99;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_103 = __this->get_client_5();
		NullCheck(L_103);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_104;
		L_104 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		String_t* L_105;
		L_105 = PhotonPeer_get_ServerIpAddress_mD1B46D4482C3ACA4FF443A604882198C628BAC82(L_104, /*hidden argument*/NULL);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_105);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_105);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_106 = L_102;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_107 = __this->get_client_5();
		NullCheck(L_107);
		String_t* L_108;
		L_108 = LoadBalancingClient_get_CloudRegion_m08A780475DA96A78E6D982816DB4002A149BB1AA_inline(L_107, /*hidden argument*/NULL);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_108);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_108);
		NullCheck(L_94);
		StringBuilder_t * L_109;
		L_109 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_94, _stringLiteralCADE992351A796143F5F5164E100121E1080BF4C, L_106, /*hidden argument*/NULL);
		// Debug.LogWarning(sb.ToString());
		StringBuilder_t * L_110 = V_1;
		NullCheck(L_110);
		String_t* L_111;
		L_111 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_110);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_111, /*hidden argument*/NULL);
	}

IL_0267:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_m84F8E9098FB782DCC7618BF8366F14E27722A215 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// this.pingMax = 0;
		__this->set_pingMax_8(0);
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2 = __this->get_client_5();
		NullCheck(L_2);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_3;
		L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PhotonPeer_get_RoundTripTime_m4BE806CA6663FD85775A0737E6025652517FABC6(L_3, /*hidden argument*/NULL);
		__this->set_pingMin_9(L_4);
		// this.LogBasics();
		SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0(__this, /*hidden argument*/NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->get_LogTrafficStats_4();
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = __this->get_client_5();
		NullCheck(L_6);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_7;
		L_7 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		PhotonPeer_set_TrafficStatsEnabled_mD9AFE8CC8BDB6F3E900504F4C916E759DB6FF1E5(L_7, (bool)0, /*hidden argument*/NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_8 = __this->get_client_5();
		NullCheck(L_8);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_9;
		L_9 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		PhotonPeer_set_TrafficStatsEnabled_mD9AFE8CC8BDB6F3E900504F4C916E759DB6FF1E5(L_9, (bool)1, /*hidden argument*/NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_m7299BA991B045F872A896E03FAB0C3506D2025FD (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_m351F906619FC2A79BACC9AD59CF7DF831ADF481A (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C * ___friendList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_m1A22E5B0E1E641661CEAF864CC4F4A7EE6B88F0E (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580);
		s_Il2CppMethodInitialized = true;
	}
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = __this->get_client_5();
		NullCheck(L_1);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_2;
		L_2 = LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline(L_1, /*hidden argument*/NULL);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
			G_B2_2 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0022:
	{
		String_t* L_5;
		L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m507D4D4867913D803EF2D03DEF8578CD4D79C50C (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_mA4C255E899B64DAE0E4B1454A6DF58ACA6BF5AE1 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_m8CF4F76507EFEA86FE5984D7572DC66E44C20022((int16_t*)(&___returnCode0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_m9507DE2EFFC4B9FEDE58D06A44ACC2A062BA230A (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		s_Il2CppMethodInitialized = true;
	}
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral01551127791BB14934414B8428B67FD51B390033);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_5();
		NullCheck(L_5);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_5, /*hidden argument*/NULL);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 2;
		G_B1_2 = L_4;
		G_B1_3 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 2;
			G_B2_2 = L_4;
			G_B2_3 = L_4;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0030:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_11 = __this->get_client_5();
		NullCheck(L_11);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_12;
		L_12 = LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline(L_11, /*hidden argument*/NULL);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = 4;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = 4;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_004d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0052;
	}

IL_004d:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0052:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = G_B6_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_17 = __this->get_client_5();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_m18CA0D929AF2DE6612CCD197C06F0FFBDD3F2143 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRoomFailed(" + returnCode+","+message+").");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_m8CF4F76507EFEA86FE5984D7572DC66E44C20022((int16_t*)(&___returnCode0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_m2A52D7C7D70A4AB3AB20E5266F2444F2DC50B6A9 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_m8CF4F76507EFEA86FE5984D7572DC66E44C20022((int16_t*)(&___returnCode0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_mFF53519317C4E9B1A60E6061B0093FBD773B65DA (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		s_Il2CppMethodInitialized = true;
	}
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_5();
		NullCheck(L_5);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_5, /*hidden argument*/NULL);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 2;
		G_B1_2 = L_4;
		G_B1_3 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 2;
			G_B2_2 = L_4;
			G_B2_3 = L_4;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0030:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_11 = __this->get_client_5();
		NullCheck(L_11);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_12;
		L_12 = LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline(L_11, /*hidden argument*/NULL);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = 4;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = 4;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_004d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0052;
	}

IL_004d:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0052:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = G_B6_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_17 = __this->get_client_5();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m890242142B105A919069C56017907EF53BE305A7 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_mC523FAAAF83506E251370ECE71A379C6C352E6C7 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40(__this, /*hidden argument*/NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8(__this, /*hidden argument*/NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = Box(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var, (&___cause0));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		___cause0 = *(int32_t*)UnBox(L_1);
		String_t* L_3;
		L_3 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0(__this, /*hidden argument*/NULL);
		// this.LogStats();
		SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_m23F342AFB60871B4F34FCD0430A1BC1DB9EEFCB7 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_mA1A82F024F737C3A6CD00FC42BDB1ECCD333A5AA (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * ___roomList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_inline(L_1, /*hidden argument*/List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m6F88CFF775D90BC9C71F679B6979AA26EDF892B3 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___newPlayer0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_mAC299453BB544A5663DA7AEA8DB90D31BD9DD00F (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___otherPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___otherPlayer0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_m39AA8554C36C4B785CEDDD678844D0F53BE51BB9 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___propertiesThatChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_m77238AF5AE9D03837620AAE875A9068C73B8C5D4 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___targetPlayer0, Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___changedProps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_mE4540E17E04127240F1C1E97EB5E2EBB9A351DC6 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newMasterClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___newMasterClient0;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_mF799DBCE871603F369CF30359C40DAEFDB556643 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m54D21C3901F6D84C80D558B31ED564F7B6FC46A1 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356, L_1, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_m94EC3C6A7052B4C2E0337CEA3C69013DF491652B (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m233D66E34EBDD77343A1EB757284DB58B853DDAE (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80 * ___errorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80 * L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_m72FA807E9CDEA4877396F11164A8C472B2BABF4D (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	{
		// public bool LogTrafficStats = true;
		__this->set_LogTrafficStats_4((bool)1);
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
// System.Boolean Photon.Realtime.TypedLobby::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedLobby_get_IsDefault_mB9553F45B8B6611CDC3B3DDC8BF37690D0731FF2 (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		String_t* L_0 = __this->get_Name_0();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54 (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method)
{
	{
		// internal TypedLobby()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor(System.String,Photon.Realtime.LobbyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m7891CDB10F260006D35FA9FE297FA8706162413C (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, String_t* ___name0, uint8_t ___type1, const RuntimeMethod* method)
{
	{
		// public TypedLobby(string name, LobbyType type)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		// this.Type = type;
		uint8_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		// }
		return;
	}
}
// System.String Photon.Realtime.TypedLobby::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobby_ToString_m7969239ABC7C2D9BA6E830E2ED9741E32CAE671A (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271CB9743B301F4C7123339F6C43C77525F17510);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("lobby '{0}'[{1}]", this.Name, this.Type);
		String_t* L_0 = __this->get_Name_0();
		uint8_t L_1 = __this->get_Type_1();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral271CB9743B301F4C7123339F6C43C77525F17510, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Photon.Realtime.TypedLobby::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__cctor_mD99DB5A8542C7C2454BD81258B8D142C36CA5B11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TypedLobby Default = new TypedLobby();
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_0 = (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)il2cpp_codegen_object_new(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54(L_0, /*hidden argument*/NULL);
		((TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_StaticFields*)il2cpp_codegen_static_fields_for(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.String Photon.Realtime.TypedLobbyInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobbyInfo_ToString_m70F91EE56E7C30855838F634BE734867150508CF (TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B7AAEA9F105BC899930B342A7753298A5FCFB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("TypedLobbyInfo '{0}'[{1}] rooms: {2} players: {3}", this.Name, this.Type, this.RoomCount, this.PlayerCount);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ((TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)__this)->get_Name_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		uint8_t L_4 = ((TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)__this)->get_Type_1();
		uint8_t L_5 = L_4;
		RuntimeObject * L_6 = Box(LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		int32_t L_8 = __this->get_RoomCount_4();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = __this->get_PlayerCount_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral72B7AAEA9F105BC899930B342A7753298A5FCFB2, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Photon.Realtime.TypedLobbyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobbyInfo__ctor_m109F691269CA136A7BDD12081CE781E7CE20DB01 (TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_m71FA5BD603071C70928E949A372AAE1E402D16F5 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_HttpForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_HttpForward_mD5BE64F3F0E97FAAD77C7D60FF2AD96D5700A3E6 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= HttpForwardConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)1)))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte) (WebhookFlags & ~(1 << 0));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendAuthCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendAuthCookie_mF411FCD3608EF467958612D9B635877D4582AD57 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendAuthCookie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendAuthCookie_m147C1B1C90D27D6877320C382347216D05DE0AF7 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendAuthCookieConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)2)))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 1));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendSync_mB34C891F1E37E6989DFE2C7ECA9F7D637308AB66 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendSync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendSync_m1DE629A4CBBA6141A5A60A463C9D21E4EE2065BF (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendSyncConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)4)))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 2));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendState_mB7E9008FB48768C6AA57D621F557C624DCD183F7 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendState_mD00900C2C81235351F98A2FB00545F3E4D1DB064 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendStateConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)8)))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 3));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-9))))));
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_m364837F07C4F1083993B5DE05D3896D7D3D85798 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method)
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->set_WebhookFlags_1(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m6582F6663189E7F2817615A3B1C51426C6E0D3EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * L_0 = (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)il2cpp_codegen_object_new(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var);
		WebFlags__ctor_m364837F07C4F1083993B5DE05D3896D7D3D85798(L_0, (uint8_t)0, /*hidden argument*/NULL);
		((WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Realtime.WebRpcCallbacksContainer::.ctor(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer__ctor_m138DDD1BFA950BFD2C9F40409B8CC7EE0EA0E3F9 (WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRpcCallbacksContainer(LoadBalancingClient client)
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_il2cpp_TypeInfo_var);
		List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED(__this, /*hidden argument*/List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED_RuntimeMethod_var);
		// this.client = client;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = ___client0;
		__this->set_client_6(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebRpcCallbacksContainer::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer_OnWebRpcResponse_mC0BE3C4F905D8047085D16DFDB28B7C7609B77C5 (WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * __this, OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// this.client.UpdateCallbackTargets();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		NullCheck(L_0);
		LoadBalancingClient_UpdateCallbackTargets_mB089FFBCC8CA2649A2C41B037602FB6C339DA0FC(L_0, /*hidden argument*/NULL);
		// foreach (IWebRpcCallback target in this)
		Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  L_1;
		L_1 = List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45(__this, /*hidden argument*/List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0014:
		{
			// foreach (IWebRpcCallback target in this)
			RuntimeObject* L_2;
			L_2 = Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_inline((Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_RuntimeMethod_var);
			// target.OnWebRpcResponse(response);
			OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_3 = ___response0;
			NullCheck(L_2);
			InterfaceActionInvoker1< OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * >::Invoke(0 /* System.Void Photon.Realtime.IWebRpcCallback::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse) */, IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910_il2cpp_TypeInfo_var, L_2, L_3);
		}

IL_0021:
		{
			// foreach (IWebRpcCallback target in this)
			bool L_4;
			L_4 = Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC((Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0014;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135((Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ReturnCode_m7E83B042C1F0F384014A44B8833C205AF16BCE3B (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// get { return ResultCode; }
		int32_t L_0;
		L_0 = WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_DebugMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_DebugMessage_mAEED2DE44713D9E43403AD5FB9838E6FDCC7D383 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// get { return Message; }
		String_t* L_0;
		L_0 = WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_m9710184A52A501231BB729C5BC16D34A8AE4BB1E (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_0 = ___response0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		bool L_2;
		L_2 = ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740(L_1, (uint8_t)((int32_t)209), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject * L_3 = V_0;
		WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0026:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline(__this, (-1), /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_4 = ___response0;
		NullCheck(L_4);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_5 = L_4->get_Parameters_3();
		NullCheck(L_5);
		bool L_6;
		L_6 = ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740(L_5, (uint8_t)((int32_t)207), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject * L_7 = V_0;
		WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_7, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_8 = ___response0;
		NullCheck(L_8);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_9 = L_8->get_Parameters_3();
		NullCheck(L_9);
		bool L_10;
		L_10 = ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740(L_9, (uint8_t)((int32_t)208), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject * L_11 = V_0;
		WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5_inline(__this, ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_11, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_006d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_12 = ___response0;
		NullCheck(L_12);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_13 = L_12->get_Parameters_3();
		NullCheck(L_13);
		bool L_14;
		L_14 = ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740(L_13, (uint8_t)((int32_t)206), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject * L_15 = V_0;
		WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_ToStringFull_m336F40AFCBE6062048E7BB5EB7A0F35C397AA129 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111D994A41187DCF854E2098345172E28925CD36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}={2}: {1} \"{3}\"", this.Name, SupportClass.DictionaryToString(this.Parameters), this.ResultCode, this.Message);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2;
		L_2 = WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4;
		L_4 = WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SupportClass_DictionaryToString_mDB4BACD77D0D06675D2DF03185990CEC7219B720(L_4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_3;
		int32_t L_7;
		L_7 = WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		String_t* L_11;
		L_11 = WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12;
		L_12 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral111D994A41187DCF854E2098345172E28925CD36, L_10, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Photon.Realtime.LoadBalancingClient/CallbackTargetChange::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackTargetChange__ctor_m38618088F168E8FE0E6685577BF988410F072864 (CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012 * __this, RuntimeObject * ___target0, bool ___addTarget1, const RuntimeMethod* method)
{
	{
		// public CallbackTargetChange(object target, bool addTarget)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Target = target;
		RuntimeObject * L_0 = ___target0;
		__this->set_Target_0(L_0);
		// this.AddTarget = addTarget;
		bool L_1 = ___addTarget1;
		__this->set_AddTarget_1(L_1);
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
// System.Void Photon.Realtime.LoadBalancingClient/EncryptionDataParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptionDataParameters__ctor_mF4BCDA3DD14EDBF0E6A213A6C9E5DD925BA8F94F (EncryptionDataParameters_tDF3DEF142EEA07FAC06E2DED344CB06BB9A07981 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Realtime.LoadBalancingPeer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2415133C1045F3307432FBDDE0AAB4A8E362EDCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * L_0 = (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 *)il2cpp_codegen_object_new(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6BD4A6F45A41995976A87A9D0C893E2023C8DFAA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Realtime.LoadBalancingPeer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6BD4A6F45A41995976A87A9D0C893E2023C8DFAA (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.ParameterDictionary Photon.Realtime.LoadBalancingPeer/<>c::<.ctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * U3CU3Ec_U3C_ctorU3Eb__4_0_m06CA8F24DB96900960AB4FCA7986333B95369536 (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new ParameterDictionary(),
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_0 = (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 *)il2cpp_codegen_object_new(ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1_il2cpp_TypeInfo_var);
		ParameterDictionary__ctor_m18836EBCD343BFA6A9145E8125D5015619B5E057(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Photon.Realtime.LoadBalancingPeer/<>c::<.ctor>b__4_1(ExitGames.Client.Photon.ParameterDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_1_m403D3EECD26EC7A2A4D2062534782C38972296FC (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * ___x0, const RuntimeMethod* method)
{
	{
		// x => x.Clear(),
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_0 = ___x0;
		NullCheck(L_0);
		ParameterDictionary_Clear_m592657E657F382537FBD38F087897B909ECD146C(L_0, /*hidden argument*/NULL);
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
// System.Void Photon.Realtime.RegionHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC06481CCCE3BEF4DF37B1346348AB89A9BADD1DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * L_0 = (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 *)il2cpp_codegen_object_new(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF7622690FDCA0B2F9AF7DCCF7567474C5AA7A1E6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Realtime.RegionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7622690FDCA0B2F9AF7DCCF7567474C5AA7A1E6 (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Photon.Realtime.RegionHandler/<>c::<get_BestRegion>b__8_0(Photon.Realtime.Region,Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_BestRegionU3Eb__8_0_m1AC1E7195D3E64B769C3237D6086BF7FE6051D54 (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * __this, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___a0, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// this.EnabledRegions.Sort((a, b) => a.Ping.CompareTo(b.Ping) );
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mC296F93C8F6437A0F4715E9440359C8FC9237016 (U3CU3Ec__DisplayClass23_0_tFB13EA639951321A04EC72EAEAB8DD2223576BB7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Realtime.RegionHandler/<>c__DisplayClass23_0::<PingMinimumOfRegions>b__0(Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3CPingMinimumOfRegionsU3Eb__0_m27AD0937D9EC80F239FF68225E8211250B13D312 (U3CU3Ec__DisplayClass23_0_tFB13EA639951321A04EC72EAEAB8DD2223576BB7 * __this, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___r0, const RuntimeMethod* method)
{
	{
		// Region preferred = this.EnabledRegions.Find(r => r.Code.Equals(prevBestRegionCode));
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_prevBestRegionCode_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegionPingCoroutineU3Ed__17__ctor_mFCAB6CCD4C7946AA15F45093923CD3ECFCE1446D (U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegionPingCoroutineU3Ed__17_System_IDisposable_Dispose_mDD378084025534176B79DE226DA82348D4300546 (U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegionPingCoroutineU3Ed__17_MoveNext_m1BDF12E5456D52DDACEA5032C29F9AF40D3DD0BA (U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Exception_t * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	Exception_t * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0113;
			}
			case 2:
			{
				goto IL_01ce;
			}
			case 3:
			{
				goto IL_0204;
			}
			case 4:
			{
				goto IL_0294;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// this.region.Ping = PingWhenFailed;
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_3 = V_1;
		NullCheck(L_3);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_4 = L_3->get_region_3();
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_5 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_PingWhenFailed_2();
		NullCheck(L_4);
		Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline(L_4, L_5, /*hidden argument*/NULL);
		// int rttSum = 0;
		__this->set_U3CrttSumU3E5__2_3(0);
		// int replyCount = 0;
		__this->set_U3CreplyCountU3E5__3_4(0);
		// Stopwatch sw = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_6 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_6, /*hidden argument*/NULL);
		__this->set_U3CswU3E5__4_5(L_6);
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_7 = V_1;
		NullCheck(L_7);
		L_7->set_CurrentAttempt_5(0);
		goto IL_0219;
	}

IL_0066:
	{
		// sw.Reset();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_8 = __this->get_U3CswU3E5__4_5();
		NullCheck(L_8);
		Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_8, /*hidden argument*/NULL);
		// sw.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_9 = __this->get_U3CswU3E5__4_5();
		NullCheck(L_9);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_9, /*hidden argument*/NULL);
	}

IL_007c:
	try
	{ // begin try (depth: 1)
		// this.ping.StartPing(this.regionAddress);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_10 = V_1;
		NullCheck(L_10);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_11 = L_10->get_ping_8();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_regionAddress_4();
		NullCheck(L_11);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean Photon.Realtime.PhotonPing::StartPing(System.String) */, L_11, L_13);
		// }
		goto IL_011a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0093;
		}
		throw e;
	}

CATCH_0093:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.Log("RegionPinger.RegionPingCoroutine() caught exception for ping.StartPing(). Exception: " + e + " Source: " + e.Source + " Message: " + e.Message);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral081781674D5A6E9A22CD7256891AB0178B984F8B)));
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral081781674D5A6E9A22CD7256891AB0178B984F8B)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
			Exception_t * L_18 = V_6;
			Exception_t * L_19 = L_18;
			G_B6_0 = L_19;
			G_B6_1 = 1;
			G_B6_2 = L_17;
			G_B6_3 = L_17;
			if (L_19)
			{
				G_B7_0 = L_19;
				G_B7_1 = 1;
				G_B7_2 = L_17;
				G_B7_3 = L_17;
				goto IL_00ae;
			}
		}

IL_00aa:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_00b3;
		}

IL_00ae:
		{
			NullCheck(G_B7_0);
			String_t* L_20;
			L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
			G_B8_0 = L_20;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
			G_B8_3 = G_B7_3;
		}

IL_00b3:
		{
			NullCheck(G_B8_2);
			ArrayElementTypeCheck (G_B8_2, G_B8_0);
			(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = G_B8_3;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1)));
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC887B4E0A467A6BA01B455BC69AFA2A62EE8A1)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
			Exception_t * L_23 = V_6;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_Source() */, L_23);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_24);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_24);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_22;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
			Exception_t * L_27 = V_6;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_27);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_28);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_28);
			String_t* L_29;
			L_29 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_29, /*hidden argument*/NULL);
			// break;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0229;
		}
	} // end catch (depth: 1)

IL_00e7:
	{
		// if (sw.ElapsedMilliseconds >= MaxMilliseconsPerPing)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_30 = __this->get_U3CswU3E5__4_5();
		NullCheck(L_30);
		int64_t L_31;
		L_31 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_32 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_1();
		if ((((int64_t)L_31) >= ((int64_t)((int64_t)((int64_t)L_32)))))
		{
			goto IL_0127;
		}
	}
	{
		// yield return new WaitForSecondsRealtime(0.01f); // keep this loop tight, to avoid adding local lag to rtt.
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_33 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_33, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0113:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_011a:
	{
		// while (!this.ping.Done())
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_34 = V_1;
		NullCheck(L_34);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_35 = L_34->get_ping_8();
		NullCheck(L_35);
		bool L_36;
		L_36 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Photon.Realtime.PhotonPing::Done() */, L_35);
		if (!L_36)
		{
			goto IL_00e7;
		}
	}

IL_0127:
	{
		// sw.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_37 = __this->get_U3CswU3E5__4_5();
		NullCheck(L_37);
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_37, /*hidden argument*/NULL);
		// int rtt = this.ping.Successful ? (int)sw.ElapsedMilliseconds : MaxMilliseconsPerPing; // if the reply didn't match the sent ping
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_38 = V_1;
		NullCheck(L_38);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_39 = L_38->get_ping_8();
		NullCheck(L_39);
		bool L_40 = L_39->get_Successful_1();
		if (L_40)
		{
			goto IL_0146;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_41 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_1();
		G_B16_0 = L_41;
		goto IL_0152;
	}

IL_0146:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_42 = __this->get_U3CswU3E5__4_5();
		NullCheck(L_42);
		int64_t L_43;
		L_43 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_42, /*hidden argument*/NULL);
		G_B16_0 = ((int32_t)((int32_t)L_43));
	}

IL_0152:
	{
		V_5 = G_B16_0;
		// this.rttResults.Add(rtt);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_44 = V_1;
		NullCheck(L_44);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_45 = L_44->get_rttResults_9();
		int32_t L_46 = V_5;
		NullCheck(L_45);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_45, L_46, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// rttSum += rtt;
		int32_t L_47 = __this->get_U3CrttSumU3E5__2_3();
		int32_t L_48 = V_5;
		__this->set_U3CrttSumU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48)));
		// replyCount++;
		int32_t L_49 = __this->get_U3CreplyCountU3E5__3_4();
		V_7 = L_49;
		int32_t L_50 = V_7;
		__this->set_U3CreplyCountU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)));
		// this.region.Ping = (int)((rttSum) / replyCount);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_51 = V_1;
		NullCheck(L_51);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_52 = L_51->get_region_3();
		int32_t L_53 = __this->get_U3CrttSumU3E5__2_3();
		int32_t L_54 = __this->get_U3CreplyCountU3E5__3_4();
		NullCheck(L_52);
		Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline(L_52, ((int32_t)((int32_t)L_53/(int32_t)L_54)), /*hidden argument*/NULL);
		// int i = 4;
		__this->set_U3CiU3E5__5_6(4);
		goto IL_01d5;
	}

IL_01a3:
	{
		// i--;
		int32_t L_55 = __this->get_U3CiU3E5__5_6();
		V_7 = L_55;
		int32_t L_56 = V_7;
		__this->set_U3CiU3E5__5_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1)));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_57 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_57, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_57);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01ce:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01d5:
	{
		// while (!this.ping.Done() && i > 0)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_58 = V_1;
		NullCheck(L_58);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_59 = L_58->get_ping_8();
		NullCheck(L_59);
		bool L_60;
		L_60 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Photon.Realtime.PhotonPing::Done() */, L_59);
		if (L_60)
		{
			goto IL_01eb;
		}
	}
	{
		int32_t L_61 = __this->get_U3CiU3E5__5_6();
		if ((((int32_t)L_61) > ((int32_t)0)))
		{
			goto IL_01a3;
		}
	}

IL_01eb:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_62 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_62, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_62);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0204:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_63 = V_1;
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_CurrentAttempt_5();
		NullCheck(L_63);
		L_63->set_CurrentAttempt_5(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1)));
	}

IL_0219:
	{
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_66 = V_1;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_CurrentAttempt_5();
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_68 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_Attempts_0();
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_0066;
		}
	}

IL_0229:
	{
		// this.Done = true;
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_69 = V_1;
		NullCheck(L_69);
		RegionPinger_set_Done_m24F52F5A80F1DBCE7FB49D542884D7D9060EB565_inline(L_69, (bool)1, /*hidden argument*/NULL);
		// this.ping.Dispose();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_70 = V_1;
		NullCheck(L_70);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_71 = L_70->get_ping_8();
		NullCheck(L_71);
		VirtActionInvoker0::Invoke(7 /* System.Void Photon.Realtime.PhotonPing::Dispose() */, L_71);
		// int bestRtt = this.rttResults.Min();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_72 = V_1;
		NullCheck(L_72);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_73 = L_72->get_rttResults_9();
		int32_t L_74;
		L_74 = Enumerable_Min_mF7108B5155FD1BC3BBD32511DCD8A0385EEEED9E(L_73, /*hidden argument*/NULL);
		V_2 = L_74;
		// int worstRtt = this.rttResults.Max();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_75 = V_1;
		NullCheck(L_75);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_76 = L_75->get_rttResults_9();
		int32_t L_77;
		L_77 = Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D(L_76, /*hidden argument*/NULL);
		V_3 = L_77;
		// int weighedRttSum = rttSum - worstRtt + bestRtt;
		int32_t L_78 = __this->get_U3CrttSumU3E5__2_3();
		int32_t L_79 = V_3;
		int32_t L_80 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)L_79)), (int32_t)L_80));
		// this.region.Ping = (int)(weighedRttSum / replyCount); // now, we can create a weighted ping value
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_81 = V_1;
		NullCheck(L_81);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_82 = L_81->get_region_3();
		int32_t L_83 = V_4;
		int32_t L_84 = __this->get_U3CreplyCountU3E5__3_4();
		NullCheck(L_82);
		Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline(L_82, ((int32_t)((int32_t)L_83/(int32_t)L_84)), /*hidden argument*/NULL);
		// this.onDoneCall(this.region);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_85 = V_1;
		NullCheck(L_85);
		Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * L_86 = L_85->get_onDoneCall_7();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_87 = V_1;
		NullCheck(L_87);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_88 = L_87->get_region_3();
		NullCheck(L_86);
		Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675(L_86, L_88, /*hidden argument*/Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675_RuntimeMethod_var);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0294:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegionPingCoroutineU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43D222E3205BA919E50A8D13003BBF5B8B3632DD (U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegionPingCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_mBA94391F874118785ECA17F7AFFF4D0E7C7EE0A8 (U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRegionPingCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_mBA94391F874118785ECA17F7AFFF4D0E7C7EE0A8_RuntimeMethod_var)));
	}
}
// System.Object Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegionPingCoroutineU3Ed__17_System_Collections_IEnumerator_get_Current_m5525EE32451512F68FF6F839817B9D67B24F10C1 (U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * Room_get_LoadBalancingClient_m1A37D0066F25A954C9B7441B08BA8BA28EBD633A_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_U3CLoadBalancingClientU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * Room_get_Players_m2987033E6E5512B1ACD26C2339A38CA1E7B42699_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// return this.players;
		Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * L_0 = __this->get_players_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_m5EC778AE095E58AFA3A9D52F267F85A65A732E0E_inline (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_mFDA9D97177BC7D1DF5A742640881012C1C22BEF4_inline (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_m713CA7B925BE579DE672122E90F710AC20C0FCB6_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m9DA2FAD43288E82D574C683A771B07AF5CEC1748_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m754DBACBDFA2A9B6C54FD4CF3B6F1BFAB3B5CBA9_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m06E6C6526F77CD919006270A70E57CCA86AD0994_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_m315E369F1958F04D18024D1A004E86C29C591523_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.customProperties;
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_0 = __this->get_customProperties_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_RoomReference_m0181097B3E0D62C1802A2AD808240BF7378D9577_inline (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___value0, const RuntimeMethod* method)
{
	{
		// protected internal Room RoomReference { get; set; }
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_0 = ___value0;
		__this->set_U3CRoomReferenceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_m8C3C4A530CB248B2233AE6B4B077E3A513F13A98_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// public int MasterClientId { get { return this.masterClientId; } }
		int32_t L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_masterClientId_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Room_get_ExpectedUsers_mA3C45B11F4A25D0F68770D64611AAE6E593C0E9E_inline (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)__this)->get_expectedUsers_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// return this.state;
		int32_t L_0 = __this->get_state_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_2();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_m1D425EDAA1A9BC1D4DA44C291C097FC607A8BCA6_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSocketImplementationU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mF05C38D7A0CBE9ADFFBF74C829A1E98373E635BE_inline (AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * __this, const RuntimeMethod* method)
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m08A780475DA96A78E6D982816DB4002A149BB1AA_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->get_U3CCloudRegionU3Ek__BackingField_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_0 = __this->get_U3CCurrentLobbyU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->get_U3CGameServerAddressU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method)
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = __this->get_U3CPingU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method)
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPingU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m24F52F5A80F1DBCE7FB49D542884D7D9060EB565_inline (RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Done { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDoneU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
