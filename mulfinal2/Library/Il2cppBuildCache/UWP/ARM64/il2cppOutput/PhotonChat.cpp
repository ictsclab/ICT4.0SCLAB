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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_t46E0CB9749CE0C3748396502EE561D22C64B62E3;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>
struct Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>
struct Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEqualityComparer_1_t8C11C0A3DFA6D240C250E3C105F88321668D277A;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct KeyCollection_t2D5133DD537F6899B5BBFD38E88CE1A90EBB7CB2;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct KeyCollection_t4AEE43E02B4A58212081D42AC7BAA8274C807579;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>
struct KeyCollection_tF67E566530050C89FC8B237CA40C2BC90B2389A6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_tE0D061AFBD3512CEAAEF389602C1648821ADFC8C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tBFC21A567EC730AB69DF98AC1F6BD7A602658396;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_tCCA89061874205243F7C5D50923D676971602702;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>
struct ValueCollection_t003FD8DEF3E72F7405FBEC6202B5D1DFDE5D7A95;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>[]
struct EntryU5BU5D_t67A6281767D8B79D0E9FEBE2703627DF098E2F43;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Type>[]
struct EntryU5BU5D_tD74D91727B19D2B80ADD1DA739FEA5D2031C6BDB;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>[]
struct EntryU5BU5D_t5EA70AE34DB8B815CABC81BE0317CFA1B90F2DDD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11;
// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t59F53E93830782FB6DDB2AFC3F76A84D66851822;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8;
// Photon.Chat.ChatChannel
struct ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A;
// Photon.Chat.ChatClient
struct ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF;
// Photon.Chat.ChatEventCode
struct ChatEventCode_t2202D7BECCED5FE88A4F8F75E70BDE66697093F4;
// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2AE46F42C34F7745F04E04373F6D62D77EC3D8EF;
// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t7122E95EB7C2C474001D425685D32A97EC02CB32;
// Photon.Chat.ChatPeer
struct ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Chat.ErrorCode
struct ErrorCode_tF5FB48D902FA1A185E7877F9E17236B8CDF5C113;
// ExitGames.Client.Photon.EventData
struct EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Chat.IChatClientListener
struct IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t742D4B76141EAB4626FDEBDA253B131A1BAE312E;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t146839F02C6023508DCE8313CF2DD0CD44C9C5BC;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD;
// Photon.Chat.ParameterCode
struct ParameterCode_t6FAB9ABF0A365CA1E0CA1730AC6266790F0C7151;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t629BA84F0883AAC25A96E268EE380E76751EF15C;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerStateValue_t1B38B1CEBBE42DED3748AB8B091391217EC98A4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05735D340DC6F0A0F9208712869EFC8065DB1040;
IL2CPP_EXTERN_C String_t* _stringLiteral07445570109C992757EB9C92D1E61BACF9E55F91;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5A4CDE2DD8CEA11EF5E3451DD217D6A15AD17D;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC6B861684EFBC6F7D7FAB8ED28E170565B09C6;
IL2CPP_EXTERN_C String_t* _stringLiteral14903F1665F1519144501C7CD4831F50EA3BD6F7;
IL2CPP_EXTERN_C String_t* _stringLiteral1605C9390111B876A1B670691E1A90A58C218D34;
IL2CPP_EXTERN_C String_t* _stringLiteral172E7126E04AAF6726B1FF8DE1B89DC2CE7B19CB;
IL2CPP_EXTERN_C String_t* _stringLiteral1778C9BC36C93CBA913DFA368A05534210106FD0;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE9B3CF5AE017754E39259FE1ECEDCE06CA1CBF;
IL2CPP_EXTERN_C String_t* _stringLiteral1F8B28CFFF704DB3769B10DBB3290A133248008A;
IL2CPP_EXTERN_C String_t* _stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628;
IL2CPP_EXTERN_C String_t* _stringLiteral28109F85CA80D67F72ADABF892ADE86ECA967B8C;
IL2CPP_EXTERN_C String_t* _stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785;
IL2CPP_EXTERN_C String_t* _stringLiteral3A92BECAEC51D53182904975AED07C4B2D68B774;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAD168215B6409DFD378F9C0FBE1D56E09E7BB9;
IL2CPP_EXTERN_C String_t* _stringLiteral42A6CA5262FE7F016760CB20C16434E6FB8F41F9;
IL2CPP_EXTERN_C String_t* _stringLiteral42AFA618414215017E02F8F7EC202AD435873C33;
IL2CPP_EXTERN_C String_t* _stringLiteral4481DFAA44A224ED937CFB9CFFB4AEA2435C0B68;
IL2CPP_EXTERN_C String_t* _stringLiteral46EDC735A64857CCBB54DA3A191D860CD77E4BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral4957F3CE2FF4C82ED66B5502CC44FA8717A4B529;
IL2CPP_EXTERN_C String_t* _stringLiteral54E8D47E4F8EF60373D0CB9FE4B271BF0F317D5C;
IL2CPP_EXTERN_C String_t* _stringLiteral55BE77744B85C109A578D5AB1BBDCE3460B55D03;
IL2CPP_EXTERN_C String_t* _stringLiteral56F4CE3D38299DE86F612B0D25AABE7291C45297;
IL2CPP_EXTERN_C String_t* _stringLiteral610AC17320941C760FFD5A2AAB296394668E096E;
IL2CPP_EXTERN_C String_t* _stringLiteral62A96FA0BD40BECCCDE57B87BAAD7344D196B1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral64F9D94F66B496B12E4135DCB8897AC320C6639C;
IL2CPP_EXTERN_C String_t* _stringLiteral68981F620708F9798BD0661A61FE7446FBE99BB1;
IL2CPP_EXTERN_C String_t* _stringLiteral68D7F8920CC9A5C9EB6CEA86D4BDEC243463A827;
IL2CPP_EXTERN_C String_t* _stringLiteral695E1FE878B0520A6C9E2F883C405378F3C8ED3F;
IL2CPP_EXTERN_C String_t* _stringLiteral6E14C99C5905C97FAA1BAD3AA2BB4F3DA6FA045B;
IL2CPP_EXTERN_C String_t* _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657;
IL2CPP_EXTERN_C String_t* _stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01;
IL2CPP_EXTERN_C String_t* _stringLiteral74935E070666FF5C1140D9B3C70DF02FD27A7B52;
IL2CPP_EXTERN_C String_t* _stringLiteral7526A376267BC0A823CE3D35016583D70B156712;
IL2CPP_EXTERN_C String_t* _stringLiteral77E3A5DFDF30AC18B4DB9AC5D034EFEA29F1AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C82A48E16CE752BFB1F18655003416C01CCB606;
IL2CPP_EXTERN_C String_t* _stringLiteral80E7CF73ABE78832F677B6B12A03A933ED22EDCE;
IL2CPP_EXTERN_C String_t* _stringLiteral84F3409D006A485853CE590C6F1C4AA00ABCA26F;
IL2CPP_EXTERN_C String_t* _stringLiteral85018838CBFFFF831100BA4A581064C1BA9AC7EE;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral906FAEAAB91B0A987113A33F7759502D4DB5D57B;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1A0DEF864EC040A24126B7A194105027A0D5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A3F6514E2CF8783CDAB372E72E9BCD8E42ADA3;
IL2CPP_EXTERN_C String_t* _stringLiteralA79561E1B5A82C6D02201984FF815A7AA4012C74;
IL2CPP_EXTERN_C String_t* _stringLiteralA82892C79BF7C320FA3BFB55413015A1377BBF81;
IL2CPP_EXTERN_C String_t* _stringLiteralA86D8D1F03036F57943C7BD6C7E29797408CE238;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralB521CAB8B7F8FEE2FF3D6340BCAF8DE9F95F9A66;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A0517E53F97847DA11954EC5BB6A0ABEB18E1F;
IL2CPP_EXTERN_C String_t* _stringLiteralC542CF71ADE21664A8CC512222D2769749604E30;
IL2CPP_EXTERN_C String_t* _stringLiteralCB68C7C4D22B75A2C98587E5B35395233B0F5BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A9AA74760549C6A732B0EC13F9519F26FC67E4;
IL2CPP_EXTERN_C String_t* _stringLiteralD54B5B3649F0373103D67B6B7A8A9F07DB0123C4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD847B3D35C89810672FAB55F56E8C4AA9705AC;
IL2CPP_EXTERN_C String_t* _stringLiteralDD40E444A09210A07CFBB05D9F7F4710084F5B77;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6A7CB87243568376528ACED2E19B84FDCE6A7C;
IL2CPP_EXTERN_C String_t* _stringLiteralE1838DC1CF507F5E0B8451D36D23E70F3222CC7F;
IL2CPP_EXTERN_C String_t* _stringLiteralE699C4CC364949CA52ACF808CE9CD98DA290FDF5;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E2E3F5DF3ABF46A5982E73A60F7A768AE2BD7D;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2EDCE0F75D698215106063C4484FB4DE0395E9;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6824010DE96FAEEDC5701C23C1377985B771A8;
IL2CPP_EXTERN_C String_t* _stringLiteralF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralF6F2030C05AC7B710C8B0CB6D94308D4BD9FB5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF7943DAD13F6480BF6073BD0C327DF2B8C0B5F24;
IL2CPP_EXTERN_C String_t* _stringLiteralF836C8AF47AFF33F1175FF955458D6180A087B6E;
IL2CPP_EXTERN_C String_t* _stringLiteralFADBBFF7D5071017209F0FAF588398FCC772AD53;
IL2CPP_EXTERN_C const RuntimeMethod* ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m97D1DE20583C36E7CC6E7E914F76D1616A24945F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m90394436701B5CE9EC78264B4842667B1D92D73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9E12D802B43642CE258E1894EDF0C0A4E609A025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4D1EBB08117EE40CFF71BA68433AEBF66BE90CFA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* ___entries_1;
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
	KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___entries_1)); }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___keys_7)); }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___values_8)); }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t67A6281767D8B79D0E9FEBE2703627DF098E2F43* ___entries_1;
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
	KeyCollection_t2D5133DD537F6899B5BBFD38E88CE1A90EBB7CB2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBFC21A567EC730AB69DF98AC1F6BD7A602658396 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___entries_1)); }
	inline EntryU5BU5D_t67A6281767D8B79D0E9FEBE2703627DF098E2F43* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t67A6281767D8B79D0E9FEBE2703627DF098E2F43** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t67A6281767D8B79D0E9FEBE2703627DF098E2F43* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___keys_7)); }
	inline KeyCollection_t2D5133DD537F6899B5BBFD38E88CE1A90EBB7CB2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2D5133DD537F6899B5BBFD38E88CE1A90EBB7CB2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2D5133DD537F6899B5BBFD38E88CE1A90EBB7CB2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ___values_8)); }
	inline ValueCollection_tBFC21A567EC730AB69DF98AC1F6BD7A602658396 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBFC21A567EC730AB69DF98AC1F6BD7A602658396 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBFC21A567EC730AB69DF98AC1F6BD7A602658396 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD74D91727B19D2B80ADD1DA739FEA5D2031C6BDB* ___entries_1;
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
	KeyCollection_t4AEE43E02B4A58212081D42AC7BAA8274C807579 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCCA89061874205243F7C5D50923D676971602702 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___entries_1)); }
	inline EntryU5BU5D_tD74D91727B19D2B80ADD1DA739FEA5D2031C6BDB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD74D91727B19D2B80ADD1DA739FEA5D2031C6BDB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD74D91727B19D2B80ADD1DA739FEA5D2031C6BDB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___keys_7)); }
	inline KeyCollection_t4AEE43E02B4A58212081D42AC7BAA8274C807579 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4AEE43E02B4A58212081D42AC7BAA8274C807579 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4AEE43E02B4A58212081D42AC7BAA8274C807579 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ___values_8)); }
	inline ValueCollection_tCCA89061874205243F7C5D50923D676971602702 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCCA89061874205243F7C5D50923D676971602702 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCCA89061874205243F7C5D50923D676971602702 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F, ____syncRoot_9)); }
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


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>
struct Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5EA70AE34DB8B815CABC81BE0317CFA1B90F2DDD* ___entries_1;
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
	KeyCollection_tF67E566530050C89FC8B237CA40C2BC90B2389A6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t003FD8DEF3E72F7405FBEC6202B5D1DFDE5D7A95 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___entries_1)); }
	inline EntryU5BU5D_t5EA70AE34DB8B815CABC81BE0317CFA1B90F2DDD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5EA70AE34DB8B815CABC81BE0317CFA1B90F2DDD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5EA70AE34DB8B815CABC81BE0317CFA1B90F2DDD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___keys_7)); }
	inline KeyCollection_tF67E566530050C89FC8B237CA40C2BC90B2389A6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF67E566530050C89FC8B237CA40C2BC90B2389A6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF67E566530050C89FC8B237CA40C2BC90B2389A6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ___values_8)); }
	inline ValueCollection_t003FD8DEF3E72F7405FBEC6202B5D1DFDE5D7A95 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t003FD8DEF3E72F7405FBEC6202B5D1DFDE5D7A95 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t003FD8DEF3E72F7405FBEC6202B5D1DFDE5D7A95 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE* ___entries_1;
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
	KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___entries_1)); }
	inline EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___keys_7)); }
	inline KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___values_8)); }
	inline ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ____syncRoot_9)); }
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


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
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

struct Il2CppArrayBounds;

// System.Array


// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChannelCreationOptions::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_1;
	// System.Int32 Photon.Chat.ChannelCreationOptions::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11, ___U3CPublishSubscribersU3Ek__BackingField_1)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_1() const { return ___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_1() { return &___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_1(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11, ___U3CMaxSubscribersU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_2() const { return ___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_2() { return &___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_2 = value;
	}
};

struct ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields
{
public:
	// Photon.Chat.ChannelCreationOptions Photon.Chat.ChannelCreationOptions::Default
	ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields, ___Default_0)); }
	inline ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * get_Default_0() const { return ___Default_0; }
	inline ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t59F53E93830782FB6DDB2AFC3F76A84D66851822  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatChannel
struct ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Int32 Photon.Chat.ChatChannel::ChannelID
	int32_t ___ChannelID_4;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_5;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___properties_7;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_8;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___Subscribers_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>> Photon.Chat.ChatChannel::usersProperties
	Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A * ___usersProperties_11;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Senders_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Senders_1), (void*)value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Messages_2)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Messages_2), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_ChannelID_4() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___ChannelID_4)); }
	inline int32_t get_ChannelID_4() const { return ___ChannelID_4; }
	inline int32_t* get_address_of_ChannelID_4() { return &___ChannelID_4; }
	inline void set_ChannelID_4(int32_t value)
	{
		___ChannelID_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CIsPrivateU3Ek__BackingField_5)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_5() const { return ___U3CIsPrivateU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_5() { return &___U3CIsPrivateU3Ek__BackingField_5; }
	inline void set_U3CIsPrivateU3Ek__BackingField_5(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLastMsgIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CLastMsgIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CLastMsgIdU3Ek__BackingField_6() const { return ___U3CLastMsgIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CLastMsgIdU3Ek__BackingField_6() { return &___U3CLastMsgIdU3Ek__BackingField_6; }
	inline void set_U3CLastMsgIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CLastMsgIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_properties_7() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___properties_7)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_properties_7() const { return ___properties_7; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_properties_7() { return &___properties_7; }
	inline void set_properties_7(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___properties_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CPublishSubscribersU3Ek__BackingField_8)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_8() const { return ___U3CPublishSubscribersU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_8() { return &___U3CPublishSubscribersU3Ek__BackingField_8; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_8(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CMaxSubscribersU3Ek__BackingField_9)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_9() const { return ___U3CMaxSubscribersU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_9() { return &___U3CMaxSubscribersU3Ek__BackingField_9; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_9(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_Subscribers_10() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Subscribers_10)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_Subscribers_10() const { return ___Subscribers_10; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_Subscribers_10() { return &___Subscribers_10; }
	inline void set_Subscribers_10(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___Subscribers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subscribers_10), (void*)value);
	}

	inline static int32_t get_offset_of_usersProperties_11() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___usersProperties_11)); }
	inline Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A * get_usersProperties_11() const { return ___usersProperties_11; }
	inline Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A ** get_address_of_usersProperties_11() { return &___usersProperties_11; }
	inline void set_usersProperties_11(Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A * value)
	{
		___usersProperties_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usersProperties_11), (void*)value);
	}
};


// Photon.Chat.ChatEventCode
struct ChatEventCode_t2202D7BECCED5FE88A4F8F75E70BDE66697093F4  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2AE46F42C34F7745F04E04373F6D62D77EC3D8EF  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t7122E95EB7C2C474001D425685D32A97EC02CB32  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatUserStatus
struct ChatUserStatus_t5BEFC2594A50A48C8849AF8514D6FB6CB01CB84E  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ErrorCode
struct ErrorCode_tF5FB48D902FA1A185E7877F9E17236B8CDF5C113  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.EventData
struct EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.EventData::Parameters
	ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject * ___customData_5;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E, ___Parameters_1)); }
	inline ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * get_Parameters_1() const { return ___Parameters_1; }
	inline ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_1), (void*)value);
	}

	inline static int32_t get_offset_of_SenderKey_2() { return static_cast<int32_t>(offsetof(EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E, ___SenderKey_2)); }
	inline uint8_t get_SenderKey_2() const { return ___SenderKey_2; }
	inline uint8_t* get_address_of_SenderKey_2() { return &___SenderKey_2; }
	inline void set_SenderKey_2(uint8_t value)
	{
		___SenderKey_2 = value;
	}

	inline static int32_t get_offset_of_sender_3() { return static_cast<int32_t>(offsetof(EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E, ___sender_3)); }
	inline int32_t get_sender_3() const { return ___sender_3; }
	inline int32_t* get_address_of_sender_3() { return &___sender_3; }
	inline void set_sender_3(int32_t value)
	{
		___sender_3 = value;
	}

	inline static int32_t get_offset_of_CustomDataKey_4() { return static_cast<int32_t>(offsetof(EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E, ___CustomDataKey_4)); }
	inline uint8_t get_CustomDataKey_4() const { return ___CustomDataKey_4; }
	inline uint8_t* get_address_of_CustomDataKey_4() { return &___CustomDataKey_4; }
	inline void set_CustomDataKey_4(uint8_t value)
	{
		___CustomDataKey_4 = value;
	}

	inline static int32_t get_offset_of_customData_5() { return static_cast<int32_t>(offsetof(EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E, ___customData_5)); }
	inline RuntimeObject * get_customData_5() const { return ___customData_5; }
	inline RuntimeObject ** get_address_of_customData_5() { return &___customData_5; }
	inline void set_customData_5(RuntimeObject * value)
	{
		___customData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_5), (void*)value);
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


