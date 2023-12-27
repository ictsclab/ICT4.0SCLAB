#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t3A90C82D938D47128CF15BBD66A0B8DB06909839;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
struct IEnumerable_1_tF2C6A9216277A2932D9C0348DF3175EB793758D3;
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct List_1_t843DDFC12FA082765DEA06C0678E4977E04CC9D7;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4;
struct CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315;
struct CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct Exception_t;
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
struct HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909;
struct HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct HttpListenerContext_t132569E34C5C474FA3AECD4E2F7B9C80A85538FC;
struct HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1;
struct ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StringBuilder_t;
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
struct Type_t;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331;
struct KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81;
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
struct U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct U3CU3Ec__DisplayClass3e_t1A60FC477758C3AD1A1AF76F9565AB4E639894D1;
struct U3CU3Ec__DisplayClass41_tC07C323DC0DB7B10F27A1990FD75380D199CA634;
struct U3CU3Ec__DisplayClass44_t8D9720E977F6C078D7042CDA925CDBCD4289630B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF2C6A9216277A2932D9C0348DF3175EB793758D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3253AF2F1CB326FA974E60D612DA67B67693FAC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01;
IL2CPP_EXTERN_C String_t* _stringLiteral0E34ED49D8F62F2601BBC9AE613C6F4F882AD2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0E785F98AA2B874444D8321FE5FE5011E16FFBDB;
IL2CPP_EXTERN_C String_t* _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4;
IL2CPP_EXTERN_C String_t* _stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral5C5EE883BE58477D29789770C77CED0740EA2109;
IL2CPP_EXTERN_C String_t* _stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52;
IL2CPP_EXTERN_C String_t* _stringLiteral77761B78E5317BBDD8BB26D0738EB08923108D7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D72E49ED37FAD2507B08D7DC599C12A8538E36D;
IL2CPP_EXTERN_C String_t* _stringLiteral837AB1353B48531677906AF6731DF5EF5ACDA3F1;
IL2CPP_EXTERN_C String_t* _stringLiteral91F08120CD0AB96BE72DC81765983EA3BCEDE8F5;
IL2CPP_EXTERN_C String_t* _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182;
IL2CPP_EXTERN_C String_t* _stringLiteralA69050EB68FC72BF9728393D25FADBA286830905;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEF799885C83DDA6036FF25A2D47B014CB7DB2525;
IL2CPP_EXTERN_C const RuntimeMethod* Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandshakeResponse_Parse_mA3CA1A49E6FA09E42ED0E57BC56F6E06815CEA05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_BeginRead_mFA712084EDA83E0D9468DB49B8E34637C8D4605E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_BeginWrite_mDA3918F87EC85C8130ACA212A572370B4DFEF3FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_EndRead_m48C2EAEB0A0E307AE1D6D9ABBCB6B7B7F6F3DB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_EndWrite_m1AA9C9C78F9EC86E0A91846C521771010129E9D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_Read_mF013A6F195134DB01DF9056910BD326523EF2DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_Seek_mBBCCAB8FBB992F5A3A89EA3B53A8C166526070C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_SetLength_m39AD97BD7E277744B0C02A675B7D0B666C3F95BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_U3CEndWriteU3Eb__0_m7184A5CD6F9B549F6E9563E98304476B908CFC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_Write_m9277EF647C7F7B090DB0BDB7E121B24BE22EA6BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_get_Length_mF0ACAB168C32CFBB2EE4B3A2F066BBF9EBCD6EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_get_Position_mA1FBA4A186A75FEBC0BEB17F4DC61EB97A351EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseStream_set_Position_mAA93C1A668AC347EB65C6B8510781E29D544F57F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_mAC41E9748FA3DFBB3A3B97DBAB17BB80FD9B3BFD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

struct AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3  : public RuntimeObject
{
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____params_0;
	String_t* ____scheme_1;
};

struct CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315  : public RuntimeObject
{
	List_1_t843DDFC12FA082765DEA06C0678E4977E04CC9D7* ____list_0;
	RuntimeObject* ____sync_1;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage_55;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	bool ___m_deserializedFromEverett_57;
	bool ___m_isReadOnly_58;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	RuntimeObject* ___s_InternalSyncObject_61;
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

struct HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____entity_1;
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____headers_2;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_3;
};

struct HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B  : public RuntimeObject
{
	bool ____chunked_0;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____contentEncoding_1;
	int64_t ____contentLength_2;
	bool ____contentLengthSet_3;
	String_t* ____contentType_4;
	HttpListenerContext_t132569E34C5C474FA3AECD4E2F7B9C80A85538FC* ____context_5;
	CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* ____cookies_6;
	bool ____disposed_7;
	bool ____forceCloseChunked_8;
	WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* ____headers_9;
	bool ____headersSent_10;
	bool ____keepAlive_11;
	String_t* ____location_12;
	ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* ____outputStream_13;
	int32_t ____statusCode_14;
	String_t* ____statusDescription_15;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_16;
};

struct HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A  : public RuntimeObject
{
};

struct HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A_StaticFields
{
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___Version10_0;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___Version11_1;
};

struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity_0;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

struct MemberInfo_t  : public RuntimeObject
{
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	bool ____readOnly_8;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_9;
	RuntimeObject* ____keyComparer_10;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_11;
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_12;
	KeysCollection_t8FF5FD8704F6F99F6FD4B8A2D27DFAEFD3880F81* ____keys_13;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_14;
	int32_t ____version_15;
	RuntimeObject* ____syncRoot_16;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_17;
};

struct PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____applicationData_1;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____extensionData_2;
	bool ____masked_3;
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

struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	StringBuilder_t* ___m_ChunkPrevious_1;
	int32_t ___m_ChunkLength_2;
	int32_t ___m_ChunkOffset_3;
	int32_t ___m_MaxCapacity_4;
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

struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	int32_t ____Major_0;
	int32_t ____Minor_1;
	int32_t ____Build_2;
	int32_t ____Revision_3;
};

struct U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06  : public RuntimeObject
{
	uint8_t ___U3CU3E2__current_0;
	int32_t ___U3CU3E1__state_1;
	PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* ___U3CU3E4__this_2;
	uint8_t ___U3CbU3E5__1_3;
	uint8_t ___U3CbU3E5__2_4;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CU3E7__wrap4_5;
	int32_t ___U3CU3E7__wrap5_6;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CU3E7__wrap7_7;
	int32_t ___U3CU3E7__wrap8_8;
};

struct U3CU3Ec__DisplayClass3e_t1A60FC477758C3AD1A1AF76F9565AB4E639894D1  : public RuntimeObject
{
	StringBuilder_t* ___buff_0;
	WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* ___U3CU3E4__this_1;
	bool ___response_2;
};

struct U3CU3Ec__DisplayClass41_tC07C323DC0DB7B10F27A1990FD75380D199CA634  : public RuntimeObject
{
	int32_t ___count_0;
	WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* ___U3CU3E4__this_1;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___serializationInfo_2;
};

struct U3CU3Ec__DisplayClass44_t8D9720E977F6C078D7042CDA925CDBCD4289630B  : public RuntimeObject
{
	StringBuilder_t* ___buff_0;
	WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* ___U3CU3E4__this_1;
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

struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

struct CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	bool ____clean_1;
	uint16_t ____code_2;
	String_t* ____reason_3;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

struct HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015  : public HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909
{
	String_t* ____code_4;
	String_t* ____reason_5;
};

struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};

struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_18;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_19;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value_0;
};

struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
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

struct __StaticArrayInitTypeSizeU3D14_t8FF3B42F43C5E0F321995EF5431621A7ABD07140 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t8FF3B42F43C5E0F321995EF5431621A7ABD07140__padding[14];
	};
};

