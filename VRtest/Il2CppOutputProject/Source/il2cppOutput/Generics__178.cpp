#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7;
struct ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158;
struct ThreadLocal_1_tE778CDE74B6D2A24B1BB4069B959CE39005AC0EE;
struct XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44;
struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MethodInfo_t;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ____extractKey;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey;
};
struct XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD  : public RuntimeObject
{
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* ____state;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	bool ___U3CrunningU3Ek__BackingField;
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField;
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
struct Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 
{
	Il2CppSharedGenericObject* ___Value;
	int32_t ___HashCode;
	int32_t ___Next;
};
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
struct SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	Il2CppSharedGenericObject* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CproviderU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44  : public SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158
{
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct XRPermissionState_tA8B1D6D887EE6DB0EC0057CF231BD892B4BFB405 
{
	int32_t ___value__;
};
struct XRSubsystemStartOptions_t119BC62619A86959AA8FC5A547BF0B7998EC33B0 
{
	int32_t ___value__;
};
struct StatusCode_tB2BCF980A5E9E723CE4E05146B7F9CC89EB5BF4B 
{
	int32_t ___value__;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 
{
	int32_t ___m_StatusCode;
	int32_t ___m_NativeStatusCode;
};
struct Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7  : public RuntimeObject
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaitable;
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ____result;
};
struct ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7_StaticFields
{
	ThreadLocal_1_tE778CDE74B6D2A24B1BB4069B959CE39005AC0EE* ____pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 m_Items[1];

	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_fshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04 (XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9_gshared (SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194*, Il2CppSharedGenericObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194*, int32_t, const RuntimeMethod*))XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared)(__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40 (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_fshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, String_t*, int32_t, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, const RuntimeMethod*))XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 XRResultStatus_get_unqualifiedSuccess_mF88DE6F5E8C28E2DF3A76A2D7B575E9CC01F8093 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04 (XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___0_result, const RuntimeMethod* method) ;
inline void SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9 (SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_3 = (EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9*)(EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = il2cpp_intrinsic_interlocked_compare_exchange(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), (-1), 0);
		V_3 = L_10;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_11 = __this->____extractKey;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_12 = __this->____entries;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___Value;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_11, L_14, NULL);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_17 = __this->____entries;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Next;
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_20 = __this->____entries;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t* L_22 = (int32_t*)(&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Next);
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_22, (-1), 0);
		V_3 = L_23;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_24 = __this->____entries;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___Next;
		V_3 = L_26;
	}

IL_009f:
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a7:
	{
		int32_t L_29 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_32 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->____buckets;
		NullCheck(L_33);
		int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->____buckets;
		NullCheck(L_35);
		int32_t L_36 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_35)->max_length),NULL));
		V_0 = L_36;
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____buckets;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_38, 2));
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_40 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_41 = __this->____extractKey;
		int32_t L_42 = V_0;
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_43 = (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
		XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0(L_43, L_41, L_42, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		V_1 = L_43;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->____buckets;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_5 = L_47;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_48 = V_1;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_49 = __this->____entries;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		Il2CppSharedGenericObject* L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___Value;
		NullCheck(L_48);
		bool L_52;
		L_52 = XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA(L_48, L_51, (&V_6), NULL);
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_53 = __this->____entries;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___Next;
		V_5 = L_55;
	}

IL_0130:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_013b:
	{
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->____buckets;
		NullCheck(L_59);
		int32_t L_60 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_59)->max_length),NULL));
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_61 = V_1;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350(__this, L_4, L_5, L_6, L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppSharedGenericObject** L_9 = ___3_value;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value;
		*(Il2CppSharedGenericObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppSharedGenericObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppSharedGenericObject** L_0 = ___1_newValue;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		*(Il2CppSharedGenericObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_2 = __this->____extractKey;
		Il2CppSharedGenericObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_2, L_3, NULL);
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40(L_6, 0, L_8, NULL);
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_16 = __this->____entries;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ___0_value;
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Value = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Value), (void*)L_18);
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_19 = __this->____entries;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = V_3;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___HashCode = L_21;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____buckets;
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____buckets;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		NullCheck(L_23);
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = il2cpp_intrinsic_interlocked_compare_exchange(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)il2cpp_codegen_subtract(L_26, 1))))))), L_27, 0);
		V_1 = L_28;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_29 = __this->____entries;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t* L_31 = (int32_t*)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___Next);
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = il2cpp_intrinsic_interlocked_compare_exchange(L_31, L_32, 0);
		V_1 = L_33;
	}

IL_00ae:
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_35 = V_1;
		return (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_36 = V_3;
		String_t* L_37 = V_2;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		bool L_40;
		L_40 = XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350(__this, L_36, L_37, 0, L_39, (&V_1), NULL);
		if (!L_40)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppSharedGenericObject** L_41 = ___1_newValue;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_42 = __this->____entries;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		Il2CppSharedGenericObject* L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___Value;
		*(Il2CppSharedGenericObject**)L_41 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_41, (void*)L_44);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___HashCode;
		int32_t L_13 = ___0_hashCode;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_14 = __this->____extractKey;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_15 = __this->____entries;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value;
		NullCheck(L_14);
		String_t* L_18;
		L_18 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_14, L_17, NULL);
		V_2 = L_18;
		String_t* L_19 = V_2;
		if (L_19)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_20 = __this->____entries;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Next;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_23 = __this->____entries;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppSharedGenericObject** L_25 = (Il2CppSharedGenericObject**)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Value);
		il2cpp_codegen_initobj(L_25, sizeof(Il2CppSharedGenericObject*));
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_26 = __this->____entries;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___Next;
		V_1 = L_28;
		int32_t L_29 = V_0;
		if (L_29)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		int32_t L_34 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_31&((int32_t)il2cpp_codegen_subtract(L_33, 1))))), (int32_t)L_34);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_35 = __this->____entries;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = V_1;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___Next = L_37;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_38 = ___3_count;
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_41 = ___1_key;
		int32_t L_42 = ___2_index;
		String_t* L_43 = V_2;
		int32_t L_44 = ___3_count;
		int32_t L_45;
		L_45 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_41, L_42, L_43, 0, L_44, NULL);
		if (L_45)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_46 = ___4_entryIndex;
		int32_t L_47 = V_1;
		*(L_46) = L_47;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_48 = V_1;
		V_0 = L_48;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_49 = __this->____entries;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___Next;
		V_1 = L_51;
	}