// Photon.Chat.ParameterCode
struct ParameterCode_t6FAB9ABF0A365CA1E0CA1730AC6266790F0C7151  : public RuntimeObject
{
public:

public:
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.ByteEnum
struct ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatDisconnectCause
struct ChatDisconnectCause_t21D2979506DB2E38EB1398E63610B43A1AE629F4 
{
public:
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t21D2979506DB2E38EB1398E63610B43A1AE629F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatState
struct ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320 
{
public:
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320, ___value___2)); }
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


// Photon.Chat.CustomAuthenticationType
struct CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673 
{
public:
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673, ___value___2)); }
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

// ExitGames.Client.Photon.DeliveryMode
struct DeliveryMode_tF5B5AC7BA52DC6BF799CB8C6BCF9774B4A373B0A 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tF5B5AC7BA52DC6BF799CB8C6BCF9774B4A373B0A, ___value___2)); }
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

// ExitGames.Client.Photon.PeerStateValue
struct PeerStateValue_t1B38B1CEBBE42DED3748AB8B091391217EC98A4E 
{
public:
	// System.Byte ExitGames.Client.Photon.PeerStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerStateValue_t1B38B1CEBBE42DED3748AB8B091391217EC98A4E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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


// ExitGames.Client.Photon.StatusCode
struct StatusCode_t44DE55D3A49617A1A3F47F9C4B293581F393D870 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t44DE55D3A49617A1A3F47F9C4B293581F393D870, ___value___2)); }
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


// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6  : public RuntimeObject
{
public:
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Chat.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatAppSettings::AppIdChat
	String_t* ___AppIdChat_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// System.UInt16 Photon.Chat.ChatAppSettings::Port
	uint16_t ___Port_4;
	// System.String Photon.Chat.ChatAppSettings::ProxyServer
	String_t* ___ProxyServer_5;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_6;
	// System.Boolean Photon.Chat.ChatAppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_7;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_8;

public:
	inline static int32_t get_offset_of_AppIdChat_0() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___AppIdChat_0)); }
	inline String_t* get_AppIdChat_0() const { return ___AppIdChat_0; }
	inline String_t** get_address_of_AppIdChat_0() { return &___AppIdChat_0; }
	inline void set_AppIdChat_0(String_t* value)
	{
		___AppIdChat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_1() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___AppVersion_1)); }
	inline String_t* get_AppVersion_1() const { return ___AppVersion_1; }
	inline String_t** get_address_of_AppVersion_1() { return &___AppVersion_1; }
	inline void set_AppVersion_1(String_t* value)
	{
		___AppVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_FixedRegion_2() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___FixedRegion_2)); }
	inline String_t* get_FixedRegion_2() const { return ___FixedRegion_2; }
	inline String_t** get_address_of_FixedRegion_2() { return &___FixedRegion_2; }
	inline void set_FixedRegion_2(String_t* value)
	{
		___FixedRegion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_2), (void*)value);
	}

	inline static int32_t get_offset_of_Server_3() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___Server_3)); }
	inline String_t* get_Server_3() const { return ___Server_3; }
	inline String_t** get_address_of_Server_3() { return &___Server_3; }
	inline void set_Server_3(String_t* value)
	{
		___Server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_3), (void*)value);
	}

	inline static int32_t get_offset_of_Port_4() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___Port_4)); }
	inline uint16_t get_Port_4() const { return ___Port_4; }
	inline uint16_t* get_address_of_Port_4() { return &___Port_4; }
	inline void set_Port_4(uint16_t value)
	{
		___Port_4 = value;
	}

	inline static int32_t get_offset_of_ProxyServer_5() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___ProxyServer_5)); }
	inline String_t* get_ProxyServer_5() const { return ___ProxyServer_5; }
	inline String_t** get_address_of_ProxyServer_5() { return &___ProxyServer_5; }
	inline void set_ProxyServer_5(String_t* value)
	{
		___ProxyServer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServer_5), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_6() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___Protocol_6)); }
	inline uint8_t get_Protocol_6() const { return ___Protocol_6; }
	inline uint8_t* get_address_of_Protocol_6() { return &___Protocol_6; }
	inline void set_Protocol_6(uint8_t value)
	{
		___Protocol_6 = value;
	}

	inline static int32_t get_offset_of_EnableProtocolFallback_7() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___EnableProtocolFallback_7)); }
	inline bool get_EnableProtocolFallback_7() const { return ___EnableProtocolFallback_7; }
	inline bool* get_address_of_EnableProtocolFallback_7() { return &___EnableProtocolFallback_7; }
	inline void set_EnableProtocolFallback_7(bool value)
	{
		___EnableProtocolFallback_7 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_8() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___NetworkLogging_8)); }
	inline uint8_t get_NetworkLogging_8() const { return ___NetworkLogging_8; }
	inline uint8_t* get_address_of_NetworkLogging_8() { return &___NetworkLogging_8; }
	inline void set_NetworkLogging_8(uint8_t value)
	{
		___NetworkLogging_8 = value;
	}
};


