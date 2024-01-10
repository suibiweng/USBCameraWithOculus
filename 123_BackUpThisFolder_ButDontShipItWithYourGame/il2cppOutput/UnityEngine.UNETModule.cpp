#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t13DEA89D07060302B357E8F2282A56478714D525 
{
};
struct Il2CppArrayBounds;

// UnityEngine.Networking.NetworkTransport
struct NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4  : public RuntimeObject
{
};

struct NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_StaticFields
{
	// System.Int32 UnityEngine.Networking.NetworkTransport::s_nextSceneId
	int32_t ___s_nextSceneId_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Void
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
// System.Void UnityEngine.Networking.NetworkTransport::SetMulticastLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_SetMulticastLock_m022CB62DE1272A71DA78357FEE8F80392197A405 (bool ___enabled0, const RuntimeMethod* method) 
{
	typedef void (*NetworkTransport_SetMulticastLock_m022CB62DE1272A71DA78357FEE8F80392197A405_ftn) (bool);
	static NetworkTransport_SetMulticastLock_m022CB62DE1272A71DA78357FEE8F80392197A405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SetMulticastLock_m022CB62DE1272A71DA78357FEE8F80392197A405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SetMulticastLock(System.Boolean)");
	_il2cpp_icall_func(___enabled0);
}
// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__cctor_m10DC358D62A6475D2AD0B1ACDF2EEE1AC54C125E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var))->___s_nextSceneId_0 = 1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