IL_00f9:
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_53 = ___4_entryIndex;
		int32_t L_54 = V_0;
		*(L_53) = L_54;
		return (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_50 = L_14;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = il2cpp_intrinsic_interlocked_compare_exchange(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), (-1), 0);
		V_3 = L_10;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_11 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_12 = __this->____entries;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_11);
		String_t* L_15;
		L_15 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_14: *(void**)L_14));
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_17 = __this->____entries;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_20 = __this->____entries;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = il2cpp_intrinsic_interlocked_compare_exchange((((int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), (-1), 0);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_23 = __this->____entries;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)(L_33/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->____buckets;
		NullCheck(L_34);
		int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
		V_0 = L_35;
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_37, 2));
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_39 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_40 = __this->____extractKey;
		int32_t L_41 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(L_42, L_40, L_41, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		V_1 = L_42;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->____buckets;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_47 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_48 = __this->____entries;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		il2cpp_codegen_memcpy(L_50, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_47);
		bool L_51;
		L_51 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_50: *(void**)L_50), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_52 = __this->____entries;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_5 = L_54;
	}

IL_0130:
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_013b:
	{
		int32_t L_57 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->____buckets;
		NullCheck(L_58);
		int32_t L_59 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_58)->max_length),NULL));
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_60 = V_1;
		return L_60;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_18 = L_1;
	const Il2CppFullySharedGenericAny L_43 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = __this->____extractKey;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_6, 0, L_8, NULL);
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = __this->____entries;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_field_data<true>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_18, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = V_3;
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_21);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____buckets;
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____buckets;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		NullCheck(L_23);
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = il2cpp_intrinsic_interlocked_compare_exchange(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)il2cpp_codegen_subtract(L_26, 1))))))), L_27, 0);
		V_1 = L_28;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_29 = __this->____entries;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = il2cpp_intrinsic_interlocked_compare_exchange((((int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), L_31, 0);
		V_1 = L_32;
	}

IL_00ae:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_34 = V_1;
		return (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_35 = V_3;
		String_t* L_36 = V_2;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		bool L_39;
		L_39 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_35, L_36, 0, L_38, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if (!L_39)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_40 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_41 = __this->____entries;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_40, L_43, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_40, (void*)L_43);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_13 = ___0_hashCode;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_14 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = __this->____entries;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_14);
		String_t* L_18;
		L_18 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_17: *(void**)L_17));
		V_2 = L_18;
		String_t* L_19 = V_2;
		if (L_19)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_20 = __this->____entries;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_23 = __this->____entries;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_25 = __this->____entries;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		int32_t L_33 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(L_32, 1))))), (int32_t)L_33);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_34 = __this->____entries;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = V_1;
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_36);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_37 = ___3_count;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)L_39))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_40 = ___1_key;
		int32_t L_41 = ___2_index;
		String_t* L_42 = V_2;
		int32_t L_43 = ___3_count;
		int32_t L_44;
		L_44 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_40, L_41, L_42, 0, L_43, NULL);
		if (L_44)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_45 = ___4_entryIndex;
		int32_t L_46 = V_1;
		*(L_45) = L_46;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_47 = V_1;
		V_0 = L_47;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_48 = __this->____entries;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_50;
	}

IL_00f9:
	{
		int32_t L_51 = V_1;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_52 = ___4_entryIndex;
		int32_t L_53 = V_0;
		*(L_52) = L_53;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_fshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m3D1E3EE0309A2609621BEADA5C0A6B8E848411F7_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_2 = (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0(L_2, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2EA323EB26019A10072366BE80F4B4C6DB10AD0B_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppSharedGenericObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* XHashtable_1_Add_m44F5FEBEB616A2641A3BE7655190A82DA593563A_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_0 = __this->____state;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		Il2CppSharedGenericObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_8;
			L_8 = XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_fshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_fshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_fshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSubsystem_3_GetPermissionState_mABA1B0A7D8841E2B639E430B5BD92BF8823E2B36_gshared (XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* XRSubsystem_3_TryStartAsync_m3FF6EDA1E8E2B8526D4EA00AA96DB4EE1850E443_gshared (XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_token, int32_t ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_StaticInit);
	{
		NullCheck((SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242*)__this);
		SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644((SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242*)__this, NULL);
		XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 L_0;
		L_0 = XRResultStatus_get_unqualifiedSuccess_mF88DE6F5E8C28E2DF3A76A2D7B575E9CC01F8093(NULL);
		CHECKED_LOCAL_INIT(AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_StaticInit,(AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* L_1;
		L_1 = AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04(L_0, AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_3__ctor_mF006E6745B514555338C06CA890EC167D118ED8A_gshared (XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44* __this, const RuntimeMethod* method) 
{
	{
		SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9((SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