// Photon.Chat.ChatClient
struct ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChatClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_4;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_5;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_6;
	// System.String Photon.Chat.ChatClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_7;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_8;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_9;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_10;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_11;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___U3CAuthValuesU3Ek__BackingField_12;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_13;
	// System.Int32 Photon.Chat.ChatClient::PrivateChatHistoryLength
	int32_t ___PrivateChatHistoryLength_14;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * ___PublicChannels_15;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * ___PrivateChannels_16;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___PublicChannelsUnsubscribing_17;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_18;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * ___chatPeer_19;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_21;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___statusToSetWhenConnected_22;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject * ___messageToSetWhenConnected_23;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_24;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_25;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CEnableProtocolFallbackU3Ek__BackingField_3)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_3() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_3() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_3; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_3(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CNameServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_4() const { return ___U3CNameServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_4() { return &___U3CNameServerAddressU3Ek__BackingField_4; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CFrontendAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_5() const { return ___U3CFrontendAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_5() { return &___U3CFrontendAddressU3Ek__BackingField_5; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFrontendAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_chatRegion_6() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___chatRegion_6)); }
	inline String_t* get_chatRegion_6() const { return ___chatRegion_6; }
	inline String_t** get_address_of_chatRegion_6() { return &___chatRegion_6; }
	inline void set_chatRegion_6(String_t* value)
	{
		___chatRegion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatRegion_6), (void*)value);
	}

	inline static int32_t get_offset_of_ProxyServerAddress_7() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___ProxyServerAddress_7)); }
	inline String_t* get_ProxyServerAddress_7() const { return ___ProxyServerAddress_7; }
	inline String_t** get_address_of_ProxyServerAddress_7() { return &___ProxyServerAddress_7; }
	inline void set_ProxyServerAddress_7(String_t* value)
	{
		___ProxyServerAddress_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CStateU3Ek__BackingField_8)); }
	inline int32_t get_U3CStateU3Ek__BackingField_8() const { return ___U3CStateU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_8() { return &___U3CStateU3Ek__BackingField_8; }
	inline void set_U3CStateU3Ek__BackingField_8(int32_t value)
	{
		___U3CStateU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CDisconnectedCauseU3Ek__BackingField_9)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_9() const { return ___U3CDisconnectedCauseU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_9() { return &___U3CDisconnectedCauseU3Ek__BackingField_9; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_9(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CAppVersionU3Ek__BackingField_10)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_10() const { return ___U3CAppVersionU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_10() { return &___U3CAppVersionU3Ek__BackingField_10; }
	inline void set_U3CAppVersionU3Ek__BackingField_10(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CAppIdU3Ek__BackingField_11)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_11() const { return ___U3CAppIdU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_11() { return &___U3CAppIdU3Ek__BackingField_11; }
	inline void set_U3CAppIdU3Ek__BackingField_11(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CAuthValuesU3Ek__BackingField_12)); }
	inline AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * get_U3CAuthValuesU3Ek__BackingField_12() const { return ___U3CAuthValuesU3Ek__BackingField_12; }
	inline AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 ** get_address_of_U3CAuthValuesU3Ek__BackingField_12() { return &___U3CAuthValuesU3Ek__BackingField_12; }
	inline void set_U3CAuthValuesU3Ek__BackingField_12(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_13() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___MessageLimit_13)); }
	inline int32_t get_MessageLimit_13() const { return ___MessageLimit_13; }
	inline int32_t* get_address_of_MessageLimit_13() { return &___MessageLimit_13; }
	inline void set_MessageLimit_13(int32_t value)
	{
		___MessageLimit_13 = value;
	}

	inline static int32_t get_offset_of_PrivateChatHistoryLength_14() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PrivateChatHistoryLength_14)); }
	inline int32_t get_PrivateChatHistoryLength_14() const { return ___PrivateChatHistoryLength_14; }
	inline int32_t* get_address_of_PrivateChatHistoryLength_14() { return &___PrivateChatHistoryLength_14; }
	inline void set_PrivateChatHistoryLength_14(int32_t value)
	{
		___PrivateChatHistoryLength_14 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_15() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PublicChannels_15)); }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * get_PublicChannels_15() const { return ___PublicChannels_15; }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD ** get_address_of_PublicChannels_15() { return &___PublicChannels_15; }
	inline void set_PublicChannels_15(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * value)
	{
		___PublicChannels_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannels_15), (void*)value);
	}

	inline static int32_t get_offset_of_PrivateChannels_16() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PrivateChannels_16)); }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * get_PrivateChannels_16() const { return ___PrivateChannels_16; }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD ** get_address_of_PrivateChannels_16() { return &___PrivateChannels_16; }
	inline void set_PrivateChannels_16(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * value)
	{
		___PrivateChannels_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrivateChannels_16), (void*)value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_17() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PublicChannelsUnsubscribing_17)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_PublicChannelsUnsubscribing_17() const { return ___PublicChannelsUnsubscribing_17; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_PublicChannelsUnsubscribing_17() { return &___PublicChannelsUnsubscribing_17; }
	inline void set_PublicChannelsUnsubscribing_17(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___PublicChannelsUnsubscribing_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannelsUnsubscribing_17), (void*)value);
	}

	inline static int32_t get_offset_of_listener_18() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___listener_18)); }
	inline RuntimeObject* get_listener_18() const { return ___listener_18; }
	inline RuntimeObject** get_address_of_listener_18() { return &___listener_18; }
	inline void set_listener_18(RuntimeObject* value)
	{
		___listener_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_18), (void*)value);
	}

	inline static int32_t get_offset_of_chatPeer_19() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___chatPeer_19)); }
	inline ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * get_chatPeer_19() const { return ___chatPeer_19; }
	inline ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F ** get_address_of_chatPeer_19() { return &___chatPeer_19; }
	inline void set_chatPeer_19(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * value)
	{
		___chatPeer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatPeer_19), (void*)value);
	}

	inline static int32_t get_offset_of_didAuthenticate_21() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___didAuthenticate_21)); }
	inline bool get_didAuthenticate_21() const { return ___didAuthenticate_21; }
	inline bool* get_address_of_didAuthenticate_21() { return &___didAuthenticate_21; }
	inline void set_didAuthenticate_21(bool value)
	{
		___didAuthenticate_21 = value;
	}

	inline static int32_t get_offset_of_statusToSetWhenConnected_22() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___statusToSetWhenConnected_22)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_statusToSetWhenConnected_22() const { return ___statusToSetWhenConnected_22; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_statusToSetWhenConnected_22() { return &___statusToSetWhenConnected_22; }
	inline void set_statusToSetWhenConnected_22(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___statusToSetWhenConnected_22 = value;
	}

	inline static int32_t get_offset_of_messageToSetWhenConnected_23() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___messageToSetWhenConnected_23)); }
	inline RuntimeObject * get_messageToSetWhenConnected_23() const { return ___messageToSetWhenConnected_23; }
	inline RuntimeObject ** get_address_of_messageToSetWhenConnected_23() { return &___messageToSetWhenConnected_23; }
	inline void set_messageToSetWhenConnected_23(RuntimeObject * value)
	{
		___messageToSetWhenConnected_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageToSetWhenConnected_23), (void*)value);
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_24() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___msDeltaForServiceCalls_24)); }
	inline int32_t get_msDeltaForServiceCalls_24() const { return ___msDeltaForServiceCalls_24; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_24() { return &___msDeltaForServiceCalls_24; }
	inline void set_msDeltaForServiceCalls_24(int32_t value)
	{
		___msDeltaForServiceCalls_24 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_25() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___msTimestampOfLastServiceCall_25)); }
	inline int32_t get_msTimestampOfLastServiceCall_25() const { return ___msTimestampOfLastServiceCall_25; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_25() { return &___msTimestampOfLastServiceCall_25; }
	inline void set_msTimestampOfLastServiceCall_25(int32_t value)
	{
		___msTimestampOfLastServiceCall_25 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26 = value;
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


// ExitGames.Client.Photon.SendOptions
struct SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
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


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
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


// Photon.Chat.ChatPeer
struct ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F  : public PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28
{
public:
	// System.String Photon.Chat.ChatPeer::NameServerHost
	String_t* ___NameServerHost_62;
	// System.UInt16 Photon.Chat.ChatPeer::NameServerPortOverride
	uint16_t ___NameServerPortOverride_64;

public:
	inline static int32_t get_offset_of_NameServerHost_62() { return static_cast<int32_t>(offsetof(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F, ___NameServerHost_62)); }
	inline String_t* get_NameServerHost_62() const { return ___NameServerHost_62; }
	inline String_t** get_address_of_NameServerHost_62() { return &___NameServerHost_62; }
	inline void set_NameServerHost_62(String_t* value)
	{
		___NameServerHost_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_62), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortOverride_64() { return static_cast<int32_t>(offsetof(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F, ___NameServerPortOverride_64)); }
	inline uint16_t get_NameServerPortOverride_64() const { return ___NameServerPortOverride_64; }
	inline uint16_t* get_address_of_NameServerPortOverride_64() { return &___NameServerPortOverride_64; }
	inline void set_NameServerPortOverride_64(uint16_t value)
	{
		___NameServerPortOverride_64 = value;
	}
};

struct ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * ___ProtocolToNameServerPort_63;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_63() { return static_cast<int32_t>(offsetof(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields, ___ProtocolToNameServerPort_63)); }
	inline Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * get_ProtocolToNameServerPort_63() const { return ___ProtocolToNameServerPort_63; }
	inline Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 ** get_address_of_ProtocolToNameServerPort_63() { return &___ProtocolToNameServerPort_63; }
	inline void set_ProtocolToNameServerPort_63(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * value)
	{
		___ProtocolToNameServerPort_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_63), (void*)value);
	}
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m82BD958A94CEFBFA760455C4A6F4C24F65DD0481_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m879CB6850F1B23021370EC6312DF6D3326151B97_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCF5854608E2BF24562AEFE9045E0F672BAD57FE3_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m71BD8B5682E698B1E731FDF88923E47217622427 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097 (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
inline Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611 (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0 (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279 (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>::Remove(!0)
inline bool Dictionary_2_Remove_m97D1DE20583C36E7CC6E7E914F76D1616A24945F (Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_PeerState_m4E303EF1302613923C35D232EC58BCDC1394BC46 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_mD3C508428B4DED81C7830C5F59D063BE8561F9AE_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m6B7ADFD7D8D6640F02BCB436AA658367B205010C (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SerializationProtocolType(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_mF37E3249E12AA6427EE8CED6249666E4E98A67CD_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::.ctor()
inline void Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m1BD083303AA109AE7D24B8603FB584B47D85C79C (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_mACE60C60FECB6C0E4048916E8DB4A727EEFD69DE (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_EnableProtocolFallback(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_mB99FC3B65C9E6637EE95320EF5B5DBF0F9A9BD71 (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_QuickResendAttempts_mD6EDB55E65CFA93B7228C06A133F343233F797D9 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Clear()
inline void Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_mFD60FA50656EB21933745288D5DDE67E3CAE8577_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_mE7C9D3F7969DF8A47D46BEEDA675C616AEA45767 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m31B4C1A9EFA78BA1754E2179A328041A77736851 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m550864C260B625CD96C0D5BD526404B78C1A1D60 (SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_mABF818667B25DC8DC288E65714333935C5F8C438 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___userName0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m963B3989F53FDF4D44809B6892426F2DF1587594 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mB0FFE6252985600F2B2F9D76F6253BF4F01B06AA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m9971AF2D805578774D112DDEC8EC36A0F6B963E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m4CEDDDA5621D80BADED8EEF0F0CF986C29A96732 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_m33B5D93C7864D8E1130A7FE5156E3A2937FD0F43 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_mAAB780ECCA2C0EA4FDF499BB3CA13019CBA0DED3 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_mC54FA45932EB1A039355053BFB5D3BC00633825A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m6BC91E7F9FC7BC07BAEA7B65E4D4E4EF3386E6C1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_mC6B09076078202E3A33DD9C1CB91A4E2D4110D36 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___operationResponse0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_EstablishEncryption_mB53850B097951DFEF624FD8505F8C6732289C7E3 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_m4E005CD5611CE63F801F714BC5FF3282B9A06002 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectToFrontEnd_mEF90DAE273F5589540D1412A17B00EA173123869 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerAddress_mA919D76F95007549D1C83036415FFDC39392CF93 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_EnableProtocolFallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_ChatRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mA84787C704F9D905B11A083A799A8980F2954C69_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_mB87BC70927ABA22AA4DAF4517A27BE97A8F46E36 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues3, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.ParameterDictionary::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Add(!0,!1)
inline void Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m4FE8A53CB40B63ED3A5BBC2B9FD5A008BC233B15 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m716C3705D3930DFC682E23F123EFE522CF5E4F06 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___senders0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740 (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::ReadChannelProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadChannelProperties_m6D5006A08AC5C8A8F224CC0F6C5C7F26163BBEB0 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___newProperties0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::AddSubscriber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_AddSubscriber_m93542F7DBF167D181060BFF49B2FF8358CF95065 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___userId0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_AddSubscribers_m2DF587326A03F5B4F6DF0241C97AF5B7BF7A58DB (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___users0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.EventData::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventData_get_Item_m433694184038DA4CDC150758F8CD190E48ABD16D (EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(!0)
inline bool Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.String ExitGames.Client.Photon.OperationResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationResponse_ToStringFull_mC08F3288E138EED8685E70CE9954135C75BDA888 (OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_ContainsKey_mF51DD506E7FE9DE2F3B54EFAC26C609CC5684AD5 (ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OperationResponse_get_Item_m3B60558B4B905446AE414AE5E5A42DFACA6BA914 (OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * __this, uint8_t ___parameterCode0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m323C8CAF9B49E22CDADFB07E62ED49556BDC9B79 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mE7E9529EC7A3D5F1E32B643BC2607E8745FDFBE1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method);
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::RemoveSubscriber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_RemoveSubscriber_m217B117047A8BA5DA41B336290E287A4F130F79B (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___userId0, const RuntimeMethod* method);
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_UsedProtocol_m5D5E82029AFAF1D25D5504E0411E1E6E903758C9 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer__ctor_mD77A24B3740E86BBB4FB356B5314C3DDC4827C82 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, RuntimeObject* ___listener0, uint8_t ___protocolType1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1 (Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * __this, uint8_t ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F *, uint8_t, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m90394436701B5CE9EC78264B4842667B1D92D73B (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 *, uint8_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m82BD958A94CEFBFA760455C4A6F4C24F65DD0481_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_mD380EDFE1DF54BFDAE89B45CB33610B55ABF927B_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_get_IsEncryptionAvailable_m88CCD9FDC02861F36BAF7049BB29D978374C1E43 (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m9E12D802B43642CE258E1894EDF0C0A4E609A025 (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 *, const RuntimeMethod*))Dictionary_2__ctor_m879CB6850F1B23021370EC6312DF6D3326151B97_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mCF5854608E2BF24562AEFE9045E0F672BAD57FE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		// set { authType = value; }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m63BF4EEAAFAA1699EFA5986C1E00B7CF1B70FE3E (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues(string userId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.UserId = userId;
		String_t* L_0 = ___userId0;
		AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m841F63ADE9C4DB95F87F37102BF49E2B4C88AEDA (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___stringData0, const RuntimeMethod* method)
{
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * G_B2_0 = NULL;
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * G_B3_1 = NULL;
	{
		// this.AuthPostData = (string.IsNullOrEmpty(stringData)) ? null : stringData;
		String_t* L_0 = ___stringData0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		String_t* L_2 = ___stringData0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		NullCheck(G_B3_1);
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_mC064F254C9CA309B7A2F70B5E044E39C50B17F1E (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = byteData;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___byteData0;
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(__this, (RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m0481CB7CD338BC31BBD25DA0D5BDFEAD742DBEC6 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = dictData;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___dictData0;
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_AddAuthParameter_mA17C5D3F70EC602CF0678A0A8C4DAA873BB72E0C (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4481DFAA44A224ED937CFB9CFFB4AEA2435C0B68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string ampersand = string.IsNullOrEmpty(this.AuthGetParameters) ? "" : "&";
		String_t* L_0;
		L_0 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		// this.AuthGetParameters = string.Format("{0}{1}{2}={3}", this.AuthGetParameters, ampersand, System.Uri.EscapeDataString(key), System.Uri.EscapeDataString(value));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4;
		L_4 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		String_t* L_8 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		String_t* L_11 = ___value1;
		String_t* L_12;
		L_12 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4481DFAA44A224ED937CFB9CFFB4AEA2435C0B68, L_10, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_ToString_mF43FA0CFF8B8F6EE87C1EA6419EDF6CB17891387 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral610AC17320941C760FFD5A2AAB296394668E096E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("AuthenticationValues Type: {3} UserId: {0}, GetParameters: {1} Token available: {2}", this.UserId, this.AuthGetParameters, this.Token != null, this.AuthType);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2;
		L_2 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		String_t* L_4;
		L_4 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject * L_6;
		L_6 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(__this, /*hidden argument*/NULL);
		bool L_7 = ((bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		uint8_t L_10;
		L_10 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8_inline(__this, /*hidden argument*/NULL);
		uint8_t L_11 = L_10;
		RuntimeObject * L_12 = Box(CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral610AC17320941C760FFD5A2AAB296394668E096E, L_9, /*hidden argument*/NULL);
		return L_13;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.AuthenticationValues::CopyTo(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * AuthenticationValues_CopyTo_mA352FE6ACDAA107E24FB53BDED19CBA74B021C38 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___copy0, const RuntimeMethod* method)
{
	{
		// copy.AuthType = this.AuthType;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = ___copy0;
		uint8_t L_1;
		L_1 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2_inline(L_0, L_1, /*hidden argument*/NULL);
		// copy.AuthGetParameters = this.AuthGetParameters;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_2 = ___copy0;
		String_t* L_3;
		L_3 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline(L_2, L_3, /*hidden argument*/NULL);
		// copy.AuthPostData = this.AuthPostData;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_4 = ___copy0;
		RuntimeObject * L_5;
		L_5 = AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(L_4, L_5, /*hidden argument*/NULL);
		// copy.UserId = this.UserId;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_6 = ___copy0;
		String_t* L_7;
		L_7 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline(L_6, L_7, /*hidden argument*/NULL);
		// return copy;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_8 = ___copy0;
		return L_8;
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
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_PublishSubscribers_m602D914B3706794A819282AB99C8C190A03AB4DD (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_MaxSubscribers_mF30012A1DA3F0B719E59FEA2795509DB5B63A975 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m71BD8B5682E698B1E731FDF88923E47217622427 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__cctor_m71A51B8B0C9B6DB639C73D969F26F475E749EB22 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ChannelCreationOptions Default = new ChannelCreationOptions();
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_0 = (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 *)il2cpp_codegen_object_new(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		ChannelCreationOptions__ctor_m71BD8B5682E698B1E731FDF88923E47217622427(L_0, /*hidden argument*/NULL);
		((ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Chat.ChannelWellKnownProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelWellKnownProperties__ctor_m6F0F51978EED3DA954EC23724BE0C035A591E8E0 (ChannelWellKnownProperties_t59F53E93830782FB6DDB2AFC3F76A84D66851822 * __this, const RuntimeMethod* method)
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
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_mB99FC3B65C9E6637EE95320EF5B5DBF0F9A9BD71 (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		String_t* L_0 = __this->get_Server_3();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_mB018BA348E40BC01698E9538829063968FF23FBB (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback = true;
		__this->set_EnableProtocolFallback_7((bool)1);
		// public DebugLevel NetworkLogging = DebugLevel.ERROR;
		__this->set_NetworkLogging_8(1);
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
// System.Boolean Photon.Chat.ChatChannel::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_IsPrivate_m9980869BAA0C174DE23CA8A05BD75C40704E84CC (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = __this->get_U3CIsPrivateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MessageCount_m73F8FF01C69533376AAE764DDA6D1D5D84A732F3 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_Messages_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_LastMsgId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_LastMsgId_mE8B5E96AF53DBCC36B749C19BF213117B0BA309C (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = __this->get_U3CLastMsgIdU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<string> Senders = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_Senders_1(L_0);
		// public readonly List<object> Messages = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_1, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		__this->set_Messages_2(L_1);
		// public readonly HashSet<string> Subscribers = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_2, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		__this->set_Subscribers_10(L_2);
		// public ChatChannel(string name)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_3 = ___name0;
		__this->set_Name_0(L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m4FE8A53CB40B63ED3A5BBC2B9FD5A008BC233B15 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Add(sender);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_Senders_1();
		String_t* L_1 = ___sender0;
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_1, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// this.Messages.Add(message);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_Messages_2();
		RuntimeObject * L_3 = ___message1;
		NullCheck(L_2);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_2, L_3, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// this.LastMsgId = msgId;
		int32_t L_4 = ___msgId2;
		ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m716C3705D3930DFC682E23F123EFE522CF5E4F06 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___senders0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.AddRange(senders);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_Senders_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___senders0;
		NullCheck(L_0);
		List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		// this.Messages.AddRange(messages);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_Messages_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___messages1;
		NullCheck(L_2);
		List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9(L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var);
		// this.LastMsgId = lastMsgId;
		int32_t L_4 = ___lastMsgId2;
		ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (this.MessageLimit <= 0 || this.Messages.Count <= this.MessageLimit)
		int32_t L_0 = __this->get_MessageLimit_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_1, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_3 = __this->get_MessageLimit_3();
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// int excessCount = this.Messages.Count - this.MessageLimit;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = __this->get_Messages_2();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_4, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_6 = __this->get_MessageLimit_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		// this.Senders.RemoveRange(0, excessCount);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = __this->get_Senders_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603(L_7, 0, L_8, /*hidden argument*/List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603_RuntimeMethod_var);
		// this.Messages.RemoveRange(0, excessCount);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = __this->get_Messages_2();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA(L_9, 0, L_10, /*hidden argument*/List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_mF2AE4786E9BD034ABCCD6C24024964AE67C5AECD (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Clear();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_Senders_1();
		NullCheck(L_0);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_0, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// this.Messages.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_1, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_m1426C56E45AF154515CAB3C69014464EADA41860 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// StringBuilder txt = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < this.Messages.Count; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_000a:
	{
		// txt.AppendLine(string.Format("{0}: {1}", this.Senders[i], this.Messages[i]));
		StringBuilder_t * L_1 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_Senders_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get_Messages_2();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_7;
		L_7 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_1, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_11 = V_1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = __this->get_Messages_2();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_12, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		// return txt.ToString();
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
// System.Void Photon.Chat.ChatChannel::ReadChannelProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadChannelProperties_m6D5006A08AC5C8A8F224CC0F6C5C7F26163BBEB0 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___newProperties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (newProperties != null && newProperties.Count > 0)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = ___newProperties0;
		if (!L_0)
		{
			goto IL_00d6;
		}
	}
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_1 = ___newProperties0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		// if (this.properties == null)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_3 = __this->get_properties_7();
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// this.properties = new Dictionary<object, object>(newProperties.Count);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_4 = ___newProperties0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_4, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_6 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_RuntimeMethod_var);
		__this->set_properties_7(L_6);
	}

IL_002b:
	{
		// foreach (var pair in newProperties)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_7 = ___newProperties0;
		NullCheck(L_7);
		Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  L_8;
		L_8 = Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F(L_7, /*hidden argument*/Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0034:
		{
			// foreach (var pair in newProperties)
			KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9;
			L_9 = Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_inline((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_RuntimeMethod_var);
			V_2 = L_9;
			// if (pair.Value == null)
			RuntimeObject * L_10;
			L_10 = KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_005a;
			}
		}

IL_0045:
		{
			// this.properties.Remove(pair.Key);
			Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_11 = __this->get_properties_7();
			RuntimeObject * L_12;
			L_12 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
			NullCheck(L_11);
			bool L_13;
			L_13 = Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611(L_11, L_12, /*hidden argument*/Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_RuntimeMethod_var);
			// }
			goto IL_0073;
		}

IL_005a:
		{
			// this.properties[pair.Key] = pair.Value;
			Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_14 = __this->get_properties_7();
			RuntimeObject * L_15;
			L_15 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
			RuntimeObject * L_16;
			L_16 = KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
			NullCheck(L_14);
			Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A(L_14, L_15, L_16, /*hidden argument*/Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
		}

IL_0073:
		{
			// foreach (var pair in newProperties)
			bool L_17;
			L_17 = Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0034;
			}
		}

IL_007c:
		{
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
		Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_RuntimeMethod_var);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.PublishSubscribers, out temp))
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_18 = __this->get_properties_7();
		uint8_t L_19 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_20 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_18);
		bool L_21;
		L_21 = Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C(L_18, L_20, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		// this.PublishSubscribers = (bool)temp;
		RuntimeObject * L_22 = V_0;
		ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3_inline(__this, ((*(bool*)((bool*)UnBox(L_22, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.MaxSubscribers, out temp))
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_23 = __this->get_properties_7();
		uint8_t L_24 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_25 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		bool L_26;
		L_26 = Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C(L_23, L_25, (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_00d6;
		}
	}
	{
		// this.MaxSubscribers = (int)temp;
		RuntimeObject * L_27 = V_0;
		ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E_inline(__this, ((*(int32_t*)((int32_t*)UnBox(L_27, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_AddSubscribers_m2DF587326A03F5B4F6DF0241C97AF5B7BF7A58DB (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___users0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (users == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___users0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// bool result = true;
		V_0 = (bool)1;
		// for (int i = 0; i < users.Length; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		// if (!this.Subscribers.Add(users[i]))
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_1 = __this->get_Subscribers_10();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___users0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_1, L_5, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		// result = false;
		V_0 = (bool)0;
	}

IL_001d:
	{
		// for (int i = 0; i < users.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < users.Length; i++)
		int32_t L_8 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ___users0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// return result;
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Photon.Chat.ChatChannel::AddSubscriber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_AddSubscriber_m93542F7DBF167D181060BFF49B2FF8358CF95065 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Subscribers.Add(userId);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_Subscribers_10();
		String_t* L_1 = ___userId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_0, L_1, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatChannel::RemoveSubscriber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_RemoveSubscriber_m217B117047A8BA5DA41B336290E287A4F130F79B (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m97D1DE20583C36E7CC6E7E914F76D1616A24945F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.usersProperties != null)
		Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A * L_0 = __this->get_usersProperties_11();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// this.usersProperties.Remove(userId);
		Dictionary_2_t5EAB6650159EDF3914107465AF0F68E9B6F4B43A * L_1 = __this->get_usersProperties_11();
		String_t* L_2 = ___userId0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_Remove_m97D1DE20583C36E7CC6E7E914F76D1616A24945F(L_1, L_2, /*hidden argument*/Dictionary_2_Remove_m97D1DE20583C36E7CC6E7E914F76D1616A24945F_RuntimeMethod_var);
	}

IL_0015:
	{
		// return this.Subscribers.Remove(userId);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_4 = __this->get_Subscribers_10();
		String_t* L_5 = ___userId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645(L_4, L_5, /*hidden argument*/HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		return L_6;
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
// System.Boolean Photon.Chat.ChatClient::get_EnableProtocolFallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = __this->get_U3CEnableProtocolFallbackU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_EnableProtocolFallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnableProtocolFallbackU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_mFD60FA50656EB21933745288D5DDE67E3CAE8577 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_ChatRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mA84787C704F9D905B11A083A799A8980F2954C69 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatRegion; }
		String_t* L_0 = __this->get_chatRegion_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatRegion = value; }
		String_t* L_0 = ___value0;
		__this->set_chatRegion_6(L_0);
		// set { this.chatRegion = value; }
		return;
	}
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_8(L_0);
		return;
	}
}
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		int32_t L_0;
		L_0 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Chat.ChatClient::CanChatInChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_CanChatInChannel_mB9E4BA49A67F28B5A8C0423D484F98D9731FC1D3 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.CanChat && this.PublicChannels.ContainsKey(channelName) && !this.PublicChannelsUnsubscribing.Contains(channelName);
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_1 = __this->get_PublicChannels_15();
		String_t* L_2 = ___channelName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_4 = __this->get_PublicChannelsUnsubscribing_17();
		String_t* L_5 = ___channelName0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer != null; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		return (bool)((!(((RuntimeObject*)(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_11(L_0);
		return;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// return (this.AuthValues != null) ? this.AuthValues.UserId : null;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0;
		L_0 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_1;
		L_1 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m323C8CAF9B49E22CDADFB07E62ED49556BDC9B79 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0;
		L_0 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_1 = (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)il2cpp_codegen_object_new(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82(L_1, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// this.AuthValues.UserId = value;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_2;
		L_2 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m6C66D938C6AA39C08472E42C6F1E1CA5AD1584FF (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26(L_0);
		return;
	}
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_m4BB98A08D594DD77AE022FE00D64448DDF01A376 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer.TransportProtocol; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_mACE60C60FECB6C0E4048916E8DB4A727EEFD69DE (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerStateValue_t1B38B1CEBBE42DED3748AB8B091391217EC98A4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral172E7126E04AAF6726B1FF8DE1B89DC2CE7B19CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55BE77744B85C109A578D5AB1BBDCE3460B55D03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	RuntimeObject* G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	{
		// if (this.chatPeer == null || this.chatPeer.PeerState != PeerStateValue.Disconnected)
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = PhotonPeer_get_PeerState_m4E303EF1302613923C35D232EC58BCDC1394BC46(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005e;
		}
	}

IL_0015:
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Can't set TransportProtocol. Disconnect first! " + ((this.chatPeer != null) ? "PeerState: " + this.chatPeer.PeerState : "The chatPeer is null."));
		RuntimeObject* L_3 = __this->get_listener_18();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_4 = __this->get_chatPeer_19();
		G_B3_0 = _stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B;
		G_B3_1 = 2;
		G_B3_2 = L_3;
		if (L_4)
		{
			G_B4_0 = _stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B;
			G_B4_1 = 2;
			G_B4_2 = L_3;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = _stringLiteral55BE77744B85C109A578D5AB1BBDCE3460B55D03;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0053;
	}

IL_0030:
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_5 = __this->get_chatPeer_19();
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = PhotonPeer_get_PeerState_m4E303EF1302613923C35D232EC58BCDC1394BC46(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RuntimeObject * L_7 = Box(PeerStateValue_t1B38B1CEBBE42DED3748AB8B091391217EC98A4E_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_0 = *(uint8_t*)UnBox(L_7);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral172E7126E04AAF6726B1FF8DE1B89DC2CE7B19CB, L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0053:
	{
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		NullCheck(G_B5_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, G_B5_3, G_B5_2, L_10);
		// return;
		return;
	}

IL_005e:
	{
		// this.chatPeer.TransportProtocol = value;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_11 = __this->get_chatPeer_19();
		uint8_t L_12 = ___value0;
		NullCheck(L_11);
		PhotonPeer_set_TransportProtocol_mD3C508428B4DED81C7830C5F59D063BE8561F9AE_inline(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> Photon.Chat.ChatClient::get_SocketImplementationConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * ChatClient_get_SocketImplementationConfig_mC6F99758D34C4F8007075B0B65C9D0512FF1FBF9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		NullCheck(L_0);
		Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * L_1 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_0)->get_SocketImplementationConfig_18();
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_m5DF8D871B5EF00B2C508EC7D0150C688A8EA1798 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF836C8AF47AFF33F1175FF955458D6180A087B6E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string chatRegion = "EU";
		__this->set_chatRegion_6(_stringLiteralF836C8AF47AFF33F1175FF955458D6180A087B6E);
		// public int PrivateChatHistoryLength = -1;
		__this->set_PrivateChatHistoryLength_14((-1));
		// private int msDeltaForServiceCalls = 50;
		__this->set_msDeltaForServiceCalls_24(((int32_t)50));
		// public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_18(L_0);
		// this.State = ChatState.Uninitialized;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 0, /*hidden argument*/NULL);
		// this.chatPeer = new ChatPeer(this, protocol);
		uint8_t L_1 = ___protocol1;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_2 = (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F *)il2cpp_codegen_object_new(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m6B7ADFD7D8D6640F02BCB436AA658367B205010C(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_chatPeer_19(L_2);
		// this.chatPeer.SerializationProtocolType = SerializationProtocol.GpBinaryV18;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_3 = __this->get_chatPeer_19();
		NullCheck(L_3);
		PhotonPeer_set_SerializationProtocolType_mF37E3249E12AA6427EE8CED6249666E4E98A67CD_inline(L_3, 1, /*hidden argument*/NULL);
		// this.PublicChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_4 = (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *)il2cpp_codegen_object_new(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E(L_4, /*hidden argument*/Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var);
		__this->set_PublicChannels_15(L_4);
		// this.PrivateChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_5 = (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *)il2cpp_codegen_object_new(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E(L_5, /*hidden argument*/Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var);
		__this->set_PrivateChannels_16(L_5);
		// this.PublicChannelsUnsubscribing = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_6 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_6, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		__this->set_PublicChannelsUnsubscribing_17(L_6);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_m80242F8205D8533C5392EEC4FE11B7664ACAB173 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * ___appSettings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAD168215B6409DFD378F9C0FBE1D56E09E7BB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (appSettings == null)
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_0 = ___appSettings0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "ConnectUsingSettings failed. The appSettings can't be null.'");
		RuntimeObject* L_1 = __this->get_listener_18();
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_1, 1, _stringLiteral3BAD168215B6409DFD378F9C0FBE1D56E09E7BB9);
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// if (!string.IsNullOrEmpty(appSettings.FixedRegion))
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_2 = ___appSettings0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_FixedRegion_2();
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// this.ChatRegion = appSettings.FixedRegion;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_5 = ___appSettings0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_FixedRegion_2();
		ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B_inline(__this, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// this.DebugOut = appSettings.NetworkLogging;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_7 = ___appSettings0;
		NullCheck(L_7);
		uint8_t L_8 = L_7->get_NetworkLogging_8();
		ChatClient_set_DebugOut_m1BD083303AA109AE7D24B8603FB584B47D85C79C(__this, L_8, /*hidden argument*/NULL);
		// this.TransportProtocol = appSettings.Protocol;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_9 = ___appSettings0;
		NullCheck(L_9);
		uint8_t L_10 = L_9->get_Protocol_6();
		ChatClient_set_TransportProtocol_mACE60C60FECB6C0E4048916E8DB4A727EEFD69DE(__this, L_10, /*hidden argument*/NULL);
		// this.EnableProtocolFallback = appSettings.EnableProtocolFallback;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_11 = ___appSettings0;
		NullCheck(L_11);
		bool L_12 = L_11->get_EnableProtocolFallback_7();
		ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline(__this, L_12, /*hidden argument*/NULL);
		// if (!appSettings.IsDefaultNameServer)
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_13 = ___appSettings0;
		NullCheck(L_13);
		bool L_14;
		L_14 = ChatAppSettings_get_IsDefaultNameServer_mB99FC3B65C9E6637EE95320EF5B5DBF0F9A9BD71(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007d;
		}
	}
	{
		// this.chatPeer.NameServerHost = appSettings.Server;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_15 = __this->get_chatPeer_19();
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_16 = ___appSettings0;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_Server_3();
		NullCheck(L_15);
		L_15->set_NameServerHost_62(L_17);
		// this.chatPeer.NameServerPortOverride = appSettings.Port;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_18 = __this->get_chatPeer_19();
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_19 = ___appSettings0;
		NullCheck(L_19);
		uint16_t L_20 = L_19->get_Port_4();
		NullCheck(L_18);
		L_18->set_NameServerPortOverride_64(L_20);
	}

IL_007d:
	{
		// this.ProxyServerAddress = appSettings.ProxyServer;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_21 = ___appSettings0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_ProxyServer_5();
		__this->set_ProxyServerAddress_7(L_22);
		// return this.Connect(appSettings.AppIdChat, appSettings.AppVersion, this.AuthValues);
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_23 = ___appSettings0;
		NullCheck(L_23);
		String_t* L_24 = L_23->get_AppIdChat_0();
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_25 = ___appSettings0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_AppVersion_1();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_27;
		L_27 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		bool L_28;
		L_28 = ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738(__this, L_24, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F3409D006A485853CE590C6F1C4AA00ABCA26F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6A7CB87243568376528ACED2E19B84FDCE6A7C);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	bool G_B6_0 = false;
	bool G_B5_0 = false;
	{
		// this.chatPeer.TimePingInterval = 3000;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		NullCheck(L_0);
		((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_0)->set_TimePingInterval_37(((int32_t)3000));
		// this.DisconnectedCause = ChatDisconnectCause.None;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 0, /*hidden argument*/NULL);
		// if (authValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_1 = ___authValues2;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// this.AuthValues = authValues;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_2 = ___authValues2;
		ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline(__this, L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// this.AppId = appId;
		String_t* L_3 = ___appId0;
		ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183_inline(__this, L_3, /*hidden argument*/NULL);
		// this.AppVersion = appVersion;
		String_t* L_4 = ___appVersion1;
		ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98_inline(__this, L_4, /*hidden argument*/NULL);
		// this.didAuthenticate = false;
		__this->set_didAuthenticate_21((bool)0);
		// this.chatPeer.QuickResendAttempts = 2;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_5 = __this->get_chatPeer_19();
		NullCheck(L_5);
		PhotonPeer_set_QuickResendAttempts_mD6EDB55E65CFA93B7228C06A133F343233F797D9(L_5, (uint8_t)2, /*hidden argument*/NULL);
		// this.chatPeer.SentCountAllowance = 7;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_6 = __this->get_chatPeer_19();
		NullCheck(L_6);
		((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_6)->set_SentCountAllowance_35(7);
		// this.PublicChannels.Clear();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_7 = __this->get_PublicChannels_15();
		NullCheck(L_7);
		Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534(L_7, /*hidden argument*/Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var);
		// this.PrivateChannels.Clear();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_8 = __this->get_PrivateChannels_16();
		NullCheck(L_8);
		Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534(L_8, /*hidden argument*/Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Clear();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_9 = __this->get_PublicChannelsUnsubscribing_17();
		NullCheck(L_9);
		HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699(L_9, /*hidden argument*/HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699_RuntimeMethod_var);
		// this.NameServerAddress = this.chatPeer.NameServerAddress;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_10 = __this->get_chatPeer_19();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F(L_10, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F_inline(__this, L_11, /*hidden argument*/NULL);
		// bool isConnecting = this.chatPeer.Connect(this.NameServerAddress, this.ProxyServerAddress, "NameServer", null);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_12 = __this->get_chatPeer_19();
		String_t* L_13;
		L_13 = ChatClient_get_NameServerAddress_mFD60FA50656EB21933745288D5DDE67E3CAE8577_inline(__this, /*hidden argument*/NULL);
		String_t* L_14 = __this->get_ProxyServerAddress_7();
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtFuncInvoker5< bool, String_t*, String_t*, String_t*, RuntimeObject *, RuntimeObject * >::Invoke(7 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.String,System.Object,System.Object) */, L_12, L_13, L_14, _stringLiteral84F3409D006A485853CE590C6F1C4AA00ABCA26F, NULL, NULL);
		// if (isConnecting)
		bool L_16 = L_15;
		G_B3_0 = L_16;
		if (!L_16)
		{
			G_B4_0 = L_16;
			goto IL_00a8;
		}
	}
	{
		// this.State = ChatState.ConnectingToNameServer;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 1, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_00a8:
	{
		// if (this.UseBackgroundWorkerForSending)
		bool L_17;
		L_17 = ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline(__this, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if (!L_17)
		{
			G_B6_0 = G_B4_0;
			goto IL_00cd;
		}
	}
	{
		// SupportClass.StartBackgroundCalls(this.SendOutgoingInBackground, this.msDeltaForServiceCalls, "ChatClient Service Thread");
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_18 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_18, __this, (intptr_t)((intptr_t)ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		int32_t L_19 = __this->get_msDeltaForServiceCalls_24();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_il2cpp_TypeInfo_var);
		uint8_t L_20;
		L_20 = SupportClass_StartBackgroundCalls_mE7C9D3F7969DF8A47D46BEEDA675C616AEA45767(L_18, L_19, _stringLiteralDF6A7CB87243568376528ACED2E19B84FDCE6A7C, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_00cd:
	{
		// return isConnecting;
		return G_B6_0;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectAndSetStatus(System.String,System.String,Photon.Chat.AuthenticationValues,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectAndSetStatus_mB4E90C929D58952EC3652E77D9432CF97E5FCA48 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues2, int32_t ___status3, RuntimeObject * ___message4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusToSetWhenConnected = status;
		int32_t L_0 = ___status3;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		__this->set_statusToSetWhenConnected_22(L_1);
		// messageToSetWhenConnected = message;
		RuntimeObject * L_2 = ___message4;
		__this->set_messageToSetWhenConnected_23(L_2);
		// return Connect(appId, appVersion, authValues);
		String_t* L_3 = ___appId0;
		String_t* L_4 = ___appVersion1;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_5 = ___authValues2;
		bool L_6;
		L_6 = ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_mF7621BB2972BE88B2FB7C3A730A6F60738D737BC (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		// while (this.HasPeer && this.chatPeer.DispatchIncomingCommands())
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands() */, L_1);
		if (L_2)
		{
			goto IL_0000;
		}
	}

IL_0015:
	{
		// if (!this.UseBackgroundWorkerForSending)
		bool L_3;
		L_3 = ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (Environment.TickCount - this.msTimestampOfLastServiceCall > this.msDeltaForServiceCalls || this.msTimestampOfLastServiceCall == 0)
		int32_t L_4;
		L_4 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		int32_t L_5 = __this->get_msTimestampOfLastServiceCall_25();
		int32_t L_6 = __this->get_msDeltaForServiceCalls_24();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_6)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_7 = __this->get_msTimestampOfLastServiceCall_25();
		if (L_7)
		{
			goto IL_0059;
		}
	}

IL_0039:
	{
		// this.msTimestampOfLastServiceCall = Environment.TickCount;
		int32_t L_8;
		L_8 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set_msTimestampOfLastServiceCall_25(L_8);
	}

IL_0044:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_9;
		L_9 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_10 = __this->get_chatPeer_19();
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_10);
		if (L_11)
		{
			goto IL_0044;
		}
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendOutgoingInBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{

IL_0000:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_1);
		if (L_2)
		{
			goto IL_0000;
		}
	}

IL_0015:
	{
		// return this.State != ChatState.Disconnected;
		int32_t L_3;
		L_3 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Chat.ChatClient::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_SendAcksOnly_m43122F72ACF42947DA050A50D710358567A0F711 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_1);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	{
		// if (this.HasPeer && this.chatPeer.PeerState != PeerStateValue.Disconnected)
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = PhotonPeer_get_PeerState_m4E303EF1302613923C35D232EC58BCDC1394BC46(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// this.State = ChatState.Disconnecting;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.DisconnectedCause = cause;
		int32_t L_3 = ___cause0;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, L_3, /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_4 = __this->get_chatPeer_19();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_4);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::StopThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_StopThread_m986F54C1B0D2049C356D2C84EBE5BEC7C6A10F7C (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// if (this.HasPeer)
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.chatPeer.StopThread();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m7D2550E13A3078152307F894FE3E2F34BBDA32DC (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, const RuntimeMethod* method)
{
	{
		// return this.Subscribe(channels, 0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___channels0;
		bool L_1;
		L_1 = ChatClient_Subscribe_m31B4C1A9EFA78BA1754E2179A328041A77736851(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m46616D5803D260E29FFEB498412279142076F3E8 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___lastMsgIds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE699C4CC364949CA52ACF808CE9CD98DA290FDF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7943DAD13F6480BF6073BD0C327DF2B8C0B5F24);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5;
		L_5 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_6 = __this->get_listener_18();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// for (int i = 0; i < channels.Length; i++)
		V_1 = 0;
		goto IL_0080;
	}

IL_004b:
	{
		// if (string.IsNullOrEmpty(channels[i]))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___channels0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_12;
		L_12 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Subscribe can't be called with a null or empty channel name at index {0}.", i));
		RuntimeObject* L_13 = __this->get_listener_18();
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE699C4CC364949CA52ACF808CE9CD98DA290FDF5, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_13, 1, L_17);
	}

IL_007a:
	{
		// return false;
		return (bool)0;
	}

IL_007c:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0080:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_19 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = ___channels0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		// if (lastMsgIds == null || lastMsgIds.Length != channels.Length)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = ___lastMsgIds1;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = ___lastMsgIds1;
		NullCheck(L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = ___channels0;
		NullCheck(L_23);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_00ad;
		}
	}

IL_0091:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_24;
		L_24 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe can't be called when \"lastMsgIds\" array is null or does not have the same length as \"channels\" array.");
		RuntimeObject* L_25 = __this->get_listener_18();
		NullCheck(L_25);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_25, 1, _stringLiteralF7943DAD13F6480BF6073BD0C327DF2B8C0B5F24);
	}

IL_00ab:
	{
		// return false;
		return (bool)0;
	}

IL_00ad:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object>
		// {
		//     { ChatParameterCode.Channels, channels },
		//     { ChatParameterCode.MsgIds,  lastMsgIds},
		//     { ChatParameterCode.HistoryLength, -1 } // server will decide how many messages to send to client
		// };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_26 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_26, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_27 = L_26;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = ___channels0;
		NullCheck(L_27);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_27, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_28, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_29 = L_27;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = ___lastMsgIds1;
		NullCheck(L_29);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_29, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_30, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_31 = L_29;
		int32_t L_32 = (-1);
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_31, (uint8_t)((int32_t)14), L_33, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_31;
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_34 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_36 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_34);
		bool L_37;
		L_37 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_34, (uint8_t)0, L_35, L_36);
		return L_37;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m31B4C1A9EFA78BA1754E2179A328041A77736851 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5;
		L_5 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_6 = __this->get_listener_18();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// return this.SendChannelOperation(channels, (byte)ChatOperationCode.Subscribe, messagesFromHistory);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___channels0;
		int32_t L_8 = ___messagesFromHistory1;
		bool L_9;
		L_9 = ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A(__this, L_7, (uint8_t)0, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m931E28CF74EE5E21271BEA2E61D09731CA9560FE (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F9D94F66B496B12E4135DCB8897AC320C6639C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906FAEAAB91B0A987113A33F7759502D4DB5D57B);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unsubscribe called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral906FAEAAB91B0A987113A33F7759502D4DB5D57B);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5;
		L_5 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Unsubscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_6 = __this->get_listener_18();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral64F9D94F66B496B12E4135DCB8897AC320C6639C);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// foreach (string ch in channels)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___channels0;
		V_0 = L_7;
		V_1 = 0;
		goto IL_0062;
	}

IL_004d:
	{
		// foreach (string ch in channels)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// this.PublicChannelsUnsubscribing.Add(ch);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_12 = __this->get_PublicChannelsUnsubscribing_17();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_12, L_13, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0062:
	{
		// foreach (string ch in channels)
		int32_t L_16 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_004d;
		}
	}
	{
		// return this.SendChannelOperation(channels, ChatOperationCode.Unsubscribe, 0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = ___channels0;
		bool L_19;
		L_19 = ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A(__this, L_18, (uint8_t)1, 0, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_m247CDA8EF348813EFD3337E0A13B4652E55AF7A1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		// return this.publishMessage(channelName, message, true, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3;
		L_3 = ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646(__this, L_0, L_1, (bool)1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessageUnreliable_mAB6BF06C38E4BCC7D79C436A5F88E4B7DE66D320 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		// return this.publishMessage(channelName, message, false, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3;
		L_3 = ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E8D47E4F8EF60373D0CB9FE4B271BF0F317D5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB521CAB8B7F8FEE2FF3D6340BCAF8DE9F95F9A66);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "PublishMessage called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral54E8D47E4F8EF60373D0CB9FE4B271BF0F317D5C);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (string.IsNullOrEmpty(channelName) || message == null)
		String_t* L_3 = ___channelName0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_5 = ___message1;
		if (L_5)
		{
			goto IL_004b;
		}
	}

IL_002f:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_6;
		L_6 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0049;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "PublishMessage parameters must be non-null and not empty.");
		RuntimeObject* L_7 = __this->get_listener_18();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_7, 2, _stringLiteralB521CAB8B7F8FEE2FF3D6340BCAF8DE9F95F9A66);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { (byte)ChatParameterCode.Channel, channelName },
		//         { (byte)ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_8 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_8, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_9 = L_8;
		String_t* L_10 = ___channelName0;
		NullCheck(L_9);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_9, (uint8_t)1, L_10, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_11 = L_9;
		RuntimeObject * L_12 = ___message1;
		NullCheck(L_11);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_11, (uint8_t)3, L_12, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_11;
		// if (forwardAsWebhook)
		bool L_13 = ___forwardAsWebhook3;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_14 = V_0;
		uint8_t L_15 = ((uint8_t)1);
		RuntimeObject * L_16 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_14, (uint8_t)((int32_t)21), L_16, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0073:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Publish, parameters, new SendOptions() { Reliability = reliable });
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_17 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_18 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 ));
		bool L_19 = ___reliable2;
		SendOptions_set_Reliability_m550864C260B625CD96C0D5BD526404B78C1A1D60((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 *)(&V_1), L_19, /*hidden argument*/NULL);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_20 = V_1;
		NullCheck(L_17);
		bool L_21;
		L_21 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)2, L_18, L_20);
		return L_21;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m442DE32D062B33965506D4F3C85CF2FAE5AF9A5A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		// return this.SendPrivateMessage(target, message, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3;
		L_3 = ChatClient_SendPrivateMessage_mABF818667B25DC8DC288E65714333935C5F8C438(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_mABF818667B25DC8DC288E65714333935C5F8C438 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	{
		// return this.sendPrivateMessage(target, message, encrypt, true, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4;
		L_4 = ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9(__this, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessageUnreliable_mF5C8E4311B7B4B748074432DC90F5F2FEDCB5A2B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	{
		// return this.sendPrivateMessage(target, message, encrypt, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4;
		L_4 = ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9(__this, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14903F1665F1519144501C7CD4831F50EA3BD6F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A92BECAEC51D53182904975AED07C4B2D68B774);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SendPrivateMessage called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3A92BECAEC51D53182904975AED07C4B2D68B774);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (string.IsNullOrEmpty(target) || message == null)
		String_t* L_3 = ___target0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_5 = ___message1;
		if (L_5)
		{
			goto IL_004b;
		}
	}

IL_002f:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_6;
		L_6 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0049;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "SendPrivateMessage parameters must be non-null and not empty.");
		RuntimeObject* L_7 = __this->get_listener_18();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_7, 2, _stringLiteral14903F1665F1519144501C7CD4831F50EA3BD6F7);
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}

IL_004b:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.UserId, target },
		//         { ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_8 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_8, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_9 = L_8;
		String_t* L_10 = ___target0;
		NullCheck(L_9);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_9, (uint8_t)((int32_t)225), L_10, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_11 = L_9;
		RuntimeObject * L_12 = ___message1;
		NullCheck(L_11);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_11, (uint8_t)3, L_12, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_11;
		// if (forwardAsWebhook)
		bool L_13 = ___forwardAsWebhook4;
		if (!L_13)
		{
			goto IL_0077;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_14 = V_0;
		uint8_t L_15 = ((uint8_t)1);
		RuntimeObject * L_16 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_14, (uint8_t)((int32_t)21), L_16, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0077:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.SendPrivate, parameters, new SendOptions() { Reliability = reliable, Encrypt = encrypt });
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_17 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_18 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 ));
		bool L_19 = ___reliable3;
		SendOptions_set_Reliability_m550864C260B625CD96C0D5BD526404B78C1A1D60((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 *)(&V_1), L_19, /*hidden argument*/NULL);
		bool L_20 = ___encrypt2;
		(&V_1)->set_Encrypt_3(L_20);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_21 = V_1;
		NullCheck(L_17);
		bool L_22;
		L_22 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)3, L_18, L_21);
		return L_22;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695E1FE878B0520A6C9E2F883C405378F3C8ED3F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SetOnlineStatus called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral695E1FE878B0520A6C9E2F883C405378F3C8ED3F);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Status, status },
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_3 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_3, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_4 = L_3;
		int32_t L_5 = ___status0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_4, (uint8_t)((int32_t)10), L_7, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_4;
		// if (skipMessage)
		bool L_8 = ___skipMessage2;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// parameters[ChatParameterCode.SkipMessage] = true;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_9 = V_0;
		bool L_10 = ((bool)1);
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_9, (uint8_t)((int32_t)12), L_11, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// }
		goto IL_0053;
	}

IL_004b:
	{
		// parameters[ChatParameterCode.Message] = message;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_12 = V_0;
		RuntimeObject * L_13 = ___message1;
		NullCheck(L_12);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_12, (uint8_t)3, L_13, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_0053:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.UpdateStatus, parameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_14 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_16 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_14, (uint8_t)5, L_15, L_16);
		return L_17;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mBF8152457350416C6A534018CF7F3ECECD1F02DD (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		// return this.SetOnlineStatus(status, null, true);
		int32_t L_0 = ___status0;
		bool L_1;
		L_1 = ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA(__this, L_0, NULL, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mE7E9529EC7A3D5F1E32B643BC2607E8745FDFBE1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	{
		// return this.SetOnlineStatus(status, message, false);
		int32_t L_0 = ___status0;
		RuntimeObject * L_1 = ___message1;
		bool L_2;
		L_2 = ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mC7942016F23662064DC38F90F32128C14C65CEEE (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46EDC735A64857CCBB54DA3A191D860CD77E4BC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62A96FA0BD40BECCCDE57B87BAAD7344D196B1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC542CF71ADE21664A8CC512222D2769749604E30);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "AddFriends called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral62A96FA0BD40BECCCDE57B87BAAD7344D196B1AA);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___friends0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___friends0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5;
		L_5 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends can't be called for empty or null list.");
		RuntimeObject* L_6 = __this->get_listener_18();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_6, 2, _stringLiteralC542CF71ADE21664A8CC512222D2769749604E30);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___friends0;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008f;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_008d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_9 = __this->get_listener_18();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___friends0;
		NullCheck(L_10);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_1 = ((int32_t)1024);
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral46EDC735A64857CCBB54DA3A191D860CD77E4BC6, L_11, _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_9, 2, L_13);
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}

IL_008f:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_14 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_14, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = L_14;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = ___friends0;
		NullCheck(L_15);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_15, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_16, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_15;
		// return this.chatPeer.SendOperation(ChatOperationCode.AddFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_17 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_19 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)6, L_18, L_19);
		return L_20;
	}
}
// System.Boolean Photon.Chat.ChatClient::RemoveFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_RemoveFriends_mC49F6EA1B53506D6A8619B4CD1C50ED46D21E04D (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05735D340DC6F0A0F9208712869EFC8065DB1040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E14C99C5905C97FAA1BAD3AA2BB4F3DA6FA045B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A3F6514E2CF8783CDAB372E72E9BCD8E42ADA3);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_1;
		L_1 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "RemoveFriends called while not connected to front end server.");
		RuntimeObject* L_2 = __this->get_listener_18();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteralA4A3F6514E2CF8783CDAB372E72E9BCD8E42ADA3);
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___friends0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___friends0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0047;
		}
	}

IL_002b:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_5;
		L_5 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends can't be called for empty or null list.");
		RuntimeObject* L_6 = __this->get_listener_18();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral05735D340DC6F0A0F9208712869EFC8065DB1040);
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___friends0;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_008f;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_008d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_9 = __this->get_listener_18();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___friends0;
		NullCheck(L_10);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_1 = ((int32_t)1024);
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral6E14C99C5905C97FAA1BAD3AA2BB4F3DA6FA045B, L_11, _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_9, 2, L_13);
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}

IL_008f:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_14 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_14, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = L_14;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = ___friends0;
		NullCheck(L_15);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_15, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_16, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_15;
		// return this.chatPeer.SendOperation(ChatOperationCode.RemoveFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_17 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_19 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)7, L_18, L_19);
		return L_20;
	}
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___userName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}:{1}", this.UserId, userName);
		String_t* L_0;
		L_0 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2;
		L_2 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m963B3989F53FDF4D44809B6892426F2DF1587594 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isPrivate)
		bool L_0 = ___isPrivate1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// return this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_1 = __this->get_PublicChannels_15();
		String_t* L_2 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_3 = ___channel2;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_1, L_2, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_3, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		return L_4;
	}

IL_0011:
	{
		// return this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_5 = __this->get_PrivateChannels_16();
		String_t* L_6 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_7 = ___channel2;
		NullCheck(L_5);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_5, L_6, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_7, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_mED491B02E74F700084FEDCE962D2E0BFFBBEF5F5 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// found = this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_0 = __this->get_PublicChannels_15();
		String_t* L_1 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_2 = ___channel1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_0, L_1, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		// if (found) return true;
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (found) return true;
		return (bool)1;
	}

IL_0011:
	{
		// found = this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_4 = __this->get_PrivateChannels_16();
		String_t* L_5 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_6 = ___channel1;
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_4, L_5, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_6, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		// return found;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetPrivateChannelByUser(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetPrivateChannelByUser_m1F89B66602C9FC00827829E5DAA3965F9D51DC4B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___userId0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// channel = null;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_0 = ___channel1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (string.IsNullOrEmpty(userId))
		String_t* L_1 = ___userId0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// string channelName = this.GetPrivateChannelNameByUser(userId);
		String_t* L_3 = ___userId0;
		String_t* L_4;
		L_4 = ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// return this.TryGetChannel(channelName, true, out channel);
		String_t* L_5 = V_0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_6 = ___channel1;
		bool L_7;
		L_7 = ChatClient_TryGetChannel_m963B3989F53FDF4D44809B6892426F2DF1587594(__this, L_5, (bool)1, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m1BD083303AA109AE7D24B8603FB584B47D85C79C (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatPeer.DebugOut = value; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_0)->set_DebugOut_20(L_1);
		// set { this.chatPeer.DebugOut = value; }
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatPeer.DebugOut; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_19();
		NullCheck(L_0);
		uint8_t L_1 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)L_0)->get_DebugOut_20();
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_mD6C9D4777F52E489518A6A938E09D519F68AD6E4 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.listener.DebugReturn(level, message);
		RuntimeObject* L_0 = __this->get_listener_18();
		uint8_t L_1 = ___level0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_mC12FE6E81CD744D8113B7977E388CEDD0B2C5499 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// switch (eventData.Code)
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_Code_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0046;
			}
			case 5:
			{
				goto IL_004e;
			}
			case 6:
			{
				goto IL_0056;
			}
			case 7:
			{
				goto IL_006d;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0066;
			}
		}
	}
	{
		return;
	}

IL_0036:
	{
		// this.HandleChatMessagesEvent(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		ChatClient_HandleChatMessagesEvent_mB0FFE6252985600F2B2F9D76F6253BF4F01B06AA(__this, L_3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003e:
	{
		// this.HandlePrivateMessageEvent(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_4 = ___eventData0;
		ChatClient_HandlePrivateMessageEvent_m9971AF2D805578774D112DDEC8EC36A0F6B963E0(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0046:
	{
		// this.HandleStatusUpdate(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_5 = ___eventData0;
		ChatClient_HandleStatusUpdate_m4CEDDDA5621D80BADED8EEF0F0CF986C29A96732(__this, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004e:
	{
		// this.HandleSubscribeEvent(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_6 = ___eventData0;
		ChatClient_HandleSubscribeEvent_m33B5D93C7864D8E1130A7FE5156E3A2937FD0F43(__this, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0056:
	{
		// this.HandleUnsubscribeEvent(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_7 = ___eventData0;
		ChatClient_HandleUnsubscribeEvent_mAAB780ECCA2C0EA4FDF499BB3CA13019CBA0DED3(__this, L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005e:
	{
		// this.HandleUserSubscribedEvent(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_8 = ___eventData0;
		ChatClient_HandleUserSubscribedEvent_mC54FA45932EB1A039355053BFB5D3BC00633825A(__this, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0066:
	{
		// this.HandleUserUnsubscribedEvent(eventData);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_9 = ___eventData0;
		ChatClient_HandleUserUnsubscribedEvent_m6BC91E7F9FC7BC07BAEA7B65E4D4E4EF3386E6C1(__this, L_9, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3C112C0845223B31EFF6F68B1EBF1A3A3B3D3CC2 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F4CE3D38299DE86F612B0D25AABE7291C45297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A1A0DEF864EC040A24126B7A194105027A0D5D4);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// switch (operationResponse.OperationCode)
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_0 = ___operationResponse0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_OperationCode_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)3))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)230)))))
		{
			goto IL_001b;
		}
	}
	{
		// this.HandleAuthResponse(operationResponse);
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_4 = ___operationResponse0;
		ChatClient_HandleAuthResponse_mC6B09076078202E3A33DD9C1CB91A4E2D4110D36(__this, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_001b:
	{
		// if ((operationResponse.ReturnCode != 0) && (this.DebugOut >= DebugLevel.ERROR))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_5 = ___operationResponse0;
		NullCheck(L_5);
		int16_t L_6 = L_5->get_ReturnCode_1();
		if (!L_6)
		{
			goto IL_008a;
		}
	}
	{
		uint8_t L_7;
		L_7 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		// if (operationResponse.ReturnCode == -2)
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_8 = ___operationResponse0;
		NullCheck(L_8);
		int16_t L_9 = L_8->get_ReturnCode_1();
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0058;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} unknown on server. Check your AppId and make sure it's for a Chat application.", operationResponse.OperationCode));
		RuntimeObject* L_10 = __this->get_listener_18();
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_11 = ___operationResponse0;
		NullCheck(L_11);
		uint8_t L_12 = L_11->get_OperationCode_0();
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9A1A0DEF864EC040A24126B7A194105027A0D5D4, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, 1, L_15);
		// }
		return;
	}

IL_0058:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} failed (Code: {1}). Debug Message: {2}", operationResponse.OperationCode, operationResponse.ReturnCode, operationResponse.DebugMessage));
		RuntimeObject* L_16 = __this->get_listener_18();
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_17 = ___operationResponse0;
		NullCheck(L_17);
		uint8_t L_18 = L_17->get_OperationCode_0();
		uint8_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_19);
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_21 = ___operationResponse0;
		NullCheck(L_21);
		int16_t L_22 = L_21->get_ReturnCode_1();
		int16_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_23);
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_25 = ___operationResponse0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_DebugMessage_2();
		String_t* L_27;
		L_27 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral56F4CE3D38299DE86F612B0D25AABE7291C45297, L_20, L_24, L_26, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_16, 1, L_27);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m0972131B18833F7F1AE346C9FB755BBCF4B0246F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC6B861684EFBC6F7D7FAB8ED28E170565B09C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1605C9390111B876A1B670691E1A90A58C218D34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D7F8920CC9A5C9EB6CEA86D4BDEC243463A827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74935E070666FF5C1140D9B3C70DF02FD27A7B52);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * G_B20_0 = NULL;
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * G_B21_1 = NULL;
	{
		int32_t L_0 = ___statusCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)1022))))
		{
			case 0:
			{
				goto IL_01e9;
			}
			case 1:
			{
				goto IL_01e9;
			}
			case 2:
			{
				goto IL_0059;
			}
			case 3:
			{
				goto IL_0103;
			}
			case 4:
			{
				goto IL_0212;
			}
		}
	}
	{
		int32_t L_1 = ___statusCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)1039))))
		{
			case 0:
			{
				goto IL_0212;
			}
			case 1:
			{
				goto IL_0232;
			}
			case 2:
			{
				goto IL_021a;
			}
			case 3:
			{
				goto IL_01d0;
			}
			case 4:
			{
				goto IL_0222;
			}
			case 5:
			{
				goto IL_022a;
			}
			case 6:
			{
				goto IL_025a;
			}
			case 7:
			{
				goto IL_025a;
			}
			case 8:
			{
				goto IL_025a;
			}
			case 9:
			{
				goto IL_00fc;
			}
			case 10:
			{
				goto IL_01e9;
			}
		}
	}
	{
		return;
	}

IL_0059:
	{
		// if (!this.chatPeer.IsProtocolSecure)
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_2 = __this->get_chatPeer_19();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_2);
		if (L_3)
		{
			goto IL_008f;
		}
	}
	{
		// if (!this.chatPeer.EstablishEncryption())
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_4 = __this->get_chatPeer_19();
		NullCheck(L_4);
		bool L_5;
		L_5 = PhotonPeer_EstablishEncryption_mB53850B097951DFEF624FD8505F8C6732289C7E3(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0095;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_6;
		L_6 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Error establishing encryption");
		RuntimeObject* L_7 = __this->get_listener_18();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_7, 1, _stringLiteral74935E070666FF5C1140D9B3C70DF02FD27A7B52);
		// }
		goto IL_0095;
	}

IL_008f:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB(__this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// if (this.State == ChatState.ConnectingToNameServer)
		int32_t L_8;
		L_8 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_00b7;
		}
	}
	{
		// this.State = ChatState.ConnectedToNameServer;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 2, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_9 = __this->get_listener_18();
		int32_t L_10;
		L_10 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_9, L_10);
		// }
		return;
	}

IL_00b7:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_11;
		L_11 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_025a;
		}
	}
	{
		// if (!this.AuthenticateOnFrontEnd())
		bool L_12;
		L_12 = ChatClient_AuthenticateOnFrontEnd_m4E005CD5611CE63F801F714BC5FF3282B9A06002(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_025a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)1)))
		{
			goto IL_025a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error authenticating on frontend! Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_14 = __this->get_listener_18();
		int32_t L_15;
		L_15 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1605C9390111B876A1B670691E1A90A58C218D34, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_14, 1, L_18);
		// break;
		return;
	}

IL_00fc:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0103:
	{
		// switch (this.State)
		int32_t L_19;
		L_19 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)4)))
		{
			goto IL_0160;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)10))))
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0168;
		}
	}
	{
		// this.EnableProtocolFallback = false;        // the client does a fallback only one time
		ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline(__this, (bool)0, /*hidden argument*/NULL);
		// this.chatPeer.NameServerPortOverride = 0;   // resets a value in the peer only (as we change the protocol, the port has to change, too)
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_23 = __this->get_chatPeer_19();
		NullCheck(L_23);
		L_23->set_NameServerPortOverride_64((uint16_t)0);
		// this.chatPeer.TransportProtocol = (this.chatPeer.TransportProtocol == ConnectionProtocol.Tcp) ? ConnectionProtocol.Udp : ConnectionProtocol.Tcp;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_24 = __this->get_chatPeer_19();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_25 = __this->get_chatPeer_19();
		NullCheck(L_25);
		uint8_t L_26;
		L_26 = PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0_inline(L_25, /*hidden argument*/NULL);
		G_B19_0 = L_24;
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			G_B20_0 = L_24;
			goto IL_0145;
		}
	}
	{
		G_B21_0 = 1;
		G_B21_1 = G_B19_0;
		goto IL_0146;
	}