struct U3CPrivateImplementationDetailsU3EU7B34245472U2DB0CDU2D4715U2DBFA8U2D68288BC62645U7D_tEEEE439D312BD2BDA35905ECC788AA27FEB05346  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3EU7B34245472U2DB0CDU2D4715U2DBFA8U2D68288BC62645U7D_tEEEE439D312BD2BDA35905ECC788AA27FEB05346_StaticFields
{
	__StaticArrayInitTypeSizeU3D14_t8FF3B42F43C5E0F321995EF5431621A7ABD07140 ___U24U24method0x600057eU2D1_0;
};

struct Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4  : public RuntimeObject
{
	String_t* ____comment_2;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____commentUri_3;
	bool ____discard_4;
	String_t* ____domain_5;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____expires_6;
	bool ____httpOnly_7;
	String_t* ____name_8;
	String_t* ____path_9;
	String_t* ____port_10;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____ports_11;
	bool ____secure_12;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____timestamp_13;
	String_t* ____value_14;
	int32_t ____version_15;
	bool ___U3CExactDomainU3Ek__BackingField_16;
};

struct Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____reservedCharsForName_0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____reservedCharsForValue_1;
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

struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	int32_t ____origin_6;
	int32_t ____position_7;
	int32_t ____length_8;
	int32_t ____capacity_9;
	bool ____expandable_10;
	bool ____writable_11;
	bool ____exposable_12;
	bool ____isOpen_13;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

struct ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	bool ____disposed_6;
	bool ____ignoreErrors_7;
	HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* ____response_8;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_9;
	bool ____trailerSent_10;
};

struct ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____crlf_5;
};

struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};

struct WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331  : public NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7
{
	bool ____internallyCreated_21;
	int32_t ____state_22;
};

struct WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331_StaticFields
{
	Dictionary_2_t3A90C82D938D47128CF15BBD66A0B8DB06909839* ____headers_20;
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

struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};

struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue_19;
};

struct CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8  : public FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B
{
};

struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebHeaderCollection_IsMultiValue_m40AE58F29B57E13F16BBD19F234117D93989792C (String_t* ___headerName0, bool ___response1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mC5676E4279E9B264450F42CAE47EE7A3F2031B9B (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PayloadData_get_ApplicationData_m547D675BEBBD6D2ACC74208325D1734F31A65A3C (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_getCodeFrom_m85C31A0BEB2518CF21991BC2330F6FE78B9941AE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloseEventArgs_getReasonFrom_mA70A841258D1EC0EE48BA19CC3463F0C07033E3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_gshared)(___array0, ___startIndex1, ___length2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Ext_ToUInt16_m0EF2AE1D777446F2FADCC9B761F32BF7CC923DFB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, uint8_t ___srcOrder1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeBase__ctor_mA8E52C0F360691E61CDB1A1E53A0C56CD6D0A606 (HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ext_GetDescription_mF4D24462357368B2DB391E19E6ED2AE685DE5D6F (int32_t ___code0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C (HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3* AuthenticationChallenge_Parse_m86BB6F9294FF5BB6159CD8126B96B840F1B2824B (String_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* Ext_GetCookies_m8F8DA187E26EE0BD652FC81AEC427516BE5025F6 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___headers0, bool ___response1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* HandshakeBase_get_ProtocolVersion_mB048E929F22EC0FDE082A8E768748710C8F70B4F (HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThan_m82174057E818F77CD26D72F612C47C7516BA7431 (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v10, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___v21, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_Contains_mA918D528F7CAC8FC7A7C1B4A501BF5E73D80E3CD (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___collection0, String_t* ___name1, String_t* ___value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse__ctor_mC453B4E664C3D678609501AE280B1B3665568AA5 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, int32_t ___code0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___count1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebHeaderCollection__ctor_mBDEF362C034463B73ECAA117713DE46B3FF26D68 (WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebHeaderCollection_SetInternally_mA94F612D3121571D07C63FDF318054CC27F813A3 (WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* __this, String_t* ___header0, bool ___response1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse__ctor_m8B73B621B0FA10E2431E77CBC5B44855FFA5BA48 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeBase_set_Headers_mE7D6BC1AE669DF59E89748909041A36D15D1C2E5 (HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909* __this, NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* __this, String_t* ___version0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeBase_set_ProtocolVersion_mF272612D8611992FC60EAF792B6A578A0FCEDFE0 (HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909* __this, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse_set_Reason_m1C12179DCDD785097A1FD39498DB22B20B55C382 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, String_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse_set_StatusCode_m1B47C3067E50DBF6D28E8C938C61DB94D11D459F (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, String_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CookieCollection_get_Count_m2F9F0430DB1864DC47CAEA6EB646401A980807F1 (CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CookieCollection_get_Sorted_mC7E8F2C2BEE275713CCC38C2F9F94302C6B600BD (CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cookie_ToResponseString_m520112B109D4C844AEEB88937FAAD76B81E5070C (Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandshakeBase_get_EntityBody_mFDD6F36729CEF6EC4056DB7638A060D255BE9010 (HandshakeBase_tDF0E82692D6860B6306FBB1BF7CCBDE5E63EB909* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extensionData0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___applicationData1, bool ___masked2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsReserved_m040732B3534F01C8EDA43724CAF3E1FBE24294E2 (uint16_t ___code0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0__ctor_m30E6982AB388E3398DBA79CB851C339617F9CD92 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) ;
inline void List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_gshared)(__this, ___collection0, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PayloadData_ToByteArray_m23B49D1413DEC4EF2D8734F5E6F604DFE2921194 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PayloadData_GetEnumerator_m16FC0F18BD2385F6AE88BB5E666E49F02A8AF514 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_System_IDisposable_Dispose_mB9542094ECC2BBEBFF41860882B6F83CD5411F84 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally3_m3B4563BA736EB31FFA238A202C94AC8DE85D9D5B (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally6_m6565C673C71610C8EE48CE43FBB92D14D5F42DE4 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerResponse_get_HeadersSent_mCA50BB304A35C2C83568E5FAA2108355EC5CAA3E (HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_SendHeaders_mDDBFA136658DFED12E42AF7D3E22A616C7C457FA (HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* __this, bool ___closing0, MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___stream1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ResponseStream_getHeaders_m47755050A700517BED647BE4E682748F0C72F2A8 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, bool ___closing0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpListenerResponse_get_SendChunked_mD66F0732AAF4ACE6B19E9F0589E68063196ED740 (HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B (int32_t ___size0, bool ___final1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_Close_m8CFC9C3829BA90CB339F7DBF51E27CE9AFB52F5E (HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_m0164A28339B1089B156891E229EE08B0D2184DEA (Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
inline void Action_1_Invoke_mC5846579CFBB0BA3F331F88846B5772D4C832B97_inline (Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3e__ctor_mE77C48D19485AE72B656274F06B1036AA2C1D756 (U3CU3Ec__DisplayClass3e_t1A60FC477758C3AD1A1AF76F9565AB4E639894D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3e_U3CToStringMultiValueU3Eb__3d_mDC10FBCD4673AAAB2D0CFABE84964D7B30F21816 (U3CU3Ec__DisplayClass3e_t1A60FC477758C3AD1A1AF76F9565AB4E639894D1* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	{
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(24, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4 = __this->___response_2;
		il2cpp_codegen_runtime_class_init_inline(WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = WebHeaderCollection_IsMultiValue_m40AE58F29B57E13F16BBD19F234117D93989792C(L_3, L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_005f;
		}
	}
	{
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_7 = __this->___U3CU3E4__this_1;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = VirtualFuncInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t >::Invoke(23, L_7, L_8);
		V_3 = L_9;
		V_4 = 0;
		goto IL_0052;
	}

IL_0034:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		StringBuilder_t* L_14 = __this->___buff_0;
		String_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_14, _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182, L_15, L_16, NULL);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		int32_t L_19 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_3;
		NullCheck(L_20);
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_007d;
	}

IL_005f:
	{
		StringBuilder_t* L_22 = __this->___buff_0;
		String_t* L_23 = V_0;
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_24 = __this->___U3CU3E4__this_1;
		int32_t L_25 = ___i0;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(22, L_24, L_25);
		NullCheck(L_22);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_22, _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182, L_23, L_26, NULL);
	}

IL_007d:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41__ctor_m02D2E5E1457757DCB07B92954CFAAC6BA79A3BA8 (U3CU3Ec__DisplayClass41_tC07C323DC0DB7B10F27A1990FD75380D199CA634* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_U3CGetObjectDataU3Eb__40_m0B2A3F6DF36C7989C7AB68863F432CCF910C7280 (U3CU3Ec__DisplayClass41_tC07C323DC0DB7B10F27A1990FD75380D199CA634* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->___serializationInfo_2;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___i0), NULL);
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(24, L_2, L_3);
		NullCheck(L_0);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_0, L_1, L_4, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = __this->___serializationInfo_2;
		int32_t L_6 = __this->___count_0;
		int32_t L_7 = ___i0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_9 = __this->___U3CU3E4__this_1;
		int32_t L_10 = ___i0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(22, L_9, L_10);
		NullCheck(L_5);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_5, L_8, L_11, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44__ctor_mA1D27EFDF67DFA5CE692108608C027BB45BC0401 (U3CU3Ec__DisplayClass44_t8D9720E977F6C078D7042CDA925CDBCD4289630B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_U3CToStringU3Eb__43_m2BC6FC3B32038B9AD9B19FD46D3478B6B8E15F22 (U3CU3Ec__DisplayClass44_t8D9720E977F6C078D7042CDA925CDBCD4289630B* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___buff_0;
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_1 = __this->___U3CU3E4__this_1;
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(24, L_1, L_2);
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_4 = __this->___U3CU3E4__this_1;
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, int32_t >::Invoke(22, L_4, L_5);
		NullCheck(L_0);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_0, _stringLiteral95C5AE48F5DB42D8A787E2092C983C3F77EB5182, L_3, L_6, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieException__ctor_mAE4C393D04FD96CE29C0E0748DD322D764F1155A (CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieException__ctor_m25F9C99D26D4AD63B20DA0BBF62872E81895DC1D (CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieException__ctor_m0697CD9B0AD109CDBC3FB99DDB17709418849913 (CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___serializationInfo0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___streamingContext1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___serializationInfo0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___streamingContext1;
		FormatException__ctor_mC5676E4279E9B264450F42CAE47EE7A3F2031B9B(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieException__ctor_m5C517E36FFDC57AF3B6CD321BBA5C09C2E7D4D0C (CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8* __this, const RuntimeMethod* method) 
{
	{
		FormatException__ctor_mF29D430E15E766845220AB94DEE48CFC341A2DFE(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieException_GetObjectData_m0C4AE7ADDC976C73260ACB8D1A8168F478054175 (CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___serializationInfo0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___streamingContext1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___serializationInfo0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___streamingContext1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m6D8283B7389141A4D2933C1ABD38776BBBB2FDE1 (CookieException_t32BB8630F5ED0EC675D805F6EB3917DF37B743B8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___serializationInfo0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___streamingContext1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___serializationInfo0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___streamingContext1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseEventArgs__ctor_m9F8C902A2DA372167C5D2D5D76D36F84141D6EBF (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* ___payload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* L_0 = ___payload0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = PayloadData_get_ApplicationData_m547D675BEBBD6D2ACC74208325D1734F31A65A3C(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		uint16_t L_3;
		L_3 = CloseEventArgs_getCodeFrom_m85C31A0BEB2518CF21991BC2330F6FE78B9941AE(L_2, NULL);
		__this->____code_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		String_t* L_5;
		L_5 = CloseEventArgs_getReasonFrom_mA70A841258D1EC0EE48BA19CC3463F0C07033E3D(L_4, NULL);
		__this->____reason_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reason_3), (void*)L_5);
		__this->____clean_1 = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_get_Code_m2E0325F4200D8AF0CA5537A890DAEC2670D197F4 (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->____code_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloseEventArgs_get_Reason_m6A44D1218D4817D12EC9DBD14D9BD68E7B58BB29 (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->____reason_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CloseEventArgs_get_WasClean_m028CD37FAA60E8F3DCEC6B40A354F29E0412B85D (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____clean_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloseEventArgs_set_WasClean_mAE0EF0D05D4DEA127D089D6BE5B5762ABF80EA47 (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____clean_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_getCodeFrom_m85C31A0BEB2518CF21991BC2330F6FE78B9941AE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((int32_t)1005);
		goto IL_001c;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3(L_1, 0, 2, Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var);
		uint16_t L_3;
		L_3 = Ext_ToUInt16_m0EF2AE1D777446F2FADCC9B761F32BF7CC923DFB(L_2, 1, NULL);
		G_B3_0 = ((int32_t)(L_3));
	}

IL_001c:
	{
		V_0 = (uint16_t)G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		uint16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloseEventArgs_getReasonFrom_mA70A841258D1EC0EE48BA19CC3463F0C07033E3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_2;
		goto IL_0024;
	}

IL_0010:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___data0;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3(L_4, 2, ((int32_t)il2cpp_codegen_subtract(L_5, 2)), Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_7;
		L_7 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35, L_3, L_6);
		G_B3_0 = L_7;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		String_t* L_8 = V_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse__ctor_m8B73B621B0FA10E2431E77CBC5B44855FFA5BA48 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	{
		HandshakeBase__ctor_mA8E52C0F360691E61CDB1A1E53A0C56CD6D0A606(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse__ctor_mC453B4E664C3D678609501AE280B1B3665568AA5 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E34ED49D8F62F2601BBC9AE613C6F4F882AD2CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF799885C83DDA6036FF25A2D47B014CB7DB2525);
		s_Il2CppMethodInitialized = true;
	}
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		HandshakeBase__ctor_mA8E52C0F360691E61CDB1A1E53A0C56CD6D0A606(__this, NULL);
		int32_t L_0 = ___code0;
		V_1 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		__this->____code_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____code_4), (void*)L_1);
		int32_t L_2 = ___code0;
		String_t* L_3;
		L_3 = Ext_GetDescription_mF4D24462357368B2DB391E19E6ED2AE685DE5D6F(L_2, NULL);
		__this->____reason_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reason_5), (void*)L_3);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_4;
		L_4 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(__this, NULL);
		V_0 = L_4;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_5 = V_0;
		NullCheck(L_5);
		NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(L_5, _stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01, _stringLiteralEF799885C83DDA6036FF25A2D47B014CB7DB2525, NULL);
		int32_t L_6 = ___code0;
		V_2 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)((int32_t)101)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_8 = V_0;
		NullCheck(L_8);
		NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(L_8, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4, _stringLiteral0E34ED49D8F62F2601BBC9AE613C6F4F882AD2CC, NULL);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_9 = V_0;
		NullCheck(L_9);
		NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(L_9, _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4, NULL);
	}

IL_006b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3* HandshakeResponse_get_AuthChallenge_mA4A4D60CFD2834B5D9073DF7D83B3C81BE1D03CA (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral837AB1353B48531677906AF6731DF5EF5ACDA3F1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3* V_1 = NULL;
	AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3* G_B4_0 = NULL;
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0;
		L_0 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_0, _stringLiteral837AB1353B48531677906AF6731DF5EF5ACDA3F1, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_001e:
	{
		G_B4_0 = ((AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3*)(NULL));
		goto IL_0027;
	}

IL_0021:
	{
		String_t* L_5 = V_0;
		AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3* L_6;
		L_6 = AuthenticationChallenge_Parse_m86BB6F9294FF5BB6159CD8126B96B840F1B2824B(L_5, NULL);
		G_B4_0 = L_6;
	}

IL_0027:
	{
		V_1 = G_B4_0;
		goto IL_002a;
	}

IL_002a:
	{
		AuthenticationChallenge_tC968C9674EE0D0AF2FCB8D4E04C52CFAB1C657E3* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* HandshakeResponse_get_Cookies_m1898007224478A723D09247CCD1C4FD6523CB808 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* V_0 = NULL;
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0;
		L_0 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(__this, NULL);
		CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* L_1;
		L_1 = Ext_GetCookies_m8F8DA187E26EE0BD652FC81AEC427516BE5025F6(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandshakeResponse_get_IsUnauthorized_m95877DA7EDFD908CDD2A140589CF7327D6924524 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = __this->____code_4;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral37CFF4443C0C75F552D0FFE853490A4ECEEE7B2F, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandshakeResponse_get_IsWebSocketResponse_mCDE055326EFC79E989236792D9C115427A94AD44 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E34ED49D8F62F2601BBC9AE613C6F4F882AD2CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		s_Il2CppMethodInitialized = true;
	}
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0;
		L_0 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(__this, NULL);
		V_0 = L_0;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_1;
		L_1 = HandshakeBase_get_ProtocolVersion_mB048E929F22EC0FDE082A8E768748710C8F70B4F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A_il2cpp_TypeInfo_var);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_2 = ((HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A_StaticFields*)il2cpp_codegen_static_fields_for(HttpVersion_t2C7A10EB9472F5CBEE335426D23C90378989F10A_il2cpp_TypeInfo_var))->___Version10_0;
		bool L_3;
		L_3 = Version_op_GreaterThan_m82174057E818F77CD26D72F612C47C7516BA7431(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_4 = __this->____code_4;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52, NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_6 = V_0;
		bool L_7;
		L_7 = Ext_Contains_mA918D528F7CAC8FC7A7C1B4A501BF5E73D80E3CD(L_6, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4, _stringLiteral0E34ED49D8F62F2601BBC9AE613C6F4F882AD2CC, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_8 = V_0;
		bool L_9;
		L_9 = Ext_Contains_mA918D528F7CAC8FC7A7C1B4A501BF5E73D80E3CD(L_8, _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC, _stringLiteral24F45929493475FECA90729BA5EAF2D06F8722A4, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandshakeResponse_get_Reason_m027F971D54094F6DB0748305DDBE42172987A733 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->____reason_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse_set_Reason_m1C12179DCDD785097A1FD39498DB22B20B55C382 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____reason_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reason_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandshakeResponse_get_StatusCode_m27957CF407BB735AD31C575AD099B10C3ED512C5 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->____code_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse_set_StatusCode_m1B47C3067E50DBF6D28E8C938C61DB94D11D459F (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____code_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____code_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* HandshakeResponse_CreateCloseResponse_m066E653A177BDA5D6073B1D8F4F2E4011EC90457 (int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC);
		s_Il2CppMethodInitialized = true;
	}
	HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* V_0 = NULL;
	HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* V_1 = NULL;
	{
		int32_t L_0 = ___code0;
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_1 = (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015*)il2cpp_codegen_object_new(HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015_il2cpp_TypeInfo_var);
		HandshakeResponse__ctor_mC453B4E664C3D678609501AE280B1B3665568AA5(L_1, L_0, NULL);
		V_0 = L_1;
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_2 = V_0;
		NullCheck(L_2);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_3;
		L_3 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(L_2, NULL);
		NullCheck(L_3);
		NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(L_3, _stringLiteralBBC4BD37A426D68F16FC03A3F4AAC387168995BC, _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6, NULL);
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_4 = V_0;
		V_1 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* HandshakeResponse_Parse_mA3CA1A49E6FA09E42ED0E57BC56F6E06815CEA05 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___headerParts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* V_1 = NULL;
	int32_t V_2 = 0;
	HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* V_3 = NULL;
	HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* V_4 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	bool V_6 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___headerParts0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		V_5 = L_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_5;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_5;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_2, L_5, 3, NULL);
		V_0 = L_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		V_6 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) == ((int32_t)3))? 1 : 0);
		bool L_8 = V_6;
		if (L_8)
		{
			goto IL_003a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___headerParts0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D72E49ED37FAD2507B08D7DC599C12A8538E36D)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HandshakeResponse_Parse_mA3CA1A49E6FA09E42ED0E57BC56F6E06815CEA05_RuntimeMethod_var)));
	}

IL_003a:
	{
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_14 = (WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331*)il2cpp_codegen_object_new(WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331_il2cpp_TypeInfo_var);
		WebHeaderCollection__ctor_mBDEF362C034463B73ECAA117713DE46B3FF26D68(L_14, NULL);
		V_1 = L_14;
		V_2 = 1;
		goto IL_0053;
	}

IL_0044:
	{
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___headerParts0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		WebHeaderCollection_SetInternally_mA94F612D3121571D07C63FDF318054CC27F813A3(L_15, L_19, (bool)1, NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0053:
	{
		int32_t L_21 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ___headerParts0;
		NullCheck(L_22);
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0044;
		}
	}
	{
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_24 = (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015*)il2cpp_codegen_object_new(HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015_il2cpp_TypeInfo_var);
		HandshakeResponse__ctor_m8B73B621B0FA10E2431E77CBC5B44855FFA5BA48(L_24, NULL);
		V_3 = L_24;
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_25 = V_3;
		WebHeaderCollection_t5F2516004C02E89600B6BBC627D4C3EFF1144331* L_26 = V_1;
		NullCheck(L_25);
		HandshakeBase_set_Headers_mE7D6BC1AE669DF59E89748909041A36D15D1C2E5(L_25, L_26, NULL);
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_27 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 0;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_30, 5, NULL);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_32 = (Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7*)il2cpp_codegen_object_new(Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7_il2cpp_TypeInfo_var);
		Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F(L_32, L_31, NULL);
		NullCheck(L_27);
		HandshakeBase_set_ProtocolVersion_mF272612D8611992FC60EAF792B6A578A0FCEDFE0(L_27, L_32, NULL);
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_33 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = 2;
		String_t* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_33);
		HandshakeResponse_set_Reason_m1C12179DCDD785097A1FD39498DB22B20B55C382(L_33, L_36, NULL);
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_37 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		String_t* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		HandshakeResponse_set_StatusCode_m1B47C3067E50DBF6D28E8C938C61DB94D11D459F(L_37, L_40, NULL);
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_41 = V_3;
		V_4 = L_41;
		goto IL_009b;
	}

IL_009b:
	{
		HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* L_42 = V_4;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandshakeResponse_SetCookies_m4D3D57F5187DBBA32BEFCFF77FA1E1CF42E49945 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* ___cookies0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF2C6A9216277A2932D9C0348DF3175EB793758D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3253AF2F1CB326FA974E60D612DA67B67693FAC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C5EE883BE58477D29789770C77CED0740EA2109);
		s_Il2CppMethodInitialized = true;
	}
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* V_0 = NULL;
	Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* L_0 = ___cookies0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* L_1 = ___cookies0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = CookieCollection_get_Count_m2F9F0430DB1864DC47CAEA6EB646401A980807F1(L_1, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0065;
	}

IL_0019:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_4;
		L_4 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(__this, NULL);
		V_0 = L_4;
		CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* L_5 = ___cookies0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = CookieCollection_get_Sorted_mC7E8F2C2BEE275713CCC38C2F9F94302C6B600BD(L_5, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF2C6A9216277A2932D9C0348DF3175EB793758D3_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				{
					RuntimeObject* L_8 = V_3;
					V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_9 = V_2;
					if (L_9)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_0063:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0048_1;
			}

IL_002f_1:
			{
				RuntimeObject* L_11 = V_3;
				NullCheck(L_11);
				Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4* L_12;
				L_12 = InterfaceFuncInvoker0< Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4* >::Invoke(0, IEnumerator_1_t3253AF2F1CB326FA974E60D612DA67B67693FAC7_il2cpp_TypeInfo_var, L_11);
				V_1 = L_12;
				NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_13 = V_0;
				Cookie_tC952E4801B39C1A03C6FED1C166CB7D48BD9EFD4* L_14 = V_1;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = Cookie_ToResponseString_m520112B109D4C844AEEB88937FAAD76B81E5070C(L_14, NULL);
				NullCheck(L_13);
				VirtualActionInvoker2< String_t*, String_t* >::Invoke(17, L_13, _stringLiteral5C5EE883BE58477D29789770C77CED0740EA2109, L_15);
			}

IL_0048_1:
			{
				RuntimeObject* L_16 = V_3;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				V_2 = L_17;
				bool L_18 = V_2;
				if (L_18)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
	}

IL_0065:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandshakeResponse_ToString_m8A0675C4B2C954B4BB15E87E43A02857E2668451 (HandshakeResponse_tAC6322A3B47C8FAEBE5F6405330F2BFD62FA3015* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77761B78E5317BBDD8BB26D0738EB08923108D7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F08120CD0AB96BE72DC81765983EA3BCEDE8F5);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)64), NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_5 = L_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_5;
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_4;
		L_4 = HandshakeBase_get_ProtocolVersion_mB048E929F22EC0FDE082A8E768748710C8F70B4F(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_5;
		String_t* L_6 = __this->____code_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_5;
		String_t* L_8 = __this->____reason_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_5;
		NullCheck(L_1);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_1, _stringLiteral91F08120CD0AB96BE72DC81765983EA3BCEDE8F5, L_10, NULL);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_12;
		L_12 = HandshakeBase_get_Headers_mDF66814CB4343A4ABCBE07DCC1752AA2E145728C(__this, NULL);
		V_1 = L_12;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_13 = V_1;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
		L_14 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(25, L_13);
		V_6 = L_14;
		V_7 = 0;
		goto IL_0080;
	}

IL_005b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_6;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		StringBuilder_t* L_19 = V_0;
		String_t* L_20 = V_2;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_21 = V_1;
		String_t* L_22 = V_2;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_21, L_22, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_19, _stringLiteral77761B78E5317BBDD8BB26D0738EB08923108D7B, L_20, L_23, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		int32_t L_25 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0080:
	{
		int32_t L_26 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_6;
		NullCheck(L_27);
		V_8 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_005b;
		}
	}
	{
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		String_t* L_31;
		L_31 = HandshakeBase_get_EntityBody_mFDD6F36729CEF6EC4056DB7638A060D255BE9010(__this, NULL);
		V_3 = L_31;
		String_t* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_33) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_8;
		if (L_34)
		{
			goto IL_00bb;
		}
	}
	{
		StringBuilder_t* L_35 = V_0;
		String_t* L_36 = V_3;
		NullCheck(L_35);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, L_36, NULL);
	}

IL_00bb:
	{
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_38);
		V_4 = L_39;
		goto IL_00c5;
	}

IL_00c5:
	{
		String_t* L_40 = V_4;
		return L_40;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m2D842B72001B27C22BD8B6839368870FC6B55B62 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m0C9F0C10096C38A9708C88906AEC37AB69925086 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___applicationData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___applicationData0;
		PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m049E158B4C8A3C676150828D81C5B0EC24336279 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, String_t* ___applicationData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___applicationData0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18, L_1, L_2);
		PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F(__this, L_0, L_3, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m120BB83558713865D1CCAA3D8F17DD46C99561B9 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___applicationData0, bool ___masked1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___applicationData0;
		bool L_2 = ___masked1;
		PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extensionData0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___applicationData1, bool ___masked2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extensionData0;
		NullCheck((RuntimeArray*)L_0);
		int64_t L_1;
		L_1 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___applicationData1;
		NullCheck((RuntimeArray*)L_2);
		int64_t L_3;
		L_3 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_2, NULL);
		V_0 = (bool)((((int32_t)((!(((uint64_t)((int64_t)il2cpp_codegen_add(L_1, L_3))) <= ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA69050EB68FC72BF9728393D25FADBA286830905)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PayloadData__ctor_mEABEC6D32BBDBB5741A2495F86DD2F232F49756F_RuntimeMethod_var)));
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extensionData0;
		__this->____extensionData_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extensionData_2), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___applicationData1;
		__this->____applicationData_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____applicationData_1), (void*)L_7);
		bool L_8 = ___masked2;
		__this->____masked_3 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PayloadData_get_ContainsReservedCloseStatusCode_m71BDF8F025BBB190D871F4483544DE7D8B870F57 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____applicationData_1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____applicationData_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3(L_1, 0, 2, Ext_SubArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC52C1669D0257EE4752DC177816D6436D8B9D8F3_RuntimeMethod_var);
		uint16_t L_3;
		L_3 = Ext_ToUInt16_m0EF2AE1D777446F2FADCC9B761F32BF7CC923DFB(L_2, 1, NULL);
		bool L_4;
		L_4 = Ext_IsReserved_m040732B3534F01C8EDA43724CAF3E1FBE24294E2(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PayloadData_get_ApplicationData_m547D675BEBBD6D2ACC74208325D1734F31A65A3C (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____applicationData_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PayloadData_get_ExtensionData_mE759356C60BC89CCD362168A54E6985DC9400B50 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____extensionData_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PayloadData_get_IsMasked_mD5185B038DDD688C77925EEA7DF1E7F14ADE75D7 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____masked_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PayloadData_get_Length_m3F4B4CC126620F3536975ED1987FDC8C6FDA1090 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____extensionData_2;
		NullCheck((RuntimeArray*)L_0);
		int64_t L_1;
		L_1 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____applicationData_1;
		NullCheck((RuntimeArray*)L_2);
		int64_t L_3;
		L_3 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_2, NULL);
		V_0 = ((int64_t)il2cpp_codegen_add(L_1, L_3));
		goto IL_001b;
	}

IL_001b:
	{
		uint64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = ((int64_t)0);
		goto IL_001c;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int64_t L_1 = V_0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___src0;
		int64_t L_3 = V_0;
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A_RuntimeMethod_var);
		NullCheck(L_2);
		intptr_t L_4 = ((intptr_t)L_3);
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___key1;
		int64_t L_7 = V_0;
		if ((int64_t)(((int64_t)(L_7%((int64_t)4)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A_RuntimeMethod_var);
		NullCheck(L_6);
		intptr_t L_8 = ((intptr_t)((int64_t)(L_7%((int64_t)4))));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_1)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5^(int32_t)L_9))));
		int64_t L_10 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)1)));
	}

IL_001c:
	{
		int64_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		NullCheck((RuntimeArray*)L_12);
		int64_t L_13;
		L_13 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_12, NULL);
		V_1 = (bool)((((int64_t)L_11) < ((int64_t)L_13))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PayloadData_GetEnumerator_m16FC0F18BD2385F6AE88BB5E666E49F02A8AF514 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* L_0 = (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__0__ctor_m30E6982AB388E3398DBA79CB851C339617F9CD92(L_0, 0, NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* L_2 = V_0;
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData_Mask_m176054BB52457FE9CD48B3AE69967EC1E8B48567 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___maskingKey0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____extensionData_2;
		NullCheck((RuntimeArray*)L_0);
		int64_t L_1;
		L_1 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_0, NULL);
		V_0 = (bool)((((int32_t)((((int64_t)L_1) > ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____extensionData_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___maskingKey0;
		PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A(L_3, L_4, NULL);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____applicationData_1;
		NullCheck((RuntimeArray*)L_5);
		int64_t L_6;
		L_6 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_5, NULL);
		V_0 = (bool)((((int32_t)((((int64_t)L_6) > ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->____applicationData_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___maskingKey0;
		PayloadData_mask_m0F99B52B123B70ABDD2BC49F7D6F4D38AF33636A(L_8, L_9, NULL);
	}

IL_0047:
	{
		bool L_10 = __this->____masked_3;
		__this->____masked_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PayloadData_ToByteArray_m23B49D1413DEC4EF2D8734F5E6F604DFE2921194 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____extensionData_2;
		NullCheck((RuntimeArray*)L_0);
		int64_t L_1;
		L_1 = Array_get_LongLength_m19F5DFD4DB2D9A732EBF1BD15E8EA239C1089D5E((RuntimeArray*)L_0, NULL);
		if ((((int64_t)L_1) > ((int64_t)((int64_t)0))))
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____applicationData_1;
		G_B3_0 = L_2;
		goto IL_0023;
	}

IL_0018:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70(L_3, __this, List_1__ctor_m7DDFC88892821371E20D86AC263259FD98043B70_RuntimeMethod_var);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_3, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_0023:
	{
		V_0 = G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PayloadData_ToString_mE0E82E998845663C44AD2279FC5568474ED69900 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = PayloadData_ToByteArray_m23B49D1413DEC4EF2D8734F5E6F604DFE2921194(__this, NULL);
		String_t* L_1;
		L_1 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PayloadData_System_Collections_IEnumerable_GetEnumerator_m382B767528C385437FB831AF4F6A00C103D8B066 (PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = PayloadData_GetEnumerator_m16FC0F18BD2385F6AE88BB5E666E49F02A8AF514(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__0_MoveNext_m37D175338AC627E15A2C87C51B048373A6967E43 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0139:
			{
				U3CGetEnumeratorU3Ed__0_System_IDisposable_Dispose_mB9542094ECC2BBEBFF41860882B6F83CD5411F84(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state_1;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_002a_1;
					}
					case 1:
					{
						goto IL_002c_1;
					}
					case 2:
					{
						goto IL_0023_1;
					}
					case 3:
					{
						goto IL_002c_1;
					}
					case 4:
					{
						goto IL_0025_1;
					}
				}
			}
			{
				goto IL_002c_1;
			}

IL_0023_1:
			{
				goto IL_0088_1;
			}

IL_0025_1:
			{
				goto IL_0104_1;
			}

IL_002a_1:
			{
				goto IL_0031_1;
			}

IL_002c_1:
			{
				goto IL_0135_1;
			}

IL_0031_1:
			{
				__this->___U3CU3E1__state_1 = (-1);
				__this->___U3CU3E1__state_1 = 1;
				PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* L_2 = __this->___U3CU3E4__this_2;
				NullCheck(L_2);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->____extensionData_2;
				__this->___U3CU3E7__wrap4_5 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_5), (void*)L_3);
				__this->___U3CU3E7__wrap5_6 = 0;
				goto IL_009d_1;
			}

IL_005b_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___U3CU3E7__wrap4_5;
				int32_t L_5 = __this->___U3CU3E7__wrap5_6;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				__this->___U3CbU3E5__1_3 = L_7;
				uint8_t L_8 = __this->___U3CbU3E5__1_3;
				__this->___U3CU3E2__current_0 = L_8;
				__this->___U3CU3E1__state_1 = 2;
				V_0 = (bool)1;
				goto IL_0141;
			}

IL_0088_1:
			{
				__this->___U3CU3E1__state_1 = 1;
				int32_t L_9 = __this->___U3CU3E7__wrap5_6;
				__this->___U3CU3E7__wrap5_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_009d_1:
			{
				int32_t L_10 = __this->___U3CU3E7__wrap5_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___U3CU3E7__wrap4_5;
				NullCheck(L_11);
				V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
				bool L_12 = V_2;
				if (L_12)
				{
					goto IL_005b_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally3_m3B4563BA736EB31FFA238A202C94AC8DE85D9D5B(__this, NULL);
				__this->___U3CU3E1__state_1 = 3;
				PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* L_13 = __this->___U3CU3E4__this_2;
				NullCheck(L_13);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->____applicationData_1;
				__this->___U3CU3E7__wrap7_7 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap7_7), (void*)L_14);
				__this->___U3CU3E7__wrap8_8 = 0;
				goto IL_0119_1;
			}

IL_00da_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___U3CU3E7__wrap7_7;
				int32_t L_16 = __this->___U3CU3E7__wrap8_8;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
				__this->___U3CbU3E5__2_4 = L_18;
				uint8_t L_19 = __this->___U3CbU3E5__2_4;
				__this->___U3CU3E2__current_0 = L_19;
				__this->___U3CU3E1__state_1 = 4;
				V_0 = (bool)1;
				goto IL_0141;
			}

IL_0104_1:
			{
				__this->___U3CU3E1__state_1 = 3;
				int32_t L_20 = __this->___U3CU3E7__wrap8_8;
				__this->___U3CU3E7__wrap8_8 = ((int32_t)il2cpp_codegen_add(L_20, 1));
			}

IL_0119_1:
			{
				int32_t L_21 = __this->___U3CU3E7__wrap8_8;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___U3CU3E7__wrap7_7;
				NullCheck(L_22);
				V_2 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
				bool L_23 = V_2;
				if (L_23)
				{
					goto IL_00da_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally6_m6565C673C71610C8EE48CE43FBB92D14D5F42DE4(__this, NULL);
			}

IL_0135_1:
			{
				V_0 = (bool)0;
				goto IL_0141;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0141:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_mF463CCEC083B4827BE2AA060E7651F6347F084C4 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___U3CU3E2__current_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_mAC41E9748FA3DFBB3A3B97DBAB17BB80FD9B3BFD (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_Reset_mAC41E9748FA3DFBB3A3B97DBAB17BB80FD9B3BFD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_System_IDisposable_Dispose_mB9542094ECC2BBEBFF41860882B6F83CD5411F84 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0019;
			}
		}
	}
	{
		goto IL_001d;
	}

IL_0019:
	{
		goto IL_001f;
	}

IL_001b:
	{
		goto IL_001f;
	}

IL_001d:
	{
		goto IL_0026;
	}

IL_001f:
	{
		U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally3_m3B4563BA736EB31FFA238A202C94AC8DE85D9D5B(__this, NULL);
	}

IL_0026:
	{
		int32_t L_2 = __this->___U3CU3E1__state_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, 3)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_003f:
	{
		goto IL_0045;
	}

IL_0041:
	{
		goto IL_0045;
	}

IL_0043:
	{
		goto IL_004c;
	}

IL_0045:
	{
		U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally6_m6565C673C71610C8EE48CE43FBB92D14D5F42DE4(__this, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__0_System_Collections_IEnumerator_get_Current_m4CEA58EB4F9A433B5D52BD52309C001A0743543D (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		uint8_t L_0 = __this->___U3CU3E2__current_0;
		uint8_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_1);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0__ctor_m30E6982AB388E3398DBA79CB851C339617F9CD92 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally3_m3B4563BA736EB31FFA238A202C94AC8DE85D9D5B (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state_1 = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__0_U3CU3Em__Finally6_m6565C673C71610C8EE48CE43FBB92D14D5F42DE4 (U3CGetEnumeratorU3Ed__0_t55A496661D6FCF8BA40E730B6AA3AA8C74A15D06* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CU3E1__state_1 = (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream__ctor_mE89E7645A0D3743B4D7F156CFD64F70C77377712 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* ___response1, bool ___ignoreErrors2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		__this->____stream_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_9), (void*)L_0);
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_1 = ___response1;
		__this->____response_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____response_8), (void*)L_1);
		bool L_2 = ___ignoreErrors2;
		__this->____ignoreErrors_7 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseStream_get_CanRead_mB02E5EBDB352B05C398E071AC3C252FA5B93AFFE (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseStream_get_CanSeek_m3EA00CFADB98A95DA8C3459A6A5296D022FCEADE (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseStream_get_CanWrite_m0B6B1EB927DE67C59C66B41DAA2C35C15F7815C9 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResponseStream_get_Length_mF0ACAB168C32CFBB2EE4B3A2F066BBF9EBCD6EFD (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_get_Length_mF0ACAB168C32CFBB2EE4B3A2F066BBF9EBCD6EFD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResponseStream_get_Position_mA1FBA4A186A75FEBC0BEB17F4DC61EB97A351EBE (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_get_Position_mA1FBA4A186A75FEBC0BEB17F4DC61EB97A351EBE_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_set_Position_mAA93C1A668AC347EB65C6B8510781E29D544F57F (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_set_Position_mAA93C1A668AC347EB65C6B8510781E29D544F57F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B (int32_t ___size0, bool ___final1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E785F98AA2B874444D8321FE5FE5011E16FFBDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B3_3 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		int32_t L_1 = ___size0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		bool L_4 = ___final1;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteral0E785F98AA2B874444D8321FE5FE5011E16FFBDB;
			G_B2_2 = L_0;
			goto IL_001b;
		}
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteral0E785F98AA2B874444D8321FE5FE5011E16FFBDB;
		G_B1_2 = L_0;
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001b:
	{
		G_B3_0 = _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B3_2, G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18, G_B3_3, L_5);
		V_0 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ResponseStream_getHeaders_m47755050A700517BED647BE4E682748F0C72F2A8 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, bool ___closing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_1 = NULL;
	bool V_2 = false;
	{
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_0 = __this->____response_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = HttpListenerResponse_get_HeadersSent_mCA50BB304A35C2C83568E5FAA2108355EC5CAA3E(L_0, NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
		goto IL_002f;
	}

IL_0017:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_3, NULL);
		V_0 = L_3;
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_4 = __this->____response_8;
		bool L_5 = ___closing0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
		NullCheck(L_4);
		HttpListenerResponse_SendHeaders_mDDBFA136658DFED12E42AF7D3E22A616C7C457FA(L_4, L_5, L_6, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
		V_1 = L_7;
		goto IL_002f;
	}

IL_002f:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = __this->____ignoreErrors_7;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
	}
	try
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____stream_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_2, L_3, L_4, L_5);
		goto IL_0027;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_003c;
	}

IL_002b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->____stream_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buffer0;
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___count2;
		NullCheck(L_6);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_6, L_7, L_8, L_9);
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseStream_BeginRead_mFA712084EDA83E0D9468DB49B8E34637C8D4605E (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___state4, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_BeginRead_mFA712084EDA83E0D9468DB49B8E34637C8D4605E_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseStream_BeginWrite_mDA3918F87EC85C8130ACA212A572370B4DFEF3FF (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___state4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_6 = NULL;
	{
		bool L_0 = __this->____disposed_6;
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_BeginWrite_mDA3918F87EC85C8130ACA212A572370B4DFEF3FF_RuntimeMethod_var)));
	}

IL_0021:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5;
		L_5 = ResponseStream_getHeaders_m47755050A700517BED647BE4E682748F0C72F2A8(__this, (bool)0, NULL);
		V_0 = L_5;
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_6 = __this->____response_8;
		NullCheck(L_6);
		bool L_7;
		L_7 = HttpListenerResponse_get_SendChunked_mD66F0732AAF4ACE6B19E9F0589E68063196ED740(L_6, NULL);
		V_1 = L_7;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
		V_5 = (bool)((((RuntimeObject*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_00b6;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_0;
		V_6 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_6;
					V_5 = (bool)((((RuntimeObject*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_12 = V_5;
					if (L_12)
					{
						goto IL_00b1;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = V_6;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00b1:
				{
					return;
				}
			}
		});
		try
		{
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
				NullCheck(L_14);
				int64_t L_15;
				L_15 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_14);
				V_3 = L_15;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
				NullCheck(L_17);
				int64_t L_18;
				L_18 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_17);
				NullCheck(L_16);
				VirtualActionInvoker1< int64_t >::Invoke(13, L_16, L_18);
				bool L_19 = V_1;
				V_5 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
				bool L_20 = V_5;
				if (L_20)
				{
					goto IL_007a_1;
				}
			}
			{
				int32_t L_21 = ___count2;
				il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
				L_22 = ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B(L_21, (bool)0, NULL);
				V_2 = L_22;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
				NullCheck(L_25);
				NullCheck(L_23);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
			}

IL_007a_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___buffer0;
				int32_t L_28 = ___offset1;
				int32_t L_29 = ___count2;
				NullCheck(L_26);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_26, L_27, L_28, L_29);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_30 = V_0;
				NullCheck(L_30);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
				L_31 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38, L_30);
				___buffer0 = L_31;
				int64_t L_32 = V_3;
				___offset1 = ((int32_t)L_32);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_33 = V_0;
				NullCheck(L_33);
				int64_t L_34;
				L_34 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_33);
				int64_t L_35 = V_3;
				___count2 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_34, L_35)));
				goto IL_00b2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		goto IL_00d6;
	}

IL_00b6:
	{
		bool L_36 = V_1;
		V_5 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_5;
		if (L_37)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_38 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B(L_38, (bool)0, NULL);
		V_2 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_2;
		NullCheck(L_41);
		ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_40, 0, ((int32_t)(((RuntimeArray*)L_41)->max_length)), NULL);
	}

IL_00d6:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_42 = __this->____stream_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___buffer0;
		int32_t L_44 = ___offset1;
		int32_t L_45 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_46 = ___callback3;
		RuntimeObject* L_47 = ___state4;
		NullCheck(L_42);
		RuntimeObject* L_48;
		L_48 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(26, L_42, L_43, L_44, L_45, L_46, L_47);
		V_4 = L_48;
		goto IL_00ec;
	}

IL_00ec:
	{
		RuntimeObject* L_49 = V_4;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_Close_m32F6DF52522098D7D615371DAA054F040CAAEE1E (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	bool V_4 = false;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_5 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;
	{
		bool L_0 = __this->____disposed_6;
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_00f2;
	}

IL_0015:
	{
		__this->____disposed_6 = (bool)1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2;
		L_2 = ResponseStream_getHeaders_m47755050A700517BED647BE4E682748F0C72F2A8(__this, (bool)1, NULL);
		V_0 = L_2;
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_3 = __this->____response_8;
		NullCheck(L_3);
		bool L_4;
		L_4 = HttpListenerResponse_get_SendChunked_mD66F0732AAF4ACE6B19E9F0589E68063196ED740(L_3, NULL);
		V_1 = L_4;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
		V_4 = (bool)((((RuntimeObject*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_4;
		if (L_6)
		{
			goto IL_00b7;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
		V_5 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_5;
					V_4 = (bool)((((RuntimeObject*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_9 = V_4;
					if (L_9)
					{
						goto IL_00ab;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_5;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00ab:
				{
					return;
				}
			}
		});
		try
		{
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				NullCheck(L_11);
				int64_t L_12;
				L_12 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_11);
				V_3 = L_12;
				bool L_13 = V_1;
				if (!L_13)
				{
					goto IL_0053_1;
				}
			}
			{
				bool L_14 = __this->____trailerSent_10;
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0054_1;
			}

IL_0053_1:
			{
				G_B7_0 = 1;
			}

IL_0054_1:
			{
				V_4 = (bool)G_B7_0;
				bool L_15 = V_4;
				if (L_15)
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
				L_16 = ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B(0, (bool)1, NULL);
				V_2 = L_16;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_0;
				NullCheck(L_18);
				int64_t L_19;
				L_19 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_18);
				NullCheck(L_17);
				VirtualActionInvoker1< int64_t >::Invoke(13, L_17, L_19);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
				NullCheck(L_22);
				NullCheck(L_20);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_20, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)));
			}

IL_007d_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_0;
				NullCheck(L_23);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
				L_24 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38, L_23);
				int64_t L_25 = V_3;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_0;
				NullCheck(L_26);
				int64_t L_27;
				L_27 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_26);
				int64_t L_28 = V_3;
				ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_24, ((int32_t)L_25), ((int32_t)((int64_t)il2cpp_codegen_subtract(L_27, L_28))), NULL);
				goto IL_00ac;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
		__this->____trailerSent_10 = (bool)1;
		goto IL_00e6;
	}

IL_00b7:
	{
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_30 = __this->____trailerSent_10;
		G_B17_0 = ((int32_t)(L_30));
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B17_0 = 1;
	}

IL_00c3:
	{
		V_4 = (bool)G_B17_0;
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B(0, (bool)1, NULL);
		V_2 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_33, 0, ((int32_t)(((RuntimeArray*)L_34)->max_length)), NULL);
		__this->____trailerSent_10 = (bool)1;
	}

IL_00e6:
	{
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_35 = __this->____response_8;
		NullCheck(L_35);
		HttpListenerResponse_Close_m8CFC9C3829BA90CB339F7DBF51E27CE9AFB52F5E(L_35, NULL);
	}

IL_00f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResponseStream_EndRead_m48C2EAEB0A0E307AE1D6D9ABBCB6B7B7F6F3DB93 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_EndRead_m48C2EAEB0A0E307AE1D6D9ABBCB6B7B7F6F3DB93_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_EndWrite_m1AA9C9C78F9EC86E0A91846C521771010129E9D0 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStream_U3CEndWriteU3Eb__0_m7184A5CD6F9B549F6E9563E98304476B908CFC7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = __this->____disposed_6;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_EndWrite_m1AA9C9C78F9EC86E0A91846C521771010129E9D0_RuntimeMethod_var)));
	}

IL_001f:
	{
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_5 = (Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*)il2cpp_codegen_object_new(Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780_il2cpp_TypeInfo_var);
		Action_1__ctor_m0164A28339B1089B156891E229EE08B0D2184DEA(L_5, __this, (intptr_t)((void*)ResponseStream_U3CEndWriteU3Eb__0_m7184A5CD6F9B549F6E9563E98304476B908CFC7E_RuntimeMethod_var), NULL);
		V_0 = L_5;
		bool L_6 = __this->____ignoreErrors_7;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
	}
	try
	{
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_8 = V_0;
		RuntimeObject* L_9 = ___asyncResult0;
		NullCheck(L_8);
		Action_1_Invoke_mC5846579CFBB0BA3F331F88846B5772D4C832B97_inline(L_8, L_9, NULL);
		goto IL_004b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004b;
	}

IL_004b:
	{
		goto IL_0059;
	}

IL_004f:
	{
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_10 = V_0;
		RuntimeObject* L_11 = ___asyncResult0;
		NullCheck(L_10);
		Action_1_Invoke_mC5846579CFBB0BA3F331F88846B5772D4C832B97_inline(L_10, L_11, NULL);
	}

IL_0059:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_Flush_m5D3DFBA9A3976AC33BB293BD92359ED7A958B301 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResponseStream_Read_mF013A6F195134DB01DF9056910BD326523EF2DE0 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_Read_mF013A6F195134DB01DF9056910BD326523EF2DE0_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResponseStream_Seek_mBBCCAB8FBB992F5A3A89EA3B53A8C166526070C4 (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_Seek_mBBCCAB8FBB992F5A3A89EA3B53A8C166526070C4_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_SetLength_m39AD97BD7E277744B0C02A675B7D0B666C3F95BD (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_SetLength_m39AD97BD7E277744B0C02A675B7D0B666C3F95BD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_Write_m9277EF647C7F7B090DB0BDB7E121B24BE22EA6BE (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_6 = NULL;
	{
		bool L_0 = __this->____disposed_6;
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_2);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResponseStream_Write_m9277EF647C7F7B090DB0BDB7E121B24BE22EA6BE_RuntimeMethod_var)));
	}

IL_0021:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5;
		L_5 = ResponseStream_getHeaders_m47755050A700517BED647BE4E682748F0C72F2A8(__this, (bool)0, NULL);
		V_0 = L_5;
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_6 = __this->____response_8;
		NullCheck(L_6);
		bool L_7;
		L_7 = HttpListenerResponse_get_SendChunked_mD66F0732AAF4ACE6B19E9F0589E68063196ED740(L_6, NULL);
		V_1 = L_7;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
		V_5 = (bool)((((RuntimeObject*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_00df;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_0;
		V_6 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_6;
					V_5 = (bool)((((RuntimeObject*)(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
					bool L_12 = V_5;
					if (L_12)
					{
						goto IL_00da;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = V_6;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_00da:
				{
					return;
				}
			}
		});
		try
		{
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
				NullCheck(L_14);
				int64_t L_15;
				L_15 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_14);
				V_3 = L_15;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
				NullCheck(L_17);
				int64_t L_18;
				L_18 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_17);
				NullCheck(L_16);
				VirtualActionInvoker1< int64_t >::Invoke(13, L_16, L_18);
				bool L_19 = V_1;
				V_5 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
				bool L_20 = V_5;
				if (L_20)
				{
					goto IL_007d_1;
				}
			}
			{
				int32_t L_21 = ___count2;
				il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
				L_22 = ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B(L_21, (bool)0, NULL);
				V_2 = L_22;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
				NullCheck(L_25);
				NullCheck(L_23);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
			}

IL_007d_1:
			{
				int32_t L_26 = ___count2;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
				NullCheck(L_27);
				int64_t L_28;
				L_28 = VirtualFuncInvoker0< int64_t >::Invoke(12, L_27);
				int64_t L_29 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_30;
				L_30 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_26, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)16384), ((int32_t)L_28))), ((int32_t)L_29))), NULL);
				V_4 = L_30;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___buffer0;
				int32_t L_33 = ___offset1;
				int32_t L_34 = V_4;
				NullCheck(L_31);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_31, L_32, L_33, L_34);
				int32_t L_35 = ___count2;
				int32_t L_36 = V_4;
				___count2 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
				int32_t L_37 = ___offset1;
				int32_t L_38 = V_4;
				___offset1 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_39 = V_0;
				NullCheck(L_39);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
				L_40 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38, L_39);
				int64_t L_41 = V_3;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_42 = V_0;
				NullCheck(L_42);
				int64_t L_43;
				L_43 = VirtualFuncInvoker0< int64_t >::Invoke(11, L_42);
				int64_t L_44 = V_3;
				ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_40, ((int32_t)L_41), ((int32_t)((int64_t)il2cpp_codegen_subtract(L_43, L_44))), NULL);
				goto IL_00db;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00db:
	{
		goto IL_00ff;
	}

IL_00df:
	{
		bool L_45 = V_1;
		V_5 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_47 = ___count2;
		il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = ResponseStream_getChunkSizeBytes_m71164B7D7819E5493E046D13C91285224861940B(L_47, (bool)0, NULL);
		V_2 = L_48;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
		NullCheck(L_50);
		ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_49, 0, ((int32_t)(((RuntimeArray*)L_50)->max_length)), NULL);
	}

IL_00ff:
	{
		int32_t L_51 = ___count2;
		V_5 = (bool)((((int32_t)((((int32_t)L_51) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_5;
		if (L_52)
		{
			goto IL_0116;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___buffer0;
		int32_t L_54 = ___offset1;
		int32_t L_55 = ___count2;
		ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_53, L_54, L_55, NULL);
	}

IL_0116:
	{
		bool L_56 = V_1;
		V_5 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_012e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ((ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_StaticFields*)il2cpp_codegen_static_fields_for(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var))->____crlf_5;
		ResponseStream_WriteInternally_m879F76D1D91672D77CC4E49C166B7AA6DD382E8C(__this, L_58, 0, 2, NULL);
	}

IL_012e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream_U3CEndWriteU3Eb__0_m7184A5CD6F9B549F6E9563E98304476B908CFC7E (ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F* __this, RuntimeObject* ___ares0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_9;
		RuntimeObject* L_1 = ___ares0;
		NullCheck(L_0);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(27, L_0, L_1);
		HttpListenerResponse_t4D7A9BAD5E061DF0959CE08BE584834611C13C6B* L_2 = __this->____response_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = HttpListenerResponse_get_SendChunked_mD66F0732AAF4ACE6B19E9F0589E68063196ED740(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->____stream_9;
		il2cpp_codegen_runtime_class_init_inline(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_StaticFields*)il2cpp_codegen_static_fields_for(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var))->____crlf_5;
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35, L_5, L_6, 0, 2);
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseStream__cctor_m7B941C650F32D470B9AD44B27EC4C6BDC9B44F18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		((ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_StaticFields*)il2cpp_codegen_static_fields_for(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var))->____crlf_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_StaticFields*)il2cpp_codegen_static_fields_for(ResponseStream_t816DF7CF7E8D09244FD5907611CBE27FC651034F_il2cpp_TypeInfo_var))->____crlf_5), (void*)L_3);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
