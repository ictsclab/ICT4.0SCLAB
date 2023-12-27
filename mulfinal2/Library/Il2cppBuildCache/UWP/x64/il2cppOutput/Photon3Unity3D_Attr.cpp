#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mEB73259386360DA261BDF481C4C9F2568E6D5D8C (PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, const RuntimeMethod* method);
static void Photon3Unity3D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[0];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x31\x37"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[1];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x28\x63\x29\x20\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48\x2C\x20\x68\x74\x74\x70\x3A\x2F\x2F\x77\x77\x77\x2E\x65\x78\x69\x74\x67\x61\x6D\x65\x73\x2E\x63\x6F\x6D"), NULL);
	}
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[2];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x33\x55\x6E\x69\x74\x79\x33\x44"), NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[3];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[4];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x31\x37"), NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[5];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2D\x44\x65\x62\x75\x67"), NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[6];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[7];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[8];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[9];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[10];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x53\x74\x61\x6E\x64\x61\x72\x64\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x32\x2E\x30"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[11];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[12];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
}
static void NonAllocDictionary_2_t88EE36DB65F653F66E305D3C200F39DC2D9B11A8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EnetPeer_t382F798F687EB95D86D47E199407BD1EB18C3A61_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__66_0_m7E94B404482C13650529CA177C9E50F9A8B5D737(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_State_m1BA87C85EBEA370912823A9414A98901E1576631(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m4A2603D9AE6F4028D367F27A8F9ED0A6872F808F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m81C6248CA9128B446B29C44C38F5CCA366041970(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m32C0094F91A3100AF26733F2933A851B10DE1156(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_m287BC7DFCFA470A06F0EBCFC51998319E687452E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_m2F809ED099632615EEA6843F6CCADC04F2645A9E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m9125FCE76A0C4607594450E05F0764E91BDB8F55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_mAA8F522D63DE4EB2F420C21D3AF24E654C649225(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_m0AC8DA3D9C96BFCC8A86D86B4EFB6D18D3999341(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m113848100C8E217E44164D48C224D12BC3BC32A5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mB5174F3FEFB27F740A73CDB0523303C1CDB6E088(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mBFDFC5C49D42F3387D3FBB55C7751DDDD91E5A38(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_mCA5F859A5DC53346CDC181C61AACA738171B1FC8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_mF86B39B14E182CCE33DDD6EC32A1788F4A9E42A1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_m54D86AD9CEE3220A2E389E47DF1AFCA4B00EF622(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m29522F91991BF75A2F1B8AB164E2A954378D949A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m796E52FD6E308BFB230BF63755C52EF3F02C4A18(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x47\x65\x74\x49\x70\x41\x64\x64\x72\x65\x73\x73\x65\x73\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_m1AB6EE2B5C7E08F0088FB60A930F5F214D329BE7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tA9DFFCE208865DAB71B908383FA9230263353E05_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IProtocol_tDCA3AB29378D30872687D2F6B3EDF83674B09E90_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m70A4F4BCF56C08EA634F3B288136285BF18CA46C(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SimulationItem_t5FB6D0248A06D8418D7228DABAF9EB7C468337DA_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t5FB6D0248A06D8418D7228DABAF9EB7C468337DA_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mE43E04B0A1AF39EA55FBF0F76B87D7777553AB94(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t5FB6D0248A06D8418D7228DABAF9EB7C468337DA_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m5A7F5FEAE81062A27A859202A4A6D8FAD9502BCD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m277B14C361571D3629685F0C6580629BD5DA29A8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_mEA9B58C9F70E7639748AD33A2CD78F0DE5D0B4BE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m12D32B3217DC9410F6CC89C4D730B9A24778C61D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m8DC9DBAD4419DF193552376573478157E8E2A399(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void InitV3Flags_t2C9A9B9BA1F6D32D36165F69B0DC695D5D615397_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_m9E5DF0FA1DF9AF09EFACD4BE3B4C5518C6D74A1B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m1FEA689324921066F93DC3B8A0773348010AEB6B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m6B471A8111160F76DB3D17BD30B7339006F5AF06(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m6BF7182B1DEF263C12E9AA1AAB20768CEBE48206(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass108_0_t0BCB25798B74D43918857C396852BDA7D5846153_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass109_0_t55FA47945AAEFD035B197F0C3EAAA67E116B6764_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonClientWebSocket_tC3B6D3A0C8CD8BA45BE4727F5C9C4F85D8C95720_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m09D2F684174BFA094F688A3DEF341394F8351FFD(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 * tmp = (PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 *)cache->attributes[0];
		PreserveAttribute__ctor_mEB73259386360DA261BDF481C4C9F2568E6D5D8C(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_WarningSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x43\x68\x65\x63\x6B\x20\x51\x75\x65\x75\x65\x64\x4F\x75\x74\x67\x6F\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x61\x6E\x64\x20\x51\x75\x65\x75\x65\x64\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x6F\x6E\x20\x64\x65\x6D\x61\x6E\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativeDatagramEncrypt(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x72\x65\x20\x64\x79\x6E\x61\x6D\x69\x63\x20\x6C\x69\x6E\x6B\x69\x6E\x67\x20\x69\x73\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x2C\x20\x74\x68\x69\x73\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x77\x69\x6C\x6C\x20\x61\x74\x74\x65\x6D\x70\x74\x20\x74\x6F\x20\x6C\x6F\x61\x64\x20\x69\x74\x20\x61\x6E\x64\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x74\x6F\x20\x61\x20\x6D\x61\x6E\x61\x67\x65\x64\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x69\x73\x20\x61\x6C\x77\x61\x79\x73\x20\x74\x72\x75\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_CommandLogSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativeSocketLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x20\x4E\x61\x74\x69\x76\x65\x20\x53\x6F\x63\x6B\x65\x74\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x50\x61\x79\x6C\x6F\x61\x64\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x44\x61\x74\x61\x67\x72\x61\x6D\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_OnDisconnectMessage(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_m228D33674426449FAE0D30645F5A515986B425B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_mF694B77F0157F290AB3B70C82C4828E85D018692(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_mE50B0C39E47A0907AE972C6824107FA1CD7386B1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_m77475322FFC2927881611984015021CBE8B373D0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_mA9CF5804EB580BF20090AA26A4A7E519D6821B0B(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m7906B0BC6241CF41C9B63B9C1D2A4F8A7EF4E0BE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_mF37E3249E12AA6427EE8CED6249666E4E98A67CD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m1D425EDAA1A9BC1D4DA44C291C097FC607A8BCA6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_m6BCC86A5E75D5A9927DA65A654EE2AF12DE34274(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_mD380EDFE1DF54BFDAE89B45CB33610B55ABF927B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m7DA11940471F4B1AC3AA649012B77C6D0D090BE1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m9BE171CFEE018592B9D92EBF778C0D96357089E1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m670F1C2D8B9F693184CFFBC3D499E70FFB889A0E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mBAF12AFD01E83E535E0C2F3C6CD98058BD96B7A6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m0F0278772C23C355E5FCF06581FC1E6EB4A55044(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_mD3C508428B4DED81C7830C5F59D063BE8561F9AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m1ED3BBA4D9749638C10AAD6C6EAD5B6A47676541(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_mFB69D4F2BD169729F2C9D2629386B3746EB4C1FE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m23621A8046BB9FC101CAE234AE44FA062B6E62E2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mD2E9C0FBFC34EE6F0E0384B430D3D672D296717D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_mDA5A24A1EBD14A8358900E39E330F82560F25B94(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_m9BE513B3AFD2CCFB1D8C8B2C2907CC106BF0F322(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_mD28E440472FB4611F3DB3FD7BF92E7EA1A76B1E8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m3A1884301894EF62633FEC8B5756283029D03B33(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mDAC3455A9AE56D89B2677AAA43BD8D69B19AA980(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m969BA9FB7B23C4FDEF32EAFDE95A06981E5659C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_mB91D5530B2981B964E0DFA5EB5A95F11C5AB1B0E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m3E5183A9DA568C27C8C9BE2592CFF4ED0238EA89(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_m77AA615B6D7986F15FDAF93958578874562C549D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____CommandBufferSize_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____LimitOfUnreliableCommands_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____LocalTimeInMilliSeconds_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x74\x75\x72\x6E\x73\x20\x53\x75\x70\x70\x6F\x72\x74\x43\x6C\x61\x73\x73\x2E\x47\x65\x74\x54\x69\x63\x6B\x43\x6F\x75\x6E\x74\x28\x29\x2E\x20\x53\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x72\x65\x70\x6C\x61\x63\x65\x64\x20\x62\x79\x20\x61\x20\x53\x74\x6F\x70\x57\x61\x74\x63\x68\x20\x6F\x72\x20\x74\x68\x65\x20\x70\x65\x72\x20\x70\x65\x65\x72\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6C\x69\x65\x6E\x74\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____ClientVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x73\x74\x61\x74\x69\x63\x20\x73\x74\x72\x69\x6E\x67\x20\x56\x65\x72\x73\x69\x6F\x6E\x20\x73\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____LocalMsTimestampDelegate_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x20\x77\x69\x6C\x6C\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x75\x73\x65\x20\x74\x68\x69\x73\x20\x64\x65\x6C\x65\x67\x61\x74\x65\x2E\x20\x49\x74\x20\x75\x73\x65\x73\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x69\x6E\x20\x61\x6C\x6C\x20\x63\x61\x73\x65\x73\x2E\x20\x59\x6F\x75\x20\x63\x61\x6E\x20\x61\x63\x63\x65\x73\x73\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____IsSendingOnlyAcks_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x74\x65\x72\x6E\x61\x6C\x6C\x79\x20\x6E\x6F\x74\x20\x75\x73\x65\x64\x20\x61\x6E\x79\x6D\x6F\x72\x65\x2E\x20\x43\x61\x6C\x6C\x20\x53\x65\x6E\x64\x41\x63\x6B\x73\x4F\x6E\x6C\x79\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Protocol_tE9A920CD3784D6BEF5316589DDDB57D4E2CD5480_CustomAttributesCacheGenerator_Protocol_Serialize_m33FEE3282284E8CC68C72480A41AE5F3D2D9C2AB(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol_tE9A920CD3784D6BEF5316589DDDB57D4E2CD5480_CustomAttributesCacheGenerator_Protocol_Deserialize_m6BA42E84D9078CC95661CE07BF43094967B497DE(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol16_t003215E55A0AB62FDB25D9E3DC02AB9CED38704F_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m5F93362320545CF46BBE927A1E9A2019AEF2FCBF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol16_t003215E55A0AB62FDB25D9E3DC02AB9CED38704F_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_mB73A5B55F94CB236EE0E81E86465FFD261E0E189(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x6F\x66\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x3C\x62\x79\x74\x65\x2C\x20\x6F\x62\x6A\x65\x63\x74\x3E\x2E"), NULL);
	}
}
static void Protocol18_t1E04A2B7711497D8E9A2BFFABC4B17B2EF7D75F9_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_mD34E23C9277EDAFED23E4E77103C591B0469B2E1(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol18_t1E04A2B7711497D8E9A2BFFABC4B17B2EF7D75F9_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m2B1BE729CE823BEFD025EE91F5950E25F932B65B(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SocketTcp_tBFF51682994E21CC07A2B1052065D0E28A0B7A98_CustomAttributesCacheGenerator_SocketTcp__ctor_m0CDBD50306E6D8C3219B6A6BD437116733E95CB2(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 * tmp = (PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 *)cache->attributes[0];
		PreserveAttribute__ctor_mEB73259386360DA261BDF481C4C9F2568E6D5D8C(tmp, NULL);
	}
}
static void SocketTcpAsync_tCE8A7B3F9B15F1F382133B9CDEF7FB34FAADD251_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m1FF02A24BFEE28530E5233C2778008E7FDECE739(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 * tmp = (PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 *)cache->attributes[0];
		PreserveAttribute__ctor_mEB73259386360DA261BDF481C4C9F2568E6D5D8C(tmp, NULL);
	}
}
static void SocketUdp_t00A2CC8B49E20817BB2141FF68B207D3440E0895_CustomAttributesCacheGenerator_SocketUdp__ctor_m57FC9588C42738C25165D06DFE6554B0D2DD372F(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 * tmp = (PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 *)cache->attributes[0];
		PreserveAttribute__ctor_mEB73259386360DA261BDF481C4C9F2568E6D5D8C(tmp, NULL);
	}
}
static void SocketUdpAsync_t733315DC0A8DDF7DF11599784E85D6C1932CC264_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_mBCFD287893AF2D75D9515D23FEFDFE58C23AFDAD(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 * tmp = (PreserveAttribute_tD2C633911EEB2E0D776F5F91D974F9D79AD9B5D7 *)cache->attributes[0];
		PreserveAttribute__ctor_mEB73259386360DA261BDF481C4C9F2568E6D5D8C(tmp, NULL);
	}
}
static void SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_CustomAttributesCacheGenerator_IntegerMilliseconds(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_CustomAttributesCacheGenerator_SupportClass_GetTickCount_m01AC7121F86C2377292DD929BA5351AAC3A9CE8E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_CustomAttributesCacheGenerator_SupportClass_HashtableToString_m25B2D7E8F4BCA3F521FF6396BCA6CEEB914BCF20(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x54\x6F\x53\x74\x72\x69\x6E\x67\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IntegerMillisecondsDelegate_t3AA85AD27B551B72F9E10E316F444115274000BB_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass6_0_t5BF6FED6FD0741E4D823E175192FFA5A94F0DB6E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tF774CCAA6D1E1D0C7B69177FFFFD789760596CB7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_tC7FE2417E72EB4363497937102D510575F725C65_CustomAttributesCacheGenerator_Pool_1_Push_m0B5E199290F64E2CFCCC3ED6EF46CE4A84577618(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x52\x65\x6C\x65\x61\x73\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x75\x73\x68\x28\x29"), NULL);
	}
}
static void Pool_1_tC7FE2417E72EB4363497937102D510575F725C65_CustomAttributesCacheGenerator_Pool_1_Pop_m08A519AFB6341A009D4060B3060A7B559B8074D4(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x41\x63\x71\x75\x69\x72\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x6F\x70\x28\x29"), NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m38C4F3F12962175A91E001DB2DB68C00E1F64383(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_m2116B6B89AE8F8B4A9F1BB8A12609096CF157040(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mC3EC4F4A0577BBE9389C071519174DC458B613AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m1C2781878589A2C9187A3D4BAA411818C91A5009(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_mCBAB979F05A0F51E6E89E05C9F679987BD9DAB6D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_mA5AEFC5146BFE65BCBC07D8B17E09ABD96A99451(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m516F96483C0AAF117F15F7DC07A4A3B919928D54(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mA88FA747362FDD08BD6BF9F778E51FE0C690F45B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m3686091F8A2B6C7BBF578B951D83B76E13AF86B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_mC3D04194B4922C0B18A43CEC9B53DC2579AA8781(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m9B9B60B159013143240DC6FF9D568A27A34A74E5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m996BB22557526CC09946FF6D9F62F9D9A1F772B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_mC9DDBD74D3167B0E943DD940C07B67193D41E164(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m202C2A9FBB6E8EB8350FA16E87564869E14CD4D8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mC215ECF86090069B52C2B4AC26FD79531CCC2DC9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m2E3E154125882E40C77FECBBE67D82C2883ACCBE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m02D6E0579EF695420E2231949AA29E83D148FADD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m5C4E42E51B71C0FCAF04E4BBCF91C9665FD2C15E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m33AF65A4BAD459A5C67342214C5873C4205A69D1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m4B20774DE2910B3909442A3E7D4D02232076CEB1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_mD1DCECCE8294FA4B9FF4A189BFFF20FA9207FAC9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_mBF9BAF45C691522F6F089EEBBF2BF1E11B114CA4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_mE5EAC9055F3802C5446C4346E2AB6A427B598085(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m3C205A126F01F1A89F43FB098C9906AC4A5F42BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_mA4DD4CB7554A7D78F229B4A5B4579DF433C7AA13(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m00871D840D6C85FC11CA8EE1AFFA73420ED5F3C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m66CCE5C149BC6D3C2BD35EEEC9428DE90FBBB851(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m3D3CEE57F4409F373FF77CDE27F7D7C6B62AAD0B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC8D1EA24F5959B9A7B284BCFF36E7562543C3CB3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mFFD6079E6833E5BF7071CE16C0EC1695210BCE94(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m2B227C004953DF78CA2FB61C3FCEE7DEE4A95A5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mE565989863B214FCDB545325F641D27A3EBFA9C5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73____DispatchCalls_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x73\x70\x61\x74\x63\x68\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x43\x61\x6C\x6C\x73\x2C\x20\x77\x68\x69\x63\x68\x20\x68\x61\x73\x20\x70\x72\x6F\x70\x65\x72\x20\x6E\x61\x6D\x69\x6E\x67\x2E"), NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m77B237244598660A136A7986FC26E1CA583AEC89(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_mE008EA91F79F16A9E28DB6FED2EACA80E11F20EA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m964BF582827939D70934265AEC91D4B2D159A81C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m658E77F362018CC01664F6395F9D602EDCE1A04F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_m4FB697089E9F0B39BED7064A93E3F9C58C149E35(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m642926E8CBCE7C0D83F85F4F305C8B73AE5AAD8A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mE8341F148E27F0B14A07351719EEC430F5F2887C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m8F0AFB9F7925FC801F2348F05DF75C79A8547DF8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m43D78F2683CDC6A0E9D78EBDF44181E3EEE2C10A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m3AB6CAB428BDF4A14EA42CEC99B7E3953BCC5DB5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m24F87F43F89FF9DFD9C3B04FB02209BD3620D86C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m3BDC054CF15AD5172EC7C46BB57E88B8D144F39C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m929DB76C30A6FD3D6F40C647ADB7BEBD2D51F8B0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m43BA8B7DC02CE606549CA4E71C0CB56A17892CA5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mF81502F1C3AEE4883F977EBB53AA01AFF651371B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m99B7B1DA287B187949CA4E54F8541EBD5091C132(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m82560B17E744E7EA7141FAD541D5213F866344BF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m8B72457D652EBC44C4222FD88ED35E5ECF26936C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m0685A95C52758FDC9B1D72D12135A90DF7A1A51B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m57D218ABFF9F66F40285DB96699C39D2BBB621BA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_m2B8838B243470C44F506120872C845CC0781474F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m753599CC06AD500C522C559640B5D3A5BE1205EF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_mD4AA219FD4BFF9289807BF93915A649720C365FF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m42B8E3E623921E07A367265266B898EE84D18A51(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_m24A56D46573FE8FD420FF6D72B1D5017CAE2382E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m0543A06843971B742D6B33F5DB3717D8E7E1BA8B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tB6FE657BF68752F63271490CD2935056B2CB4AE9_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void StructWrapper_1_tB6FE657BF68752F63271490CD2935056B2CB4AE9_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mEC7B75F948E9FB8C61F402160BBE81A67934CFB9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tB6FE657BF68752F63271490CD2935056B2CB4AE9_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_mF39F0775939A117D7EEE32A586B5928EA0B93B46(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapperUtility_t63BA55D73124DCB11EF089AB17BAC5F57D32788A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t63BA55D73124DCB11EF089AB17BAC5F57D32788A_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mD7BFEDE2562D5B218CD77DA8820D05DC38AD14CF(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t63BA55D73124DCB11EF089AB17BAC5F57D32788A_CustomAttributesCacheGenerator_StructWrapperUtility_Get_m57AB6F89B5B844F840015561E72F02F79708EDE9(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_t7C8A50649D131A46A6C43835364344094FD38F5E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[223] = 
{
	NonAllocDictionary_2_t88EE36DB65F653F66E305D3C200F39DC2D9B11A8_CustomAttributesCacheGenerator,
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_CustomAttributesCacheGenerator,
	U3CU3Ec_tA9DFFCE208865DAB71B908383FA9230263353E05_CustomAttributesCacheGenerator,
	ParameterDictionary_t4E835C0F64BABDA04D719A88BB5BA38F93FED8C1_CustomAttributesCacheGenerator,
	InitV3Flags_t2C9A9B9BA1F6D32D36165F69B0DC695D5D615397_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass108_0_t0BCB25798B74D43918857C396852BDA7D5846153_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass109_0_t55FA47945AAEFD035B197F0C3EAAA67E116B6764_CustomAttributesCacheGenerator,
	OperationResponse_tD5E1FA6226BA8F367CAA4C6FD0257C53652172DD_CustomAttributesCacheGenerator,
	EventData_t3AA88C86F2A7EEF097C2C645BBF9C590F01CF08E_CustomAttributesCacheGenerator,
	IntegerMillisecondsDelegate_t3AA85AD27B551B72F9E10E316F444115274000BB_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_0_t5BF6FED6FD0741E4D823E175192FFA5A94F0DB6E_CustomAttributesCacheGenerator,
	U3CU3Ec_tF774CCAA6D1E1D0C7B69177FFFFD789760596CB7_CustomAttributesCacheGenerator,
	StructWrapperUtility_t63BA55D73124DCB11EF089AB17BAC5F57D32788A_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t7C8A50649D131A46A6C43835364344094FD38F5E_CustomAttributesCacheGenerator,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField,
	SimulationItem_t5FB6D0248A06D8418D7228DABAF9EB7C468337DA_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_WarningSize,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativeDatagramEncrypt,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_CommandLogSize,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativeSocketLibAvailable,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_OnDisconnectMessage,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField,
	SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_CustomAttributesCacheGenerator_IntegerMilliseconds,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	StructWrapper_1_tB6FE657BF68752F63271490CD2935056B2CB4AE9_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField,
	EnetPeer_t382F798F687EB95D86D47E199407BD1EB18C3A61_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__66_0_m7E94B404482C13650529CA177C9E50F9A8B5D737,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_State_m1BA87C85EBEA370912823A9414A98901E1576631,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m4A2603D9AE6F4028D367F27A8F9ED0A6872F808F,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m81C6248CA9128B446B29C44C38F5CCA366041970,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m32C0094F91A3100AF26733F2933A851B10DE1156,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_m287BC7DFCFA470A06F0EBCFC51998319E687452E,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_m2F809ED099632615EEA6843F6CCADC04F2645A9E,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m9125FCE76A0C4607594450E05F0764E91BDB8F55,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_mAA8F522D63DE4EB2F420C21D3AF24E654C649225,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_m0AC8DA3D9C96BFCC8A86D86B4EFB6D18D3999341,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m113848100C8E217E44164D48C224D12BC3BC32A5,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mB5174F3FEFB27F740A73CDB0523303C1CDB6E088,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mBFDFC5C49D42F3387D3FBB55C7751DDDD91E5A38,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_mCA5F859A5DC53346CDC181C61AACA738171B1FC8,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_mF86B39B14E182CCE33DDD6EC32A1788F4A9E42A1,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_m54D86AD9CEE3220A2E389E47DF1AFCA4B00EF622,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m29522F91991BF75A2F1B8AB164E2A954378D949A,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m796E52FD6E308BFB230BF63755C52EF3F02C4A18,
	IPhotonSocket_t56D36AF79C35E190906809A872524B6D2ADD6F1B_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_m1AB6EE2B5C7E08F0088FB60A930F5F214D329BE7,
	IProtocol_tDCA3AB29378D30872687D2F6B3EDF83674B09E90_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m70A4F4BCF56C08EA634F3B288136285BF18CA46C,
	SimulationItem_t5FB6D0248A06D8418D7228DABAF9EB7C468337DA_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mE43E04B0A1AF39EA55FBF0F76B87D7777553AB94,
	SimulationItem_t5FB6D0248A06D8418D7228DABAF9EB7C468337DA_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m5A7F5FEAE81062A27A859202A4A6D8FAD9502BCD,
	NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m277B14C361571D3629685F0C6580629BD5DA29A8,
	NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_mEA9B58C9F70E7639748AD33A2CD78F0DE5D0B4BE,
	NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m12D32B3217DC9410F6CC89C4D730B9A24778C61D,
	NetworkSimulationSet_tCF46F7D6D6ADDB841AA5FDFE5C508779B86B513C_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m8DC9DBAD4419DF193552376573478157E8E2A399,
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_m9E5DF0FA1DF9AF09EFACD4BE3B4C5518C6D74A1B,
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m1FEA689324921066F93DC3B8A0773348010AEB6B,
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m6B471A8111160F76DB3D17BD30B7339006F5AF06,
	PeerBase_tCC39CF775E7BCAC1D196B8056A59728A0F62E989_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m6BF7182B1DEF263C12E9AA1AAB20768CEBE48206,
	PhotonClientWebSocket_tC3B6D3A0C8CD8BA45BE4727F5C9C4F85D8C95720_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m09D2F684174BFA094F688A3DEF341394F8351FFD,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_m228D33674426449FAE0D30645F5A515986B425B5,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_mF694B77F0157F290AB3B70C82C4828E85D018692,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_mE50B0C39E47A0907AE972C6824107FA1CD7386B1,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_m77475322FFC2927881611984015021CBE8B373D0,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_mA9CF5804EB580BF20090AA26A4A7E519D6821B0B,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m7906B0BC6241CF41C9B63B9C1D2A4F8A7EF4E0BE,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_mF37E3249E12AA6427EE8CED6249666E4E98A67CD,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m1D425EDAA1A9BC1D4DA44C291C097FC607A8BCA6,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_m6BCC86A5E75D5A9927DA65A654EE2AF12DE34274,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_mD380EDFE1DF54BFDAE89B45CB33610B55ABF927B,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_m7DA11940471F4B1AC3AA649012B77C6D0D090BE1,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m9BE171CFEE018592B9D92EBF778C0D96357089E1,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m670F1C2D8B9F693184CFFBC3D499E70FFB889A0E,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mBAF12AFD01E83E535E0C2F3C6CD98058BD96B7A6,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m0F0278772C23C355E5FCF06581FC1E6EB4A55044,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m63833AB8080699889CB98E00C8CCC67F365197A0,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_mD3C508428B4DED81C7830C5F59D063BE8561F9AE,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m1ED3BBA4D9749638C10AAD6C6EAD5B6A47676541,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_mFB69D4F2BD169729F2C9D2629386B3746EB4C1FE,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m23621A8046BB9FC101CAE234AE44FA062B6E62E2,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mD2E9C0FBFC34EE6F0E0384B430D3D672D296717D,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_mDA5A24A1EBD14A8358900E39E330F82560F25B94,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_m9BE513B3AFD2CCFB1D8C8B2C2907CC106BF0F322,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_mD28E440472FB4611F3DB3FD7BF92E7EA1A76B1E8,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m3A1884301894EF62633FEC8B5756283029D03B33,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mDAC3455A9AE56D89B2677AAA43BD8D69B19AA980,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m969BA9FB7B23C4FDEF32EAFDE95A06981E5659C8,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_mB91D5530B2981B964E0DFA5EB5A95F11C5AB1B0E,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m3E5183A9DA568C27C8C9BE2592CFF4ED0238EA89,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_m77AA615B6D7986F15FDAF93958578874562C549D,
	Protocol_tE9A920CD3784D6BEF5316589DDDB57D4E2CD5480_CustomAttributesCacheGenerator_Protocol_Serialize_m33FEE3282284E8CC68C72480A41AE5F3D2D9C2AB,
	Protocol_tE9A920CD3784D6BEF5316589DDDB57D4E2CD5480_CustomAttributesCacheGenerator_Protocol_Deserialize_m6BA42E84D9078CC95661CE07BF43094967B497DE,
	Protocol16_t003215E55A0AB62FDB25D9E3DC02AB9CED38704F_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m5F93362320545CF46BBE927A1E9A2019AEF2FCBF,
	Protocol16_t003215E55A0AB62FDB25D9E3DC02AB9CED38704F_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_mB73A5B55F94CB236EE0E81E86465FFD261E0E189,
	Protocol18_t1E04A2B7711497D8E9A2BFFABC4B17B2EF7D75F9_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_mD34E23C9277EDAFED23E4E77103C591B0469B2E1,
	Protocol18_t1E04A2B7711497D8E9A2BFFABC4B17B2EF7D75F9_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m2B1BE729CE823BEFD025EE91F5950E25F932B65B,
	SocketTcp_tBFF51682994E21CC07A2B1052065D0E28A0B7A98_CustomAttributesCacheGenerator_SocketTcp__ctor_m0CDBD50306E6D8C3219B6A6BD437116733E95CB2,
	SocketTcpAsync_tCE8A7B3F9B15F1F382133B9CDEF7FB34FAADD251_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m1FF02A24BFEE28530E5233C2778008E7FDECE739,
	SocketUdp_t00A2CC8B49E20817BB2141FF68B207D3440E0895_CustomAttributesCacheGenerator_SocketUdp__ctor_m57FC9588C42738C25165D06DFE6554B0D2DD372F,
	SocketUdpAsync_t733315DC0A8DDF7DF11599784E85D6C1932CC264_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_mBCFD287893AF2D75D9515D23FEFDFE58C23AFDAD,
	SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_CustomAttributesCacheGenerator_SupportClass_GetTickCount_m01AC7121F86C2377292DD929BA5351AAC3A9CE8E,
	SupportClass_tAEC9AA6A7575DBD971F8C4C5E48BB8534DE4069D_CustomAttributesCacheGenerator_SupportClass_HashtableToString_m25B2D7E8F4BCA3F521FF6396BCA6CEEB914BCF20,
	Pool_1_tC7FE2417E72EB4363497937102D510575F725C65_CustomAttributesCacheGenerator_Pool_1_Push_m0B5E199290F64E2CFCCC3ED6EF46CE4A84577618,
	Pool_1_tC7FE2417E72EB4363497937102D510575F725C65_CustomAttributesCacheGenerator_Pool_1_Pop_m08A519AFB6341A009D4060B3060A7B559B8074D4,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m38C4F3F12962175A91E001DB2DB68C00E1F64383,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_m2116B6B89AE8F8B4A9F1BB8A12609096CF157040,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mC3EC4F4A0577BBE9389C071519174DC458B613AD,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m1C2781878589A2C9187A3D4BAA411818C91A5009,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_mCBAB979F05A0F51E6E89E05C9F679987BD9DAB6D,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_mA5AEFC5146BFE65BCBC07D8B17E09ABD96A99451,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m516F96483C0AAF117F15F7DC07A4A3B919928D54,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mA88FA747362FDD08BD6BF9F778E51FE0C690F45B,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m3686091F8A2B6C7BBF578B951D83B76E13AF86B7,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_mC3D04194B4922C0B18A43CEC9B53DC2579AA8781,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m9B9B60B159013143240DC6FF9D568A27A34A74E5,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_m996BB22557526CC09946FF6D9F62F9D9A1F772B5,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_mC9DDBD74D3167B0E943DD940C07B67193D41E164,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m202C2A9FBB6E8EB8350FA16E87564869E14CD4D8,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mC215ECF86090069B52C2B4AC26FD79531CCC2DC9,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m2E3E154125882E40C77FECBBE67D82C2883ACCBE,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m02D6E0579EF695420E2231949AA29E83D148FADD,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m5C4E42E51B71C0FCAF04E4BBCF91C9665FD2C15E,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_m33AF65A4BAD459A5C67342214C5873C4205A69D1,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m4B20774DE2910B3909442A3E7D4D02232076CEB1,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_mD1DCECCE8294FA4B9FF4A189BFFF20FA9207FAC9,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_mBF9BAF45C691522F6F089EEBBF2BF1E11B114CA4,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_mE5EAC9055F3802C5446C4346E2AB6A427B598085,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m3C205A126F01F1A89F43FB098C9906AC4A5F42BC,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_mA4DD4CB7554A7D78F229B4A5B4579DF433C7AA13,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m00871D840D6C85FC11CA8EE1AFFA73420ED5F3C1,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m66CCE5C149BC6D3C2BD35EEEC9428DE90FBBB851,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m3D3CEE57F4409F373FF77CDE27F7D7C6B62AAD0B,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mC8D1EA24F5959B9A7B284BCFF36E7562543C3CB3,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_mFFD6079E6833E5BF7071CE16C0EC1695210BCE94,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m2B227C004953DF78CA2FB61C3FCEE7DEE4A95A5B,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mE565989863B214FCDB545325F641D27A3EBFA9C5,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m77B237244598660A136A7986FC26E1CA583AEC89,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_mE008EA91F79F16A9E28DB6FED2EACA80E11F20EA,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m964BF582827939D70934265AEC91D4B2D159A81C,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m658E77F362018CC01664F6395F9D602EDCE1A04F,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_m4FB697089E9F0B39BED7064A93E3F9C58C149E35,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m642926E8CBCE7C0D83F85F4F305C8B73AE5AAD8A,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mE8341F148E27F0B14A07351719EEC430F5F2887C,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m8F0AFB9F7925FC801F2348F05DF75C79A8547DF8,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m43D78F2683CDC6A0E9D78EBDF44181E3EEE2C10A,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m3AB6CAB428BDF4A14EA42CEC99B7E3953BCC5DB5,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m24F87F43F89FF9DFD9C3B04FB02209BD3620D86C,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m3BDC054CF15AD5172EC7C46BB57E88B8D144F39C,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m929DB76C30A6FD3D6F40C647ADB7BEBD2D51F8B0,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m43BA8B7DC02CE606549CA4E71C0CB56A17892CA5,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mF81502F1C3AEE4883F977EBB53AA01AFF651371B,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m99B7B1DA287B187949CA4E54F8541EBD5091C132,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m82560B17E744E7EA7141FAD541D5213F866344BF,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m8B72457D652EBC44C4222FD88ED35E5ECF26936C,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m0685A95C52758FDC9B1D72D12135A90DF7A1A51B,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m57D218ABFF9F66F40285DB96699C39D2BBB621BA,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_m2B8838B243470C44F506120872C845CC0781474F,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m753599CC06AD500C522C559640B5D3A5BE1205EF,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_mD4AA219FD4BFF9289807BF93915A649720C365FF,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m42B8E3E623921E07A367265266B898EE84D18A51,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_m24A56D46573FE8FD420FF6D72B1D5017CAE2382E,
	TrafficStats_t07AB65539A5CC41CFD2389AFA7B47C3D48813B80_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m0543A06843971B742D6B33F5DB3717D8E7E1BA8B,
	StructWrapper_1_tB6FE657BF68752F63271490CD2935056B2CB4AE9_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mEC7B75F948E9FB8C61F402160BBE81A67934CFB9,
	StructWrapper_1_tB6FE657BF68752F63271490CD2935056B2CB4AE9_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_mF39F0775939A117D7EEE32A586B5928EA0B93B46,
	StructWrapperUtility_t63BA55D73124DCB11EF089AB17BAC5F57D32788A_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mD7BFEDE2562D5B218CD77DA8820D05DC38AD14CF,
	StructWrapperUtility_t63BA55D73124DCB11EF089AB17BAC5F57D32788A_CustomAttributesCacheGenerator_StructWrapperUtility_Get_m57AB6F89B5B844F840015561E72F02F79708EDE9,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____CommandBufferSize_PropertyInfo,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____LimitOfUnreliableCommands_PropertyInfo,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____LocalTimeInMilliSeconds_PropertyInfo,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____ClientVersion_PropertyInfo,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____LocalMsTimestampDelegate_PropertyInfo,
	PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28_CustomAttributesCacheGenerator_PhotonPeer_t2E1D16F4C4A174543924C9D5350C51BA77700D28____IsSendingOnlyAcks_PropertyInfo,
	TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t367753803F03C59F7761406EC6FBBC9FF9243C73____DispatchCalls_PropertyInfo,
	Photon3Unity3D_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