IL_0145:
	{
		G_B21_0 = 0;
		G_B21_1 = G_B20_0;
	}

IL_0146:
	{
		NullCheck(G_B21_1);
		PhotonPeer_set_TransportProtocol_mD3C508428B4DED81C7830C5F59D063BE8561F9AE_inline(G_B21_1, G_B21_0, /*hidden argument*/NULL);
		// this.Connect(this.AppId, this.AppVersion, null);
		String_t* L_27;
		L_27 = ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline(__this, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline(__this, /*hidden argument*/NULL);
		bool L_29;
		L_29 = ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738(__this, L_27, L_28, (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)NULL, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0160:
	{
		// this.ConnectToFrontEnd();
		bool L_30;
		L_30 = ChatClient_ConnectToFrontEnd_mEF90DAE273F5589540D1412A17B00EA173123869(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0168:
	{
		// string stacktrace = string.Empty;
		String_t* L_31 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_31;
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Got a unexpected Disconnect in ChatState: {0}. Server: {1} Trace: {2}", this.State, this.chatPeer.ServerAddress, stacktrace));
		RuntimeObject* L_32 = __this->get_listener_18();
		int32_t L_33;
		L_33 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_34);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_36 = __this->get_chatPeer_19();
		NullCheck(L_36);
		String_t* L_37;
		L_37 = PhotonPeer_get_ServerAddress_mA919D76F95007549D1C83036415FFDC39392CF93(L_36, /*hidden argument*/NULL);
		String_t* L_38 = V_0;
		String_t* L_39;
		L_39 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral0EC6B861684EFBC6F7D7FAB8ED28E170565B09C6, L_35, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_32, 2, L_39);
	}

IL_019b:
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_40;
		L_40 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01af;
		}
	}
	{
		// this.AuthValues.Token = null; // when leaving the server, invalidate the secret (but not the auth values)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_41;
		L_41 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline(L_41, NULL, /*hidden argument*/NULL);
	}

IL_01af:
	{
		// this.State = ChatState.Disconnected;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(ChatState.Disconnected);
		RuntimeObject* L_42 = __this->get_listener_18();
		NullCheck(L_42);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_42, ((int32_t)11));
		// this.listener.OnDisconnected();
		RuntimeObject* L_43 = __this->get_listener_18();
		NullCheck(L_43);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_43);
		// break;
		return;
	}

IL_01d0:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "This connection was rejected due to the apps CCU limit.");
		RuntimeObject* L_44 = __this->get_listener_18();
		NullCheck(L_44);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_44, 1, _stringLiteral68D7F8920CC9A5C9EB6CEA86D4BDEC243463A827);
		// this.Disconnect(ChatDisconnectCause.MaxCcuReached);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01e9:
	{
		// this.DisconnectedCause = ChatDisconnectCause.ExceptionOnConnect;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 1, /*hidden argument*/NULL);
		// if (this.EnableProtocolFallback && this.State == ChatState.ConnectingToNameServer)
		bool L_45;
		L_45 = ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline(__this, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_46;
		L_46 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_46) == ((uint32_t)1))))
		{
			goto IL_020a;
		}
	}
	{
		// this.State = ChatState.ConnectWithFallbackProtocol;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		// }
		return;
	}

IL_020a:
	{
		// this.Disconnect(ChatDisconnectCause.ExceptionOnConnect);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0212:
	{
		// this.Disconnect(ChatDisconnectCause.Exception);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_021a:
	{
		// this.Disconnect(ChatDisconnectCause.ServerTimeout);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0222:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerLogic);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_022a:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerReasonUnknown);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0232:
	{
		// this.DisconnectedCause = ChatDisconnectCause.ClientTimeout;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 5, /*hidden argument*/NULL);
		// if (this.EnableProtocolFallback && this.State == ChatState.ConnectingToNameServer)
		bool L_47;
		L_47 = ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0253;
		}
	}
	{
		int32_t L_48;
		L_48 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0253;
		}
	}
	{
		// this.State = ChatState.ConnectWithFallbackProtocol;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0253:
	{
		// this.Disconnect(ChatDisconnectCause.ClientTimeout);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 5, /*hidden argument*/NULL);
	}

IL_025a:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1778C9BC36C93CBA913DFA368A05534210106FD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.didAuthenticate)
		bool L_0 = __this->get_didAuthenticate_21();
		if (L_0)
		{
			goto IL_0063;
		}
	}
	{
		// this.didAuthenticate = this.chatPeer.AuthenticateOnNameServer(this.AppId, this.AppVersion, this.ChatRegion, this.AuthValues);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_19();
		String_t* L_2;
		L_2 = ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = ChatClient_get_ChatRegion_mA84787C704F9D905B11A083A799A8980F2954C69_inline(__this, /*hidden argument*/NULL);
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_5;
		L_5 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_6;
		L_6 = ChatPeer_AuthenticateOnNameServer_mB87BC70927ABA22AA4DAF4517A27BE97A8F46E36(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_didAuthenticate_21(L_6);
		// if (!this.didAuthenticate)
		bool L_7 = __this->get_didAuthenticate_21();
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error calling OpAuthenticate! Did not work on NameServer. Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_9 = __this->get_listener_18();
		int32_t L_10;
		L_10 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1778C9BC36C93CBA913DFA368A05534210106FD0, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_9, 1, L_13);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Channels, channels } };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_0 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_0, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_1 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___channels0;
		NullCheck(L_1);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_1, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_1;
		// if (historyLength != 0)
		int32_t L_3 = ___historyLength2;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// opParameters.Add((byte)ChatParameterCode.HistoryLength, historyLength);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_4 = V_0;
		int32_t L_5 = ___historyLength2;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_4, (uint8_t)((int32_t)14), L_7, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_001f:
	{
		// return this.chatPeer.SendOperation(operation, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_8 = __this->get_chatPeer_19();
		uint8_t L_9 = ___operation1;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_11 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_8);
		bool L_12;
		L_12 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m9971AF2D805578774D112DDEC8EC36A0F6B963E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// object message = (object)eventData.Parameters[(byte)ChatParameterCode.Message];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_1, (uint8_t)3, /*hidden argument*/NULL);
		V_0 = L_2;
		// string sender = (string)eventData.Parameters[(byte)ChatParameterCode.Sender];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_4, (uint8_t)5, /*hidden argument*/NULL);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// int msgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_6 = ___eventData0;
		NullCheck(L_6);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8;
		L_8 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_7, (uint8_t)8, /*hidden argument*/NULL);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// if (this.UserId != null && this.UserId.Equals(sender))
		String_t* L_9;
		L_9 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_10;
		L_10 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// string target = (string)eventData.Parameters[(byte)ChatParameterCode.UserId];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_13 = ___eventData0;
		NullCheck(L_13);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_14 = L_13->get_Parameters_1();
		NullCheck(L_14);
		RuntimeObject * L_15;
		L_15 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_14, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var));
		// channelName = this.GetPrivateChannelNameByUser(target);
		String_t* L_16 = V_5;
		String_t* L_17;
		L_17 = ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0(__this, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// }
		goto IL_0071;
	}

IL_0069:
	{
		// channelName = this.GetPrivateChannelNameByUser(sender);
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0(__this, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_0071:
	{
		// if (!this.PrivateChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_20 = __this->get_PrivateChannels_16();
		String_t* L_21 = V_3;
		NullCheck(L_20);
		bool L_22;
		L_22 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_20, L_21, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00b2;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_23 = V_3;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_24 = (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A *)il2cpp_codegen_object_new(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339(L_24, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// channel.IsPrivate = true;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_25 = V_4;
		NullCheck(L_25);
		ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5_inline(L_25, (bool)1, /*hidden argument*/NULL);
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_26 = V_4;
		int32_t L_27 = __this->get_MessageLimit_13();
		NullCheck(L_26);
		L_26->set_MessageLimit_3(L_27);
		// this.PrivateChannels.Add(channel.Name, channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_28 = __this->get_PrivateChannels_16();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_29 = V_4;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_Name_0();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_31 = V_4;
		NullCheck(L_28);
		Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272(L_28, L_30, L_31, /*hidden argument*/Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
	}

IL_00b2:
	{
		// channel.Add(sender, message, msgId);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_32 = V_4;
		String_t* L_33 = V_1;
		RuntimeObject * L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_32);
		ChatChannel_Add_m4FE8A53CB40B63ED3A5BBC2B9FD5A008BC233B15(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		// this.listener.OnPrivateMessage(sender, message, channelName);
		RuntimeObject* L_36 = __this->get_listener_18();
		String_t* L_37 = V_1;
		RuntimeObject * L_38 = V_0;
		String_t* L_39 = V_3;
		NullCheck(L_36);
		InterfaceActionInvoker3< String_t*, RuntimeObject *, String_t* >::Invoke(5 /* System.Void Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_36, L_37, L_38, L_39);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mB0FFE6252985600F2B2F9D76F6253BF4F01B06AA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79561E1B5A82C6D02201984FF815A7AA4012C74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0A9AA74760549C6A732B0EC13F9519F26FC67E4);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_4 = NULL;
	{
		// object[] messages = (object[])eventData.Parameters[(byte)ChatParameterCode.Messages];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_1, (uint8_t)2, /*hidden argument*/NULL);
		V_0 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		// string[] senders = (string[])eventData.Parameters[(byte)ChatParameterCode.Senders];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_4, (uint8_t)4, /*hidden argument*/NULL);
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// string channelName = (string)eventData.Parameters[(byte)ChatParameterCode.Channel];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_6 = ___eventData0;
		NullCheck(L_6);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8;
		L_8 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_7, (uint8_t)1, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		// int lastMsgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_9 = ___eventData0;
		NullCheck(L_9);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_10 = L_9->get_Parameters_1();
		NullCheck(L_10);
		RuntimeObject * L_11;
		L_11 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_10, (uint8_t)8, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_12 = __this->get_PublicChannels_15();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_12, L_13, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_007e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_15;
		L_15 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Channel " + channelName + " for incoming message event not found.");
		RuntimeObject* L_16 = __this->get_listener_18();
		String_t* L_17 = V_2;
		String_t* L_18;
		L_18 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD0A9AA74760549C6A732B0EC13F9519F26FC67E4, L_17, _stringLiteralA79561E1B5A82C6D02201984FF815A7AA4012C74, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_16, 2, L_18);
	}

IL_007d:
	{
		// return;
		return;
	}

IL_007e:
	{
		// channel.Add(senders, messages, lastMsgId);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_19 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_19);
		ChatChannel_Add_m716C3705D3930DFC682E23F123EFE522CF5E4F06(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		// this.listener.OnGetMessages(channelName, senders, messages);
		RuntimeObject* L_23 = __this->get_listener_18();
		String_t* L_24 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_0;
		NullCheck(L_23);
		InterfaceActionInvoker3< String_t*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_23, L_24, L_25, L_26);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_m33B5D93C7864D8E1130A7FE5156E3A2937FD0F43 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * V_6 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_7 = NULL;
	{
		// string[] channelsInResponse = (string[])eventData.Parameters[ChatParameterCode.Channels];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_1, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// bool[] results = (bool[])eventData.Parameters[ChatParameterCode.SubscribeResults];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_4, (uint8_t)((int32_t)15), /*hidden argument*/NULL);
		V_1 = ((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)Castclass((RuntimeObject*)L_5, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInResponse.Length; i++)
		V_2 = 0;
		goto IL_00d3;
	}

IL_002c:
	{
		// if (results[i])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_00cf;
		}
	}
	{
		// string channelName = channelsInResponse[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_14 = __this->get_PublicChannels_15();
		String_t* L_15 = V_3;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_14, L_15, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_17 = V_3;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_18 = (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A *)il2cpp_codegen_object_new(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339(L_18, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_19 = V_4;
		int32_t L_20 = __this->get_MessageLimit_13();
		NullCheck(L_19);
		L_19->set_MessageLimit_3(L_20);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_21 = __this->get_PublicChannels_15();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_22 = V_4;
		NullCheck(L_22);
		String_t* L_23 = L_22->get_Name_0();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_24 = V_4;
		NullCheck(L_21);
		Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
	}

IL_0071:
	{
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.Properties, out temp))
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_25 = ___eventData0;
		NullCheck(L_25);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_26 = L_25->get_Parameters_1();
		NullCheck(L_26);
		bool L_27;
		L_27 = ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740(L_26, (uint8_t)((int32_t)22), (RuntimeObject **)(&V_5), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0094;
		}
	}
	{
		// Dictionary<object, object> channelProperties = temp as Dictionary<object, object>;
		RuntimeObject * L_28 = V_5;
		V_6 = ((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)IsInstClass((RuntimeObject*)L_28, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var));
		// channel.ReadChannelProperties(channelProperties);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_29 = V_4;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_30 = V_6;
		NullCheck(L_29);
		ChatChannel_ReadChannelProperties_m6D5006A08AC5C8A8F224CC0F6C5C7F26163BBEB0(L_29, L_30, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// if (channel.PublishSubscribers) // or maybe remove check & always add anyway?
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_31 = V_4;
		NullCheck(L_31);
		bool L_32;
		L_32 = ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00ab;
		}
	}
	{
		// channel.AddSubscriber(this.UserId);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_33 = V_4;
		String_t* L_34;
		L_34 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_35;
		L_35 = ChatChannel_AddSubscriber_m93542F7DBF167D181060BFF49B2FF8358CF95065(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.ChannelSubscribers, out temp))
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_36 = ___eventData0;
		NullCheck(L_36);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_37 = L_36->get_Parameters_1();
		NullCheck(L_37);
		bool L_38;
		L_38 = ParameterDictionary_TryGetValue_m1304959EDB6682BF612C98A0A655B82A933ED740(L_37, (uint8_t)((int32_t)23), (RuntimeObject **)(&V_5), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00cf;
		}
	}
	{
		// string[] subscribers = temp as string[];
		RuntimeObject * L_39 = V_5;
		V_7 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_39, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// channel.AddSubscribers(subscribers);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_40 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = V_7;
		NullCheck(L_40);
		bool L_42;
		L_42 = ChatChannel_AddSubscribers_m2DF587326A03F5B4F6DF0241C97AF5B7BF7A58DB(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00d3:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_44 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = V_0;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_46 = __this->get_listener_18();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = V_0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_48 = V_1;
		NullCheck(L_46);
		InterfaceActionInvoker2< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_46, L_47, L_48);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_mAAB780ECCA2C0EA4FDF499BB3CA13019CBA0DED3 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// string[] channelsInRequest = (string[])eventData[ChatParameterCode.Channels];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = EventData_get_Item_m433694184038DA4CDC150758F8CD190E48ABD16D(L_0, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInRequest.Length; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		// string channelName = channelsInRequest[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// this.PublicChannels.Remove(channelName);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PublicChannels_15();
		String_t* L_7 = V_2;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Remove(channelName);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_9 = __this->get_PublicChannelsUnsubscribing_17();
		String_t* L_10 = V_2;
		NullCheck(L_9);
		bool L_11;
		L_11 = HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645(L_9, L_10, /*hidden argument*/HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_13 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// this.listener.OnUnsubscribed(channelsInRequest);
		RuntimeObject* L_15 = __this->get_listener_18();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_0;
		NullCheck(L_15);
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(7 /* System.Void Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, L_16);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_mC6B09076078202E3A33DD9C1CB91A4E2D4110D36 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42AFA618414215017E02F8F7EC202AD435873C33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7526A376267BC0A823CE3D35016583D70B156712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD40E444A09210A07CFBB05D9F7F4710084F5B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1838DC1CF507F5E0B8451D36D23E70F3222CC7F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int16_t V_1 = 0;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0;
		L_0 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0030;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, operationResponse.ToStringFull() + " on: " + this.chatPeer.NameServerAddress);
		RuntimeObject* L_1 = __this->get_listener_18();
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_2 = ___operationResponse0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = OperationResponse_ToStringFull_mC08F3288E138EED8685E70CE9954135C75BDA888(L_2, /*hidden argument*/NULL);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_4 = __this->get_chatPeer_19();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral42AFA618414215017E02F8F7EC202AD435873C33, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_1, 3, L_6);
	}

IL_0030:
	{
		// if (operationResponse.ReturnCode == 0)
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_7 = ___operationResponse0;
		NullCheck(L_7);
		int16_t L_8 = L_7->get_ReturnCode_1();
		if (L_8)
		{
			goto IL_019a;
		}
	}
	{
		// if (this.State == ChatState.ConnectedToNameServer)
		int32_t L_9;
		L_9 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0136;
		}
	}
	{
		// this.State = ChatState.Authenticated;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 4, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_10 = __this->get_listener_18();
		int32_t L_11;
		L_11 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, L_11);
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.Secret))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_12 = ___operationResponse0;
		NullCheck(L_12);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_13 = L_12->get_Parameters_3();
		NullCheck(L_13);
		bool L_14;
		L_14 = ParameterDictionary_ContainsKey_mF51DD506E7FE9DE2F3B54EFAC26C609CC5684AD5(L_13, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_15;
		L_15 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0084;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_16 = (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)il2cpp_codegen_object_new(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82(L_16, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline(__this, L_16, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// this.AuthValues.Token = operationResponse[ParameterCode.Secret] as string;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_17;
		L_17 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_18 = ___operationResponse0;
		NullCheck(L_18);
		RuntimeObject * L_19;
		L_19 = OperationResponse_get_Item_m3B60558B4B905446AE414AE5E5A42DFACA6BA914(L_18, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		NullCheck(L_17);
		AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline(L_17, ((String_t*)IsInstSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.FrontendAddress = (string)operationResponse[ParameterCode.Address];
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_20 = ___operationResponse0;
		NullCheck(L_20);
		RuntimeObject * L_21;
		L_21 = OperationResponse_get_Item_m3B60558B4B905446AE414AE5E5A42DFACA6BA914(L_20, (uint8_t)((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B_inline(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_22 = __this->get_chatPeer_19();
		NullCheck(L_22);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_22);
		// }
		goto IL_00dc;
	}

IL_00c2:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_23;
		L_23 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "No secret in authentication response.");
		RuntimeObject* L_24 = __this->get_listener_18();
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_24, 1, _stringLiteralE1838DC1CF507F5E0B8451D36D23E70F3222CC7F);
	}

IL_00dc:
	{
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.UserId))
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_25 = ___operationResponse0;
		NullCheck(L_25);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_26 = L_25->get_Parameters_3();
		NullCheck(L_26);
		bool L_27;
		L_27 = ParameterDictionary_ContainsKey_mF51DD506E7FE9DE2F3B54EFAC26C609CC5684AD5(L_26, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_024d;
		}
	}
	{
		// string incomingId = operationResponse.Parameters[ParameterCode.UserId] as string;
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_28 = ___operationResponse0;
		NullCheck(L_28);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_29 = L_28->get_Parameters_3();
		NullCheck(L_29);
		RuntimeObject * L_30;
		L_30 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_29, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_30, String_t_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(incomingId))
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_024d;
		}
	}
	{
		// this.UserId = incomingId;
		String_t* L_33 = V_0;
		ChatClient_set_UserId_m323C8CAF9B49E22CDADFB07E62ED49556BDC9B79(__this, L_33, /*hidden argument*/NULL);
		// this.listener.DebugReturn(DebugLevel.INFO, string.Format("Received your UserID from server. Updating local value to: {0}", this.UserId));
		RuntimeObject* L_34 = __this->get_listener_18();
		String_t* L_35;
		L_35 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDD40E444A09210A07CFBB05D9F7F4710084F5B77, L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_34, 3, L_36);
		// }
		return;
	}

IL_0136:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_37;
		L_37 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)6))))
		{
			goto IL_024d;
		}
	}
	{
		// this.State = ChatState.ConnectedToFrontEnd;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 7, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_38 = __this->get_listener_18();
		int32_t L_39;
		L_39 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_38, L_39);
		// this.listener.OnConnected();
		RuntimeObject* L_40 = __this->get_listener_18();
		NullCheck(L_40);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_40);
		// if (statusToSetWhenConnected.HasValue)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_41 = __this->get_address_of_statusToSetWhenConnected_22();
		bool L_42;
		L_42 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_41, /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_024d;
		}
	}
	{
		// SetOnlineStatus(statusToSetWhenConnected.Value, messageToSetWhenConnected);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_43 = __this->get_address_of_statusToSetWhenConnected_22();
		int32_t L_44;
		L_44 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_43, /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		RuntimeObject * L_45 = __this->get_messageToSetWhenConnected_23();
		bool L_46;
		L_46 = ChatClient_SetOnlineStatus_mE7E9529EC7A3D5F1E32B643BC2607E8745FDFBE1(__this, L_44, L_45, /*hidden argument*/NULL);
		// statusToSetWhenConnected = null;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_47 = __this->get_address_of_statusToSetWhenConnected_22();
		il2cpp_codegen_initobj(L_47, sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		// }
		return;
	}

IL_019a:
	{
		// switch (operationResponse.ReturnCode)
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_48 = ___operationResponse0;
		NullCheck(L_48);
		int16_t L_49 = L_48->get_ReturnCode_1();
		V_1 = L_49;
		int16_t L_50 = V_1;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)-3))))
		{
			goto IL_01f4;
		}
	}
	{
		int16_t L_51 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)((int32_t)32753))))
		{
			case 0:
			{
				goto IL_01fe;
			}
			case 1:
			{
				goto IL_0206;
			}
			case 2:
			{
				goto IL_01d7;
			}
			case 3:
			{
				goto IL_01e1;
			}
			case 4:
			{
				goto IL_01eb;
			}
		}
	}
	{
		int16_t L_52 = V_1;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)32767)))))
		{
			goto IL_0206;
		}
	}
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidAuthentication;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 7, /*hidden argument*/NULL);
		// break;
		goto IL_0206;
	}

IL_01d7:
	{
		// this.DisconnectedCause = ChatDisconnectCause.CustomAuthenticationFailed;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// break;
		goto IL_0206;
	}

IL_01e1:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidRegion;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0206;
	}

IL_01eb:
	{
		// this.DisconnectedCause = ChatDisconnectCause.MaxCcuReached;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0206;
	}

IL_01f4:
	{
		// this.DisconnectedCause = ChatDisconnectCause.OperationNotAllowedInCurrentState;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0206;
	}

IL_01fe:
	{
		// this.DisconnectedCause = ChatDisconnectCause.AuthenticationTicketExpired;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
	}

IL_0206:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_53;
		L_53 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_53) < ((int32_t)1)))
		{
			goto IL_0241;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("{0} ClientState: {1} ServerAddress: {2}", operationResponse.ToStringFull(), this.State, this.chatPeer.ServerAddress));
		RuntimeObject* L_54 = __this->get_listener_18();
		OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD * L_55 = ___operationResponse0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = OperationResponse_ToStringFull_mC08F3288E138EED8685E70CE9954135C75BDA888(L_55, /*hidden argument*/NULL);
		int32_t L_57;
		L_57 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_58);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_60 = __this->get_chatPeer_19();
		NullCheck(L_60);
		String_t* L_61;
		L_61 = PhotonPeer_get_ServerAddress_mA919D76F95007549D1C83036415FFDC39392CF93(L_60, /*hidden argument*/NULL);
		String_t* L_62;
		L_62 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral7526A376267BC0A823CE3D35016583D70B156712, L_56, L_59, L_61, /*hidden argument*/NULL);
		NullCheck(L_54);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_54, 1, L_62);
	}

IL_0241:
	{
		// this.Disconnect(this.DisconnectedCause);
		int32_t L_63;
		L_63 = ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A_inline(__this, /*hidden argument*/NULL);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, L_63, /*hidden argument*/NULL);
	}

IL_024d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m4CEDDDA5621D80BADED8EEF0F0CF986C29A96732 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	{
		// string user = (string)eventData.Parameters[ChatParameterCode.Sender];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_1, (uint8_t)5, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// int status = (int)eventData.Parameters[ChatParameterCode.Status];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_4, (uint8_t)((int32_t)10), /*hidden argument*/NULL);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// object message = null;
		V_2 = NULL;
		// bool gotMessage = eventData.Parameters.ContainsKey(ChatParameterCode.Message);
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_6 = ___eventData0;
		NullCheck(L_6);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8;
		L_8 = ParameterDictionary_ContainsKey_mF51DD506E7FE9DE2F3B54EFAC26C609CC5684AD5(L_7, (uint8_t)3, /*hidden argument*/NULL);
		V_3 = L_8;
		// if (gotMessage)
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// message = eventData.Parameters[ChatParameterCode.Message];
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_10 = ___eventData0;
		NullCheck(L_10);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_11 = L_10->get_Parameters_1();
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_11, (uint8_t)3, /*hidden argument*/NULL);
		V_2 = L_12;
	}

IL_0044:
	{
		// this.listener.OnStatusUpdate(user, status, gotMessage, message);
		RuntimeObject* L_13 = __this->get_listener_18();
		String_t* L_14 = V_0;
		int32_t L_15 = V_1;
		bool L_16 = V_3;
		RuntimeObject * L_17 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker4< String_t*, int32_t, bool, RuntimeObject * >::Invoke(8 /* System.Void Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16, L_17);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectToFrontEnd_mEF90DAE273F5589540D1412A17B00EA173123869 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C82A48E16CE752BFB1F18655003416C01CCB606);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86D8D1F03036F57943C7BD6C7E29797408CE238);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.State = ChatState.ConnectingToFrontEnd;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 6, /*hidden argument*/NULL);
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0;
		L_0 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, "Connecting to frontend " + this.FrontendAddress);
		RuntimeObject* L_1 = __this->get_listener_18();
		String_t* L_2;
		L_2 = ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7C82A48E16CE752BFB1F18655003416C01CCB606, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_1, 3, L_3);
	}

IL_002c:
	{
		// if (!this.chatPeer.Connect(this.FrontendAddress, this.ProxyServerAddress, ChatAppName, null))
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_4 = __this->get_chatPeer_19();
		String_t* L_5;
		L_5 = ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline(__this, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_ProxyServerAddress_7();
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtFuncInvoker5< bool, String_t*, String_t*, String_t*, RuntimeObject *, RuntimeObject * >::Invoke(7 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.String,System.Object,System.Object) */, L_4, L_5, L_6, _stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01, NULL, NULL);
		if (L_7)
		{
			goto IL_0073;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Connecting to frontend {0} failed.", this.FrontendAddress));
		RuntimeObject* L_9 = __this->get_listener_18();
		String_t* L_10;
		L_10 = ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline(__this, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA86D8D1F03036F57943C7BD6C7E29797408CE238, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_9, 1, L_11);
	}

IL_0071:
	{
		// return false;
		return (bool)0;
	}

IL_0073:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_m4E005CD5611CE63F801F714BC5FF3282B9A06002 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A6CA5262FE7F016760CB20C16434E6FB8F41F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68981F620708F9798BD0661A61FE7446FBE99BB1);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0;
		L_0 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		// if (this.AuthValues.Token == null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_1;
		L_1 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_3;
		L_3 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Secret (AuthValues.Token) is not set");
		RuntimeObject* L_4 = __this->get_listener_18();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral42A6CA5262FE7F016760CB20C16434E6FB8F41F9);
	}

IL_002f:
	{
		// return false;
		return (bool)0;
	}

IL_0031:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Secret, this.AuthValues.Token } };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_5 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_5, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = L_5;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_7;
		L_7 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject * L_8;
		L_8 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_6, (uint8_t)((int32_t)221), L_8, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_6;
		// if (this.PrivateChatHistoryLength > -1)
		int32_t L_9 = __this->get_PrivateChatHistoryLength_14();
		if ((((int32_t)L_9) <= ((int32_t)(-1))))
		{
			goto IL_0069;
		}
	}
	{
		// opParameters[(byte)ChatParameterCode.HistoryLength] = this.PrivateChatHistoryLength;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_10 = V_0;
		int32_t L_11 = __this->get_PrivateChatHistoryLength_14();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_10, (uint8_t)((int32_t)14), L_13, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_0069:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Authenticate, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_14 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_16 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_14, (uint8_t)((int32_t)230), L_15, L_16);
		return L_17;
	}

IL_0080:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_18;
		L_18 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Authentication Values are not set");
		RuntimeObject* L_19 = __this->get_listener_18();
		NullCheck(L_19);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_19, 1, _stringLiteral68981F620708F9798BD0661A61FE7446FBE99BB1);
	}

IL_009a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m6BC91E7F9FC7BC07BAEA7B65E4D4E4EF3386E6C1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82892C79BF7C320FA3BFB55413015A1377BBF81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD54B5B3649F0373103D67B6B7A8A9F07DB0123C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6F2030C05AC7B710C8B0CB6D94308D4BD9FB5DF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_2 = NULL;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_1, (uint8_t)1, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_4, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PublicChannels_15();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_6, L_7, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_11;
		L_11 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserUnsubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_12 = __this->get_listener_18();
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA82892C79BF7C320FA3BFB55413015A1377BBF81, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_12, 2, L_15);
	}

IL_0061:
	{
		// if (!channel.RemoveSubscriber(userId)) // user not found!
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_16 = V_2;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = ChatChannel_RemoveSubscriber_m217B117047A8BA5DA41B336290E287A4F130F79B(L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00ae;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_19;
		L_19 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00ae;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" does not contain unsubscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_20 = __this->get_listener_18();
		String_t* L_21 = V_0;
		String_t* L_22 = V_1;
		String_t* L_23;
		L_23 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralF6F2030C05AC7B710C8B0CB6D94308D4BD9FB5DF, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_20, 2, L_23);
		// }
		goto IL_00ae;
	}

IL_008d:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24;
		L_24 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)2)))
		{
			goto IL_00ae;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserUnsubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_25 = __this->get_listener_18();
		String_t* L_26 = V_0;
		String_t* L_27 = V_1;
		String_t* L_28;
		L_28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD54B5B3649F0373103D67B6B7A8A9F07DB0123C4, L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_25, 2, L_28);
	}

IL_00ae:
	{
		// this.listener.OnUserUnsubscribed(channelName, userId);
		RuntimeObject* L_29 = __this->get_listener_18();
		String_t* L_30 = V_0;
		String_t* L_31 = V_1;
		NullCheck(L_29);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Photon.Chat.IChatClientListener::OnUserUnsubscribed(System.String,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_29, L_30, L_31);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_mC54FA45932EB1A039355053BFB5D3BC00633825A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28109F85CA80D67F72ADABF892ADE86ECA967B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4957F3CE2FF4C82ED66B5502CC44FA8717A4B529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85018838CBFFFF831100BA4A581064C1BA9AC7EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADBBFF7D5071017209F0FAF588398FCC772AD53);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_2 = NULL;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_1, (uint8_t)1, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m25FC07651A2E15D6B6F43D48E3D7885D6D2A8A6B(L_4, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PublicChannels_15();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_6, L_7, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_00ec;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_11;
		L_11 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_0064;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserSubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_12 = __this->get_listener_18();
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral85018838CBFFFF831100BA4A581064C1BA9AC7EE, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_12, 2, L_15);
	}

IL_0064:
	{
		// if (!channel.AddSubscriber(userId)) // user came back from the dead ?
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_16 = V_2;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = ChatChannel_AddSubscriber_m93542F7DBF167D181060BFF49B2FF8358CF95065(L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0093;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_19;
		L_19 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_010d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" already contains newly subscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_20 = __this->get_listener_18();
		String_t* L_21 = V_0;
		String_t* L_22 = V_1;
		String_t* L_23;
		L_23 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral28109F85CA80D67F72ADABF892ADE86ECA967B8C, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_20, 2, L_23);
		// }
		goto IL_010d;
	}

IL_0093:
	{
		// else if (channel.MaxSubscribers > 0 && channel.Subscribers.Count > channel.MaxSubscribers)
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_26 = V_2;
		NullCheck(L_26);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_27 = L_26->get_Subscribers_10();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline(L_27, /*hidden argument*/HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) <= ((int32_t)L_30)))
		{
			goto IL_010d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_31;
		L_31 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_31) < ((int32_t)2)))
		{
			goto IL_010d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\"'s MaxSubscribers exceeded. count={1} > MaxSubscribers={2}.", channelName, channel.Subscribers.Count, channel.MaxSubscribers));
		RuntimeObject* L_32 = __this->get_listener_18();
		String_t* L_33 = V_0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_34 = V_2;
		NullCheck(L_34);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_35 = L_34->get_Subscribers_10();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline(L_35, /*hidden argument*/HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_37);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline(L_39, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43;
		L_43 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral4957F3CE2FF4C82ED66B5502CC44FA8717A4B529, L_33, L_38, L_42, /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_32, 2, L_43);
		// }
		goto IL_010d;
	}

IL_00ec:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_44;
		L_44 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_44) < ((int32_t)2)))
		{
			goto IL_010d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserSubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_45 = __this->get_listener_18();
		String_t* L_46 = V_0;
		String_t* L_47 = V_1;
		String_t* L_48;
		L_48 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFADBBFF7D5071017209F0FAF588398FCC772AD53, L_46, L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_45, 2, L_48);
	}

IL_010d:
	{
		// this.listener.OnUserSubscribed(channelName, userId);
		RuntimeObject* L_49 = __this->get_listener_18();
		String_t* L_50 = V_0;
		String_t* L_51 = V_1;
		NullCheck(L_49);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Photon.Chat.IChatClientListener::OnUserSubscribed(System.String,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_49, L_50, L_51);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String,System.Int32,System.Int32,Photon.Chat.ChannelCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_mC614066BD08A258D5A0495FA86F98FC2E06C2C4E (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channel0, int32_t ___lastMsgId1, int32_t ___messagesFromHistory2, ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07445570109C992757EB9C92D1E61BACF9E55F91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5A4CDE2DD8CEA11EF5E3451DD217D6A15AD17D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD847B3D35C89810672FAB55F56E8C4AA9705AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9E2E3F5DF3ABF46A5982E73A60F7A768AE2BD7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2EDCE0F75D698215106063C4484FB4DE0395E9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * V_2 = NULL;
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_3 = NULL;
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_4 = NULL;
	{
		// if (creationOptions == null)
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_0 = ___creationOptions3;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// creationOptions = ChannelCreationOptions.Default;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_1 = ((ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var))->get_Default_0();
		___creationOptions3 = L_1;
	}

IL_000b:
	{
		// int maxSubscribers = creationOptions.MaxSubscribers;
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_2 = ___creationOptions3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// bool publishSubscribers = creationOptions.PublishSubscribers;
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_4 = ___creationOptions3;
		NullCheck(L_4);
		bool L_5;
		L_5 = ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (maxSubscribers < 0)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_7;
		L_7 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Cannot set MaxSubscribers < 0.");
		RuntimeObject* L_8 = __this->get_listener_18();
		NullCheck(L_8);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_8, 1, _stringLiteralDCD847B3D35C89810672FAB55F56E8C4AA9705AC);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// if (lastMsgId < 0)
		int32_t L_9 = ___lastMsgId1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_10;
		L_10 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "lastMsgId cannot be < 0.");
		RuntimeObject* L_11 = __this->get_listener_18();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_11, 1, _stringLiteral0B5A4CDE2DD8CEA11EF5E3451DD217D6A15AD17D);
	}

IL_0059:
	{
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// if (messagesFromHistory < -1)
		int32_t L_12 = ___messagesFromHistory2;
		if ((((int32_t)L_12) >= ((int32_t)(-1))))
		{
			goto IL_007c;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_0079;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "messagesFromHistory < -1, setting it to -1");
		RuntimeObject* L_14 = __this->get_listener_18();
		NullCheck(L_14);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_14, 2, _stringLiteral07445570109C992757EB9C92D1E61BACF9E55F91);
	}

IL_0079:
	{
		// messagesFromHistory = -1;
		___messagesFromHistory2 = (-1);
	}

IL_007c:
	{
		// if (lastMsgId > 0 && messagesFromHistory == 0)
		int32_t L_15 = ___lastMsgId1;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_16 = ___messagesFromHistory2;
		if (L_16)
		{
			goto IL_00a0;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_17;
		L_17 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_009d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "lastMsgId will be ignored because messagesFromHistory == 0");
		RuntimeObject* L_18 = __this->get_listener_18();
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_18, 2, _stringLiteralEA2EDCE0F75D698215106063C4484FB4DE0395E9);
	}

IL_009d:
	{
		// lastMsgId = 0;
		___lastMsgId1 = 0;
	}

IL_00a0:
	{
		// Dictionary<object, object> properties = null;
		V_2 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)NULL;
		// if (publishSubscribers)
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00ee;
		}
	}
	{
		// if (maxSubscribers > DefaultMaxSubscribers)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)100))))
		{
			goto IL_00d2;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_21;
		L_21 = ChatClient_get_DebugOut_m20128CF409DFA1DF590F5853F2B064546A6AFBF1(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)1)))
		{
			goto IL_00d0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR,
		//     string.Format("Cannot set MaxSubscribers > {0} when PublishSubscribers == true.", DefaultMaxSubscribers));
		RuntimeObject* L_22 = __this->get_listener_18();
		int32_t L_23 = ((int32_t)100);
		RuntimeObject * L_24 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE9E2E3F5DF3ABF46A5982E73A60F7A768AE2BD7D, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_22, 1, L_25);
	}

IL_00d0:
	{
		// return false;
		return (bool)0;
	}

IL_00d2:
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_26 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F(L_26, /*hidden argument*/Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		V_2 = L_26;
		// properties[ChannelWellKnownProperties.PublishSubscribers] = true;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_27 = V_2;
		uint8_t L_28 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_29 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_28);
		bool L_30 = ((bool)1);
		RuntimeObject * L_31 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A(L_27, L_29, L_31, /*hidden argument*/Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
	}

IL_00ee:
	{
		// if (maxSubscribers > 0)
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		// if (properties == null)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_33 = V_2;
		if (L_33)
		{
			goto IL_00fb;
		}
	}
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_34 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F(L_34, /*hidden argument*/Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		V_2 = L_34;
	}

IL_00fb:
	{
		// properties[ChannelWellKnownProperties.MaxSubscribers] = maxSubscribers;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_35 = V_2;
		uint8_t L_36 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_37 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_36);
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_35);
		Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A(L_35, L_37, L_40, /*hidden argument*/Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
	}

IL_0111:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { ChatParameterCode.Channels, new[] { channel } } };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_41 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_41, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		V_4 = L_41;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_42 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_43;
		String_t* L_45 = ___channel0;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_45);
		NullCheck(L_42);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_42, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_44, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_46 = V_4;
		V_3 = L_46;
		// if (messagesFromHistory != 0)
		int32_t L_47 = ___messagesFromHistory2;
		if (!L_47)
		{
			goto IL_013e;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.HistoryLength, messagesFromHistory);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_48 = V_3;
		int32_t L_49 = ___messagesFromHistory2;
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_48, (uint8_t)((int32_t)14), L_51, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_013e:
	{
		// if (lastMsgId > 0)
		int32_t L_52 = ___lastMsgId1;
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_0154;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.MsgIds, new[] { lastMsgId });
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_53 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = L_54;
		int32_t L_56 = ___lastMsgId1;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_56);
		NullCheck(L_53);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_53, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_55, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0154:
	{
		// if (properties != null && properties.Count > 0)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_57 = V_2;
		if (!L_57)
		{
			goto IL_0169;
		}
	}
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_58, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.Properties, properties);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_60 = V_3;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_61 = V_2;
		NullCheck(L_60);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_60, (uint8_t)((int32_t)22), L_61, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0169:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_62 = __this->get_chatPeer_19();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_63 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_64 = ((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_62, (uint8_t)0, L_63, L_64);
		return L_65;
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
// System.Void Photon.Chat.ChatEventCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEventCode__ctor_m0F45D36EB0218B157F64A471A41328753B2FD5D0 (ChatEventCode_t2202D7BECCED5FE88A4F8F75E70BDE66697093F4 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Chat.ChatOperationCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatOperationCode__ctor_m728A6F4440D3232E8E99B5D58A330BB856C3116B (ChatOperationCode_t2AE46F42C34F7745F04E04373F6D62D77EC3D8EF * __this, const RuntimeMethod* method)
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
// System.Void Photon.Chat.ChatParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatParameterCode__ctor_m8FFAFC45471B6FBD120D939AEDD41C64057F0E47 (ChatParameterCode_t7122E95EB7C2C474001D425685D32A97EC02CB32 * __this, const RuntimeMethod* method)
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
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_0;
		L_0 = ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_get_IsProtocolSecure_m396FFE6A6EA9E25A4611B45C069B5E9D26F93437 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		uint8_t L_0;
		L_0 = PhotonPeer_get_UsedProtocol_m5D5E82029AFAF1D25D5504E0411E1E6E903758C9(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m6B7ADFD7D8D6640F02BCB436AA658367B205010C (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E3A5DFDF30AC18B4DB9AC5D034EFEA29F1AAE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string NameServerHost = "ns.photonengine.io";
		__this->set_NameServerHost_62(_stringLiteral77E3A5DFDF30AC18B4DB9AC5D034EFEA29F1AAE3);
		// public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol) : base(listener, protocol)
		RuntimeObject* L_0 = ___listener0;
		uint8_t L_1 = ___protocol1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_il2cpp_TypeInfo_var);
		PhotonPeer__ctor_mD77A24B3740E86BBB4FB356B5314C3DDC4827C82(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.ConfigUnitySockets();
		ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F8B28CFFF704DB3769B10DBB3290A133248008A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB68C7C4D22B75A2C98587E5B35395233B0F5BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		// Type websocketType = null;
		V_0 = (Type_t *)NULL;
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, PhotonWebSocket", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0;
		L_0 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, _stringLiteralCB68C7C4D22B75A2C98587E5B35395233B0F5BF6, (bool)0, ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		V_0 = L_0;
		// if (websocketType == null)
		Type_t * L_1 = V_0;
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp-firstpass", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, _stringLiteral1F8B28CFFF704DB3769B10DBB3290A133248008A, (bool)0, ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0023:
	{
		// if (websocketType == null)
		Type_t * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, _stringLiteralF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C, (bool)0, ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0038:
	{
		// if (websocketType != null)
		Type_t * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocket] = websocketType;
		Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * L_9 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)__this)->get_SocketImplementationConfig_18();
		Type_t * L_10 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1(L_9, 4, L_10, /*hidden argument*/Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1_RuntimeMethod_var);
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocketSecure] = websocketType;
		Dictionary_2_tC9E43396A339B733315341836A03EE9B393E765F * L_11 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)__this)->get_SocketImplementationConfig_18();
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1(L_11, 5, L_12, /*hidden argument*/Dictionary_2_set_Item_m423AE1A4A93DD46D40A826DE8ABDA70D10D5A7F1_RuntimeMethod_var);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m90394436701B5CE9EC78264B4842667B1D92D73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE9B3CF5AE017754E39259FE1ECEDCE06CA1CBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E7CF73ABE78832F677B6B12A03A933ED22EDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6824010DE96FAEEDC5701C23C1377985B771A8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	{
		// var protocolPort = 0;
		V_0 = 0;
		// ProtocolToNameServerPort.TryGetValue(this.TransportProtocol, out protocolPort);
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * L_0 = ((ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var))->get_ProtocolToNameServerPort_63();
		uint8_t L_1;
		L_1 = PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m90394436701B5CE9EC78264B4842667B1D92D73B(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m90394436701B5CE9EC78264B4842667B1D92D73B_RuntimeMethod_var);
		// if (this.NameServerPortOverride != 0)
		uint16_t L_3 = __this->get_NameServerPortOverride_64();
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, string.Format("Using NameServerPortInAppSettings as port for Name Server: {0}", this.NameServerPortOverride));
		RuntimeObject* L_4;
		L_4 = PhotonPeer_get_Listener_mD380EDFE1DF54BFDAE89B45CB33610B55ABF927B_inline(__this, /*hidden argument*/NULL);
		uint16_t L_5 = __this->get_NameServerPortOverride_64();
		uint16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1AE9B3CF5AE017754E39259FE1ECEDCE06CA1CBF, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D_il2cpp_TypeInfo_var, L_4, 3, L_8);
		// protocolPort = this.NameServerPortOverride;
		uint16_t L_9 = __this->get_NameServerPortOverride_64();
		V_0 = L_9;
	}

IL_0045:
	{
		// switch (this.TransportProtocol)
		uint8_t L_10;
		L_10 = PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0_inline(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		uint8_t L_11 = V_1;
		switch (L_11)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_00b1;
			}
			case 3:
			{
				goto IL_00b1;
			}
			case 4:
			{
				goto IL_0083;
			}
			case 5:
			{
				goto IL_009a;
			}
		}
	}
	{
		goto IL_00b1;
	}

IL_006c:
	{
		// return string.Format("{0}:{1}", NameServerHost, protocolPort);
		String_t* L_12 = __this->get_NameServerHost_62();
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_12, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0083:
	{
		// return string.Format("ws://{0}:{1}", NameServerHost, protocolPort);
		String_t* L_17 = __this->get_NameServerHost_62();
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral80E7CF73ABE78832F677B6B12A03A933ED22EDCE, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_009a:
	{
		// return string.Format("wss://{0}:{1}", NameServerHost, protocolPort);
		String_t* L_22 = __this->get_NameServerHost_62();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralEA6824010DE96FAEEDC5701C23C1377985B771A8, L_22, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_00b1:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_27 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E_RuntimeMethod_var)));
	}
}
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_mB87BC70927ABA22AA4DAF4517A27BE97A8F46E36 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A0517E53F97847DA11954EC5BB6A0ABEB18E1F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 *)__this)->get_DebugOut_20();
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "OpAuthenticate()");
		RuntimeObject* L_1;
		L_1 = PhotonPeer_get_Listener_mD380EDFE1DF54BFDAE89B45CB33610B55ABF927B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t638EAC01DC5B173F187166A4312CBADD6CB1B51D_il2cpp_TypeInfo_var, L_1, 3, _stringLiteralB7A0517E53F97847DA11954EC5BB6A0ABEB18E1F);
	}

IL_001a:
	{
		// var opParameters = new Dictionary<byte, object>();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_2 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_2, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		V_0 = L_2;
		// opParameters[ParameterCode.AppVersion] = appVersion;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_3 = V_0;
		String_t* L_4 = ___appVersion1;
		NullCheck(L_3);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_3, (uint8_t)((int32_t)220), L_4, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// opParameters[ParameterCode.ApplicationId] = appId;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_5 = V_0;
		String_t* L_6 = ___appId0;
		NullCheck(L_5);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_5, (uint8_t)((int32_t)224), L_6, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// opParameters[ParameterCode.Region] = region;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_7 = V_0;
		String_t* L_8 = ___region2;
		NullCheck(L_7);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_7, (uint8_t)((int32_t)210), L_8, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// if (authValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_9 = ___authValues3;
		if (!L_9)
		{
			goto IL_00e8;
		}
	}
	{
		// if (!string.IsNullOrEmpty(authValues.UserId))
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_10 = ___authValues3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006b;
		}
	}
	{
		// opParameters[ParameterCode.UserId] = authValues.UserId;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_13 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_14 = ___authValues3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_13, (uint8_t)((int32_t)225), L_15, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_006b:
	{
		// if (authValues.AuthType != CustomAuthenticationType.None)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_16 = ___authValues3;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8_inline(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)255))))
		{
			goto IL_00e8;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationType] = (byte) authValues.AuthType;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_18 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_19 = ___authValues3;
		NullCheck(L_19);
		uint8_t L_20;
		L_20 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8_inline(L_19, /*hidden argument*/NULL);
		uint8_t L_21 = ((uint8_t)L_20);
		RuntimeObject * L_22 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_18, (uint8_t)((int32_t)217), L_22, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// if (authValues.Token != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_23 = ___authValues3;
		NullCheck(L_23);
		RuntimeObject * L_24;
		L_24 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ad;
		}
	}
	{
		// opParameters[ParameterCode.Secret] = authValues.Token;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_25 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_26 = ___authValues3;
		NullCheck(L_26);
		RuntimeObject * L_27;
		L_27 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_25, (uint8_t)((int32_t)221), L_27, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// }
		goto IL_00e8;
	}

IL_00ad:
	{
		// if (!string.IsNullOrEmpty(authValues.AuthGetParameters))
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_28 = ___authValues3;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(L_28, /*hidden argument*/NULL);
		bool L_30;
		L_30 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00cd;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationParams] = authValues.AuthGetParameters;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_31 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_32 = ___authValues3;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_31, (uint8_t)((int32_t)216), L_33, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_00cd:
	{
		// if (authValues.AuthPostData != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_34 = ___authValues3;
		NullCheck(L_34);
		RuntimeObject * L_35;
		L_35 = AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00e8;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationData] = authValues.AuthPostData;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_36 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_37 = ___authValues3;
		NullCheck(L_37);
		RuntimeObject * L_38;
		L_38 = AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_36, (uint8_t)((int32_t)214), L_38, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_00e8:
	{
		// return this.SendOperation(ChatOperationCode.Authenticate, opParameters, new SendOptions() { Reliability = true, Encrypt = this.IsEncryptionAvailable });
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_39 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 ));
		SendOptions_set_Reliability_m550864C260B625CD96C0D5BD526404B78C1A1D60((SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		bool L_40;
		L_40 = PhotonPeer_get_IsEncryptionAvailable_m88CCD9FDC02861F36BAF7049BB29D978374C1E43(__this, /*hidden argument*/NULL);
		(&V_1)->set_Encrypt_3(L_40);
		SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  L_41 = V_1;
		bool L_42;
		L_42 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t9CDBFAF7B8FE7ADE905371A6D5F1B3398EEA4C47  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, __this, (uint8_t)((int32_t)230), L_39, L_41);
		return L_42;
	}
}
// System.Void Photon.Chat.ChatPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__cctor_mCE93F396A418E158D04A4469E13291B272F0BE59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9E12D802B43642CE258E1894EDF0C0A4E609A025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort = new Dictionary<ConnectionProtocol, int>() { { ConnectionProtocol.Udp, 5058 }, { ConnectionProtocol.Tcp, 4533 }, { ConnectionProtocol.WebSocket, 9093 }, { ConnectionProtocol.WebSocketSecure, 19093 } }; //, { ConnectionProtocol.RHttp, 6063 } };
		Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * L_0 = (Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 *)il2cpp_codegen_object_new(Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E12D802B43642CE258E1894EDF0C0A4E609A025(L_0, /*hidden argument*/Dictionary_2__ctor_m9E12D802B43642CE258E1894EDF0C0A4E609A025_RuntimeMethod_var);
		Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E(L_1, 0, ((int32_t)5058), /*hidden argument*/Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E_RuntimeMethod_var);
		Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E(L_2, 1, ((int32_t)4533), /*hidden argument*/Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E_RuntimeMethod_var);
		Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E(L_3, 4, ((int32_t)9093), /*hidden argument*/Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E_RuntimeMethod_var);
		Dictionary_2_t730443555F908A3A468280568D4C8FCFD7184334 * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E(L_4, 5, ((int32_t)19093), /*hidden argument*/Dictionary_2_Add_mD5B036A7373B806BA5F4D01DA486FB295475414E_RuntimeMethod_var);
		((ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var))->set_ProtocolToNameServerPort_63(L_4);
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
// System.Void Photon.Chat.ErrorCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCode__ctor_mF47997108313812CF829935FB18B0454FE82D652 (ErrorCode_tF5FB48D902FA1A185E7877F9E17236B8CDF5C113 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Chat.ParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterCode__ctor_m9D6D0ECD8057C223B8F8BA5FAD86170C329629CC (ParameterCode_t6FAB9ABF0A365CA1E0CA1730AC6266790F0C7151 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		// set { authType = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CTransportProtocolU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_mD3C508428B4DED81C7830C5F59D063BE8561F9AE_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CTransportProtocolU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_mF37E3249E12AA6427EE8CED6249666E4E98A67CD_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSerializationProtocolTypeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatRegion = value; }
		String_t* L_0 = ___value0;
		__this->set_chatRegion_6(L_0);
		// set { this.chatRegion = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnableProtocolFallbackU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_mFD60FA50656EB21933745288D5DDE67E3CAE8577_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = __this->get_U3CEnableProtocolFallbackU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mA84787C704F9D905B11A083A799A8980F2954C69_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// get { return this.chatRegion; }
		String_t* L_0 = __this->get_chatRegion_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_mD380EDFE1DF54BFDAE89B45CB33610B55ABF927B_inline (PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CListenerU3Ek__BackingField_21();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
